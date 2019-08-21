//
//  NotificationNameHeader.pch
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2018/6/21.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#ifndef NotificationNameHeader_pch
#define NotificationNameHeader_pch


//个人出行-当前的详细位置
#define kNotificationPersonTravelCurrentLocation @"kNotificationPersonTravelCurrentLocation"
//个人出行-用车（市内）
#define kNotificationPersonTravelCarApplyInCity @"kNotificationPersonTravelCarApplyInCity"
//个人出行-用车（跨城）
#define kNotificationPersonTravelCarApplyOutCity @"kNotificationPersonTravelCarApplyOutCity"
//个人出行-接送机（接机）
#define kNotificationPersonTravelFlightReceive @"kNotificationPersonTravelFlightReceive"
//个人出行-接送机（送机）
#define kNotificationPersonTravelFlightSend @"kNotificationPersonTravelFlightSend"
//个人出行-接送站（接站）
#define kNotificationPersonTravelTrainReceive @"kNotificationPersonTravelTrainReceive"
//个人出行-接送站（送站）
#define kNotificationPersonTravelTrainSend @"kNotificationPersonTravelTrainSend"


//登录相关的通知
#define kNotificationLoginSuccess  @"NotificationLoginSuccess"
//登录驾驶员相关的通知
#define kNotificationDriverLoginSuccess  @"NotificationDriverLoginSuccess"
//忘记密码倒计时
#define kCountDownForForgetPassword @"CountDownForForgetPassword"
//同一用户切换不同平台的通知
#define kNotificationChangeRoleOrgan @"kNotificationChangeRoleOrgan"
#define kNotificationDriverChangeRoleOrgan @"kNotificationDriverChangeRoleOrgan"
#define kChangeRoleOrgan @"kChangeRoleOrgan"
#define kLoginMessage @"kLoginMessage"
//转订单成功后发送通知订单列表刷新
#define kLeaseDispatchOrderRefresh @"kLeaseDispatchOrderRefresh"
//集中调度成功后发送通知订单列表刷新
#define kGongwuCenterDispatchOrderRefresh @"kgongwuCenterDispatchOrderRefresh"


//交车审核-废单成功
#define kNotificationAbandonOrderSuccess @"kNotificationAbandonOrderSuccess"
//对司机评价成功后
#define kNotificationEvaluateSuccess @"kNotificationEvaluateSuccess"
//对车辆评价成功后
#define kNotificationEvaluateCarSuccess @"kNotificationEvaluateCarSuccess"
//加入单位审核刷新
#define kNotificationCheckJoinDepartmentRefresh @"checkJoinDepartment"
//新版通勤班车刷新
#define kNotificationNewRegularBusRefresh @"NewRegularBusRefresh"

//公务我的订单刷新
#define kNotificationNewGovMyOrderRefresh @"kNotificationNewGovMyOrderRefresh"
//租赁我的订单刷新
#define kNotificationNewRentMyOrderRefresh @"kNotificationNewRentMyOrderRefresh"


//公务出行-选择路线通知
#define kNotificationChooseRouteLine @"notificationChooseRouteLine"


#endif /* NotificationNameHeader_pch */
