//
//  YFCalenderManager.m
//  NewRefactorEasyCar
//
//  Created by zkml on 2018/8/28.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#import "YFRemindManager.h"
#import <EventKit/EventKit.h>

@implementation YFRemindManager
static YFRemindManager *remindManager;
    
    
+ (instancetype)sharedRemindManager{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        remindManager = [[YFRemindManager alloc] init];
    });
    return remindManager;
}
    
+(instancetype)allocWithZone:(struct _NSZone *)zone{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        remindManager = [super allocWithZone:zone];
    });
    return remindManager;
}
    
    //添加事件
-(void)addReminderNotifyWithStartTime:(NSDate *)startDate title:(NSString *)title beforeAlarmTime:(NSInteger)alarmTime continueAlarmCount:(NSInteger)count timeSpan:(NSInteger)span tag:(NSString *)tag handleResultBlock:(void(^)(BOOL result))handleResult errorBlock:(void(^)())errorBlock{
    //先移除旧的提醒
    [self removeOverDateRemindWithTag:tag];
    EKEventStore *eventDB = [[EKEventStore alloc] init];
    //申请提醒权限
    [eventDB requestAccessToEntityType:EKEntityTypeReminder completion:^(BOOL granted, NSError * _Nullable error) {
        if (error) {
            dispatch_async(dispatch_get_main_queue(), ^{
                errorBlock();
            });
        }
        if (granted) {
            //创建一个提醒功能
            EKReminder *reminder = [EKReminder reminderWithEventStore:eventDB];
            //标题
            reminder.title = [NSString stringWithFormat:@"%@(订单号:%@)",title,tag];
            NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
            NSString *appCurName = [infoDictionary objectForKey:@"CFBundleDisplayName"];
            reminder.notes=[NSString stringWithFormat:@"来自:%@",appCurName];
            //添加日历
            [reminder setCalendar:[eventDB defaultCalendarForNewReminders]];
            NSCalendar *cal = [NSCalendar currentCalendar];
            [cal setTimeZone:[NSTimeZone systemTimeZone]];
            NSInteger flags = NSCalendarUnitYear | NSCalendarUnitMonth |
            NSCalendarUnitDay |NSCalendarUnitHour | NSCalendarUnitMinute |
            NSCalendarUnitSecond;
            NSDateComponents* startDateComp = [cal components:flags fromDate:startDate];
            startDateComp.timeZone = [NSTimeZone systemTimeZone];
            reminder.startDateComponents = startDateComp; //开始时间
            reminder.dueDateComponents = startDateComp; //到期时间
            reminder.priority = 1; //优先级
            //添加多个闹钟
            for (NSInteger i=0; i<count; i++) {
                NSTimeInterval offset=(NSTimeInterval)(-(alarmTime-i*span));
                EKAlarm *alarm = [EKAlarm alarmWithAbsoluteDate:[NSDate dateWithTimeInterval:offset sinceDate:startDate]];
                [reminder addAlarm:alarm];
            }
            NSError *err;
            [eventDB saveReminder:reminder commit:YES error:&err];
            dispatch_async(dispatch_get_main_queue(), ^{
                handleResult(YES);
            });
            if (err) {
                dispatch_async(dispatch_get_main_queue(), ^{
                    errorBlock();
                });
            }
        }else{
            dispatch_async(dispatch_get_main_queue(), ^{
                handleResult(NO);
            });
        }
    }];
}
    
    //删除事件
-(void)removeOverDateRemindWithTag:(NSString *)tag{
    EKEventStore *eventDB = [[EKEventStore alloc] init];
    NSArray *tempArr=[eventDB calendarsForEntityType:EKEntityTypeReminder];
    NSMutableArray *tempMutArr=[NSMutableArray array];
    for (NSInteger i=0; i<tempArr.count; i++) {
        EKCalendar *tempCalendar=tempArr[i];
        EKCalendarType type=tempCalendar.type;
        if (type==EKCalendarTypeLocal || EKCalendarTypeCalDAV) {
            [tempMutArr addObject:tempCalendar];
        }
    }
    NSPredicate *pre = [eventDB predicateForRemindersInCalendars:tempMutArr];
    [eventDB fetchRemindersMatchingPredicate:pre completion:^(NSArray<EKReminder *> * _Nullable reminders) {
        [reminders enumerateObjectsUsingBlock:^(EKReminder * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            EKReminder*reminder =(EKReminder*)obj;
            NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
            NSString *appCurName = [infoDictionary objectForKey:@"CFBundleDisplayName"];
            NSString * note=[NSString stringWithFormat:@"来自:%@",appCurName];
            NSDate *oldDate=reminder.startDateComponents.date;
            NSTimeInterval interval = [oldDate timeIntervalSinceNow]; //interval小于0表示过期
            if ((reminder.priority==1 && interval<0 && [reminder.notes isEqualToString:note]) || [reminder.title containsString:tag]) {
                NSError*error =nil;
                [eventDB removeReminder:reminder commit:YES error:&error];
            }
        }];
    }];
}
    
@end
