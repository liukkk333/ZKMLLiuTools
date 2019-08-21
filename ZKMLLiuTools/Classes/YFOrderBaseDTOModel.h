//
//  YFOrderBaseDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/20.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YFCarBaseDTOModel.h"
#import "YFUpOrderAddressDTOModel.h"
#import "YFDownOrderAddressDTOModel.h"
#import "YFViaAddressDTOModel.h"
#import "JSONModel.h"

@interface YFOrderBaseDTOModel : JSONModel

/**
 * 用车人数组
 */
@property (nonatomic,strong) NSArray *orderUserList;
/**
 * 订单id
 */
@property (nonatomic,copy) NSString *orderId;
/**
 *  用车申请单号
 */
@property (nonatomic,copy) NSString *orderSn;

/**
 *  订单申请单位名称
 */
@property (nonatomic,copy) NSString *fromOrganName;

/**
 *  单位ID
 */
@property (nonatomic,copy) NSString *fromOrganId;

/**
 *  申请来源项目
 */
@property (nonatomic,copy) NSString *psign;

/**
 *  当前信息录入人
 */
@property (nonatomic,copy) NSString *userId;

/**
 *  用车申请人
 */
@property (nonatomic,copy) NSString *applyUserId;

/**
 *  申请人真实姓名
 */
@property (nonatomic,copy) NSString *applyUserRealName;

/**
 *  申请人手机号
 */
@property (nonatomic,copy) NSString *applyUserPhone;

/**
 *  申请人所在部门
 */
@property (nonatomic,copy) NSString *applyDeptId;

/**
 * 申请人所在部门名称
 */
@property (nonatomic,copy) NSString *applyDeptName;

/**
 *  用车范围：市内、市外、省内、省外（会关联业务，使用枚举）
 */
@property (nonatomic,copy) NSString *scope;

/**
 *  用车人数
 */
@property (nonatomic,copy) NSString *num;

/**
 *  用车开始时间
 */
@property (nonatomic,copy) NSString *startTime;

/**
 *  用车结束时间
 */
@property (nonatomic,copy) NSString *endTime;
/**
 *  用车人
 */
@property (nonatomic,copy) NSString *userRealNameStr;
/**
 *  用车时长（通过开始时间和结束时间计算出来）
 */
@property (nonatomic,copy) NSString *times;

/**
 *  用车备注
 */
@property (nonatomic,copy) NSString *note;

/**
 *  用车事由
 */
@property (nonatomic,copy) NSString *reason;

/**
 *是否往返
 */
@property (nonatomic,copy) NSString *isComeBack;


/**
 *  用车类型
 */
@property (nonatomic,copy) NSString *type;

/**
 * 选车类型，车牌或者车辆
 */
@property (nonatomic,copy) NSString *selectCarType;

@property (nonatomic,copy) NSString *areaId;

/**
 * 创建时间
 */
@property (nonatomic,copy) NSString *dateCreated;
/**
 * 更新时间
 */
@property (nonatomic,copy) NSString *lastUpdated;

/**
 *航班号
 */
@property (nonatomic,copy) NSString *flightTrainNumber;


//上车地点
@property (nonatomic,strong) YFUpOrderAddressDTOModel *upOrderAddressDTO;
//下车地点
@property (nonatomic,strong) YFDownOrderAddressDTOModel *downOrderAddressDTO;

//经停站
@property (nonatomic,strong) NSArray <YFViaAddressDTOModel> *viaOrderAddressDTOList;

@end
