//
//  YFviaAddressDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/10/21.
//  Copyright © 2017年 zkx. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "JSONModel.h"

@protocol YFViaAddressDTOModel
@end

@interface YFViaAddressDTOModel : JSONModel

@property (nonatomic,copy) NSString *address;

@property (nonatomic,copy) NSString *lng;

@property (nonatomic,copy) NSString *lat;


@end
