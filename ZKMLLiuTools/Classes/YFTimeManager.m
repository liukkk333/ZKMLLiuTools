//
//  YFTimeManager.m
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2019/2/1.
//  Copyright © 2019年 张凯翔. All rights reserved.
//

#import "YFTimeManager.h"

@implementation YFTimeManager

+ (YFTimeManager *)shareTimeManager{
    static YFTimeManager *shareTimeManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shareTimeManager = [[self alloc] init];
    });
    return shareTimeManager;
}

- (NSString *)getYYMMDDHHMMSSByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSString *)getYYMMDDHHMMByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd HH:mm";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSString *)getYYMMDDByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSString *)getYYMMByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSString *)getMMDDHHMMByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"MM月dd日 HH:mm";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSString *)getHHMMByDate:(NSDate *)date{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"HH:mm";
    NSString *str = [dateFormatter stringFromDate:date];
    return str;
}

- (NSDate *)getDateByString:(NSString *)dateStr{
    if (!notNull(dateStr) || dateStr.length < 10) {
        return [NSDate date];
    }
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
    if (dateStr.length < 16 && dateStr.length >= 10) {
        dateStr = [NSString stringWithFormat:@"%@ 00:00:00",dateStr];
    }else if (dateStr.length < 19 && dateStr.length >= 16){
        dateStr = [NSString stringWithFormat:@"%@:00",dateStr];
    }else{
        dateStr = [NSString stringWithFormat:@"%@",[dateStr substringToIndex:19]];
    }
    NSDate *date = [dateFormatter dateFromString:dateStr];
    return date;
}

- (NSDate *)getDateYYMMDDHHMMByString:(NSString *)dateStr{
    if (!notNull(dateStr) || dateStr.length < 10) {
        return [NSDate date];
    }
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd HH:mm";
    if (dateStr.length < 16 && dateStr.length >= 10) {
        dateStr = [NSString stringWithFormat:@"%@ 00:00",dateStr];
    }else{
        dateStr = [NSString stringWithFormat:@"%@",[dateStr substringToIndex:16]];
    }
    NSDate *date = [dateFormatter dateFromString:dateStr];
    return date;
}

- (NSDate *)getDateYYMMDDByString:(NSString *)dateStr{
    if (!notNull(dateStr) || dateStr.length < 10) {
        return [NSDate date];
    }else{
        dateStr = [dateStr substringToIndex:10];
    }
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = @"yyyy-MM-dd";
    NSDate *date = [dateFormatter dateFromString:dateStr];
    return date;
}

- (NSString *)getCurrentDateTimeInterval{
    NSDate* date = [NSDate dateWithTimeIntervalSinceNow:0];
    NSTimeInterval a=[date timeIntervalSince1970]*1000; // *1000 是精确到毫秒，不乘就是精确到秒
    NSString *timeString = [NSString stringWithFormat:@"%.0f", a]; //转为字符型
    return timeString;
}

@end
