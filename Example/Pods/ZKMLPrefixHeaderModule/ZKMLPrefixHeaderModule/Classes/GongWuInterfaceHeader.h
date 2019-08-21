//
//  GongWuInterfaceHeader.pch
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2018/6/21.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#ifndef GongWuInterfaceHeader_pch
#define GongWuInterfaceHeader_pch


//用户平台新版通勤班车-所有班车列表【New】
#define GONGWU_Get_All_RegularBus_List_URL   @"zkmlgongwu/mvc/app/bus/busLineList"
//用户平台新版通勤班车-获取已添加的班车列表【New】
#define GONGWU_Get_Favorite_RegularBus_List_URL   @"zkmlgongwu/mvc/app/bus/queryFavBusLine"
//用户平台新版通勤班车-执行添加班车操作【New】
#define GONGWU_Add_RegularBus_List_URL   @"zkmlgongwu/mvc/app/bus/addFavBusLine"
//用户平台新版通勤班车-执行删除班车操作【New】
#define GONGWU_Delete_RegularBus_List_URL   @"zkmlgongwu/mvc/app/bus/deleteFavBusLine"
//用户平台新版通勤班车-获取班线下所有班次信息【New】
#define GONGWU_Get_RegularBus_Shift_List_URL   @"zkmlgongwu/mvc/app/bus/queryBusLineShift"
//用户平台新版通勤班车-获取班次下全部信息【New】
#define GONGWU_Get_RegularBus_ShiftDetail_List_URL   @"zkmlgongwu/mvc/app/bus/queryBusLineShiftDetail"
//用户平台新版通勤班车-提交定制站点【New】
#define GONGWU_Submit_RegularBus_CustomStation_URL   @"zkmlgongwu/mvc/app/bus/addStationCustom"
//用户平台新版通勤班车-定制站点开通后已读【New】
#define GONGWU_Submit_RegularBus_CustomStation_Read_URL   @"zkmlgongwu/mvc/app/bus/updateStationCustomIsRead"
//用户平台新版通勤班车-收藏站点【New】
#define GONGWU_Submit_RegularBus_FavoriteStation_URL   @"zkmlgongwu/mvc/app/bus/addFavStation"
//用户平台新版通勤班车-取消收藏站点【New】
#define GONGWU_Cancel_RegularBus_FavoriteStation_URL   @"zkmlgongwu/mvc/app/bus/deleteFavStation"
//用户平台新版通勤班车-签到【New】
#define GONGWU_DoSign_URL   @"zkmlgongwu/mvc/app/bus/doSingIn"
//用户平台新版通勤班车-判断今天是否签到【New】
#define GONGWU_CheckIsSignToday_URL   @"zkmlgongwu/mvc/app/bus/checkTodaySignIn"
//用户平台新版通勤班车-查询签到历史数据【New】
#define GONGWU_CheckSignHistory_URL   @"zkmlgongwu/mvc/app/bus/querySignInRecord"


//用户平台加入单位审核-获取审核列表【New】
#define GONGWU_Get_JoinDepartment_Check_List_URL   @"zkmlgongwu/mvc/app/userCheck/list"
//用户平台加入单位审核-获取审核详情【New】
#define GONGWU_Get_JoinDepartment_Check_Detail_URL   @"zkmlgongwu/mvc/app/userCheck/userCheckDetail"
//用户平台加入单位审核-审核操作【New】
#define GONGWU_Submit_JoinDepartment_Check_URL   @"zkmlgongwu/mvc/app/userCheck/doCheck"


//租赁专车申请-获取是否可以配置专车【New】
#define GONGWU_Get_Rent_Special_ApplyCar_SetMessage_URL           @"zkmlgongwu/mvc/app/apply/obtSpecialCar"
//租赁专车申请-获取专车申请用车信息【New】
#define GONGWU_Get_Rent_Special_ApplyCar_Message_URL           @"zkmlgongwu/mvc/app/apply/addOuterProfessionCar"
//租赁专车申请-提交专车申请【New】
#define GONGWU_Confirm_Rent_Special_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doOuterProfessionCarSendCar"
//租赁专车申请-获取专车对应的司机信息【New】
#define GONGWU_Get_Rent_Special_ApplyDriver_Message_URL           @"zkmlgongwu/mvc/app/apply/getOuterSpecialDriverList"


//自有专车申请-获取专车申请用车信息【New】
#define GONGWU_Get_Special_ApplyCar_Message_URL           @"zkmlgongwu/mvc/app/apply/addInnerProfessionCar"
//自有专车申请-获取专车对应的司机信息【New】
#define GONGWU_Get_Special_ApplyDriver_Message_URL           @"zkmlgongwu/mvc/app/apply/getProfessionDriverList"
//自有专车申请-提交专车申请【New】
#define GONGWU_Confirm_Special_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doProfessionCarSendCar"

//用车申请-获取用车时长【New】
#define GONGWU_Get_ApplyCarTimeLong_Message_URL           @"zkmlgongwu/mvc/app/apply/obtUseCarDuration"

//用车申请-获取申请用车信息【New】
#define GONGWU_Get_ApplyCar_Message_URL           @"zkmlgongwu/mvc/app/apply/addApply"
//企业出行-获取申请用车信息【New】
#define GONGWU_Get_ApplyCarV2_Message_URL           @"zkmlgongwu/mvc/app/apply/addApplyV2"
//用车申请-提交修改订单【New】
#define GONGWU_Confirm_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateApply"
//用车申请-提交申请订单【New】
#define GONGWU_Confirm_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddApply"
//获取用车人列表【New】
#define GONGWU_Get_UserCarPerson_List_URL           @"zkmlgongwu/mvc/app/apply/getMyOwnPeople"
//删除用车人【New】
#define GONGWU_Delete_UserCarPerson_List_URL           @"zkmlgongwu/mvc/app/apply/deleteOwnPeopleById"
//新增用车人【New】
#define GONGWU_Add_UserCarPerson_List_URL           @"zkmlgongwu/mvc/app/apply/doAddMyOwnPeople"
//批量新增用车人【New】
#define GONGWU_Add_Many_UserCarPerson_List_URL           @"zkmlgongwu/mvc/app/apply/doAddOwnMultiPeople"

//获取自有司机【New】
#define GONGWU_Get_OrganDriver_List_URL           @"zkmlgongwu/mvc/app/apply/getOrganDriver"
//获取自有车辆【New】
#define GONGWU_Get_OrganCar_List_URL           @"zkmlgongwu/mvc/app/apply/getOrganCar"
//获取部门单位【New】
#define GONGWU_Get_Dept_List_URL           @"zkmlgongwu/mvc/app/dept/getOrganDeptTree"



//获取部门单位-即时通讯带有人数【New】
#define GONGWU_Get_DeptWithCount_List_URL           @"zkmlgongwu/mvc/app/dept/getOrganDeptTreeWithUserCount"


//用车申请-绿色出行提交申请订单【New】
#define GONGWU_Confirm_GreenApplyCar_URL           @"zkmlgongwu/mvc/app/greenLogisticApp/doAddApply"
//用车申请-企业出行预约申请订单【New】
#define GONGWU_Confirm_EnterpriseApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddApplyV2"
//用车申请-提交接送机订单【New】
#define GONGWU_Confirm_PickUpAirPort_URL           @"zkmlgongwu/mvc/app/apply/doAddApplyPickUpAirport"

//用车申请-企业出行向租赁公司预约申请订单【New】
#define GONGWU_Confirm_EnterpriseApplyCarToB_URL           @"zkmlgongwu/mvc/app/apply/doAddOutApplyV2Tob"
//用车申请-企业出行向租赁公司提交接送机订单【New】
#define GONGWU_Confirm_PickUpAirPortToB_URL           @"zkmlgongwu/mvc/app/apply/doAddOutApplyPickUpAirportTob"

//用车申请-用车事由查找【New】
#define GONGWU_Find_Reason_URL           @"zkmlgongwu/mvc/app/apply/findOwnReasonListByUserId"
//用车申请-用车事由删除【New】
#define GONGWU_Delete_Reason_URL           @"zkmlgongwu/mvc/app/apply/deleteOwnReason"
//用车申请-用车事由更改【New】
#define GONGWU_Update_Reason_URL           @"zkmlgongwu/mvc/app/apply/updateOwnReason"
//用车申请-用车事由添加【New】
#define GONGWU_Add_Reason_URL           @"zkmlgongwu/mvc/app/apply/addOwnReason"


//获取部门单位-非树型部门【New】
#define GONGWU_Get_DeptWithoutTree_List_URL           @"zkmlgongwu/mvc/app/dept/getDeptListByOrganId"
//添加申请人【New】
#define GONGWU_Add_Dept_ApplyPerson_URL           @"zkmlgongwu/mvc/app/user/doAddBase"

//用车申请-用车备注查找【New】
#define GONGWU_Get_UseCarNote_Message_URL           @"zkmlgongwu/mvc/app/apply/findOwnNoteListByUserId"
//用车申请-用车备注删除【New】
#define GONGWU_Delete_UseCarNote_Message_URL           @"zkmlgongwu/mvc/app/apply/deleteOwnNote"
//用车申请-用车备注添加【New】
#define GONGWU_Add_UseCarNote_Message_URL           @"zkmlgongwu/mvc/app/apply/addOwnNote"
//用车申请-用车备注修改【New】
#define GONGWU_Update_UseCarNote_Message_URL           @"zkmlgongwu/mvc/app/apply/updateOwnNote"

//用车申请-用车地址获取【New】
#define GONGWU_Get_UseCarAddress_Message_URL           @"zkmlgongwu/mvc/app/apply/findOwnAddressListByUserId"
//用车申请-用车地址删除【New】
#define GONGWU_Delete_UseCarAddress_Message_URL           @"zkmlgongwu/mvc/app/apply/deleteOwnAddress"
//用车申请-用车地址添加【New】
#define GONGWU_Add_UseCarAddress_Message_URL           @"zkmlgongwu/mvc/app/apply/addOwnAddress"
//用车申请-常用上下车地点【New】
#define GONGWU_Get_SuggestAddress_URL @"zkmlgongwu/mvc/app/apply/findAddressByApplyUserIdAndCityAndType"



//获取部门单位中的人员【New】
#define GONGWU_Get_Dept_Person_List_URL           @"zkmlgongwu/mvc/app/user/getDeptUserByDeptId"
//对单位中的人员模糊搜索【New】
#define GONGWU_Search_Dept_Person_URL           @"zkmlgongwu/mvc/app/user/getDeptUserByDeptIdAndRealName"
//我的订单列表-未审核取消订单【New】
#define GONGWU_CancleOrder_From_MyOrder_URL           @"zkmlgongwu/mvc/app/apply/doCancelApply"
//我的订单列表-未派车取消订单【New】
#define GONGWU_CancleOrder_From_MyOrder_BeforeDispatch_URL           @"zkmlgongwu/mvc/app/apply/doCancelCheckedAndNoSendCarApply"
//我的订单列表-修改订单【New】
#define GONGWU_UpdateOrder_From_MyOrder_URL           @"zkmlgongwu/mvc/app/apply/updateApply"


//我的订单列表-获取列表内容【New
#define GONGWU_Get_MyOrderList_URL           @"zkmlgongwu/mvc/app/apply/obtMyApplyList"
//我的订单列表-获取申请单列表详情【New】
#define GONGWU_GetMyOrder_ApplyOrderDetail_URL           @"zkmlgongwu/mvc/app/apply/getApplyDetail"
//我的订单列表-获取订单列表详情【New】
#define GONGWU_GetMyOrder_OrderDetail_URL           @"zkmlgongwu/mvc/app/order/getOrderDetail"
//我的订单列表-获取车辆定位信息【New】
#define GONGWU_GetMyOrder_CarLocation_URL           @"zkmlgongwu/mvc/app/order/getLocationByCarNo"
//我的订单列表-获取车辆轨迹信息【New】
#define GONGWU_GetMyOrder_CarPath_URL           @"zkmlgongwu/mvc/app/order/getTrackByCarNo"
//我的订单列表-判断外单已拒绝的订单能否被修改【New】
#define GONGWU_GetMyOrder_OutsideRejectIsCanUpdate_URL           @"zkmlgongwu/mvc/app/apply/isCanUpdateForRefuseApplyFromRentOrService"
//我的订单-用车人确认费用【New】
#define GONGWU_Get_doConfirmApply_URL   @"zkmlgongwu/mvc/app/order/doConfirmFromApplyUser"

//我的订单-拨打调度员电话【New】
#define GONGWU_Get_dispatch_Phone_URL   @"zkmlgongwu/mvc/app/order/getDispatcherConfig"

//用车审核-获取审核列表【New】
#define GONGWU_Get_ApplyOrderCheck_List_URL           @"zkmlgongwu/mvc/app/apply/getMyCheckList"
//用车审核-订单退回【New】
#define GONGWU_ApplyOrderCheck_Return_URL           @"zkmlgongwu/mvc/app/apply/doReturn"
//用车审核-确认审核通过【New】
#define GONGWU_ApplyOrderCheck_Confirm_URL           @"zkmlgongwu/mvc/app/apply/doCheck"
//用车审核-获取是否有外单位审核权限【New】
#define GONGWU_Get_ApplyOrderCheck_Permission_URL           @"zkmlgongwu/mvc/app/apply/getOutOrganCheckAuth"
//用车审核-获取外单位审核列表【New】
#define GONGWU_Get_OutOrganOrderCheck_List_URL           @"zkmlgongwu/mvc/app/apply/getMyOuterOrganCheckList"



//交车审核-获取审核列表【New】
#define GONGWU_Get_BackCarOrderCheck_List_URL           @"zkmlgongwu/mvc/app/restitute/getCheckPageList"
//交车审核-撤单【New】
#define GONGWU_Cancle_BackCarOrderCheck_URL           @"zkmlgongwu/mvc/app/order/doCancelDispatch"
//交车审核-确认交车【New】
#define GONGWU_Confirm_BackCarOrderCheck_URL           @"zkmlgongwu/mvc/app/restitute/doUpdateReview"
//交车审核-获取单个车辆详细交车信息【New】
#define GONGWU_Get_BackCarOrderCheck_CarDetail_URL           @"zkmlgongwu/mvc/app/restitute/getOrderCarDetails"
//交车审核-获取交车订单下车辆数据【New】
#define GONGWU_Get_BackCarOrderCheck_CarList_URL           @"zkmlgongwu/mvc/app/restitute/getOrderCarList"
//交车审核-废单【New】
#define GONGWU_Abandon_BackCarOrderCheck_URL           @"zkmlgongwu/mvc/app/restitute/doWaste"
//确认交车的接口
#define GONGWU_JIAOCHESUCCESS_URL @"zkmlgongwu/memberApply/ajaxsaveJiaochesucc"


//调度派车-获取列表【New】
#define GONGWU_Get_DispatchOrderCheck_List_URL           @"zkmlgongwu/mvc/app/order/getDispatchOrderList"
//调度派车-拒绝派车【New】
#define GONGWU_Reject_DispatchOrderCheck_URL           @"zkmlgongwu/mvc/app/order/doRefuseDispatch"
//调度派车-撤销订单【New】
#define GONGWU_Cancle_DispatchOrderCheck_URL           @"zkmlgongwu/mvc/app/order/doCancelDispatch"
//调度派车-确认订单【New】
#define GONGWU_Confirm_DispatchOrderCheck_URL           @"zkmlgongwu/mvc/app/order/doConfirmOrder"
//调度派车-获取不同的收费车型【New】
#define GONGWU_Get_DispatchOrderCheck_CarTypeList_URL           @"zkmlgongwu/mvc/app/order/sendCar"
//调度派车-获取车牌号以及驾驶员【New】
#define GONGWU_Get_DispatchOrderCheck_SendCarList_URL           @"zkmlgongwu/mvc/app/order/getCarListToSendCar"
//调度派车-根据车型获取车牌号【New】
#define GONGWU_Get_DispatchOrderCheck_CarNoList_URL           @"zkmlgongwu/mvc/app/order/getCarNoList"
//调度派车-根据车牌号获取绑定的司机【New】
#define GONGWU_Get_DispatchOrder_GetDriverList_URL           @"zkmlgongwu/mvc/app/order/getDriverList"
//调度派车-根据车型以及订单发出部门获取车牌号【New】
#define GONGWU_Get_NewDispatch_CarNoList_URL           @"zkmlgongwu/mvc/app/order/v2/getCarNoList"
//调度派车-提交派车信息-修改模式【New】
#define GONGWU_Update_DispatchOrderCheck_Message_URL           @"zkmlgongwu/mvc/app/order/doUpdateSendCar"
//调度派车-提交派车信息-正常模式【New】
#define GONGWU_Confirm_DispatchOrderCheck_Message_URL           @"zkmlgongwu/mvc/app/order/doSendCar"
//调度派车-获取需要修改的派车信息【New】
#define GONGWU_Get_DispatchOrderCheck_UpdateMessage_URL           @"zkmlgongwu/mvc/app/order/updateSendCar"
//调度派车-调度员协助驾驶员操作接口
#define  GONGWU_DISPATCHASSITORDEREXECUTE_URL   @"zkmlgongwu/mvc/app/order/doAssistExecution"//


//任务数量-获取驾驶任务、用车审核数、调度管理数【New】
#define GONGWU_Get_TaskCount_Message_URL           @"zkmlgongwu/mvc/app/order/getHomeStatistics"
//司机任务-获取当前任务列表【New】
#define GONGWU_Get_Current_DriverTask_URL           @"zkmlgongwu/mvc/app/order/getDriverTaskList"
//司机任务-确认驾驶任务【New】
#define GONGWU_Confirm_Current_DriverTask_URL           @"zkmlgongwu/mvc/app/order/doDriverConfirmTask"
//司机任务-开始任务【New】
#define GONGWU_Start_Current_DriverTask_URL           @"zkmlgongwu/mvc/app/order/doOrderCarStart"
//司机任务-结束任务【New】
#define GONGWU_End_Current_DriverTask_URL           @"zkmlgongwu/mvc/app/order/doOrderCarEnd"
//司机任务-司机档案【New】
#define GONGWU_Get_DriverStatus_FileMessage_URL           @"zkmlgongwu/mvc/app/driver/getDriverArchives"



//获取节假日报备申请信息
#define GONGWU_Get_Holiday_ApplyMessage_URL           @"zkmlgongwu/mvc/app/holidaysCarReportApp/addHolidaysCarReport"
//提交节假日报备申请
#define GONGWU_Submit_Holiday_ApplyMessage_URL           @"zkmlgongwu/mvc/app/holidaysCarReportApp/doAddHolidaysCarReport"
//获取节假日报备订单列表
#define GONGWU_Get_HolidayApply_OrderList_URL           @"zkmlgongwu/mvc/app/holidaysCarReportApp/list"
//获取节假日报备订单详情
#define GONGWU_Get_HolidayApply_OrderDetail_URL           @"zkmlgongwu/mvc/app/holidaysCarReportApp/detailHoliday"


//加入单位-获取部门数据【New】
#define GONGWU_Get_DepartmentData_URL           @"zkmlgongwu/mvc/app/dept/getDeptTreeByOrganId"
//加入单位-开始加入单位【New】
#define GONGWU_Join_NEW_OrganDepartment_URL           @"zkmlgongwu/mvc/app/user/joinOrganWithCheck"


//获取班线列表 【New】
#define GONGWU_BUS_GETClassLine_URL @"zkmlgongwu/mvc/app/classLine/getClassLineList"
//获取车辆详情列表 【New】
#define GONGWU_BUS_GETClassLineDetail_URL @"zkmlgongwu/mvc/app/classLine/getClassLineDetail"
//添加班线【New】
#define GONGWU_BUS_Add_ClassLine_URL @"zkmlgongwu/mvc/app/classLine/addFavorite"
//删除班线【New】
#define GONGWU_BUS_Delete_ClassLine_URL @"zkmlgongwu/mvc/app/classLine/deleteFavorite"
//获取收藏的班线【New】
#define GONGWU_BUS_Get_FavoriteClassLine_URL @"zkmlgongwu/mvc/app/classLine/getMyClassLineList"
//扫码确认上车【New】
#define GONGWU_BUS_Confirm_UpCarClassLine_URL @"zkmlgongwu/mvc/app/classLine/getConfirmOnBoard"
//实时界面中班车的固定路线【New】
#define GONGWU_Real_Bus_ClassLine_URL @"zkmlgongwu/mvc/app/classLine/getTrajectory"
//班车到站的详细信息【New】
#define GONGWU_Detail_Station_URL @"zkmlgongwu/mvc/app/classLine/getArriveLog"


//申请租赁-获取品牌型号【New】
#define GONGWU_Get_Lease_CarBrand_URL           @"zkmlgongwu/mvc/app/serviceOrgan/obtCarTypeList"
//申请租赁-获取车型【New】
#define GONGWU_Get_Lease_CarType_URL           @"zkmlgongwu/mvc/app/serviceOrgan/obtRentCarTypeList"
//申请租赁-内部用车获取车型【New】
#define GONGWU_Get_OWN_CarType_URL           @"zkmlgongwu/mvc/app/apply/obtLogisticsCarTypeList"
//申请租赁-获取司机【New】
#define GONGWU_Get_Lease_Driver_URL           @"zkmlgongwu/mvc/app/serviceOrgan/obtDriverList"
//申请租赁-获取租赁公司列表【New】
#define GONGWU_Get_Lease_Company_URL           @"zkmlgongwu/mvc/app/serviceOrgan/obtOrganList"
//申请租赁-提交申请【New】
#define GONGWU_Confirm_Lease_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddOuterApply"
//申请租赁-提交修改订单【New】
#define GONGWU_Confirm_Lease_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateOuterApply"
//申请租赁-提交申请-费用预估版【New】
#define GONGWU_Confirm_Lease_Cost_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddOuterApplyV2"
//申请租赁-提交修改订单-费用预估版【New】
#define GONGWU_Confirm_Lease_Cost_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateOuterApplyV2"
//申请租赁-在确认弹出框中计算预估费用【New】
#define GONGWU_Get_Lease_ApplyCar_Cost_URL @"zkmlgongwu/mvc/app/apply/estimateProfessionCarFeeV2"


//申请租赁-获取品牌型号下车辆图片【New】
#define GONGWU_Get_CARTYPE_IMG_URL          @"zkmlgongwu/mvc/app/serviceOrgan/getCarTypeMoreImg"
//申请综合保障-获取综合保障公司列表【New】
#define GONGWU_Get_Ensure_Company_URL           @"zkmlgongwu/mvc/app/serviceOrgan/getEnsureOrgan"
//申请综合保障-提交申请【New】
#define GONGWU_Confirm_Ensure_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddEnsureApply"
//申请综合保障-提交综合保障修改订单【New】
#define GONGWU_Confirm_Ensure_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateEnsureApply"


//申请服务中心-获取服务中心列表【New】
#define GONGWU_Get_Service_Company_URL           @"zkmlgongwu/mvc/app/serviceOrgan/obtServiceList"
//申请服务中心-提交申请【New】
#define GONGWU_Confirm_Service_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doAddServiceApply"
//服务中心用车申请-获取申请用车信息【New】
#define GONGWU_Get_Service_ApplyCar_Message_URL           @"zkmlgongwu/mvc/app/apply/addServiceApply"
//我的订单列表-服务中心修改订单【New】
#define GONGWU_UpdateServiceOrder_From_MyOrder_URL           @"zkmlgongwu/mvc/app/apply/updateServiceApply"
//申请服务中心-提交服务中心修改订单【New】
#define GONGWU_Confirm_Service_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateServiceApply"
//申请服务中心-提交服务中心订单费用预估版【New】
#define GONGWU_Confirm_Service_ApplyCar_WithCost_URL           @"zkmlgongwu/mvc/app/apply/doAddServiceApplyV2"
//申请服务中心-提交服务中心修改订单费用预估版【New】
#define GONGWU_Confirm_Service_ApplyCar_WithCost_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateServiceApplyV2"
//申请服务中心-提交保障车辆申请【New】
#define GONGWU_Confirm_Service_Special_ApplyCar_URL           @"zkmlgongwu/mvc/app/apply/doCenterProfessionCarSendCar"
//申请服务中心/社会租赁-提交已拒绝订单修改正常/费用预估申请【New】
#define GONGWU_Confirm_ServiceOrRent_SpecialOrNormal_ApplyCar_Update_URL           @"zkmlgongwu/mvc/app/apply/doUpdateRefuseApplyFromRentOrService"

//应急派车--提交申请单【New】
#define GONGWU_SUBMIT_EMERGENCY_URL    @"zkmlgongwu/mvc/app/order/doEmergencySendCar"
//应急派车--获取租赁公司【New】
#define GONGWU_Get_YINGJI_COMPANY_URL      @"zkmlgongwu/mvc/app/order/getServiceOrgan"
//应急派车--获取租赁公司下的车辆【New】
#define GONGWU_GET_YINGJI_COMPANYCAR_URL  @"zkmlgongwu/mvc/app/order/rentCarType" //+


//新能源选车【New】
#define GONGWU_GET_NewEnergy_FindCarPosition_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/findCarPosition"
//新能源确认选车【New】
#define GONGWU_Confirm_NewEnergy_SelectCar_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/selectedCar"
//新能源车辆信息以及费用【New】
#define GONGWU_GET_NewEnergy_CarInfo_Message_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/getCarInfo"
//新能源待选车界面中的取消【New】
#define GONGWU_Cancel_NewEnergy_UseCar_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/cancelUseCar"
//新能源确认选车【New】
#define GONGWU_Confirm_Select_NewEnergyCar_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/selectedCar"
//新能源开始用车【New】
#define GONGWU_Confirm_StartUse_NewEnergyCar_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/doStartUseCar"
//新能源确认还车【New】
#define GONGWU_Confirm_Return_NewEnergyCar_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/returnCar"
//新能源获取订单评价信息【New】
#define GONGWU_GET_NewEnergyCar_EvaluateMessage_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/evaluateCar"
//新能源提交评价信息【New】
#define GONGWU_Submit_NewEnergyCar_EvaluateMessage_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/doEvaluateCar"
//新能源已选车情况车辆信息以及剩余时间【New】
#define GONGWU_GET_NewEnergyCar_HaveChooseMessage_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/getAfterSelectedCarInfo"
//新能源开始任务下车辆信息【New】
#define GONGWU_GET_NewEnergyCar_StartUseCarMessage_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/getafterOrderCarInfo"
//新能源实时查看车辆电量、里程数据【New】
#define GONGWU_GET_NewEnergyCar_MileMessage_URL  @"zkmlgongwu/mvc/app/greenLogisticApp/getTerminalCarInfo"


//个人出行订单-获取已评价的信息【New】
#define GONGWU_Get_HaveEvaluate_Message_URL   @"zkmlgongwu/mvc/app/order/getDriverEvaluationInfo"
//个人出行订单-提交评价内容【New】
#define GONGWU_Confirm_Evaluate_Message_URL   @"zkmlgongwu/mvc/app/order/doEvaluateDriver"


//获取接送站接送机定点信息的接口【New】
#define GONGWU_GET_TRAIN_FLIGHT_URL @"zkmlgongwu/mvc/app/apply/obtFixedAddressMap"
//公务订单提醒审核、提醒派车接口【New】
#define GONGWU_Remind_CheckAndDispatch_URL @"zkmlgongwu/mvc/app/apply/doRemind"
//申请人获取急单申请次数【New】
#define GONGWU_GET_HURRYTIMES_URL @"zkmlgongwu/mvc/app/apply/obtHurryApplyTimes"


//获取驾驶员业绩【New】
#define GONGWU_GET_Driver_Achievement_URL @"zkmlgongwu/mvc/app/driver/getMyAchievement"
//获取驾驶员业绩规则详情【New】
#define GONGWU_GET_Driver_Achievement_Rule_URL @"zkmlgongwu/mvc/app/driver/getScoreDetail"



//请求一键用车获取车辆数据【New】
#define GONGWU_GET_OneKey_UseCar_URL @"zkmlgongwu/mvc/app/apply/addOneKeyUseCar"
//请求一键用车根据车辆获取驾驶员数据【New】
#define GONGWU_GET_OneKey_UseDriver_ByCar_URL @"zkmlgongwu/mvc/app/apply/getOneKeyDriverList"
//保存一键用车数据【New】
#define GONGWU_Confirm_OneKey_UseCar_URL @"zkmlgongwu/mvc/app/apply/doOneKeyUseCarSendCar"
//请求一键执法获取车辆数据【New】
#define GONGWU_GET_OneKey_EnforceLaw_URL @"zkmlgongwu/mvc/app/apply/getOneKeyLawCarList"
//提交一键执法数据【New】
#define GONGWU_Submit_OneKey_EnforceLaw_URL @"zkmlgongwu/mvc/app/apply/doOneKeyLawCarSendCar"
//请求一键巡逻的巡逻路线
#define GONGWU_GET_OneKey_PatrolList_URL @"zkmlgongwu/mvc/app/patrolCheckCar/getPatrolCheckCarList"
//请求一键巡逻根据巡逻路线获取车辆司机详情
#define GONGWU_GET_OneKey_CarInfo_ByPatrolId_URL @"zkmlgongwu/mvc/app/patrolCheckCar/getPatrolCheckCarInfo"
//提交一键巡逻的数据
#define GONGWU_Submit_OneKey_Patrol_URL @"zkmlgongwu/mvc/app/patrolCheckCar/doSendCar"


//申请用车---获取部门列表信息的url
#define GONGWU_GET_USER_DEPT_LIST_URL @"zkmlgongwu/mobileApply/obtainUserdept" //+
//获取常用上车地点的url
#define GONGWU_COMMON_LOCATION_URL @"zkmlgongwu/mobileApply/obtainAddress" //+
//申请用车--根据部门id获取员工信息 的url
#define GONGWU_GET_USERINFOR_URL @"zkmlgongwu/mobileApply/obtainUserdeptyg" //+
//当前车辆的任务
#define GONGWU_CURRENT_CAR_TASK_URL @"zkmlgongwu/mobileDriverStatus/searchCarTask" //+



//车辆状态-获取车辆状态数量统计【New】
#define GONGWU_Get_CarStatus_Count_URL @"zkmlgongwu/mvc/app/carApp/getCarStatusCount" //+
//车辆状态-获取车辆状态列表接口【New】
#define GONGWU_Get_CarStatus_ListMessage_URL   @"zkmlgongwu/mvc/app/carApp/doCarStatusV2"
//车辆状态-获取车辆状态详情接口【New】
#define GONGWU_Get_CarStatus_DetailMessage_URL   @"zkmlgongwu/mvc/app/carApp/carTaskByCarIdAndStatusV2"
//车辆状态-获取车辆档案接口【New】
#define GONGWU_Get_CarStatus_FileMessage_URL   @"zkmlgongwu/mvc/app/carApp/getCarArchives"


//司机状态-获取司机状态数量统计【New】
#define GONGWU_Get_DriverStatus_Count_URL @"zkmlgongwu/mvc/app/driver/getDriverStatusCount"
//司机状态-获取司机状态列表接口【New】
#define GONGWU_Get_DriverStatus_ListMessage_URL   @"zkmlgongwu/mvc/app/driver/doDriverStatusV2"
//司机状态-获取司机状态详情接口【New】
#define GONGWU_Get_DriverStatus_DetailMessage_URL   @"zkmlgongwu/mvc/app/driver/getDriverTaskV2"


//车辆定位
#define GONGWU_CURRENT_CAR_POSITION_URL @"zkmlgongwu/mvc/app/carApp/doCarPosition" //xgw+
//车辆类型状态【旧版，新版不用了】
#define GONGWU_CURRENT_CAR_STATUS_URL @"zkmlgongwu/mvc/app/carApp/doCarStatus" //xgw+
//获取驾驶员任务
#define GONGWU_CURRENT_DRIVER_GETTASK_URL @"zkmlgongwu/mvc/app/driver/getDriverTask" //xgw+
//获取驾驶员状态
#define GONGWU_CURRENT_DRIVER_STATUS_URL @"zkmlgongwu/mvc/app/driver/doDriverStatus" //xgw+
//当前车辆的任务详情【旧版，新版不用了】
#define GONGWU_CURRENT_CAR_TASKDETAIL_URL @"zkmlgongwu/mvc/app/carApp/carTaskByCarIdAndStatus" //+

//获取宿州地区的客人职务
#define GONGWU_GET_POST_URL @"zkmlgongwu/mobileApply/getZhiwu"  //+
// 取消订单
#define GONGWU_DELETEAPPLY_URL @"zkmlgongwu/mobileApply/cancle" //+


//拒绝派车
#define GONGWU_PAICAR_JUJUE_URL @"zkmlgongwu/mobileApply/refusePaiche" //+
//调度员确认订单接口
#define GONGWU_DIAODU_CONFIRM_URL @"zkmlgongwu/mobileApply/ddConfirmApply" //+


//司机任务详情弹出框----班车站点   mobileMyCarUse/reqBusStation
#define GONGWU_DRIVERTASK_BUSPOSTION_URL @"zkmlgongwu/mobileBusLine/stationInfo"
//获取派车列表
#define GONGWU_PAICHE_CAR_URL @"zkmlgongwu/mobileApply/waitcheckApplylist" //+
//调度员撤销订单
#define GONGWU_CHEDAN_URL @"zkmlgongwu/mobileApply/cancledanzi"  //+
//服务网点的url
#define GONGWU_GET_SERVICE_POINT_URL @"zkmlgongwu/mobileApply/fuwustation" //+
// 获取调度派车里面的车型
#define GONGWU_GET_DIAODU_CARTYPE_URL @"zkmlgongwu/mobileApply/reqAddDiaodu" //+
//调度员手机端派车根收费车型获取价格类别
#define GONGWU_PRICETYPE_BY_FEECARTYPE_URL @"zkmlgongwu/mobileApply/searchbilling" //+
//调度员手机端派车选择合作租赁，显示所有费用标准的url
#define GONGWU_PRICETYPE_BY_HEZUO_URL @"zkmlgongwu/mobileApply/searchallbilling" //+
//是否显示费用标准的url
#define GONGWU_FEE_FORMAT_URL @"zkmlgongwu/mobileApply/sendcarmodel" //+
//调度员手机端派车根据服务网点和收费车型获得可派车牌号信息接口
#define GONGWU_CARNO_BY_CARTYPE_AND_FUWUWANGDAIN_URL @"zkmlgongwu/mobileApply/searchCarByCartypeAndStation" //+
//调度员手机端派车根据合作租赁的organno和订单号sn获取车牌号的接口
#define GONGWU_CARNO_BY_CARTYPE_ANDHEZUO_URL @"zkmlgongwu/mobileApply/deploycarlist" //+
//调度员手机端派车根据合作租赁的organno和订单号sn获取司机的接口
#define GONGWU_DRIVER_BY_CARTYPE_ANDHEZUO_URL @"zkmlgongwu/mobileApply/deploydriverlist"  //+
//根据车子的id获取这个车子是否绑定了司机信息的url
#define GONGWU_GET_DRIVERINFOR_BY_CARID_URL @"zkmlgongwu/mobileApply/obtainCarDriver" //+
//调度员手机端派车根据网点和收费车型获得可派司机信息接口
#define GONGWU_DRIVER_BY_CARTYPE_AND_FUWUWANGDAIN_URL @"zkmlgongwu/mobileApply/searchDriverByCartypeAndStation" //+
//派车的url
#define GONGWU_PARCAR_URL @"zkmlgongwu/mobileApply/submitPaiche" //+
//调度员修改派车界面，根据id获取派车的信息的url
#define GONGWU_UPDATE_PAICHHE_URL @"zkmlgongwu/mobileApply/updatepaiche"  //+
//应急派车---获取部门列表信息的url
#define GONGWU_GET_DEPT_LIST_URL @"zkmlgongwu/mobileApply/ajaxDeptList" //+


//根据id获取需要审核的订单的的车辆信息
#define GONGWU_CAR_STATUS_FORDIAODU_URL @"zkmlgongwu/mobileApply/jiaochecarList" //+
//废单
#define GONGWU_FEIDAN_URL @"zkmlgongwu/mobileApply/applycancel" //+


//取消废单
#define GONGWU_CANCEL_FEIDAN_URL @"zkmlgongwu/mobileApply/cancelfeidan"  //+


//维保
//获取维保审核签批列表
#define GONGWU_GET_Maintain_Check_URL @"zkmlgongwu/mvc/app/repair/pageCheck"
#define GONGWU_GET_Maintain_FeeType_URL @"zkmlgongwu/mvc/app/repair/obtLastQuote" //获取订单费用信息
#define GONGWU_GET_Maintain_CheckOrder_URL @"zkmlgongwu/mvc/app/repair/doCheck" //审核维保订单
#define GONGWU_GET_Maintain_ApproveOrder_URL @"zkmlgongwu/mvc/app/repair/doSign" //签批维保订单
#define GONGWU_GET_Maintain_ApplyNeedData_URL @"zkmlgongwu/mvc/app/repair/toAddApply" //申请页面获取车辆列表、维保类型、送检方式
#define GONGWU_GET_Maintain_ApplyCarInfo_URL @"zkmlgongwu/mvc/app/repair/obtCarInfoByCarId" //申请页面获取车辆信息
#define GONGWU_GET_Maintain_MaintainType_URL @"zkmlgongwu/mvc/app/repair/obtOwnCategory" //获取维保项目
#define GONGWU_GET_Maintain_MaintainCompany_URL @"zkmlgongwu/mvc/app/repair/obtCooperationOrganList" //获取维保公司
#define GONGWU_GET_Maintain_MaintainApply_URL @"zkmlgongwu/mvc/app/repair/doAddApply" //申请维保
#define GONGWU_GET_Maintain_MaintainCheckDetail_URL @"zkmlgongwu/mvc/app/repair/getApplyInfo" //获取维保审核详情
#define GONGWU_GET_Maintain_AcceptCarList_URL @"zkmlgongwu/mvc/app/repair/obtAcceptList" //验收列表
#define GONGWU_GET_Maintain_AcceptCar_URL @"zkmlgongwu/mvc/app/repair/doAccept" //验收
#define GONGWU_GET_Maintain_OrderList_URL @"zkmlgongwu/mvc/app/repair/pageApplyByUseApp" //订单列表
#define GONGWU_GET_Maintain_OrderOperationList_URL @"zkmlgongwu/mvc/app/repair/getApplyLog" //订单操作记录
#define GONGWU_GET_Maintain_UserIdentify_URL @"zkmlgongwu/mvc/app/repair/obtRepairRoleInfo" //维保用户权限
#define GONGWU_GET_Maintain_HadEvaluate_URL @"zkmlgongwu/mvc/app/repair/getApplyEvaluation" //维保已评价内容
#define GONGWU_GET_Maintain_NeedEvaluate_URL @"zkmlgongwu/mvc/app/repair/findStarContent" //维保待评价标签
#define GONGWU_GET_Maintain_SubmitEvaluate_URL @"zkmlgongwu/mvc/app/repair/doEvaluation" //提交维保待评价
#define GONGWU_GET_Maintain_FixMaintainApply_URL @"zkmlgongwu/mvc/app/repair/doUpdateApply" //维保订单
#define GONGWU_GET_Maintain_AcceptDetail_URL @"zkmlgongwu/mvc/app/repair/obtAcceptDetail" //维保订单


#define GONGWU_GET_DriverTrain_URL @"zkmlgongwu/mvc/app/driver/obtTrainingSsoLoginUrl" //司机培训

//考勤
//获取所在考勤组
#define GONGWU_GET_Attendance_GetGroupName_URL @"zkmlgongwu/mvc/app/attendance/findAttendanceGroup"
//查询考勤数据
#define GONGWU_GET_Attendance_GetRecordInfo_URL @"zkmlgongwu/mvc/app/attendance/findClockShiftList"
//打卡
#define GONGWU_GET_Attendance_AddRecord_URL @"zkmlgongwu/mvc/app/attendance/doAddClockRecord"

//一键派车获取车辆信息
#define GONGWU_GET_OneKey_GetDispatchCar_URL @"zkmlgongwu/mvc/app/apply/getOneKeySendCar"

//一键派车提交数据
#define GONGWU_GET_OneKey_DispatchCar_URL @"zkmlgongwu/mvc/app/apply/doOneKeySendCarSendCar"

//通勤班车通知公告全部班线
#define GONGWU_GET_AllBusLine_Notification_URL @"zkmlgongwu/mvc/app/bus/queryNoticeList"
//通勤班车通知公告详情
#define GONGWU_GET_BusLine_NotificationDetail_URL @"zkmlgongwu/mvc/app/bus/queryNoticeDetail"

//用户集中调度-获取集中调度租赁公司服务中心列表功能【New】
#define GONGWU_Get_CenterDispatchCompany_List_URL           @"zkmlgongwu/mvc/app/order/findCooperateAndServiceOrgan"

//用户集中调度-提交集中调度订单功能【New】
#define GONGWU_Submit_CenterDispatch_Order_URL           @"zkmlgongwu/mvc/app/order/doCentralizedDispatch"

//驾驶员开始任务前判断当前订单是否正常
#define GONGWU_DoTask_CheckOrderIsNormal_URL    @"zkmlgongwu/mvc/app/order/checkBeforeOrderCarStart"

//编制管理-获取用户的编制车辆、申请编制等数量
#define GONGWU_Get_ComplieInfo_URL           @"zkmlgongwu/mvc/app/compile/toCompile"
//编制管理-获取用户的编制信息列表
#define GONGWU_Get_ComplieList_URL           @"zkmlgongwu/mvc/app/compile/list"
//编制管理-提交编制信息
#define GONGWU_Confirm_AddComplie_URL           @"zkmlgongwu/mvc/app/compile/doAddCarCompile"
//编制管理-获取编制信息的详情
#define GONGWU_Get_ComplieDetailInfo_URL           @"zkmlgongwu/mvc/app/compile/obtCarCompileInfo"

/**订单调度退回*/
#define GONGWU_FindOwnBackReasonListByOrganId_URL @"zkmlgongwu/mvc/app/order/findOwnBackReasonListByOrganId"
#endif /* GongWuInterfaceHeader_pch */


/******************预警信息*****************/
//获取电子围栏报警列表
#define GONGWU_WarningInfoApp_PageFenceWarn_URL @"zkmlgongwu/mvc/app/warningInfoApp/pageFenceWarn"
//获取终端异常报警信息列表
#define GONGWU_WarningInfoApp_ObtTerminalWarnList_URL @"zkmlgongwu/mvc/app/warningInfoApp/obtTerminalWarnList"
//获取超速报警信息列表
#define GONGWU_WarningInfoApp_ObtOverSpeedWarnList_URL @"zkmlgongwu/mvc/app/warningInfoApp/obtOverSpeedWarnList"
//查看无任务出行报警列表信息
#define GONGWU_WarningInfoApp_NonMissionTripList_URL @"zkmlgongwu/mvc/app/warningInfoApp/obtNoTaskList"
//获取无任务出行详情
#define GONGWU_WarningInfoApp_ObtNoTaskDetail_URL @"zkmlgongwu/mvc/app/warningInfoApp/obtNoTaskDetail"
//提交申诉
#define GONGWU_WarningInfoApp_DoNoTaskAppeal_URL @"zkmlgongwu/mvc/app/warningInfoApp/doNoTaskAppeal"
