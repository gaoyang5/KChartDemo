//
//  KLineItem.h
//  ChartDemo
//
//  Created by xdliu on 2016/12/2.
//  Copyright © 2016年 taiya. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLineItem : NSObject

// 开盘价
@property (nonatomic, copy) NSNumber *open;

// 收盘价
@property (nonatomic, copy) NSNumber *close;

// 最高价
@property (nonatomic, copy) NSNumber *high;

// 最低价
@property (nonatomic, copy) NSNumber *low;

// 日期
@property (nonatomic, copy) NSString *date;

// 成交量 
@property (nonatomic, copy) NSNumber *vol;

// 均线
@property (nonatomic, strong) NSArray *MAs;


/////////////////指数///////////////////////

// RSV9
@property (nonatomic, copy) NSNumber *rsv9;

@end
