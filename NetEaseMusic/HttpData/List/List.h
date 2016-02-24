//
//  List.h
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Esarray,Album,Privilege,Artists;

@interface List : NSObject

@property (nonatomic, strong) NSArray<Esarray *> *esArray;

@end