//
//  主要描述当前工程需要的配置，包括:
//  极光推送、百度统计、百度地图、微信支付、支付宝支付、bugly统计、人脸识别face++、项目bundleID等
//  AppSourece:和运维平台配置的项目合同中的租赁公司相对应，这里配置的统一为线上source
//  Created by 张凯翔 on 2019/1/31.
//  Copyright © 2019年 张凯翔. All rights reserved.

/*
 
 
#pragma mark 通用配置
//bugly统计配置
#define BuglyAppId @"a4152f1c4e"
#define BuglyAppKey @"647ff30b-cec7-467f-8421-b49fee0e94f7"

//face++配置
#define FacePlusApiKey   @"5iZliSZGTV_SDcTKiwMRr3mkSd_ZA6Q8"
#define FacePlusApiSecret   @"hgXoTX4gphJv-rWWn6ZoH68ikoJx-25C"

//微信支付（支付密钥需放在服务端）
#define wxAppId   @"wx3a1dc8baa3b81dac"
#define wxAppSecret   @"6001c22c79eb64734368a42ea1e747e6"

#pragma mark 平台IP地址
#define HostName @"http://101.89.137.161:90/"       //用户平台正式环境地址
#define HostName_PERSON @"http://101.89.137.25:6969/"       //个人平台正式环境地址
#define HostName_PERSON_Domain @"http://grapiwx.luoex.com/"     //个人平台正式环境域名地址
#define HostName_RENT @"http://101.89.137.99:90/"       //租赁平台正式环境地址

#pragma mark 云南【项目配置】
//云南新版公务用车易地图的AK值
#define kBaiduMapAK  @"cmkzl8FnpwZz7euN7lqtWH9a1bLHttZW"
//云南新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarYunNan"
//云南新版公务用车易极光推送的key
#define jpushKey @"eb5a34c6af04dfe8893052a6"
//云南百度统计key
#define baiduMjtKey   @"8ab4a9d266"
//云南AppSource
#define AppSource @"LYX0YN440"
//项目属性
static AppProject appProject = ToGProject;


#pragma mark 络易行【项目配置】
//络易行新版公务用车易地图的AK值
#define kBaiduMapAK  @"Xt9cAHOawRsT8GMrfXzpZlMS38yUIfAc"
//络易行新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarLuoYiXing"
//络易行新版公务用车易极光推送的key
#define jpushKey @"09ae37ec2e4591393a84b657"
//络易行百度统计key
#define baiduMjtKey   @"18e34d389f"
//络易行AppSource
#define AppSource @"LYX576974-201804"
//项目属性
static AppProject appProject = LYXProject;


#pragma mark 一汽行【项目配置】
//一汽行地图的AK值
#define kBaiduMapAK  @"oYGLqdcNAlD2qYAMOkffjgR4IlaXByvd"
//一汽行的bundleId
#define kBundleID @"com.zkml.app.EasyCarChangChunYiQi"
//一汽行极光推送的key
#define jpushKey @"3150434a7ef78763b5ca5313"
//一汽行百度统计key
#define baiduMjtKey   @"fffdd9e385"
//一汽行AppSource
#define AppSource @"LYX959977"
//项目属性
static AppProject appProject = ToBProject;


#pragma mark 广西【项目配置】
//广西新版公务用车易地图的AK值
#define kBaiduMapAK  @"WPoDDHHmMELqnkjqEjD1OukBkOla4xra"
//广西新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarBeiHai"
//广西新版公务用车易极光推送的key
#define jpushKey @"be29b7faff603dcdf96f038b"
//广西百度统计key
#define baiduMjtKey   @"97ceee8406"
//广西AppSource
#define AppSource @"LYX708987"
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 安徽重构【项目配置】
//安徽重构公务用车易地图的AK值
#define kBaiduMapAK  @"YeHEUbFmAYpOxPPGA85TG3flr2st2GwH"
//安徽重构公务用车易bundleId
#define kBundleID @"com.zkml.app.AnHuiEasyCar"
//安徽重构公务用车易极光推送的key
#define jpushKey @"9102ddbb997c976ceb0c1978"
//安徽重构百度统计key
#define baiduMjtKey   @"59eb7f3da2"
//安徽重构AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 安徽基层【项目配置】
//安徽基层保障公务用车易地图的AK值
#define kBaiduMapAK  @"v62PS6PjMKS6djMFEwzKnQRv2q4DpGG8"
//安徽基层保障公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarAnHuiBase"
//安徽基层保障公务用车易极光推送的key
#define jpushKey @"caae362ce44a80905d9cb3f7"
//安徽基层百度统计key
#define baiduMjtKey   @"2eca03f30b"
//安徽基层AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 河北新版【项目配置】
//河北新版公务用车易地图的AK值
#define kBaiduMapAK  @"REFIKSL5KjNio4KG5wb95wUoXTE5TNR6"
//河北新版公务用车易bundleId
#define kBundleID @"com.zkml.app.NewEasyCarHeBei"
//河北新版公务用车易极光推送的key
#define jpushKey @"a8268d783d6fb09a65a898ed"
//河北新版百度统计key
#define baiduMjtKey   @"b2ab014b5c"
//河北新版AppSource
#define AppSource @"LYX747445"
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 辽宁【项目配置】
//辽宁新版公务用车易地图的AK值
#define kBaiduMapAK  @"Ib3lvd4pRFyIhgVgC2uMwm6lhmcP3lrT"
//辽宁新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarLiaoNing"
//辽宁新版公务用车易极光推送的key
#define jpushKey @"5b430f11642f0345821e9770"
//辽宁新版百度统计key
#define baiduMjtKey   @"b09a2755d8"
//辽宁新版AppSource
#define AppSource @"LYX996135"
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 贵州六盘水【项目配置】
//贵州六盘水公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarGuiZhou"
//贵州六盘水公务用车易地图的AK值
#define kBaiduMapAK  @"oaf0CiKYUegmGKqRSQ4YKuguE5A1HrlN"
//贵州六盘水公务用车易极光推送的key
#define jpushKey @"576379b84f7833df4e13e142"
//贵州六盘水百度统计key
#define baiduMjtKey   @"b0a6a69337"
//贵州六盘水AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 内蒙古【项目配置】
//内蒙古公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarNeiMengGu"
//内蒙古公务用车易地图的AK值
#define kBaiduMapAK  @"5zKuG69qcA9BC4P4am7StSbrbfpT8ZIC"
//内蒙古公务用车易极光推送的key
#define jpushKey @"949b25f5816255379e367028"
//内蒙古百度统计key
#define baiduMjtKey   @"a53caa6bf4"
//内蒙古AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 宁夏【项目配置】
//宁夏公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarNingXia"
//宁夏公务用车易地图的AK值
#define kBaiduMapAK  @"8uuU9lFbP23VFTQhjEPyj4B6gGSMTrLC"
//宁夏公务用车易极光推送的key
#define jpushKey @"632c18cfd7e607e63b83a422"
//宁夏百度统计key
#define baiduMjtKey   @"6f491c5e99"
//宁夏AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 湖北重构【项目配置】
//湖北重构公务用车易bundleId
#define kBundleID @"com.zkml.app.ReEasyCarHubei"
//湖北重构公务用车易地图的AK值
#define kBaiduMapAK  @"aEmKZLhQk31bBBsUr1GS9W5VTGdYg85D"
//湖北重构公务用车易极光推送的key
#define jpushKey @"1657be14c9ac2b3bbcf9e754"
//湖北重构百度统计key
#define baiduMjtKey   @"0796682b06"
//湖北重构AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 湖北公车管理【项目配置】
//湖北公车管理地图的AK值
#define kBaiduMapAK  @"4CqslOWF7mb8G380OWUei97mWp3KM8Yv"
//湖北公车管理bundleId
#define kBundleID @"com.zkml.app.ReEasyCarHuBeiManager"
//湖北公车管理极光推送的key
#define jpushKey @"2f8c4bbbcb3d7085f7705166"
//湖北公车管理百度统计key
#define baiduMjtKey   @"27e40ab79c"
//湖北公车管理AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 青海重构【项目配置】
//青海公务用车易地图的AK值
#define kBaiduMapAK  @"GErRF2vfAqv6MBOtfQmGMbA2M2HGjRWZ"
//青海公务用车易bundleId
#define kBundleID @"com.zkml.app.ReEasyCarQingHai"
//青海公务用车易极光推送的key
#define jpushKey @"156fcc7c29c11579830334b4"
//青海百度统计key
#define baiduMjtKey   @"fb2ec54d64"
//青海基层AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 山东重构【项目配置】
//山东公务用车易地图的AK值
#define kBaiduMapAK  @"CWj6oeTmOar7q9qzzLQ63AdWPufD9nkg"
//山东公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarShanDong"
//山东公务用车易极光推送的key
#define jpushKey @"59cb03ccc01ec75117d4be76"
//山东百度统计key
#define baiduMjtKey   @"6002432a39"
//山东基层AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 北京【项目配置】
//北京公务用车易地图的AK值
#define kBaiduMapAK  @"5CpFmvSytmmyrBGAUHYYd7mjbrwU8E1p"
//北京公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarBeiJing"
//北京公务用车易极光推送的key
#define jpushKey @"58f377fc66b7051b48c95d0f"
//北京百度统计key
#define baiduMjtKey   @"b4b92dfb7b"
//北京AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 生猪【项目配置】
//生猪地图的AK值
#define kBaiduMapAK  @"zKZpwwfrTZfTO86FeYiuqdfHn4MkRTvN"
//生猪bundleId
#define kBundleID @"com.zkml.app.LivePig"
//生猪极光推送的key
#define jpushKey @"3d8b1356c5f9a2d625cca9ed"
//生猪百度统计key
#define baiduMjtKey   @"c3ad052703"
//生猪AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

#pragma mark 合肥供水【项目配置】
//合肥供水新版公务用车易地图的AK值
#define kBaiduMapAK  @"YRhFzuxCvHS83V8xlUMQKcktxLMNj0c6"
//合肥供水新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarGongShui"
//合肥供水新版公务用车易极光推送的key
#define jpushKey @"a0e48b1d4dceacf60ede2f5b"
//合肥供水百度统计key
#define baiduMjtKey   @""
//合肥供水AppSource
#define AppSource @"LYX873085"


#pragma mark 合肥联通【项目配置】
//联通新版公务用车易地图的AK值
#define kBaiduMapAK  @"FGUI6cSatjfPpM8aBdxnXhSXRMPlOXzI"
//联通新版公务用车易bundleId
#define kBundleID @"com.zkml.app.NewEasyCarLianTong"
//联通新版公务用车易极光推送的key
#define jpushKey @"3c94382a02b45b29817343ca"
//联通新版百度统计key
#define baiduMjtKey   @""
//联通新版AppSource
#define AppSource @"LYX272766"

#pragma mark 宝武易出行【项目配置】
//宝钢易出行百度地图SDK的AK码
#define kBaiduMapAK @"qtykycuEExDwiAOsW699qGC1nqmuEVW3"
//宝钢易出行的BundleId
#define kBundleID @"com.zkml.app.EasyCarBaoGang"
//宝钢易出行的key
#define jpushKey @"2ef12fa8cd62ccf716eb55fe"
//宝钢易出行百度统计key
#define baiduMjtKey   @"0e8e6fcde1"
//宝钢易出行AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToBProject;

#pragma mark 重构驾驶员【项目配置】
//重构驾驶员地图的AK值
#define kBaiduMapAK  @"jKAOIxwtQshpZEiFkWjp3xDzCGBWWdeD"
//重构驾驶员bundleId
#define kBundleID @"com.zkml.app.ReEasyCarDrvier"
//重构驾驶员极光推送的key
#define jpushKey @"0afa58cc0283e64fcbbb0a79"
//重构驾驶员百度统计key
#define baiduMjtKey   @"18534113ee"
//重构驾驶员AppSource
#define AppSource @""
//项目属性
static AppProject appProject = ToGProject;

*/
