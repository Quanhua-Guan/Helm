//
//  ProjectItem.h
//  DUTStructureMonitor
//
//  Created by heartme on 15/2/26.
//  Copyright (c) 2015年 DUT. All rights reserved.
//

#import "Base.h"

@interface ProjectItem : Base

// 创建时间
@property (nonatomic, readwrite, strong) NSNumber *createdTime;

// 项目ID(在此非主键, 由服务器返回)
@property (nonatomic, readwrite, strong) NSString *projectItemID;

// 项目子项名称
@property (nonatomic, readwrite, strong) NSString *name;

// 简介
@property (nonatomic, readwrite, strong) NSString *brifIntroduction;

// 数据存储使用的所有文件名+状态,以分好(;)隔开,每种数据文件都有对应的格式:
// 状态
// "01"-"本地云端": "0"表示不存在, "1"表示存在.
// 例子:
// "01": 本地不存在, 云端存在
// "11": 本地存在,云端存在
// "10": 本地存在,云端不存在
// --例子--
// 加速度数据文件  20150226094350.854_AccelerateData.txt,10
// 偏角数据文件   20150226094350.854_AngleData.txt,10
// 图片数据文件   20150226094350.854_ImageData.jpg,10
// GPS数据文件   20150226094350.854_GPSData.txt,10
@property (nonatomic, readwrite, strong) NSString *fileName;

// 所属项目的创建时间
@property (nonatomic, readwrite, strong) NSNumber *projectCreatedTime;

@end
