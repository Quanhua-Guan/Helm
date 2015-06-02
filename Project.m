//
//  Project.m
//  DUTStructureMonitor
//
//  Created by heartme on 15/2/26.
//  Copyright (c) 2015年 DUT. All rights reserved.
//

#import "Project.h"

@implementation Project

/*
 // 创建时间
 @property (nonatomic, readwrite, strong) NSNumber *createdTime;
 
 // 项目ID(在此非主键, 由服务器返回)
 @property (nonatomic, readwrite, strong) NSString *projectID;
 
 // 项目名称
 @property (nonatomic, readwrite, strong) NSString *name;
 
 // 简介
 @property (nonatomic, readwrite, strong) NSString *brifIntroduction;
 
 // 经度
 @property (nonatomic, readwrite, strong) NSNumber *longitude;
 
 // 纬度
 @property (nonatomic, readwrite, strong) NSNumber *latitude;
 
 // 用户ID, 创建项目的用户ID
 @property (nonatomic, readwrite, strong) NSString *createrID;
 */

+ (NSArray *)propertiesSQLType {
    return @[@"double", @"varchar(20)", @"varchar(20)", @"varchar(50)", @"double", @"double", @"varchar(20)"];
}

@end
