//
//  RentInterfaceHeader.pch
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2018/6/21.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#ifndef RentInterfaceHeader_pch
#define RentInterfaceHeader_pch


//租赁平台加入单位审核-获取审核列表【New】
#define RENT_Get_JoinDepartment_Check_List_URL   @"zkmlrent/mobileUserV2/pageUserWaitCheck"
//租赁平台加入单位审核-获取审核详情【New】
#define RENT_Get_JoinDepartment_Check_Detail_URL   @"zkmlrent/mobileUserV2/findUserWaitCheckDetail"
//租赁平台加入单位审核-审核操作【New】
#define RENT_Submit_JoinDepartment_Check_URL   @"zkmlrent/mobileUserV2/doCheckJoinOrgan"


//服务网点列表【NEW】
#define RENT_Get_ServiceStation_List_URL @"zkmlrent/mobileOrderV2/pageBranch"
//服务网点下的司机列表【NEW】
#define RENT_Get_ServiceStation_Driver_List_URL @"zkmlrent/mobileOrderV2/pageBranchDriver"
//服务网点下的车辆列表【NEW】
#define RENT_Get_ServiceStation_Car_List_URL @"zkmlrent/mobileOrderV2/pageBranchCar"


//获取驾驶员任务列表租赁平台班车【NEW】
#define BUS_Get_Current_DriverTask_URL @"zkmlrent/mobileBusOrderV2/driverTaskList" //+
//司机点击开始班车出车信息接口班车【NEW】
#define BUS_START_BUSCAR_URL @"zkmlrent/mobileBusOrderV2/doStartTask"
//司机点击结束班车出车信息接口班车【NEW】
#define BUS_END_BUSCAR_URL @"zkmlrent/mobileBusOrderV2/doEndTask"
//司机任务-确认班车任务班车【New】
#define BUS_Confirm_Current_DriverTask_URL    @"zkmlrent/mobileBusOrderV2/doConfirmTask"


//租赁调度派车-获取租赁公司有无转订单功能【New】mobileAuthV2/organSwitchDetail
#define RENT_Get_Lease_DispatchCompany_Permission_URL           @"zkmlrent/mobileUserV2/organSwitchDetail"
//租赁调度派车-获取转订单租赁公司列表功能【New】
#define RENT_Get_Lease_DispatchCompany_List_URL           @"zkmlrent/mobileOrderV2/findPartnerOrganList"
//租赁调度派车-获取转订单列表功能【New】
#define RENT_Get_Lease_DispatchChange_Order_URL           @"zkmlrent/mobileOrderV2/pageTransferOrder"
//租赁调度派车-提交转订单功能【New】
#define RENT_Submit_Lease_DispatchChange_Order_URL           @"zkmlrent/mobileOrderV2/doTransferOrder"


//租赁用车审核-获取订单列表【New】
#define RENT_Get_Lease_CheckOrder_List_URL           @"zkmlrent/mobileApplyV2/getMyCheckList"
//租赁用车审核-提交审核【New】
#define RENT_Submit_Lease_CheckOrder_URL           @"zkmlrent/mobileApplyV2/doCheck"
//租赁用车审核-退回审核【New】
#define RENT_Return_Lease_CheckOrder_URL           @"zkmlrent/mobileApplyV2/doReturn"

//租赁调度派车-获取网约车订单列表【New】
#define RENT_Get_Lease_OnlineDispatchOrderList_URL           @"zkmlrent/mobileOnlineCarV2/pageOnlineCarOrder"
//租赁调度派车-提交网约车派车信息【New】
#define RENT_Submit_Lease_OnlineDispatchOrder_URL           @"zkmlrent/mobileOnlineCarV2/doOnlineCarDispatch"
//租赁调度派车-根据网约车车型获取车牌号【New】
#define RENT_Get_Lease_OnlineDispatchChangeCarType_URL           @"zkmlrent/mobileOnlineCarV2/findCarAnDriverList"
//租赁调度派车-获取网约车订单详情【New】
#define RENT_Get_Lease_OnlineCarOrderDetail_URL           @"zkmlrent/mobileOnlineCarV2/findOnlineCarOrderDetail"
//租赁调度派车-修改网约车派车信息【New】
#define RENT_Update_Lease_OnlineCarOrder_URL           @"zkmlrent/mobileOnlineCarV2/doUpdateOnlineCarDispatch"


//租赁调度派车-获取订单列表【New】
#define RENT_Get_Lease_DispatchOrderCheck_List_URL           @"zkmlrent/mobileOrderV2/reqDispatchOrderList"
//租赁调度派车-拒绝派车【New】
#define RENT_Refuse_Lease_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/doRefuseDispatch"
//租赁调度派车-取消转出订单【New】
#define RENT_Cancel_Lease_TransferOrder_URL           @"zkmlrent/mobileOrderV2/doCancelTransferOrderV2"
//租赁调度派车-撤销派车【New】
#define RENT_Cancel_Lease_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/cancelDispatch"
//租赁调度派车-确认任务【New】
#define RENT_Confirm_Lease_DispatchCheck_Task_URL           @"zkmlrent/mobileOrderV2/doConfirmOrder"
//租赁调度派车-获取服务网点集合【New】
#define RENT_Get_Lease_DispatchCheck_ServicePoint_URL           @"zkmlrent/mobileOrderV2/findBranchListByOrganId"
//租赁调度派车-获取收费车型、司机【New】
#define RENT_Get_Lease_DispatchCheck_CarType_URL           @"zkmlrent/mobileOrderV2/changeBranch"
//租赁调度派车-新的接口获取收费车型、司机【New】
#define RENT_Get_Lease_DispatchChangeBranch_URL           @"zkmlrent/mobileOrderV2/changeBranch4SelectByCarType"
//租赁调度派车-根据车型获取车牌号【New】
#define RENT_Get_Lease_DispatchChangeCarType_URL           @"zkmlrent/mobileOrderV2/changeCarType4SelectByCarType"

//租赁调度派车-根据服务网点获取司机、车牌号【New】
#define RENT_Get_Lease_DispatchChangeBranchV2_URL           @"zkmlrent/mobileOrderV2/changeBranch4SelectByCarNo"

//租赁合并按车牌按车型派车后根据服务网点获取车、司机
#define RENT_Get_Lease_DispatchCarGetAllCarAndDriver_URL           @"zkmlrent/mobileOrderV2/changeBranch4AppDispatch"

//租赁调度派车-根据车牌号获取费用标准【New】
#define RENT_Get_Lease_DispatchChangeCarNo_URL           @"zkmlrent/mobileOrderV2/findBillStandardListByCarTypeId"


//租赁调度派车-提交正常派车信息【New】
#define RENT_Submit_Lease_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/doDispatch"
//租赁调度派车-提交修改后的派车信息【New】
#define RENT_Submit_Update_Lease_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/doUpdateDispatch"
//租赁调度派车-获取需要修改的派车信息【New】
#define RENT_Get_NeedUpdate_Lease_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/updateSendCar"
//租赁调度派车-获取已出车(加派)需要修改的派车信息【New】
#define RENT_Get_NeedUpdate_Lease_hadDispatchCheck_URL           @"zkmlrent/mobileOrderV2/findOrderCarListByOrderId4AddDispatch"
//租赁调度派车加派提交
#define RENT_Submit_Update_Lease_addDispatchCheck_URL           @"zkmlrent/mobileOrderV2/doAddDispatch"
//租赁调度派车-获取选中车辆的里程【New】
#define RENT_Get_Lease_CarWatch_DispatchCheck_URL           @"zkmlrent/mobileOrderV2/findCarCurrentWatch"
//租赁调度派车-获取车辆的年检和保险状态【New】
#define RENT_Get_Lease_CarInsuranceStatus_URL           @"zkmlrent/mobileOrderV2/obtManageMotOrInsuranceStatus"
//调度员协助驾驶员操作接口
#define  RENT_DISPATCHASSITORDEREXECUTE_URL   @"zkmlrent/mobileOrderV2/dispatcherAssistOrderCarExecute"//xgw+

//租赁调度派车-获取车辆绑定的司机信息【New】
#define RENT_Get_Lease_BindDriverInfo_URL           @"zkmlrent/mobileOrderV2/findDefaultDriver"
//添加备注
#define RENT_Get_Lease_AddNote_URL           @"zkmlrent/mobileOrderV2/doAddRemark"

//租赁交车审核-获取交车审核列表【New】
#define RENT_Get_Lease_BackCarCheck_List_URL           @"zkmlrent/mobileOrderV2/pageReview"
//租赁交车审核-获取订单对应派车任务列表【New】
#define RENT_Get_Lease_BackCarCheck_CarTask_List_URL           @"zkmlrent/mobileOrderV2/toReviewOrMend"
//租赁交车审核-更改费用标准获取新的费用【New】---废弃
#define RENT_Get_Lease_RunFee_Info_URL           @"zkmlrent/mobileOrderV2/calculateRunFeeByTimeAndMile"
//租赁交车审核-更改费用标准获取新的费用【New】
#define RENT_Get_Lease_RunFee_ByBillType_URL           @"zkmlrent/mobileOrderV2/calculateRunFeeByBillType"
//租赁交车审核-获取单个车辆详细交车信息【New】
#define RENT_Get_Lease_BackCarCheck_SingleCar_Info_URL           @"zkmlrent/mobileOrderV2/findOrderCarDetail"
//租赁交车审核-确认交车【New】
#define RENT_Confirm_Lease_BackCarCheck_URL           @"zkmlrent/mobileOrderV2/doReview"
//租赁交车审核-交车审核、调度派车订单详情【New】
#define RENT_Get_Lease_CheckOrder_Detail_URL           @"zkmlrent/mobileOrderV2/findOrderDetail"
//租赁交车审核-交车审核废单【New】
#define RENT_Abandon_BackCarOrderCheck_URL           @"zkmlrent/mobileOrderV2/doWasteOrder"
//租赁交车审核-分段费用计算【New】
#define RENT_Get_Lease_RentFee_BySplit_URL           @"zkmlrent/mobileOrderV2/calculateWhollyRentFeeBySplit"

//获取驾驶员任务列表租赁平台【NEW】
#define RENT_Get_Current_DriverTask_URL @"zkmlrent/mobileOrderV2/findDriverTaskList" //+
//司机任务-确认驾驶任务租赁平台【New】
#define RENT_Confirm_Current_DriverTask_URL           @"zkmlrent/mobileOrderV2/doDriverConfirmTask" //+
//司机点击开始任务租赁平台【NEW】
#define RENT_END_RENTCAR_URL @"zkmlrent/mobileOrderV2/doOrderCarStart" //+
//司机任务-结束任务租赁平台【New】
#define RENT_End_Current_DriverTask_URL           @"zkmlrent/mobileOrderV2/doOrderCarEnd" //+
//任务数量-获取驾驶任务、用车审核数、调度管理数租赁平台【New】
#define RENT_Get_TaskCount_Message_URL           @"zkmlrent/mobileOrderV2/reqHomeStatistics"
//司机任务-查看历史轨迹【New】
#define RENT_GET_CARPATH_URL    @"zkmlrent/mobileOrderV2/obtainHistoryOrderCarTrack" //+

//任务数量-获取驾驶员专车任务、调拨任务数量【New】
#define RENT_Get_DriverTaskCount_URL          @"zkmlrent/mobileOrderV2/obtTaskCategoryWithCount"
//获取驾驶员调拨任务列表【NEW】
#define RENT_Get_Allocation_DriverTask_URL    @"zkmlrent/mobileOrderV2/findDriverAllocationTaskList" //+
//司机任务-确认驾驶调拨任务【New】
#define RENT_Confirm_Allocation_DriverTask_URL    @"zkmlrent/mobileOrderV2/doAllocationDriverConfirmTask" //+
//司机点击开始调拨任务【NEW】
#define RENT_START_Allocation_DriverTask_URL    @"zkmlrent/mobileOrderV2/doAllocationTaskStart" //+
//司机任务-调拨结束任务【New】
#define RENT_End_Allocation_DriverTask_URL       @"zkmlrent/mobileOrderV2/doAllocationTaskEnd" //+

//获取驾驶员司导任务列表【NEW】
#define RENT_Get_Guide_DriverTask_URL    @"zkmlrent/mobileBizTravelOrderV2/findDriverTaskList" //+
//司机点击开始司导任务【NEW】
#define RENT_START_Guide_DriverTask_URL    @"zkmlrent/mobileBizTravelOrderV2/doOrderCarStart" //+
//司机任务-司导结束任务【New】
#define RENT_End_Guide_DriverTask_URL       @"zkmlrent/mobileBizTravelOrderV2/doOrderCarEnd" //+
//司机开始司导任务查询订单是否正常
#define RENT_JudgeOrderIsNormal_GuideDriverTask_URL @"zkmlrent/mobileBizTravelOrderV2/judgeIsCanStartTask"

//司机任务-到达预约地点【NEW】
#define RENT_Confirm_ReachReadyAddress_URL           @"zkmlrent/mobileOrderV2/reachReadyAddress"
//司机任务-接到乘客【NEW】
#define RENT_Confirm_ReceivePassengers_URL           @"zkmlrent/mobileOrderV2/receivePassengers"
//司机任务-到达目的地【NEW】
#define RENT_Confirm_ReachEndAddress_URL           @"zkmlrent/mobileOrderV2/reachEndAddress"
//司机任务-司机提交费用和备注信息【NEW】
#define RENT_Confirm_CostAndRemark_URL           @"zkmlrent/mobileOrderV2/driverSubmitFeeAndRemark"
//司机任务-是否显示我已回场【NEW】
#define RENT_Get_ShowGoBackButton_Message_URL           @"zkmlrent/mobileOrderV2/showGoBackButton"
//司机任务-我已回场操作【NEW】
#define RENT_Confirm_DoWaitCheckOrderCar_URL           @"zkmlrent/mobileOrderV2/doWaitCheckOrderCar"


//司机任务-获取行程日志列表【NEW】
#define RENT_Get_CarRouteList_URL           @"zkmlrent/mobileOrderV2/findOrderCarRouteListByOrderCarId"
//司机任务-获取行程日志详情【NEW】
#define RENT_Get_CarRouteDetailInfo_URL           @"zkmlrent/mobileOrderV2/findOrderCarRouteByOrderRouteId"
//司机任务-添加行程日志【NEW】
#define RENT_Confirm_DoUpdateCarRoute_URL           @"zkmlrent/mobileOrderV2/doUpdateOrderCarRoute"
//司机任务-删除行程日志【NEW】
#define RENT_Confirm_DoDeleteCarRoute_URL           @"zkmlrent/mobileOrderV2/doDelOrderCarRoute"



//租赁加入单位-获取部门数据【New】
#define RENT_Get_DepartmentData_URL           @"zkmlrent/mobileAuthV2/obtainDeptTreeList"
//租赁加入单位-开始加入单位【New】
#define RENT_Join_NEW_OrganDepartment_URL         @"zkmlrent/mobileAuthV2/doApplyJoinOrgan"


//租赁获取部门单位【New】
#define RENT_Get_Dept_List_URL           @"zkmlrent/mobileAuthV2/obtainDeptTreeList"
//租赁获取部门单位-带有部门人数【New】
#define RENT_Get_DeptWithCount_List_URL           @"zkmlrent/mobileAuthV2/obtainDeptTreeListWithUserCount"
//租赁获取部门单位中的人员【New】
#define RENT_Get_Dept_Person_List_URL    @"zkmlrent/mobileApplyV2/obtUserListByDeptId"
//租赁获取自有车辆【New】
#define RENT_Get_OrganCar_List_URL           @"zkmlrent/mobileApplyV2/obtCarListGroupByCarType"
//租赁获取自有司机【New】
#define RENT_Get_OrganDriver_List_URL           @"zkmlrent/mobileApplyV2/getOrganDriver"
//租赁用车申请-获取申请用车信息【New】
#define RENT_Get_ApplyCar_Message_URL           @"zkmlrent/mobileApplyV2/toAddApply"
//租赁用车申请-提交申请订单【New】
#define RENT_Confirm_ApplyCar_URL           @"zkmlrent/mobileApplyV2/doAddApply"
//租赁获取用车人列表【New】
#define RENT_Get_UserCarPerson_List_URL        @"zkmlrent/mobileApplyV2/obtOwnPeopleList"
//租赁添加用车人【New】
#define RENT_Add_UserCarPerson_List_URL        @"zkmlrent/mobileApplyV2/doAddOwnPeople"
//租赁批量添加用车人【New】
#define RENT_Add_Many_UserCarPerson_List_URL        @"zkmlrent/mobileApplyV2/doAddOwnMultiPeople"
//租赁删除用车人【New】
#define RENT_Delete_UserCarPerson_List_URL        @"zkmlrent/mobileApplyV2/doDeleteOwnPeople"
//租赁用车人模糊查询【New】
#define RENT_Search_UserCarPerson_URL        @"zkmlrent/mobileDriverV2/obtApplyUserListByFuzzyQry"
//租赁获取用车时长【New】
#define RENT_Get_ApplyCarTimeLong_Message_URL        @"zkmlrent/mobileApplyV2/obtUseCarDuration"


//租赁获取部门单位-非数形结构【New】
#define RENT_Get_DeptWithoutTree_List_URL        @"zkmlrent/mobileUserV2/findDeptList"
//租赁申请人新增【New】
#define RENT_Add_Dept_ApplyPerson_URL        @"zkmlrent/mobileUserV2/doAddUser"

//租赁获取常用用车事由【New】
#define RENT_Get_UseCarReason_Message_URL        @"zkmlrent/mobileApplyV2/obtOwnReasonList"
//租赁修改常用用车事由【New】
#define RENT_Update_UseCarReason_Message_URL        @"zkmlrent/mobileApplyV2/doUpdateOwnReason"
//租赁新增常用用车事由【New】
#define RENT_Add_UseCarReason_Message_URL        @"zkmlrent/mobileApplyV2/doAddOwnReason"
//租赁删除常用用车事由【New】
#define RENT_Delete_UseCarReason_Message_URL        @"zkmlrent/mobileApplyV2/doDeleteOwnReason"

//租赁获取常用用车备注【New】
#define RENT_Get_UseCarNote_Message_URL        @"zkmlrent/mobileApplyV2/obtOwnNoteList"
//租赁修改常用用车备注【New】
#define RENT_Update_UseCarNote_Message_URL        @"zkmlrent/mobileApplyV2/doUpdateOwnNote"
//租赁新增常用用车备注【New】
#define RENT_Add_UseCarNote_Message_URL        @"zkmlrent/mobileApplyV2/doAddOwnNote"
//租赁删除常用用车备注【New】
#define RENT_Delete_UseCarNote_Message_URL        @"zkmlrent/mobileApplyV2/doDeleteOwnNote"

//租赁获取常用用车地址【New】
#define RENT_Get_UseCarAddress_Message_URL        @"zkmlrent/mobileApplyV2/obtOwnAddressList"
//租赁新增常用用车地址【New】
#define RENT_Add_UseCarAddress_Message_URL        @"zkmlrent/mobileApplyV2/doAddOwnAddress"
//租赁删除常用用车地址【New】
#define RENT_Delete_UseCarAddress_Message_URL        @"zkmlrent/mobileApplyV2/doDeleteOwnAddress"


//租赁定向保障获取车辆司机数据【New】
#define RENT_Get_Special_ApplyDriver_Message_URL @"zkmlrent/mobileApplyV2/findProfessionDriver"



//租赁公司获取驾驶员业绩【New】
#define RENT_GET_Driver_Achievement_URL        @"zkmlrent/mobileDriverV2/getMyAchievement"
//租赁公司获取驾驶员业绩规则详情【New】
#define RENT_GET_Driver_Achievement_Rule_URL        @"zkmlrent/mobileDriverV2/getScoreDetail"


//租赁公司自己申请的订单列表【New】
#define RENT_GET_RentOrder_List_URL        @"zkmlrent/mobileApplyV2/obtMyApplyList"
//我的订单-租赁审核-获取申请单详情【New】
#define RENT_Get_Lease_reqApplyDetail_URL   @"zkmlrent/mobileApplyV2/reqApplyDetail"
//我的订单-获取订单详情【New】
#define RENT_Get_Lease_reqOrderDetail_URL   @"zkmlrent/mobileOrderV2/reqOrderDetail"
//我的订单-修改订单【New】
#define RENT_toUpdateApply_URL   @"zkmlrent/mobileApplyV2/toUpdateApply"
//用车申请-提交修改订单【New】
#define RENT_Confirm_ApplyCar_Update_URL   @"zkmlrent/mobileApplyV2/doUpdateApply"
//我的订单列表-取消订单【New】
#define RENT_CancleOrder_From_MyOrder_URL           @"zkmlrent/mobileApplyV2/doCancelApply"
//我的订单-用车人确认结束用车【New】
#define RENT_Get_Lease_doConfirmEndTask_URL   @"zkmlrent/mobileOrderV2/doConfirmEndTask"


//车辆状态-获取车辆状态数量【New】
#define RENT_Get_CarStatus_Count_URL   @"zkmlrent/mobileDriverV2/obtCarStatusCount"
//车辆状态-获取车辆状态列表接口【New】
#define RENT_Get_CarStatus_ListMessage_URL   @"zkmlrent/mobileDriverV2/obtCarStatusByMotionState"
//车辆状态-获取车辆状态详情接口【New】
#define RENT_Get_CarStatus_DetailMessage_URL   @"zkmlrent/mobileDriverV2/obtCarOrderDetailListInTask"
//车辆状态-获取车辆档案接口【New】
#define RENT_Get_CarStatus_FileMessage_URL   @"zkmlrent/mobileDriverV2/obtCarDataInfo"


//司机状态-获取司机状态数量统计【New】
#define RENT_Get_DriverStatus_Count_URL @"zkmlrent/mobileDriverV2/obtDriverStatusCount"
//司机状态-获取司机状态列表接口【New】
#define RENT_Get_DriverStatus_ListMessage_URL   @"zkmlrent/mobileDriverV2/obtDriverStatusList"
//司机状态-获取司机状态详情接口【New】
#define RENT_Get_DriverStatus_DetailMessage_URL   @"zkmlrent/mobileDriverV2/obtDriverTaskDetail"
//司机状态-获取司机档案接口【New】
#define RENT_Get_DriverStatus_FileMessage_URL   @"zkmlrent/mobileDriverV2/obtDriverDataInfo"



//车辆定位
#define RENT_CURRENT_CAR_POSITION_URL @"zkmlrent/mobileOrderV2/obtCarPosition" //xgw+
//车辆类型状态
#define RENT_CURRENT_CAR_STATUS_URL @"zkmlrent/mobileDriverV2/obtCarStatus" //xgw+
//获取驾驶员任务
#define RENT_CURRENT_DRIVER_GETTASK_URL @"zkmlrent/mobileDriverV2/obtDriverTaskList" //xgw+
//获取驾驶员状态
#define RENT_CURRENT_DRIVER_STATUS_URL @"zkmlrent/mobileDriverV2/obtDriverStatus" //xgw+
//获取车辆任务【旧版，新版不用了】
#define RENT_CURRENT_CAR_GETTASK_URL @"zkmlrent/mobileDriverV2/obtCarOrderDetailList"

//请求一键用车获取车辆数据【New】
#define RENT_GET_OneKey_UseCar_URL @"zkmlrent/mobileApplyV2/findProfessionCar"
//请求一键用车根据车辆获取驾驶员数据【New】
#define RENT_GET_OneKey_UseDriver_ByCar_URL @"zkmlrent/mobileApplyV2/findProfessionDriver"
//保存一键用车数据【New】
#define RENT_Confirm_OneKey_UseCar_URL @"zkmlrent/mobileOrderV2/doOneKeyProfessionCarSendCar"
//请求一键执法获取车辆数据【New】
#define RENT_GET_OneKey_EnforceLaw_URL @"zkmlrent/mobileOrderV2/obtLawCarList"
//提交一键执法数据【New】
#define RENT_Submit_OneKey_EnforceLaw_URL @"zkmlrent/mobileOrderV2/doOneKeyLawCarSendCar"


//维保
//获取维保审核签批列表
#define RENT_GET_Maintain_Check_URL @"zkmlrent/mobileRepairV2/pageCheck"
#define RENT_GET_Maintain_FeeType_URL @"zkmlrent/mobileRepairV2/obtLastQuote" //获取订单费用信息
#define RENT_GET_Maintain_CheckOrder_URL @"zkmlrent/mobileRepairV2/doCheck" //审核维保订单
#define RENT_GET_Maintain_ApproveOrder_URL @"zkmlrent/mobileRepairV2/doSign" //签批维保订单
#define RENT_GET_Maintain_ApplyNeedData_URL @"zkmlrent/mobileRepairV2/toAddApply" //申请页面获取车辆列表、维保类型、送检方式
#define RENT_GET_Maintain_ApplyCarInfo_URL @"zkmlrent/mobileRepairV2/obtCarInfoByCarId" //申请页面获取车辆信息
#define RENT_GET_Maintain_MaintainType_URL @"zkmlrent/mobileRepairV2/obtOwnCategory" //获取维保项目
#define RENT_GET_Maintain_MaintainCompany_URL @"zkmlrent/mobileRepairV2/obtCooperationOrganList" //获取维保项目
#define RENT_GET_Maintain_MaintainApply_URL @"zkmlrent/mobileRepairV2/doAddApply" //获取维保项目
#define RENT_GET_Maintain_MaintainCheckDetail_URL @"zkmlrent/mobileRepairV2/getApplyInfo" //获取维保审核详情
#define RENT_GET_Maintain_AcceptCarList_URL @"zkmlrent/mobileRepairV2/obtAcceptList" //验收列表
#define RENT_GET_Maintain_AcceptCar_URL @"zkmlrent/mobileRepairV2/doAccept" //验收
#define RENT_GET_Maintain_OrderList_URL @"zkmlrent/mobileRepairV2/pageApplyByUseApp" //订单列表
#define RENT_GET_Maintain_OrderOperationList_URL @"zkmlrent/mobileRepairV2/getApplyLog" //订单操作记录
#define RENT_GET_Maintain_UserIdentify_URL @"zkmlrent/mobileRepairV2/obtRepairRoleInfo" //维保用户权限
#define RENT_GET_Maintain_HadEvaluate_URL @"zkmlrent/mobileRepairV2/getApplyEvaluation" //维保已评价内容
#define RENT_GET_Maintain_NeedEvaluate_URL @"zkmlrent/mobileRepairV2/findStarContent" //维保待评价标签
#define RENT_GET_Maintain_SubmitEvaluate_URL @"zkmlrent/mobileRepairV2/doEvaluation" //提交维保待评价
#define RENT_GET_Maintain_FixMaintainApply_URL @"zkmlrent/mobileRepairV2/doUpdateApply" //维保订单
#define RENT_GET_Maintain_AcceptDetail_URL @"zkmlrent/mobileRepairV2/obtAcceptDetail" //维保订单

//考勤
#define RENT_GET_Attendance_GetRecordInfo_URL @"zkmlrent/mobileAttendanceV2/findClockShiftList" //考勤获取数据
#define RENT_GET_Attendance_AddRecord_URL @"zkmlrent/mobileAttendanceV2/doAddClockRecord" //考勤打卡获取
#define RENT_GET_Attendance_GetGroupName_URL @"zkmlrent/mobileAttendanceV2/findAttendanceGroup" //获取考勤组

#define RENT_GET_Driver_Train_URL        @"zkmlrent/mobileDriverV2/obtTrainingSsoLoginUrl"//司机培训

#define RENT_GET_Customer_Unit_URL        @"zkmlrent/mobileApplyV2/pageCustomerOrgan"//获取客户单位
#define RENT_GET_Customer_Person_URL        @"zkmlrent/mobileApplyV2/obtCustomerOrganContacts"//获取客户
#define RENT_GET_ApplyCarForCustomer_commit_URL        @"zkmlrent/mobileApplyV2/doHelpCustomerDoApply"//代客户申请用车提交订单
#define RENT_GET_ApplyCarForCustomerSelectCarType_URL        @"zkmlrent/mobileApplyV2/obtCarTypeList"//租赁代客户申请用车选车型//该接口也是租赁公司选车型接口

//获取驾驶员结束任务需要填写费用
#define RENT_GET_DriverFinishTaskGetFeeTitle_URL        @"zkmlrent/mobileOrderV2/findEndTaskCnfList"

//租赁调度派车可修改订单时选的车辆品牌
#define RENT_GET_DispatchCarFixOrderSelCarBrand @"zkmlrent/mobileOrderV2/obtBrandModel4UpdateOrder"
//租赁调度派车可修改订单时提交修改信息
#define RENT_GET_DispatchCarFixOrderCommitData @"zkmlrent/mobileOrderV2/updateOrderInfo"



//调拨管理
//首页获取列表(未调拨,已调拨,已拒绝)
#define RENT_Get_Allocate_List_URL           @"zkmlrent/mobileAllocationV2/pageOrder"
//拒绝挑拨
#define RENT_Allocate_Reject_URL           @"zkmlrent/mobileAllocationV2/doReject"
//调拨订单详情
#define RENT_Allocate_OrderDetail_URL           @"zkmlrent/mobileAllocationV2/orderDetail"
//跳转调拨
#define RENT_Allocate_GoAllocate_URL           @"zkmlrent/mobileAllocationV2/toAgree"
//调拨选择车辆
#define RENT_Allocate_SelectCar_URL           @"zkmlrent/mobileAllocationV2/obtCarListGroupByCarType"
//调拨选择司机
#define RENT_Allocate_SelectDriver_URL           @"zkmlrent/mobileApplyV2/getOrganDriver"
//提交调拨订单
#define RENT_Allocate_CommitOrder_URL           @"zkmlrent/mobileAllocationV2/doAgree"

//一键派车
//一键派车获取车辆信息
#define RENT_GET_OneKey_GetDispatchCar_URL @"zkmlrent/mobileOrderV2/toAddOneKeySendCar"
//一键派车提交数据
#define RENT_GET_OneKey_DispatchCar_URL @"zkmlrent/mobileOrderV2/doAddOneKeySendCar"

//派车登记
#define RENT_GET_MainInfo_URL @"zkmlrent/mobileOrderV2/toAddCheckInOrder" //获取主页数据

#define RENT_GET_CarUnit_URL @"zkmlrent/mobileOrderV2/reqCustomerList" //获取客户单位

#define RENT_valuate_CarUnit_URL @"zkmlrent/mobileOrderV2/checkAndFindUser4NewOldPlatform"

#define RENT_CommitOrder_userCar_URL @"zkmlrent/mobileOrderV2/doAddCheckInOrder"//提交用车登记

//派车补录
#define RENT_GET_RecordMainInfo_URL @"zkmlrent/mobileOrderV2/toAddFillOrderCar" //获取派车补录基础数据
#define RENT_GET_RecordFinanceModeList_URL @"zkmlrent/mobileOrderV2/changeCustomerOrgan" //获取派车补录结算模式
#define RENT_GET_RecordFeebillingList_URL @"zkmlrent/mobileOrderV2/findBillingByCarTypeId" //获取派车补录结算模式
#define RENT_GET_CalculateTimes_URL @"zkmlrent/mobileOrderV2/calculateTimes" //获取派车补录计算时间

#define RENT_GET_CalculateRunFee_URL @"zkmlrent/mobileOrderV2/calculateRunFeeByBillType" //获取派车补录计算总费用

#define RENT_GET_RecordFeeItem_URL @"zkmlrent/mobileOrderV2/toSetReviewFeeConf" //获取派车补录后台配置费用项
#define RENT_GET_RecordCommitOrder_URL @"zkmlrent/mobileOrderV2/doAddFillOrder" //获取派车补录后台配置费用项


//获取修改驾驶员任务详情信息
#define RENT_GET_DriverModifyDetail_URL @"zkmlrent/mobileOrderV2/findDriverModifyDetail"
//修改驾驶员任务详情
#define RENT_Update_DriverModify_URL @"zkmlrent/mobileOrderV2/doUpdateDriverModify"

//司机开始任务查询订单是否正常
#define RENT_JudgeOrderIsNormal_driverTask_URL @"zkmlrent/mobileOrderV2/judgeIsCanStartTask"

/**无任务列表*/
#define RENT_MobileWarnV2ObtNoTaskList_URL @"zkmlrent/mobileWarnV2/obtNoTaskList"

/**无任务详情*/
#define RENT_MobileWarnV2ObtNoTaskDetail_URL @"zkmlrent/mobileWarnV2/obtNoTaskDetail"

/**申诉*/
#define RENT_MemberOrderV2DoNoTaskAppeal_URL @"zkmlrent/mobileWarnV2/doNoTaskAppeal"

/**终端异常列表*/
#define RENT_MobileWarnV2ObtTerminalWarnList_URL @"zkmlrent/mobileWarnV2/obtTerminalWarnList"

/**超速报警列表*/
#define RENT_MobileWarnV2ObtOverSpeedWarnList_URL @"zkmlrent/mobileWarnV2/obtOverSpeedWarnList"

/**电子围栏列表*/
#define RENT_MobileWarnV2PageFenceWarn_URL @"zkmlrent/mobileWarnV2/pageFenceWarn"
/**订单调度退回*/
#define RENT_MobileOrderV2FindBackReasonList_URL @"zkmlrent/mobileOrderV2/findBackReasonList"



#endif /* RentInterfaceHeader_pch */
