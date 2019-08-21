//
//  CountDownServer.h
//  EasyCar
//
//  Created by 谭昱国 on 15/11/2.
//  Copyright © 2015年 TYG. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface CountDownServer : NSObject

//开始倒计时
//total:开始的秒数
//identifier:标识不同界面中的倒计时
+ (void)startCountDown:(int)total identifier:(NSString *)identifier;

//标识为identifier的倒计时是否正在进行
+ (BOOL)isCountDowning:(NSString *)identifier;


@end
//倒计时服务类
