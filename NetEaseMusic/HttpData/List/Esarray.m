//
//  Esarray.m
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import "Esarray.h"
#import "Artists.h"

@implementation Esarray

+ (NSDictionary *)objectClassInArray{
    return @{@"artists" : [Artists class]};
}

@end
