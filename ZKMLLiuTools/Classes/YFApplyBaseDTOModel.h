//
//  YFApplyBaseDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/18.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YFOrderAddressDTOModel.h"
#import "YFApplyUserDTOModel.h"
#import "JSONModel.h"


@interface YFApplyBaseDTOModel : JSONModel

//申请订单id
@property (nonatomic,copy) NSString *applyId;

//订单生成时间
@property (nonatomic,copy) NSString *dateCreated;

//订单更新时间
@property (nonatomic,copy) NSString *lastUpdated;

//项目编号
@property (nonatomic,copy) NSString *expenseProjectNo;

//订单号
@property (nonatomic,copy) NSString *applySn;

//信息录入人
@property (nonatomic,copy) NSString *userId;

//当前信息录入人姓名
@property (nonatomic,copy) NSString *userRealName;

//申请人id
@property (nonatomic,copy) NSString *applyUserId;

//申请人手机号
@property (nonatomic,copy) NSString *applyUserPhone;

//申请人姓名
@property (nonatomic,copy) NSString *applyUserRealName;

//申请人工号
@property (nonatomic,copy) NSString *applyUserJobNo;

//申请人职务
@property (nonatomic,copy) NSString *applyUserDuty;

//单位organid
@property (nonatomic,copy) NSString *organId;

//服务单位的id
@property (nonatomic,copy) NSString *serviceOrganId;

//服务单位名称
@property (nonatomic,copy) NSString *serviceOrganName;

//申请人所在的部门id
@property (nonatomic,copy) NSString *deptId;

//申请人所在部门的名称
@property (nonatomic,copy) NSString *deptName;

//用车范围
@property (nonatomic,copy) NSString *scope;

//用车人数
@property (nonatomic,copy) NSString *num;

//签批人
@property (nonatomic,copy) NSString *checkUserRealName;

//用车开始时间
@property (nonatomic,copy) NSString *startTime;

//用车结束时间
@property (nonatomic,copy) NSString *endTime;

//用车时长（通过开始时间和结束时间计算出来）
@property (nonatomic,copy) NSString *times;//老版本采用
@property (nonatomic,copy) NSString *day;//新版本
@property (nonatomic,copy) NSString *hoursInDouble;//新版本

//用车备注
@property (nonatomic,copy) NSString *note;

//用车事由
@property (nonatomic,copy) NSString *reason;

//航班号
@property (nonatomic,copy) NSString *flightTrainNumber;

//用车类型
@property (nonatomic,copy) NSString *type;

//地址列表
@property (nonatomic,strong) NSArray<YFOrderAddressDTOModel> *applyAddressList;

//用车人列表
@property (nonatomic,strong) NSArray<YFApplyUserDTOModel> *applyUserList;


//地区id
@property (nonatomic,copy) NSString *areaId;

//订单类型
@property (nonatomic,copy) NSString *orderEntry;


@end
