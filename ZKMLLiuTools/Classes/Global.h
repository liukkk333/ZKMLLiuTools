//
//  Global.h
//  EasyCar
//
//  Created by QQSS on 15/5/26.
//  Copyright (c) 2015年 TYG. All rights reserved.
//

#ifndef EasyCar_Global_h
#define EasyCar_Global_h

//上下车地点
typedef enum  {
    upPlaceType,    //上车地点
    downPlaceType,   //下车点
    viaPlaceType,    //途径地
    destinationPlaceType,  //目的地
    destinationUpPlaceType  //目的地的上车地点
} PlaceType;

//审核订单的状态
typedef enum  {
    CheckOrderStatusSuccess,  //审核通过
    CheckOrderStatusReject,   //审核退回
    CheckOrderStatusCancel,   //审核取消
    CheckOrderStatusOne,      //一级审核中
    CheckOrderStatusTwo,      //二级审核中
    CheckOrderStatusThree,    //三级审核中
    CheckOrderStatusWaitOutOrgan,//待局直审核
    CheckOrderStatusOther     //其他
} CheckOrderStatus;


//订单的状态
typedef enum  {
    OrderStatusShenHe,          //审核中
    OrderStatusShenHeOutOrgan,  //外单位审核中
    OrderStatusCancel,          //已取消
    OrderStatusReturned,        //已退回
    OrderStatusReturnedOutOrgan,//外单位已退回
    
    OrderStatusPaiCheSuccess,   //已派车
    OrderStatusWaitPaiChe,      //未派车
    OrderStatusWaitPaiCheCancel,//未派车取消
    OrderStatusRefuse,          //已拒绝
    
    OrderStatusService,         //服务中
    OrderStatusRevoke,          //已撤销
    OrderStatusFailOrder,       //已作废
    
    OrderStatusSuccess,         //已完成
    
    OrderStatusShenHeEnergy,          //新能源车待审核
    OrderStatusWaitChooseCarEnergy,   //新能源车待选车
    OrderStatusChooseCarSuccessEnergy,//新能源车已选车
    OrderStatusServiceEnergy,         //新能源车服务中
    OrderStatusCancelEnergy,          //新能源车已取消【审核取消】
    OrderStatusWaitPaiCheCancelEnergy,//新能源车待选车取消
    OrderStatusReturnedEnergy,        //新能源车已退回【审核退回】
    OrderStatusSuccessEnergy,         //新能源车已完成
    
    OrderStatusOther            //其他状态
} OrderStatus;


//获取屏幕尺寸
CGFloat getScreenWidth();
CGFloat getScreenHeight();


//判断手机号码格式是否正确
BOOL isValidateMobile(NSString *mobile);

//获取设备UUID
NSString *getUUID();

//对字符串str进行MD5编码
NSString *md5(NSString *str);

//是否是 正确的银行卡号格式
BOOL checkCardNo(NSString *cardNo);

//是否是 正确的身份证号格式
BOOL CheckIsIdentityCard(NSString *identityCard);

//判断车架号格式是否正确
BOOL isValidateVinOrCarNoOrEngineNo(NSString *str);

//判断是否车架号后count位
BOOL isValidateVIN_lastNumbers(NSString *vin, NSUInteger count);

//判断车牌号是否正确
BOOL isValidCarNumber(NSString *carNumber);

//判断是否整数
BOOL isValidateAllNumbers(NSString *str);

//判断是否非负浮点数
BOOL isNonNegativeFloat(NSString *str);

//判断是否时间戳格式
BOOL isStamp(NSString *str);

BOOL isStamp1(NSString *str);

BOOL isStamp2(NSString *str);

//将时间戳转换成标准时间格式
NSString *stampToDate(NSString *stamp);
NSString *stampToDateWithoutEightHours(NSString *stamp);
//去除浮点数尾部多余的0
NSString *stringDisposeWithDouble(double val);

//给浮点数保留最多指定位数的小数
NSString *newFloatWithMaxNumber(double val, int numberOfPlace);
NSString *newFloatStringWithMaxNumber(NSString *floatString, int numberOfPlace);

//判断val是否非空
BOOL notNull(id val);

//后台上报车辆位置信息时，需要传车牌号。而车牌号首位的省简称是汉字，会变成乱码，所以要改成英文字符上传
NSString *hashMapCarNo(NSString *carno);

//新版日期格式 当年的日期只显示月-日
NSString *newDateStringFromString(NSString *firstDateString);
//新版日期格式  不包含汉字
NSString *newDateWithoutChineseStringFromString(NSString *firstDateString) ;
NSString *newYearMonthDayDateStringFromString(NSString *firstDateString);

//yyyy年MM月dd日
NSString *DateStringWithYearMonthDayAndChineseWordFromDate(NSDate *date);
//yyyy-MM-dd
NSString *DateStringWithYearMonthDayWithoutChineseWordFromDate(NSDate *date);
//yyyy/MM/dd
NSString *DateStringWithYearMonthDayWithoutChineseWordWithLineFromDate(NSDate *date);
//yyyy年MM月
NSString *DateStringWithYearMonthAndChineseWordFromDate(NSDate *date);
//yyyy-MM
NSString *DateStringWithYearMonthWithoutChineseWordFromDate(NSDate *date);
//MM-DD
NSString *DateStringWithMonthDayWithoutChineseWordFromDate(NSDate *date);
//HH:mm
NSString *DateStringWithHourMinuteFromDate(NSDate *date);

//在程序的临时文件夹中创建一个临时文件，用于在iOS5系统中调试
//Xcode7不支持iOS5设备真机调试

//创建文件
void createFile();

void writeFile(NSString *str);
//让textView文字动态垂直巨宗
void setTextViewTextCenter(UITextView *textView);
//去除一个字典中的空值（当需要把一个字典保存到本地时，其中不能有空值）
void filterNullValueInDictionary(NSMutableDictionary *dic);
void filterNullValueInDictionary1(NSMutableDictionary *dic);

//将#ffffff变为可用的RGB
UIColor * colorWithRGBString(NSString *stringToConvert);

//自定义image(传首个字符，生成一张图片)
UIImage * setupNewImage(NSString *firstStr);
UIImage * setupNewImageWithBackgroundColor (NSString *firstStr,UIColor *textColor,UIColor *backgroundColor) ;

//计算字的长宽
CGSize stringSize(NSString *str,CGFloat font,CGFloat maxWidth);

//设置UITextField的提示文字的背景色为#666666
NSAttributedString * createPlaceholderBackgroundColorWithString(NSString *str);

NSAttributedString * createPlaceholderBackgroundColorWithStringAndFont(NSString *str,CGFloat font);

NSString * arrayToJSONString(NSArray *array);
//NSString * dictionaryToJSONString(NSDictionary *dic);
NSString *convertToJsonData(NSDictionary *dict);

//由颜色生成图片
UIImage * createImageWithColor(UIColor* color,CGFloat height);

//拨打电话
void systemPhoneClick (NSString *phoneNumberStr);
//发信息
void systemMessageClick (NSString *phoneNumberStr);
//隐藏导航栏下面的横线
void hideNavigationBarLineView(UIViewController *vc);

/**
 判空赋值处理

 @param ret 需要判空的数据
 @param typeStr 数据的类型：NSArray、NSDictionary、NSString
 @param isNeed 是否需要对空数据初始化：只对NSString类型的数据初始化
 @param str 需要初始化的内容
 @return 返回判空后的数据：还是原来的类型
 */
//id isJudgeNull (id ret , NSString *typeStr ,BOOL isNeed ,NSString* str);


NSArray * judgeNSArrayNull (NSArray *arr);
NSDictionary * judgeNSDictionaryNull (NSDictionary *dic);
NSString * judgeNSStringNull (NSString *string,NSString *defaultString);

NSString * getFirstCharactorFromString (NSString *aString);

//获取精确的城市名称，去除最后一个市，如：合肥市->合肥
NSString * getAccurateCityNameByStr (NSString *cityName);

//跳转到系统设置
void openSettingPage();
//将数组中的某个关键字，按照指定的字符串进行拼接
NSString * appendWithArray(NSArray *array, NSString *appendWordStr ,NSString *keyWord);
//将数组中的元素按照指定的字符串进行拼接
NSString * appendWithArrayWithoutKeyWord(NSArray *array, NSString *appendWordStr);
//给view设置贝塞尔曲线，画圆角
void createUIBezuerPath(UIView *view, UIRectCorner rectCorner);

#endif
