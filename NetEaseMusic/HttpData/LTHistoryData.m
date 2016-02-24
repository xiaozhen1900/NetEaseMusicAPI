//
//  LTHistoryData.m
//  __PRODUCTNAME__
//
//  Created by LtRed on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import "LTHistoryData.h"

@implementation Song

@end

@implementation Alldata

@end

@implementation Weekdata

@end

@implementation LTHistoryData

+ (NSDictionary *)objectClassInArray{
    return @{@"allData" : [Alldata class], @"weekData" : [Weekdata class]};
}

@end
