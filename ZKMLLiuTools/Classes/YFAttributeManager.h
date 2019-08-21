//
//  YFAttributeManager.h
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2019/8/5.
//  Copyright © 2019年 张凯翔. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YFAttributeManager : NSObject

+ (YFAttributeManager *)shareAttributeManager;
 
//设置范围内的高亮显示指定的颜色、字号
- (NSAttributedString *) setupAttributedStringWithRange:(NSRange)range withColorString:(NSString *)colorString withFont:(CGFloat)fontSize withAllString:(NSString *)allString ;
//选车型时，已选、未选区分
- (NSAttributedString *) setupAttributedStringWithAllString:(NSString *)allString isSelect:(BOOL)isSelect;
//UITextFieldPlaceHolder带有选填字样，颜色做区分
- (NSAttributedString *) setupAttributedStringWithPlaceholderText:(NSString *)string;
@end

/*******************************************
 *
 *
 *
 *富文本工具类
 *
 *
 *
 ********************************************/
