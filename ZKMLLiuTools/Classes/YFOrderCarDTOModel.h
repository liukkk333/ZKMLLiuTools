//
//  YFOrderCarDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/20.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YFCarBaseDTOModel.h"
#import "YFOrderBaseDTOModel.h"
#import "YFDriverTaskInfoVO.h"
#import "JSONModel.h"



@interface YFOrderCarDTOModel : JSONModel

//申请信息
@property (nonatomic,strong)YFDriverTaskInfoVO *applyInfoVO;
/**
 *
 */
@property (nonatomic,strong) NSArray *orderUserList;
/**
 *
 */
@property (nonatomic,copy) NSString *orderCarStatus;
/**
 *
 */
@property (nonatomic,copy) NSString *orderCarId;
/**
 *
 */
@property (nonatomic,copy) NSString *orderId;
/**
 *
 */
@property (nonatomic,copy) NSString *orderSn;
/**
 *
 */
@property (nonatomic,copy) NSString *carNo;
/**
 *
 */
@property (nonatomic,copy) NSString *applyDeptName;
/**
 *
 */
@property (nonatomic,copy) NSString *startPoint;
/**
 *
 */
@property (nonatomic,copy) NSString *endPoint;
/**
 *
 */
@property (nonatomic,copy) NSString *totalMile;
/**
 *
 */
@property (nonatomic,copy) NSString *startTime;
/**
 *
 */
@property (nonatomic,copy) NSString *endTime;
/**
 *
 */
@property (nonatomic,copy) NSString *isDriverConfirm;
/**
 *
 */
@property (nonatomic,copy) NSString *taskFlag;
/**
 *
 */
@property (nonatomic,copy) NSString *note;
/**
 *
 */
@property (nonatomic,copy) NSString *img;

/**
 *
 */
@property (nonatomic,copy) NSString *isComeBack;
 

@end
