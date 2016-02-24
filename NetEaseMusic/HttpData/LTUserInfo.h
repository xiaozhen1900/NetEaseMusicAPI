//
//  ESRootClass.h
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Userpoint : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, assign) long long updateTime;

@property (nonatomic, assign) NSInteger blockBalance;

@property (nonatomic, assign) NSInteger userId;

@property (nonatomic, assign) NSInteger balance;

@property (nonatomic, assign) NSInteger version;

@end


@interface Profile : NSObject

@property (nonatomic, assign) NSInteger accountStatus;

@property (nonatomic, assign) NSInteger eventCount;

@property (nonatomic, assign) NSInteger authority;

@property (nonatomic, assign) BOOL mutual;

@property (nonatomic, assign) NSInteger authStatus;

@property (nonatomic, assign) NSInteger playlistCount;

@property (nonatomic, copy) NSString *backgroundUrl;

@property (nonatomic, assign) NSInteger allSubscribedCount;

@property (nonatomic, copy) NSString *nickname;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, assign) NSInteger vipType;

@property (nonatomic, assign) long long avatarImgId;

@property (nonatomic, copy) NSString *detailDescription;

@property (nonatomic, assign) BOOL blacklist;

@property (nonatomic, assign) long long birthday;

@property (nonatomic, assign) long long backgroundImgId;

@property (nonatomic, assign) NSInteger city;

@property (nonatomic, assign) BOOL followed;

@property (nonatomic, copy) NSString *avatarUrl;

@property (nonatomic, copy) NSString *expertTags;

@property (nonatomic, assign) NSInteger cCount;

@property (nonatomic, assign) NSInteger province;

@property (nonatomic, assign) NSInteger sCount;

@property (nonatomic, assign) NSInteger follows;

@property (nonatomic, assign) NSInteger playlistBeSubscribedCount;

@property (nonatomic, assign) NSInteger gender;

@property (nonatomic, assign) NSInteger userType;

@property (nonatomic, assign) NSInteger followeds;

@property (nonatomic, copy) NSString *signature;

@property (nonatomic, assign) NSInteger sDJPCount;

@property (nonatomic, assign) BOOL defaultAvatar;

@property (nonatomic, assign) NSInteger userId;

@property (nonatomic, assign) NSInteger djStatus;

@end



@interface Bindings : NSObject

@property (nonatomic, assign) NSInteger userId;

@property (nonatomic, assign) BOOL expired;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, copy) NSString *tokenJsonStr;

@property (nonatomic, assign) NSInteger refreshTime;

@property (nonatomic, assign) NSInteger type;

@property (nonatomic, assign) NSInteger expiresIn;

@property (nonatomic, copy) NSString *url;

@end



@interface LTUserInfo : NSObject

@property (nonatomic, assign) BOOL pcSign;

@property (nonatomic, assign) BOOL mobileSign;

@property (nonatomic, assign) BOOL peopleCanSeeMyPlayRecord;

@property (nonatomic, strong) Userpoint *userPoint;

@property (nonatomic, assign) NSInteger code;

@property (nonatomic, assign) NSInteger level;

@property (nonatomic, assign) NSInteger listenSongs;

@property (nonatomic, strong) NSArray<Bindings *> *bindings;

@property (nonatomic, strong) Profile *profile;

@property (nonatomic, assign) BOOL adValid;

@end