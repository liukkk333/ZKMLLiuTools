//
//  YFApplyUserDTOModel.h
//  NewEasyCar
//
//  Created by 张凯翔 on 2017/9/18.
//  Copyright © 2017年 zkx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@protocol YFApplyUserDTOModel

@end

@interface YFApplyUserDTOModel : JSONModel

@property (nonatomic,copy) NSString *applyUserId;

@property (nonatomic,copy) NSString *applyId;

@property (nonatomic,strong) NSString *dateCreated;

@property (nonatomic,strong) NSString *lastUpdated;

@property (nonatomic,copy) NSString *userRealName;

@property (nonatomic,copy) NSString *userPhone;

@property (nonatomic,copy) NSString *userDuty;

@property (nonatomic,copy) NSString *userId;

@end
