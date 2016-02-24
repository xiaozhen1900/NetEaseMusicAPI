//
//  ViewController.m
//  NetEaseMusic
//
//  Created by LtRed on 16/2/24.
//  Copyright © 2016年 Lt-Red. All rights reserved.
//

#import "ViewController.h"
#import "LTHttpManager.h"
#import "AFHTTPSessionManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
//    //获取个人历史数据
//    [LTHttpManager getHistoryDataSuccess:^(LTHistoryData *historyData) {
//       
//        NSLog(@"%@",historyData);
//        
//    } failure:^(NSError *error) {
//        
//    }];
//
//    
//    //获取个人所有歌单
//    [LTHttpManager getPlayerListSuccess:^(LTHomePlayerLists *homePlayerLists) {
//        
//        NSLog(@"%@",homePlayerLists);
//        
//    } failure:^(NSError *error) {
//        
//    }];
    
//    [LTHttpManager getPlayerListInfoSuccess:^(LTPlayList *playList) {
//        
//        NSLog(@"%@",playList);
//        
//    } failure:^(NSError *error) {
//        
//    }];
    
//    [LTHttpManager getUserDetailInfoSuccess:^(LTUserInfo *userInfo) {
//        
//        NSLog(@"%@",userInfo);
//        
//    } failure:^(NSError *error) {
//        
//    }];
    
//    AFHTTPSessionManager* mgr = [AFHTTPSessionManager manager];
//    
//    mgr.responseSerializer = [AFHTTPResponseSerializer serializer];
//    
//    
//    [mgr GET:@"http://music.163.com/#/playlist?id=7432182" parameters:nil success:^(NSURLSessionDataTask *task, id responseObject) {
//        
//        
//        NSString* str = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
//        
//        NSLog(@"%@",str);
//        
//    } failure:^(NSURLSessionDataTask *task, NSError *error) {
//        
//    }];
    
    
}

@end
