//
//  ESRootClass.m
//  NetEaseMusic
//
//  Created by 罗小红 on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import "LtUserInfo.h"

@implementation Userpoint

@end

@implementation Profile

@end


@implementation Bindings

@end

@implementation LTUserInfo

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"bindings" : Bindings.class};
}

@end
