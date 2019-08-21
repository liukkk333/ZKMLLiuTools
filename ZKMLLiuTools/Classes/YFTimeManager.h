//
//  YFTimeManager.h
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2019/2/1.
//  Copyright © 2019年 张凯翔. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YFTimeManager : NSObject

+ (YFTimeManager *)shareTimeManager;
//获取时间字符串：yyyy-MM-dd HH:mm:ss
- (NSString *)getYYMMDDHHMMSSByDate:(NSDate *)date;
//获取时间字符串：yyyy-MM-dd HH:mm
- (NSString *)getYYMMDDHHMMByDate:(NSDate *)date;
//获取时间字符串：yyyy-MM-dd
- (NSString *)getYYMMDDByDate:(NSDate *)date;
//获取时间字符串：yyyy-MM
- (NSString *)getYYMMByDate:(NSDate *)date;
//获取时间字符串：HH-MM
- (NSString *)getHHMMByDate:(NSDate *)date;
//获取时间字符串：MM月dd日 HH:mm
- (NSString *)getMMDDHHMMByDate:(NSDate *)date;
//获取时间：yyyy-MM-dd HH:mm:ss
- (NSDate *)getDateByString:(NSString *)dateStr;
//获取时间：yyyy-MM-dd HH:mm
- (NSDate *)getDateYYMMDDHHMMByString:(NSString *)dateStr;
//获取时间：yyyy-MM-dd
- (NSDate *)getDateYYMMDDByString:(NSString *)dateStr;
//获取当前时间对应的毫秒数
- (NSString *)getCurrentDateTimeInterval;

@end

/*******************************************
 *
 *
 *
 *时间管理类，处理时间格式
 *
 *
 *
 ********************************************/
