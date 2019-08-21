//
//  ZKWeekdayFunc.m
//  EasyCarDriver
//
//  Created by zkx on 16/4/7.
//  Copyright © 2016年 张凯翔. All rights reserved.
//

#import "ZKWeekdayFunc.h"
#import "YFTimeManager.h"
@implementation ZKWeekdayFunc

+ (NSString*)weekdayStringFromString:(NSString *)string {
    
    NSArray *weekdays = [NSArray arrayWithObjects: [NSNull null], @"周日", @"周一", @"周二", @"周三", @"周四", @"周五", @"周六", nil];
    
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    
    NSTimeZone *timeZone = [[NSTimeZone alloc] initWithName:@"Asia/Shanghai"];
    
    [calendar setTimeZone: timeZone];
    
    NSCalendarUnit calendarUnit = NSCalendarUnitWeekday;
    
    NSDate *date = [[YFTimeManager shareTimeManager] getDateByString:string];
    
    NSDateComponents *theComponents = [calendar components:calendarUnit fromDate:date];
    
    return [weekdays objectAtIndex:theComponents.weekday];
    
}


@end
