//
//  YFAudioTool.h
//  铃声Demo
//
//  Created by 王雪剑 on 2019/4/15.
//  Copyright © 2019年 zkml－wxj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

 @interface YFAudioTool : NSObject
 /**
  *播放音乐文件
  */
+(BOOL)playMusic:(NSString *)filename;
 /**
  *暂停播放
  */
+(void)pauseMusic:(NSString *)filename;
 /**
  *播放音乐文件
  */
+(void)stopMusic:(NSString *)filename;

 /**
  *播放音效文件
  */
+(void)playSound:(NSString *)filename;
 /**
  *销毁音效
  */
+(void)disposeSound:(NSString *)filename;

@end
