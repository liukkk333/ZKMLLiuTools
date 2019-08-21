//
//  CommonPrefixHeader.pch
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2019/3/29.
//  Copyright © 2019年 张凯翔. All rights reserved.
//

#ifndef CommonPrefixHeader_pch
#define CommonPrefixHeader_pch



#ifdef DEBUG //处于开发阶段
#define SNLog(...) NSLog(__VA_ARGS__)
#define GHConsoleHidden @"0"
#define isAppRelease  @"0"
#else  //处于发布阶段
#define SNLog(...)
#define GHConsoleHidden @"1"
#define isAppRelease  @"1"
#endif


#ifdef DEBUG //处于开发阶段
#define GHLog(frmt, ...)    LOG_OBJC_MAYBE(frmt, ##__VA_ARGS__)

#define LOG_OBJC_MAYBE(frmt, ...) \
LOG_MAYBE(__PRETTY_FUNCTION__, frmt, ## __VA_ARGS__)

#define LOG_MAYBE(fnct,frmt, ...)                       \
do { if(1 & 1) LOG_MACRO(fnct, frmt, ##__VA_ARGS__); } while(0)


#define LOG_MACRO(fnct, frmt, ...) \
[[GHConsole sharedConsole] function : fnct                          \
line : __LINE__                                           \
format : (frmt), ## __VA_ARGS__]
#else  //处于发布阶段
#define GHLog(...)
#endif

#define  KWS(ws) __weak typeof (&*self) ws=self //弱引用
/** 调用block内部用strong修饰，确保self不会提前释放*/
#define __weak_self          __typeof__(self) __weak weakself = self;
#define __strong_self        __strong __typeof(weakself) strongSelf = weakself;


#define KC0 @"#000000"
#define KC1 @"#03a9f4"
#define KC2 @"#ff6040"     //重复定义
#define KC3 @"#3dcc6d"     //重复定义
#define KC4 @"#ff992b"     //重复定义
#define KC5 @"#5e9beb"
#define KC6 @"#63c785"
#define KC7 @"#333333"     //重复定义
#define KC8 @"#666666"     //重复定义
#define KC9 @"#999999"     //重复定义
#define KC75 @"#75c5f7"
#define KCC @"#cccccc"     //重复定义
#define KCE5 @"#e5e5e5"    //重复定义
#define KCDefault @"#f5f3f0"
#define KCLineDefault @"#F5F3F3"
#define kCNavNormal KC5//默认导航栏颜色 之前默认为YFColor(22, 173, 248)

#define kColor4897FF @"#4897ff"
#define kColorC8E0FF @"#c8e0ff"
#define kColor3DCC6D @"#3dcc6d"
#define kColorFF992B @"#ff992b"
#define kColorFF6040 @"#ff6040"
#define kColor333333 @"#333333"
#define kColor666666 @"#666666"
#define kColor999999 @"#999999"
#define kColorCCCCCC @"#cccccc"
#define kColorE5E5E5 @"#e5e5e5"
#define kColorF6F6F6 @"#f6f6f6"
#define kColorFFB22C @"#ffb22c"
#define kColorFFC12C @"#ffc12c"

//新功能的界面，统一用pt
#define kSizePt(r) (r)
#define kFontPt(r) (r)

//计算视图大小
#define kSize(r)  (ceil(([UIScreen mainScreen].bounds.size.width < 400)?(375.0/1080.0*(r)):(412.0/1080.0*(r))))
//由px到pt
#define kFont(r) (ceil(([UIScreen mainScreen].bounds.size.width < 400)?(375.0/1080.0*(r)):(412.0/1080.0*(r))))

////计算视图大小
//#define kSize(r) ((r)/3.0)
////由px到pt
//#define kFont(r) ((r)/3.0)



//RGB颜色
#define YFColor(r,g,b)  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
//屏幕的宽度
#define kSelfWidth  [UIScreen mainScreen].bounds.size.width
//屏幕的高度
#define kSelfHeight [UIScreen mainScreen].bounds.size.height
//获取系统版本号
#define SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] doubleValue]
//标准系统状态栏高度
#define SYS_STATUSBAR_HEIGHT 20
//数据存本地
#define USER_D [NSUserDefaults standardUserDefaults]
//热点栏高度
#define HOTSPOT_STATUSBAR_HEIGHT 20
#define APP_STATUSBAR_HEIGHT (CGRectGetHeight([UIApplication sharedApplication].statusBarFrame))
//根据APP_STATUSBAR_HEIGHT判断是否存在热点栏
#define IS_HOTSPOT_CONNECTED (APP_STATUSBAR_HEIGHT==(SYS_STATUSBAR_HEIGHT+HOTSPOT_STATUSBAR_HEIGHT)?YES:NO)
//iOS7.0之后，状态栏与界面一体化了，为了与低版本系统界面保持一致，需要在顶部留20个像素的空白
#define TopBlankHeight (SYSTEM_VERSION>=7.0?20:0)
//顶部导航条高度
#define BarHeight 44

//在判断浮点数相等时，实际上是判断两个浮点数的值是否在某个很小的数范围内
#define EPSILON 0.0001
//获取view的最大x/y
#define MAX_X(view) CGRectGetMaxX(view.frame)
#define MAX_Y(view) CGRectGetMaxY(view.frame)


#define ScreenSize [UIScreen mainScreen].bounds.size
#define kThumbnailLength    ([UIScreen mainScreen].bounds.size.width - 5*5)/4
#define kThumbnailSize      CGSizeMake(kThumbnailLength, kThumbnailLength)
#define ViewOrigin(view)   (view.frame.origin)
#define ViewSize(view)  (view.frame.size)


/*****************常用的宏定义字段******************/
#define kStartUseTimeLabelText @"开始用车时间"
#define kEndUseTimeLabelText @"预计结束时间"
#define kUseCarPersonDepartmentPlaceholder @"请选择部门"
#define kUseCarPersonPlaceholder @"请选择用车人"
#define kOftenUseInformation @"oftenUseForUserID" //预约用车
#define kCurrentCity  @"currentCity" //当前城市
#define kCurrentLocation @"currentLocation"  //当前位置
#define kCurrentDetailAddress @"currentDetailAddress"  //当前详细地址
#define kCurrentLocationLatitude @"currentLocationLatitude" //当前位置所在的经纬度
#define kCurrentLocationLongitude @"currentLocationLongitude" //当前位置所在的经纬度
#define kStationList  @"stationList" //火车站列表数据处理
#define kAppVersion @"appVersion" //当前App的版本

#define kSaveHeadPhoto @"kSaveHeadPhoto"//保存头像---退出后不清除
#define kAppVersionTime @"appVersionTime"//保存稍后提醒的时间
#define kFromApplyView @"fromApplyView" //出行界面从申请界面跳转到订单界面


//支付宝回调
#define kAliPayCallBack @"AliPayCallBack"

//我的界面 更多管理 保存数据
#define kMyHasShowArray @"kMyHasShowArray"
#define kMyWaitShowArray @"kMyWaitShowArray"


//公务用车界面 更多管理 保存数据
#define kTravelHasShowArray @"kTravelHasShowArray"
#define kTravelWaitShowArray @"kTravelWaitShowArray"


//通勤车 关注的车辆
#define kCommuteConcernCar @"kcommuteConcernCar"


//保存信息到本地时所用的关键字
#define KEY_UUID @"YF_UUID"            //获取设备UUID时所需
#define KEY_USERNAME @"YF_Username"    //用户名
#define KEY_PASSWORD @"YF_Password"    //密码
#define KEY_PHOTO    @"CarEasy_Photo"       //头像
#define KEY_BANNER    @"CarEasy_Banner"     //banner图
#define KEY_REASON    @"CarEasy_Reason"     //banner图
//加入单位审核的状态
#define KStatusWaitCheck @"WAITCHECK"
#define KStatusReject @"REJECT"
#define KStatusApprove @"APPROVE"

//启动页地址
#define kUserDefaultLuanchAdUrl @"kUserDefaultLuanchAdUrl"

//app UI优化需求 按钮样式（注册登录模块按钮不改动）
#define kBigBtnHeight kSize(126) //大按钮高度
#define kMiddleBtnHeight kSize(114) //中按钮高度
#define kSmallBtnHeight kSize(78) //小按钮高度

#define kBigBtnFont kFont(48) //大按钮字体
#define kMiddleBtnFont kFont(48) //中按钮字体
#define kSmallBtnFont kFont(42) //小按钮字体

#define kBigBtnCornerRadius kSize(6) //大按钮圆角
#define kMiddleBtnCornerRadius kSize(6) //中按钮圆角
#define kSmallBtnCornerRadius kSize(6) //小按钮圆角

#define kMiddleBtnContainerHeight kSize(162) //中按钮container的高度

//维保底部tabbar高度
#define kMaintainTabbarViewHeight kSize(150)

//环信
#define iPhoneX_BOTTOM_HEIGHT  ([UIScreen mainScreen].bounds.size.height==812?34:0)
#define NSEaseLocalizedString(key, comment) [[NSBundle bundleWithURL:[[NSBundle mainBundle] URLForResource:@"EaseUIResource" withExtension:@"bundle"]] localizedStringForKey:(key) value:@"" table:nil]


#endif /* CommonPrefixHeader_pch */
