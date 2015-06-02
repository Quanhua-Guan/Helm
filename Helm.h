//
//  Helm.h
//  PhotoLock
//
//  Created by 泉华 官 on 14/12/23.
//  Copyright (c) 2014年 CQMH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Base;

@interface BaseDBMasterKey : NSObject

/**
 获取所有
 默认按照主键中的第一个字段降序
 @return NSMutableArray, 如果存在条目;否则,nil.
 */
- (NSMutableArray *)getAll:(Class) tableClass;

/**
 查找
 **/
- (NSMutableArray *)findInTable:(Class)tableClass whereField:(NSString *)field equalToValue:(id)value;

/**
 查找
 **/
- (NSMutableArray *)findInTable:(Class)tableClass whereFields:(NSArray *)fields equalToValues:(NSArray *)values;

/**
 添加
 @param object 需要删除的对象
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)add:(Base *)object;

/**
 添加
 @param objects 需要删除的对象的数组
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)addObjects:(NSArray *)objects;

/**
 删除
 @param object 需要删除的对象
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)delete:(Base *)object;

/**
 删除
 @param objects 需要删除的对象数组
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)deleteObjects:(NSArray *)objects;

/**
 删除
 **/
- (BOOL)deleteFromTable:(Class)tableClass whereField:(NSString *)field equalToValue:(id)value;

/**
 删除
 **/
- (BOOL)deleteFromTable:(Class)tableClass whereFields:(NSArray *)fields equalToValues:(NSArray *)values;

/**
 修改对象
 注意: 主键不可修改
 @param object 需要修改的对象
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)update:(Base *)object;

/**
 修改多个对象
 注意: 主键不可修改
 @param objects 需要修改的对象的数组
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)updateObjects:(NSArray *)objects;

/**
 删除某个表的所有数据
 @return BOOL YES,操作成功;NO,操作失败.
 **/
- (BOOL)clearAll:(Class)tableClass;

/**
 单例1
 **/
+ (BaseDBMasterKey *)defaultDBMasterKey;

/**
 单例2
 **/
+ (BaseDBMasterKey *)DBMasterKeyWithDBName:(NSString *)dbName;

@end
