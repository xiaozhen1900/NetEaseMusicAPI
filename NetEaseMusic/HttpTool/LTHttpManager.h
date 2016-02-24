//
//  WBHttpManager.h
//  Quick-iOS
//
//  Created by LtRed on 15/11/9.
//  Copyright © 2015年 Lt-Red. All rights reserved.
//

#import <Foundation/Foundation.h>



@class LTHomePlayerLists, LTPlayList, LTHistoryData, LTUserInfo;

@interface LTHttpManager : NSObject
/**
 *  抓去自网页端：获取个人主页数据歌单等
 */
+ (void)getPlayerListSuccess:(void (^)(LTHomePlayerLists *homePlayerLists))success failure:(void (^)(NSError *error))failure;
/**
 *  抓去自网页端：获取个人历史听歌数据
 */
+ (void)getHistoryDataSuccess:(void (^)(LTHistoryData *historyData))success failure:(void (^)(NSError *error))failure;

/**
 *  抓取自Mac端：获取歌单内歌曲信息
 */
+ (void)getPlayerListInfoSuccess:(void (^)(LTPlayList *playList))success failure:(void (^)(NSError *error))failure;
/**
 *  抓取自Mac端：获取用户信息
 */
+ (void)getUserDetailInfoSuccess:(void (^)(LTUserInfo *userInfo))success failure:(void (^)(NSError *error))failure;
@end
