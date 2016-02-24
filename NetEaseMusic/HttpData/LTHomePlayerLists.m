//
//  LTPlayerList.m
//  __PRODUCTNAME__
//
//  Created by LtRed on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import "LTHomePlayerLists.h"

@implementation Creator

@end

@implementation Playlist

@end

@implementation LTHomePlayerLists

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"playlist" : Playlist.class};
}

@end

@implementation LTPlayList

@end
