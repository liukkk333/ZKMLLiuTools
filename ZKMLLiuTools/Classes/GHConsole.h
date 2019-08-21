//
//  GHConsole.h
//  GHConsole
//
//  Created by 廖光辉 on 02/06/2017.
//  Copyright © 2017 廖光辉. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GHConsole : NSObject

- (void)function:(const char *)function
            line:(NSUInteger)line
          format:(NSString *)format, ... NS_FORMAT_FUNCTION(3,4);
+ (instancetype)sharedConsole;
- (void)startPrintLog;
- (void)stopPringting;

@end
