//
//  WJRegionManager.h
//  LocationRailDemo
//
//  Created by 贺文杰 on 2020/12/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WJRegionManager : NSObject

+ (instancetype)shareInstance;

@property (nonatomic, strong) NSArray *locationArr;

- (void)getNowStatus;

- (void)starMonitorRegion;

// 本地通知
- (void)registerNotificationWithMsg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
