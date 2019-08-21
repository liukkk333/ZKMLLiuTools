//
//  YFDriverTaskInfoVO.h
//  NewEasyCar
//
//  Created by 王雪剑 on 17/9/28.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YFViaAddressDTOModel.h"
#import "JSONModel.h"

@interface YFDriverTaskInfoVO : JSONModel

/**
 * 申请用车时间
 */
@property (nonatomic,copy) NSString *startTime;
/**
 * 用车类型
 */
@property (nonatomic,copy) NSString *orderEntry;
/**
 * 申请人姓名
 */
@property (nonatomic,copy) NSString *applyUserRealName;

/**
 * 申请人电话
 */
@property (nonatomic,copy) NSString *applyUserPhone;

/**
 * 申请人单位
 */
@property (nonatomic,copy) NSString *fromOrganName;

/**
 * 用车事由
 */
@property (nonatomic,copy) NSString *reason;

/**
 * 用车人数
 */
@property (nonatomic,copy) NSString *num;

/**
 * 用车时长
 */
@property (nonatomic,copy) NSString *times;

/**
 * 上车地点
 */
@property (nonatomic,copy) NSString *upAddress;
/**
 * 下车地点
 */
@property (nonatomic,copy) NSString *downAddress;

//经停站
@property (nonatomic,strong) NSArray <YFViaAddressDTOModel> *viaAddress;

@end

//驾驶员任务-applyInfoVO模型
