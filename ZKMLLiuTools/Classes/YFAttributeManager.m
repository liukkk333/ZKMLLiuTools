//
//  YFAttributeManager.m
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2019/8/5.
//  Copyright © 2019年 张凯翔. All rights reserved.
//

#import "YFAttributeManager.h"
#import "CommonPrefixHeader.h"
@implementation YFAttributeManager

+ (YFAttributeManager *)shareAttributeManager{
    static YFAttributeManager *shareAttributeManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shareAttributeManager = [[self alloc] init];
    });
    return shareAttributeManager;
}

//设置范围内的高亮显示指定的颜色、字号
- (NSAttributedString *) setupAttributedStringWithRange:(NSRange)range withColorString:(NSString *)colorString withFont:(CGFloat)fontSize withAllString:(NSString *)allString {
    NSMutableAttributedString *string = [[NSMutableAttributedString alloc]initWithString:allString];
    if (fontSize != 0) {
        [string addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:fontSize] range:range];
    }
    
    if (notNull(colorString)) {
        [string addAttribute:NSForegroundColorAttributeName value:colorWithRGBString(colorString) range:range];
    }
    return string;
}

//选车型时，已选、未选区分
- (NSAttributedString *) setupAttributedStringWithAllString:(NSString *)allString isSelect:(BOOL)isSelect{
    NSMutableAttributedString *string = [[NSMutableAttributedString alloc]initWithString:allString];
    [string addAttribute:NSFontAttributeName value:[UIFont boldSystemFontOfSize:kFont(36)] range:NSMakeRange(0, 3)];
    if (isSelect) {
        [string addAttribute:NSForegroundColorAttributeName value:colorWithRGBString(kColorFF6040) range:NSMakeRange(3, string.length-3)];
    }
    return string;
}

//UITextFieldPlaceHolder带有选填字样，颜色做区分
- (NSAttributedString *) setupAttributedStringWithPlaceholderText:(NSString *)string {
    NSRange range = [string rangeOfString:@"("];
    NSMutableAttributedString *str = [[NSMutableAttributedString alloc] initWithString:string];
    
    [str addAttribute:NSForegroundColorAttributeName value:colorWithRGBString(kColor666666) range:NSMakeRange(0,range.location)];
    [str addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:kFont(42)] range:NSMakeRange(0,range.location)];
    
    [str addAttribute:NSForegroundColorAttributeName value:colorWithRGBString(kColor999999) range:NSMakeRange(range.location,string.length-range.location)];
    [str addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:kFont(30)] range:NSMakeRange(range.location,string.length-range.location)];
    return str;
}

@end
