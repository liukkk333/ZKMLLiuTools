//
//  YFApplyDriverInfoDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/18.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface YFApplyDriverInfoDTOModel : JSONModel
@property (nonatomic,copy) NSString *applyDriverInfoId;

@property (nonatomic,copy) NSString *applyId;

@property (nonatomic,strong) NSString *dateCreated;

@property (nonatomic,strong) NSString *lastUpdated;

@property (nonatomic,copy) NSString *driverId;

@property (nonatomic,copy) NSString *driverName;

@property (nonatomic,copy) NSString *driverPhone;


@end
