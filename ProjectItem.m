//
//  ProjectItem.m
//  DUTStructureMonitor
//
//  Created by heartme on 15/2/26.
//  Copyright (c) 2015年 DUT. All rights reserved.
//

#import "ProjectItem.h"

@implementation ProjectItem

/*
 // 创建时间
 @property (nonatomic, readwrite, strong) NSNumber *createdTime;
 
 // 项目ID(在此非主键, 由服务器返回)
 @property (nonatomic, readwrite, strong) NSString *projectItemID;
 
 // 项目子项名称
 @property (nonatomic, readwrite, strong) NSString *name;
 
 // 简介
 @property (nonatomic, readwrite, strong) NSString *brifIntroduction;
 
 // 数据存储使用的所有文件名,以分好(;)隔开,每种数据文件都有对应的格式:(以下为例子)
 // 加速度数据文件  20150226094350.854_AccelerateData.txt
 // 偏角数据文件   20150226094350.854_AngleData.txt
 // 图片数据文件   20150226094350.854_ImageData.jpg
 // GPS数据文件   20150226094350.854_GPSData.txt
 @property (nonatomic, readwrite, strong) NSString *fileName;
 
 // 所属项目的创建时间
 @property (nonatomic, readwrite, strong) NSNumber *projectCreatedTime;
 */

+ (NSArray *)propertiesSQLType {
    return @[@"double", @"varchar(20)", @"varchar(20)", @"varchar(50)", @"varchar(50)", @"double"];
}

@end
