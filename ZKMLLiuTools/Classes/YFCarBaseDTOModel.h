//
//  YFCarBaseDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/20.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface YFCarBaseDTOModel : JSONModel

@property (nonatomic,copy) NSString *carId;
/**
 *   创建日期
 */
@property (nonatomic,copy) NSString *dateCreated;

/**
 *   更新日期
 */
@property (nonatomic,strong) NSString *lastUpdated;

/**
 *   车牌，普遍车牌不拼底色。此外存底色加车牌号。如：黄皖AR342J
 */
@property (nonatomic,strong) NSString *carNo;

/**
 *   品牌，建议使用原表，但改变这里直接存字符串，而不是外键
 */
@property (nonatomic,copy) NSString *brand;

/**
 *   型号，建议使用原表，但改变这里直接存字符串，而不是外键
 */
@property (nonatomic,copy) NSString *model;

/**
 *   颜色，建议使用原表，但改变这里直接存字符串，而不是外键
 */
@property (nonatomic,copy) NSString *color;



/**
 *   车辆图片，主图。其它在相册表中
 */
@property (nonatomic,copy) NSString *imgUrl;

/**
 *   车型主键
 */
@property (nonatomic,copy) NSString *cartypeId;

/**
 *   地区ID
 */
@property (nonatomic,copy) NSString *areaId;

/**
 *   座位数
 */
@property (nonatomic,copy) NSString *seatNum;

/**
 *   车辆编号
 */
@property (nonatomic,copy) NSString *carCode;

/**
 *   单位ID
 */
@property (nonatomic,copy) NSString *organId;

/**
 *   部门ID
 */
@property (nonatomic,copy) NSString *deptId;

@end
