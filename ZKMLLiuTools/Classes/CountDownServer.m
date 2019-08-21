//
//  CountDownServer.m
//  EasyCar
//
//  Created by 谭昱国 on 15/11/2.
//  Copyright © 2015年 TYG. All rights reserved.
//


#import "CountDownServer.h"

//保存正在执行的倒计时的标识
NSMutableArray *newData;
dispatch_source_t _timer;

@implementation CountDownServer

//开始计时
+ (void)startCountDown:(int)total identifier:(NSString *)identifier{
    NSDate *timerStartDate = [NSDate date];
    __block int secondsCountDown = total;
    
    if (newData == nil) {
        newData = [NSMutableArray new];
    }
    [newData addObject:identifier];
    
    if (_timer != nil) {
        dispatch_source_cancel(_timer);
    }

    // 多线程 全局并发的队列
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    _timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, queue);
    dispatch_source_set_timer(_timer, dispatch_walltime(NULL, 0), 1.0 * NSEC_PER_SEC, 0);
    
    dispatch_source_set_event_handler(_timer, ^{
        NSTimeInterval aTimer = [[NSDate date] timeIntervalSinceDate:timerStartDate];
        if (aTimer < total){
            secondsCountDown = total - aTimer;
        }else{
            secondsCountDown = 0;
        }
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"CountDownUpdate" object:nil userInfo:[NSDictionary dictionaryWithObjectsAndKeys:identifier, @"CountDownIdentifier", [NSNumber numberWithInt:secondsCountDown], @"SecondsCountDown", nil]];
        
        if (secondsCountDown <= 0){
            dispatch_source_cancel(_timer);
            [newData removeObject:identifier];
        }
    });
    dispatch_resume(_timer);
}

+ (BOOL)isCountDowning:(NSString *)identifier{
    return [newData containsObject:identifier];
}

@end
