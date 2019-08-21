//
//  SuperviseInterfaceHeader.pch
//  NewRefactorEasyCar
//
//  Created by zkml-mac on 2019/4/18.
//  Copyright © 2019 张凯翔. All rights reserved.
//

#ifndef SuperviseInterfaceHeader_pch
#define SuperviseInterfaceHeader_pch

//监督平台多车定位
#define SUPERVISE_MapGet @"supervise/appPosition/allCarPositionTimer"
//监督平台获取基础信息
#define SUPERVISE_MapLogin @"supervise/appStaff/reqUserMsgByAuthId"
//监督平台单车定位接口
#define SUPERVISE_MapGetSignal @"supervise/appPosition/singleCarPositionTimer"
//监督平台获取使用性质
#define SUPERVISE_MapGetSignType @"supervise/appPosition/reqCarSignList"
//监督平台获取车辆,无任务,有任务,异常总数量
#define SUPERVISE_MapGetAllNum @"supervise/appPosition/reqPositionCarCountMsg"

/*****************预警信息接口******************/
/**无任务列表接口*/
#define SUPERVISE_AppWarningReqNoTaskList_URL @"supervise/appWarning/reqNoTaskList"

/**终端异常列表接口*/
#define SUPERVISE_AppWarningReqTerminalExceptionList_URL @"supervise/appWarning/reqTerminalExceptionList"

/**电子围栏列表接口*/
#define SUPERVISE_AppWarningReqFenceInfoList_URL @"supervise/appWarning/reqFenceInfoList"

/**超速报警列表接口*/
#define SUPERVISE_AppWarningReqOverSpeedList_URL @"supervise/appWarning/reqOverSpeedList"

/**节假日出行列表接口*/
#define SUPERVISE_AppWarningReqHolidayList_URL @"supervise/appWarning/reqHolidayList"

/**申诉接口*/
#define SUPERVISE_AppWarningAppealNoTask_URL @"supervise/appWarning/appealNoTask"

/**无任务出行详情接口*/
#define SUPERVISE_AppWarningReqNoTaskDetails_URL @"supervise/appWarning/reqNoTaskDetails"

/**节假日出行详情接口*/
#define SUPERVISE_AppWarningReqHolidayDetails_URL @"supervise/appWarning/reqHolidayDetails"

/**轨迹接口*/
#define SUPERVISE_AppWarningReqCarTrack_URL @"supervise/appWarning/reqCarTrack"


//编制管理-获取编制审核列表
#define SUPERVISE_Get_CheckComplieList_URL           @"supervise/appCompile/reqCompileList"
//编制管理-审核操作接口
#define SUPERVISE_CheckComplie_URL           @"supervise/appCompile/doCheckCompile"

//监督管理 搜索单位或者车牌号
#define SUPERVISE_SearchOrgan_URL           @"supervise/appPosition/searchOrganOrCar"

#endif /* SuperviseInterfaceHeader_pch */
