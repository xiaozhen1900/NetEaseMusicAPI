//
//  Esarray.h
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Album,Privilege,Artists;

@interface Esarray : NSObject

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) NSInteger ftype;

@property (nonatomic, strong) Album *album;

@property (nonatomic, strong) Privilege *privilege;

@property (nonatomic, copy) NSString *transNames;

@property (nonatomic, strong) NSArray<Artists *> *artists;

@property (nonatomic, assign) NSInteger copyrightId;

@property (nonatomic, assign) NSInteger fee;

@property (nonatomic, assign) NSInteger mvid;

@property (nonatomic, strong) NSArray *alias;

@property (nonatomic, assign) NSInteger no;

@property (nonatomic, assign) NSInteger duration;

@property (nonatomic, assign) NSInteger score;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger status;

@end