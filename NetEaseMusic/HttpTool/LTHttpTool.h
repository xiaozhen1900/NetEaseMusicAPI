//
//  QIHttpTool.h
//  微博
//
//  Created by apple on 14-7-11.
//  Copyright (c) 2014年 heima. All rights reserved.
//  

#import <Foundation/Foundation.h>

@class LTRequestModel;

@interface LTHttpTool : NSObject

+ (void)getWithUrl:(NSString *)url param:(id)param resultClass:(Class)resultClass success:(void (^)(id))success failure:(void (^)(NSError *))failure;

+ (void)postWithRequestModel:(LTRequestModel*)requestModel resultClass:(Class)resultClass success:(void (^)(id))success failure:(void (^)(NSError *))failure;

@end