//
//  IPhoneX.pch
//  NewRefactorEasyCar
//
//  Created by 张凯翔 on 2018/4/16.
//  Copyright © 2018年 张凯翔. All rights reserved.
//

#ifndef IPhoneX_pch
#define IPhoneX_pch

//状态栏高度
#define  kStatusBarHeight   ((IS_iPhoneX|| IS_iPhone_Xr||IS_iPhone_Xr2||IS_iPhone_Xs == YES  || IS_iPhone_Xs_Max == YES )? 44.f : 20.f)

//导航栏高度
#define  kNavigationBarHeight  44.f

//tabar栏的高度
#define  kTabbarHeight        ((IS_iPhoneX || IS_iPhone_Xr || IS_iPhone_Xr2 || IS_iPhone_Xs ||IS_iPhone_Xs_Max)?(49.f+34.f) : 49.f)

// Tabbar safe bottom margin.
#define  kTabbarSafeBottomMargin      ((IS_iPhoneX || IS_iPhone_Xr ||IS_iPhone_Xr2 || IS_iPhone_Xs || IS_iPhone_Xs_Max ) ? 34.f : 0.f)

// Status bar & navigation bar height.
#define  kStatusBarAndNavigationBarHeight  ((IS_iPhoneX || IS_iPhone_Xr ||IS_iPhone_Xr2 ||IS_iPhone_Xs || IS_iPhone_Xs_Max ) ? 88.f : 64.f)


//判断是否是ipad
#define isPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

//判断iPhone4系列
#define kiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone5系列
#define kiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone6系列
#define kiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iphone6+系列
#define kiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)

//判断是否iPhone X
#define IS_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPHoneXr
#define IS_iPhone_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)

#define IS_iPhone_Xr2 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1624), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)

//判断iPhoneXs
#define IS_iPhone_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs Max
#define IS_iPhone_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)


#endif /* IPhoneX_pch */
