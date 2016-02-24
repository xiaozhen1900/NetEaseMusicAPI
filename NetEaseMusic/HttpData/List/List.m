//
//  List.m
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import "List.h"
#import "Esarray.h"

@implementation List

+ (NSDictionary *)objectClassInArray{
    return @{@"esArray" : [Esarray class]};
}

@end
