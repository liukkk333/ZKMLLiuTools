//
//  PersonInterfaceHeader.pch
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2018/6/21.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#ifndef PersonInterfaceHeader_pch
#define PersonInterfaceHeader_pch


// 个人登录的URL
#define PERSON_LOGIN_URL @"zkmlperson/mobileTerminal/login" //+

// 个人平台获取用户IM操作权限信息
#define PERSON_Get_Im_Message_URL @"zkmlperson/mobileTerminal/getUserImAuth"

// 个人平台获取推送、短信、防骚扰开关信息
#define PERSON_Get_Notification_Message_URL @"zkmlperson/mobileTerminal/getUserSwitchInfo"
// 个人平台设置推送、短信、防骚扰开关信息
#define PERSON_Set_Notification_Message_URL @"zkmlperson/mobileTerminal/setUserSwitch"

// 根据微信授权后的code获取是否绑定及绑定后的信息
#define PERSON_GetMessage_ByWXCode_URL @"zkmlperson/weChatLogin/getUserInfoByCode" //+


//发送短信的url---忘记密码时
#define PERSON_SEND_FINDPASSWORDMSG_CODE_URL @"zkmlperson/mobileTerminal/findPasswordReqPhoneCode"  //+
//发送短信的url---修改手机号
#define PERSON_SEND_MODIFYPHONE_CODE_URL @"zkmlperson/mobileTerminal/updatePhoneSendCode"  //+
// 用户反馈的URL
#define PERSON_USERFEEDBACK_URL @"zkmlperson/mobileTerminal/createmobileFeedBack" //+
// 用户验证旧密码的URL
#define PERSON_GETPASS_URL @"zkmlperson/mobileTerminal/verifyOldPassword" //+
// 用户修改密码的URL
#define PERSON_MODIFYPASS_URL @"zkmlperson/mobileTerminal/updatePassword" //+
// 用户修改手机号
#define PERSON_MODIFYPHONE_URL @"zkmlperson/mobileTerminal/updatePhone" //+
//个人退出登录账号
#define PERSON_OUTLOGIN_URL @"zkmlperson/mobileTerminal/outLogin" //+
//个人获取运营平台banner图
#define PERSON_GET_BANNER_URL @"zkmlperson/mobileResource/reqAdvertisementURL" //+


//个人更改默认登录单位
#define PERSON_Change_DefaultOrgan_URL @"zkmlperson/mobileTerminal/updateDefaultLoginPlatform" //+
//个人获取手写签名图片
#define PERSON_GET_HandWrite_Pic_URL @"zkmlperson/mobileTerminal/getHandSignByAuthId"
//个人更改手写签名图片
#define PERSON_Change_HandWrite_Pic_URL @"zkmlperson/mobileTerminal/updateHandSign"

//个人更改语音开关配置URL
#define PERSON_Change_Voice_Setting_URL @"zkmlperson/mobileTerminal/updateImVoiceNotice"




//个人平台-个人出行获取车型接口（费用预估）【New】
#define Person_Get_ApplyCarWithCost_List_URL  @"zkmlperson/mobileTerminal/obtCarTypeList"
//个人平台-个人出行提交（含支付）【New】
#define Person_Submit_ApplyOrder_URL  @"zkmlperson/mobileTerminal/doAddApply"
//个人平台-个人出行支付成功后回调【New】
#define Person_Submit_PaySuccess_URL   @"zkmlperson/mobileTerminal/updatePayStatus"
//个人平台-查询航班、火车【New】
#define Person_Get_FlightAndTrain_Message_URL  @"zkmlperson/mobileTerminal/obtAirPortAndStation"
//个人平台-查询当前类型下的订单-申请界面中的订单列表，没有分页【New】
#define Person_Get_ApplyOrder_Message_URL     @"zkmlperson/mobileTerminal/obtMyApply"
//个人平台-取消个人出行申请单【New】
#define Person_New_Cancel_NewApplyOrder_URL           @"zkmlperson/mobileTerminal/cancelApply"
//个人平台-查询个人出行的订单【New】
#define Person_Get_ApplyOrder_URL     @"zkmlperson/mobileTerminal/obtMyApplyWithPage"

//个人平台-我的消息列表【New】
#define Person_Get_MyMessage_List_URL           @"zkmlperson/mobileTerminal/findMessageByAuthId"
//个人平台-删除我的消息【New】
#define Person_Delegate_MyMessage_URL           @"zkmlperson/mobileTerminal/delMessageByIds"


//个人平台-获取个人出行申请单列表【New】
#define Person_Get_ApplyOrder_List_URL           @"zkmlperson/mobileTerminal/obtMyApplyList"
//个人平台-取消个人出行申请单【New】
#define Person_Cancel_ApplyOrder_URL           @"zkmlperson/mobileTerminal/doCancelApply"
//个人平台-获取个人出行申请单详情【New】
#define Person_Get_ApplyOrder_Detail_URL           @"zkmlperson/mobileTerminal/obtApplyDetail"
//个人平台-获取个人出行申请单轨迹【New】
#define Person_Get_ApplyOrder_Path_URL           @"zkmlperson/mobileTerminal/obtApplyTaskTrack"
//个人平台-获取个人出行申请单定位【New】
#define Person_Get_ApplyOrder_Location_URL           @"zkmlperson/mobileTerminal/obtCarsPosition"


//个人平台-获取个人出行申请单提交评价【New】
#define Person_Confirm_ApplyOrder_Evaluate_URL           @"zkmlperson/mobileTerminal/doAddEvaluate"
//个人平台-获取个人出行申请单获取评价信息【New】
#define Person_Get_ApplyOrder_Evaluate_Message_URL           @"zkmlperson/mobileTerminal/evaluateDetail"
//个人平台-获取租赁公司客服电话【New】
#define Person_Get_ServicePhone_Message_URL           @"zkmlperson/mobileTerminal/reqServicePhone"
//个人平台-个人订单的提醒审核【New】
#define Person_Remind_Check_URL     @"zkmlperson/mobileTerminal/doRemindDespatcher"
//个人平台-获取订单详情【New】
#define Person_Get_OrderDetail_URL   @"zkmlperson/mobileTerminal/reqOrderInfo"


//个人平台-获取用户所加入的群组列表【New】
#define Person_Get_ChatGroup_List_URL   @"zkmlperson/im/v1/queryGroupsOfUser"
//个人平台-获取群组成员列表【New】
#define Person_Get_ChatGroup_Person_List_URL   @"zkmlperson/im/v1/groupUsersOfGroup"
//个人平台-获取好友成员列表【New】
#define Person_Get_MyFriend_List_URL   @"zkmlperson/im/v1/queryMyFriends"

//个人平台-申请添加好友后请求接口【New】
#define Person_Confirm_MyFriend_Apply_URL   @"zkmlperson/im/v1/applyAddFriend"
//个人平台-同意加好友后请求接口【New】
#define Person_Agree_MyFriend_Apply_URL   @"zkmlperson/im/v1/simpleAgreeAddFriend"
//个人平台-获取好友申请列表接口【New】
#define Person_Get_MyFriend_Apply_List_URL   @"zkmlperson/im/v1/queryApplyAddFriendList"
//个人平台-根据部门获取成员接口【New】
#define Person_Get_MemberList_By_DeptId_URL   @"zkmlperson/im/v1/queryOrgMembers"

//个人平台-创建群组接口【New】
#define Person_Create_GroupChat_URL   @"zkmlperson/im/v1/createGroup"
//个人平台-邀请加入群组接口【New】
#define Person_Enter_GroupChat_URL   @"zkmlperson/im/v1/addBatchUserToGroup"
//个人平台-设置群组管理员接口【New】
#define Person_Set_GroupChat_Manager_URL   @"zkmlperson/im/v1/setUserToGroupManager"
//个人平台-删除群组成员接口【New】
#define Person_Delete_GroupChat_Person_URL   @"zkmlperson/im/v1/removeUsersFromGroup"
//个人平台-取消群组管理员权限接口【New】
#define Person_Cancel_GroupChat_ManagerRole_URL   @"zkmlperson/im/v1/removeUserFromGroupManager"
//个人平台-修改群组名称接口【New】
#define Person_Update_GroupName_URL   @"zkmlperson/im/v1/updateGroupInfo"
//个人平台-解散群组接口【New】
#define Person_Dismiss_GroupChat_URL   @"zkmlperson/im/v1/removeGroup"


//个人平台-通勤班车聊天室弹幕开关接口【New】
#define Person_RegularBus_Bullet_Switch_URL   @"zkmlperson/im/v1/updateChatRoomBarrageOpen"
//个人平台-查询聊天室信息接口【New】
#define Person_Get_ChatRoom_Message_URL   @"zkmlperson/im/v1/queryChatRoom"
//个人平台-创建聊天室接口【New】
#define Person_Create_ChatRoom_URL   @"zkmlperson/im/v1/createChatRoom"
//个人平台-加入聊天室接口【New】
#define Person_Join_ChatRoom_URL   @"zkmlperson/im/v1/addUsersToChatRoom"

//个人平台-查询司乘聊天群组信息接口【New】
#define Person_Get_DriverAndCustom_GroupChatRoom_Message_URL   @"zkmlperson/im/v1/getDriverPassengerChatGroup"
//个人平台-查询群组是否超过24小时接口【New】
#define Person_Get_GroupChatRoom_OverHours_Message_URL   @"zkmlperson/im/v1/getOrderGroupInfo"


//个人平台-获取申请网约车前的信息【New】
#define Person_Get_Network_URL   @"zkmlperson/mobileTerminal/onlineCarFindOrganBaseAndUserOrder"
//个人平台-获取网约车当前类型下的订单-申请界面中的订单列表，没有分页【New】
#define Person_Get_Network_ApplyOrderList_URL   @"zkmlperson/mobileTerminal/onlineCarFindOrderNoWithPage"
//个人平台-获取网约车客户正在进行中的订单数量【New】
#define Person_Get_Network_RunningOrderCount_URL   @"zkmlperson/mobileTerminal/findCustomerServiceOrderCount"
//个人平台-获取网约车预估费用+车型【New】
#define Person_Get_Network_CarTypeList_URL   @"zkmlperson/mobileTerminal/estimateFeeByCarTypeId"
//个人平台-提交网约车申请【New】
#define Person_Submit_Network_Apply_URL   @"zkmlperson/mobileTerminal/doAddApplyOnlineCar"
//个人平台-获取网约车订单列表【New】
#define Person_Get_Network_OrderList_URL   @"zkmlperson/mobileTerminal/onlineCarFindOrderWithPage"
//个人平台-获取网约车订单详情【New】
#define Person_Get_Network_OrderDetail_URL   @"zkmlperson/mobileTerminal/onlineCarFindOrderByOrderId"
//个人平台-网约车订单取消【New】
#define Person_Confirm_Network_CancelOrder_URL   @"zkmlperson/mobileTerminal/onlineCarCancelOrderByOrderId"
//个人平台-获取网约车订单评价信息【New】
#define Person_Get_Network_EvaluateMessage_URL   @"zkmlperson/mobileTerminal/onlineCarFindEvaluateRecordDTOByOrderIdAndUserId"
//个人平台-提交网约车订单评价【New】
#define Person_Submit_Network_EvaluateMessage_URL   @"zkmlperson/mobileTerminal/onlineCarAddRecord"
//个人平台-网约车同意用户协议【New】
#define Person_Confirm_Network_AgreeProtocol_URL   @"zkmlperson/mobileTerminal/onlineCarUpdateCustomerConsentAgreement"
//获取用户协议
#define Person_Confirm_Network_ProtocolList_URL   @"zkmlperson/mobileTerminal/protocolList"
//个人平台-获取微信支付的信息【New】
#define Person_Get_Network_WeiXinPayInfo_URL   @"zkmlperson/mobileTerminal/onlinCarWxPay"
//个人平台-获取驾驶员虚拟号码【New】
#define Person_Get_DriverVirtual_Phone_URL   @"zkmlperson/mobileTerminal/onlineCarBindVirtualPhoneByOrderId"
//个人平台-修改个人的下车地点【New】
#define Person_Update_DownPlace_URL   @"zkmlperson/mobileTerminal/v1/onlineCar/doUpdateDownAddress"
//个人平台-根据经纬获取当前城市是否开通网约车【New】
#define Person_Get_AddressInfo_URL   @"zkmlperson/mobileTerminal/v1/onlineCar/findUpAddressOrganBase"
//个人平台-网约车行程分享【New】
#define Person_Get_TravelSharing_URL   @"zkmlperson/mobileTerminal/v1/onlineCar/doPersonTravelSharing"
//个人平台-根据车站编码获取经纬度【New】
#define Person_Get_StationInfo_URL   @"zkmlperson/mobileTerminal/obtStationInfo"
//个人平台-根据用户当前地址获取推荐的车站【New】
#define Person_Get_StationList_URL   @"zkmlperson/mobileTerminal/obtStationListInCity"


//个人平台-获取客户常用公司、家地址【New】
#define Person_Get_Network_HomeCompanyAddress_URL @"zkmlperson/mobileTerminal/onlineCarFindCustomerAddressByAuthId"
//个人平台-保存客户常用公司、家地址【New】
#define Person_Save_Network_HomeCompanyAddress_URL @"zkmlperson/mobileTerminal/onlineCarSaveCustomerPersonAddress"
//个人平台-获取推荐客户下车地址-多个【New】
#define Person_Get_Network_SuggestDownAddress_URL @"zkmlperson/mobileTerminal/onlineCarFindRecommendDownAddress"

//个人平台-删除客户家、公司地址【New】
#define Person_Delete_Network_HomeCompanyAddress_URL @"zkmlperson/mobileTerminal/onlineCarDelCustomerAddressById"



//个人平台-保险申请【New】
#define Person_Apply_Insurance_URL     @"zkmlperson/mobileTerminal/addCarInsurance"
//个人平台-修改保险申请【New】
#define Person_Update_Apply_Insurance_URL     @"zkmlperson/mobileTerminal/updateCarInsurance"
//个人平台-保险订单列表【New】
#define Person_Get_InsuranceOrder_List_URL     @"zkmlperson/mobileTerminal/findCarInsuranceByAuthIdAndStatus"
//个人平台-修改保险订单时获取详情【New】
#define Person_Get_InsuranceOrder_Detail_URL     @"zkmlperson/mobileTerminal/findInsuranceOrder"
//个人平台-获取保险公司列表【New】
#define Person_Get_InsuranceCompany_List_URL     @"zkmlperson/mobileTerminal/reqInsuranceCompanyList"
//个人平台-获取车型、品牌 【New】
#define Person_Get_InsuranceCarBrandAndType_List_URL     @"zkmlperson/mobileTerminal/reqbrandAndTypeList"


//个人支付接口 【New】
#define PERSON_ALIPAY_URL @"zkmlperson/mobileTerminal/doPay" //+
//个人平台-注册校验手机号接口接口 【New】
#define PERSON_REGISTERVERIFY_URL @"zkmlperson/mobileTerminal/registerVerifyPhone"
//个人平台-获取注册验证码接口 【New】
#define PERSON_REQPHONEVERRFICATION_URL @"zkmlperson/mobileTerminal/reqPhoneVerificationCode"
//个人平台-注册校验验证码接口 【New】
#define PERSON_VERIFYVERIFICATION_URL @"zkmlperson/mobileTerminal/verifyVerificationCode"
//个人平台-注册密码接口 【New】
#define PERSON_DOREGISTER_URL @"zkmlperson/mobileTerminal/doRegister"
//个人平台-找回密码校验手机号接口 【New】
#define PERSON_FINDPASSWORDVERIFY_URL @"zkmlperson/mobileTerminal/findPasswordVerifyPhone"
//个人平台-找回密码校验验证码接口 【New】
#define PERSON_FINDPASSVERIFYVERIFICATIONCODE_URL @"zkmlperson/mobileTerminal/findPasswordVerifyVerificationCode"
//个人平台-找回密码设置密码 【New】
#define PERSON_SETUSERPASSWORD_URL @"zkmlperson/mobileTerminal/setUserPasssword"


//个人平台-新版消息分类 【New】
#define PERSON_NewMessage_Category_URL @"zkmlperson/mobileTerminal/getUserRecentMessagesCategories"
//个人平台-新版消息分类下的最近消息记录 【New】
#define PERSON_NewMessage_Category_Message_URL @"zkmlperson/mobileTerminal/getUserRecentMessagesByCategory"
//个人平台-新版消息分类下通知公告、系统通知消息 【New】
#define PERSON_NewMessage_Notice_Message_URL @"zkmlperson/mobileTerminal/getNoticeList"
//个人平台-新版消息分类下通知公告、系统通知详情 【New】
#define PERSON_NewMessage_Notice_Detail_URL @"zkmlperson/mobileTerminal/getNoticeInfoById"
//个人平台-新版消息分类下通知公告改为已读状态 【New】
#define PERSON_NewMessage_Notice_HaveRead_URL @"zkmlperson/mobileTerminal/modifyNoticeIsReadByAuthid"

//版本更新
#define PERSON_FindAppVersionHelpListById_URL @"zkmlperson/mobileTerminal/findAppVersionHelpListById"


//个人平台-行程助手 【New】
#define PERSON_TravelAssistant__URL @"zkmlperson/mobileTerminal/travelAssistant"

//帮助中心列表
#define PERSON_HelpCenterList_URL @"zkmlperson/mobileTerminal/queryHelps"
//帮助中心详情
#define PERSON_HelpCenterDetail_URL @"zkmlperson/mobileTerminal/getHelp"
//帮助中心有用数和没有数
#define PERSON_HelpCenterUsefulAndUselessCount_URL @"zkmlperson/mobileTerminal/getHelpCommentSummary"
//帮助中心该用户是否点击有用数和没有数
#define PERSON_HelpCenterIsClickUsefulOrUseless_URL @"zkmlperson/mobileTerminal/getHelpComment"
//添加有用没用
#define PERSON_HelpCenterAddUsefulOrUseless_URL @"zkmlperson/mobileTerminal/addHelpComment"


//意见反馈
#define PERSON_FeedBack_URL @"zkmlperson/mobileTerminal/addFeedBack"
//反馈历史
#define PERSON_FeedBackList_URL @"zkmlperson/mobileTerminal/feedbackList"

//一键报警模块
//获取紧急联系人列表
#define PERSON_OneKeyPoliceConnecterList_URL @"zkmlperson/mobileTerminal/onlineCarFindCommonContactsList"
//获取联系人关系
#define PERSON_OneKeyPoliceConnecterRelationList_URL @"zkmlperson/mobileTerminal/onlineCarFindContactsRelationList"
//添加紧急联系人
#define PERSON_OneKeyPoliceAddConnecter_URL @"zkmlperson/mobileTerminal/onlineCarCreateContacts"
//修改紧急联系人
#define PERSON_OneKeyPoliceEditConnecter_URL @"zkmlperson/mobileTerminal/onlineCarUpdateContactsById"
//删除紧急联系人
#define PERSON_OneKeyPoliceDeleteConnecter_URL @"zkmlperson/mobileTerminal/onlineCarDeleteContactsById"
//发起求助
#define PERSON_OneKeyPoliceRequestHelp_URL @"zkmlperson/mobileTerminal/onlineCarCreateOrderAlarm"
//安全到达
#define PERSON_OneKeyPoliceSafeArrive_URL @"zkmlperson/mobileTerminal/onlineCarPassengerConfirmSecurity"
//获取订单是否发起过一键报警
#define PERSON_OneKeyPoliceIsHappen_URL @"zkmlperson/mobileTerminal/onlineCarFindOrderAlarmByOrderId"

//face++相关接口
//监测人脸的接口
#define FacePlus_DetectFace_URL @"https://api-cn.faceplusplus.com/facepp/v3/detect"

//验证是否已经人采集过底片的接口
#define PERSON_FacePlusVerify_ExistPhoto_URL @"zkmlperson/mobileTerminal/verifyIsPhoto"
//采集人脸图片
#define PERSON_FacePlus_CollectPhote_URL @"mobileTerminal/photoCollecting"
//对比人脸图片
#define PERSON_FacePlus_ComparePhote_URL @"zkmlperson/mobileTerminal/contrastImage"


//新能源鸣笛寻车
#define PERSON_FindCar_ByWhistle_URL @"zkmlperson/mobileTerminal/v1/greenLogistics/whistlingFindCar"
//新能源一键开门
#define PERSON_OpenDoor_ByOneKey_URL @"zkmlperson/mobileTerminal/v1/greenLogistics/unLockCar"
//新能源一键关门
#define PERSON_CloseDoor_ByOneKey_URL @"zkmlperson/mobileTerminal/v1/greenLogistics/lockCar"

//获取生成二维码时需要的数据
#define PERSON_GetCodeNeedData_URL @"zkmlperson/mobileTerminal/reqProject"
//获取个人为开票订单
#define PERSON_OnlineCarNoInvoiceOrderList_URL @"zkmlperson/mobileTerminal/v1/onlineCar/getOnlineCarHashNoInvoiceOrderWithPage"
//开具发票
#define PERSON_OpenOnlineCarInvoice_URL @"zkmlperson/mobileTerminal/v1/onlineCar/doApplyInvoice"
//开票历史列表
#define PERSON_HadOpenOnlineCarInvoiceList_URL @"zkmlperson/mobileTerminal/v1/onlineCar/getOnlineCarHistoryApplyInvoiceWithPage"
//开票历史详情
#define PERSON_HadOpenOnlineCarInvoiceDetail_URL @"zkmlperson/mobileTerminal/v1/onlineCar/getInvoiceDetail"
//获取行程列表
#define PERSON_HadOpenOnlineCarInvoiceDetailApplyList_URL @"zkmlperson/mobileTerminal/v1/onlineCar/findOnlineCarOrderListByApplyId"
//获取航班信息，根据起始点
#define PERSON_GetFlightList_ByStartAndEndCity_URL @"zkmlperson/mobileTerminal/obtDeptAndArrCityFlights"



/****新增常用路线和常用地址接口****/
//新增常用地址
#define PERSON_MobileTerminalAddOwnAddress_URL @"zkmlperson/mobileTerminal/addOwnAddress"
//新增常用路线
#define PERSON_MobileTerminalAddOwnAddressRoute_URL @"zkmlperson/mobileTerminal/addOwnAddressRoute"
//删除常用地址
#define PERSON_MobileTerminalDeleteOwnAddress_URL @"zkmlperson/mobileTerminal/deleteOwnAddress"
//删除常用路线
#define PERSON_MobileTerminalDeleteOwnAddressRoute_URL @"zkmlperson/mobileTerminal/deleteOwnAddressRoute"
//获取常用地址列表
#define PERSON_MobileTerminalObtOwnAddressList_URL @"zkmlperson/mobileTerminal/obtOwnAddressList"
//获取常用路线详情
#define PERSON_MobileTerminalObtOwnAddressRouteByRoutId_URL @"zkmlperson/mobileTerminal/obtOwnAddressRouteByRoutId"
//获取常用路线列表
#define PERSON_MobileTerminalObtOwnAddressRouteList_URL @"zkmlperson/mobileTerminal/obtOwnAddressRouteList"
//修改常用路线
#define PERSON_MobileTerminalUpdateOwnAddressRoute_URL @"zkmlperson/mobileTerminal/updateOwnAddressRoute"
//修改常用路线排序值
#define PERSON_MobileTerminalUpdateOwnAddressRouteSortNo_URL @"zkmlperson/mobileTerminal/updateOwnAddressRouteSortNo"
//修改常用地址排序值
#define PERSON_MobileTerminalUpdateOwnAddressSortNo_URL @"zkmlperson/mobileTerminal/updateOwnAddressSortNo"
//常用地址和常用路线查询
#define PERSON_MobileTerminalObtOwnAddressAndRouteList_URL @"zkmlperson/mobileTerminal/obtOwnAddressAndRouteList"
//常用地址和常用路线查询(包含历史数据)
#define PERSON_MobileTerminalObtOwnAddressAndRouteListWithHistory_URL @"zkmlperson/mobileTerminal/obtOwnAddressRouteListWithHistory"


#endif /* PersonInterfaceHeader_pch */
