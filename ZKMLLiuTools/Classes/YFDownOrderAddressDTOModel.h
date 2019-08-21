//
//  YFDownOrderAddressDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/20.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface YFDownOrderAddressDTOModel : JSONModel

@property (nonatomic,copy) NSString *applyAddressId;

@property (nonatomic,copy) NSString *applyId;

@property (nonatomic,copy) NSString *address;

@property (nonatomic,copy) NSString *type;

@property (nonatomic,copy) NSString *lng;

@property (nonatomic,copy) NSString *lat;

@property (nonatomic,copy) NSString *dateCreated;

@property (nonatomic,copy) NSString *lastUpdated;

@property (nonatomic,copy) NSString *sortNo;


@end
