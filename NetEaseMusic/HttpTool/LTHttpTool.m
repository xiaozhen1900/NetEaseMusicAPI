//
//  QIHttpManager.m
//  微博
//
//  Created by apple on 14-7-11.
//  Copyright (c) 2014年 heima. All rights reserved.
//

#import "LTHttpTool.h"
#import "AFHTTPSessionManager.h"
#import "YYKit.h"
#import "LTRequestModel.h"

#define QIHTTP_PARAMS_DEBUG 1
#define QIHTTP_RESPONSE_DEBUG 1

@implementation LTHttpTool

#pragma mark - 2,RETURN RESULT WITH BLOCK

+ (void)getWithUrl:(NSString *)url param:(id)param resultClass:(Class)resultClass success:(void (^)(id))success failure:(void (^)(NSError *))failure
{
    NSDictionary *params = [param modelToJSONObject];
    if (QIHTTP_PARAMS_DEBUG) {
        NSString* paramStr = [params jsonStringEncoded];
        NSLog(@"\n\n\n\n =================================== GET params Start=================================== \n\n %@ \n",paramStr);
        NSLog(@"\n\n =================================== GET params End  =================================== \n\n");
    }
    
    [self get:url params:params success:^(id responseObj) {
        if (success) {
            id result = [resultClass modelWithJSON:responseObj];
            
            if (QIHTTP_RESPONSE_DEBUG) {
                NSDictionary* dict = (NSDictionary*)(responseObj);
                NSString* responseStr = [dict jsonStringEncoded];
                NSLog(@"\n\n\n\n =================================== GET responseObject Start =================================== \n\n %@ \n\n",responseStr);
                NSLog(@"\n\n =================================== GET responseObject End   =================================== \n\n ");
            }
            
            success(result);
        }
    } failure:^(NSError *error) {
        if (failure) {
            failure(error);
        }
    }];
}

+ (void)postWithRequestModel:(LTRequestModel*)requestModel resultClass:(Class)resultClass success:(void (^)(id))success failure:(void (^)(NSError *))failure
{
    NSDictionary *params = [requestModel.baseParam modelToJSONObject];
    
    if (QIHTTP_PARAMS_DEBUG) {
        NSString* paramStr = [params jsonStringEncoded];
        NSLog(@"\n\n\n\n =================================== POST params Start=================================== \n\n %@ \n",paramStr);
        NSLog(@"\n\n =================================== POST params End  =================================== \n\n");
    }
    
    // 1.获得请求管理者
    AFHTTPSessionManager *mgr = [AFHTTPSessionManager manager];

    NSDictionary* headerDict = requestModel.header;
    
    for (NSString* key in headerDict) {
        [mgr.requestSerializer setValue:headerDict[key] forHTTPHeaderField:key];
    }
    
    [mgr POST:requestModel.url parameters:params success:^(NSURLSessionDataTask *task, id responseObject) {
        if (success) {
            
            id result = nil;
            if (!(resultClass==nil)) {
                result = [resultClass modelWithJSON:responseObject];
            }
            
            if (QIHTTP_RESPONSE_DEBUG) {
                NSDictionary* dict = (NSDictionary*)(responseObject);
                NSString* responseStr = [dict jsonStringEncoded];
                NSLog(@"\n\n\n\n =================================== POST responseObject Start =================================== \n\n %@ \n",responseStr);
                NSLog(@"\n\n =================================== POST responseObject End   =================================== \n\n ");
            }
            
            success(result);
        }
        
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        if (failure) {
            failure(error);
        }
    }];
    
}


#pragma mark - 1,GET & POST Base On AFN

/**
 *  发送一个GET请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */

+ (void)get:(NSString *)url params:(NSDictionary *)params success:(void (^)(id))success failure:(void (^)(NSError *))failure
{
    // 1.获得请求管理者
    AFHTTPSessionManager *mgr = [AFHTTPSessionManager manager];
    
    NSDictionary* headerDict = @{ @"Host": @"music.163.com",
                                  @"Referer": @"http://music.163.com" };
    
    for (NSString* key in headerDict) {
        [mgr.requestSerializer setValue:headerDict[key] forHTTPHeaderField:key];
    }
    
    [mgr GET:url parameters:params success:^(NSURLSessionDataTask *task, id responseObject) {
        if (success) {
            success(responseObject);
        }
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        if (failure) {
            failure(error);
        }
    }];
}

+ (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id))success failure:(void (^)(NSError *))failure
{
    // 1.获得请求管理者
    AFHTTPSessionManager *mgr = [AFHTTPSessionManager manager];
    
//    NSDictionary* headerDict = @{ @"Host": @"music.163.com",
//                                  @"Referer": @"http://music.163.com" };
//    
//    for (NSString* key in headerDict) {
//        [mgr.requestSerializer setValue:headerDict[key] forHTTPHeaderField:key];
//    }
    
    [mgr POST:url parameters:params success:^(NSURLSessionDataTask *task, id responseObject) {
        if (success) {
            success(responseObject);
        }

    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        if (failure) {
            failure(error);
        }
    }];
}
@end
