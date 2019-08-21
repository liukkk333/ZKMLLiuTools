//
//  YFApplyCarInfoDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/18.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface YFApplyCarInfoDTOModel : JSONModel

@property (nonatomic,copy) NSString *applyCarinfoId;

@property (nonatomic,copy) NSString *applyId;

@property (nonatomic,strong) NSString *dateCreated;

@property (nonatomic,strong) NSString *lastUpdated;

@property (nonatomic,copy) NSString *cartypeId;

@property (nonatomic,copy) NSString *carId;

@property (nonatomic,copy) NSString *driverId;

@property (nonatomic,copy) NSString *cartypeName;

@property (nonatomic,copy) NSString *carNo;

@property (nonatomic,copy) NSString *driverName;

@property (nonatomic,copy) NSString *driverPhone;

@property (nonatomic,copy) NSString *cartypeNum;



@end
