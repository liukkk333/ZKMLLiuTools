//
//  YFCalenderManager.h
//  NewRefactorEasyCar
//
//  Created by zkml on 2018/8/28.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YFRemindManager : NSObject
    
+ (instancetype)sharedRemindManager;
    
    /*
     * 向系统提醒事项添加事件
     * startDate:事件开始时间（NSDate）
     * title:标题（string）
     * alarmTime:事件开始前多少秒开始提醒
     * count:闹钟提醒的次数
     * span:闹钟每次提醒的间隔，如果是多次，该间隔最好不小于5
     * handleResult:设置操作用户是否允许访问系统提醒事项结果回调的block
     */
    
-(void)addReminderNotifyWithStartTime:(NSDate *)startDate title:(NSString *)title beforeAlarmTime:(NSInteger)alarmTime continueAlarmCount:(NSInteger)count timeSpan:(NSInteger)span tag:(NSString *)tag handleResultBlock:(void(^)(BOOL result))handleResult errorBlock:(void(^)())errorBlock;
    
-(void)removeOverDateRemindWithTag:(NSString *)tag;
@end
