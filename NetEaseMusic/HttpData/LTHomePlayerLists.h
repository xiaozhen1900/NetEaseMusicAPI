//
//  LTPlayerList.h
//  __PRODUCTNAME__
//
//  Created by LtRed on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark -- 创建者
//创建者：单色旋律

@interface Creator : NSObject

@property (nonatomic, copy) NSString *description;

@property (nonatomic, assign) NSInteger authority;

@property (nonatomic, assign) long long birthday;

@property (nonatomic, assign) NSInteger province;

@property (nonatomic, assign) BOOL mutual;

@property (nonatomic, copy) NSString *nickname;

@property (nonatomic, assign) NSInteger accountStatus;

@property (nonatomic, assign) BOOL followed;

@property (nonatomic, copy) NSString *backgroundUrl;

@property (nonatomic, assign) NSInteger authStatus;

@property (nonatomic, assign) BOOL defaultAvatar;

@property (nonatomic, copy) NSString *avatarUrl;

@property (nonatomic, assign) NSInteger city;

@property (nonatomic, copy) NSString *signature;

@property (nonatomic, assign) NSInteger userType;

@property (nonatomic, assign) NSInteger vipType;

@property (nonatomic, assign) NSInteger djStatus;

@property (nonatomic, assign) NSInteger gender;

@property (nonatomic, copy) NSString *expertTags;

@property (nonatomic, copy) NSString *detailDescription;

@property (nonatomic, assign) long long avatarImgId;

@property (nonatomic, assign) long long backgroundImgId;

@property (nonatomic, assign) NSInteger userId;

@end

#pragma mark -- 播放列表
//播放列表
@interface Playlist : NSObject

@property (nonatomic, assign) NSInteger subscribedCount;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, strong) Creator *creator;

@property (nonatomic, assign) NSInteger specialType;

@property (nonatomic, strong) NSArray *tags;

@property (nonatomic, assign) BOOL newImported;

@property (nonatomic, assign) NSInteger adType;

@property (nonatomic, assign) long long updateTime;

@property (nonatomic, copy) NSString *coverImgUrl;

@property (nonatomic, assign) NSInteger cloudTrackCount;

@property (nonatomic, assign) BOOL highQuality;

@property (nonatomic, assign) long long trackNumberUpdateTime;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) long long trackUpdateTime;

@property (nonatomic, strong) NSArray *subscribers;

@property (nonatomic, assign) NSInteger playCount;

@property (nonatomic, assign) BOOL subscribed;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) long long coverImgId;

@property (nonatomic, copy) NSString *tracks;

@property (nonatomic, assign) NSInteger trackCount;

@property (nonatomic, copy) NSString *commentThreadId;

@property (nonatomic, assign) long long createTime;

@property (nonatomic, assign) NSInteger totalDuration;

@property (nonatomic, copy) NSString *artists;

@property (nonatomic, assign) NSInteger userId;

@end

#pragma mark -- 主页数据
//主页数据：eg.单色旋律 的主页数据
@interface LTHomePlayerLists : NSObject

@property (nonatomic, strong) NSArray<Playlist *> *playlist;

@property (nonatomic, assign) BOOL more;

@property (nonatomic, assign) NSInteger code;

@end

#pragma mark -- 歌单信息
//歌单信息：eg.我喜欢的音乐
@interface LTPlayList : NSObject

@property (nonatomic, strong) Playlist *playlist;

@property (nonatomic, strong) NSArray *privileges;

@property (nonatomic, assign) NSInteger code;

@end