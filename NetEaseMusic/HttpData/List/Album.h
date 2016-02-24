//
//  Album.h
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Album : NSObject

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) long long pic;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *pic_str;

@property (nonatomic, copy) NSString *picUrl;

@end