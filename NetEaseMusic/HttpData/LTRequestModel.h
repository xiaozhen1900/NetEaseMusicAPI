//
//  LTRequestModel.h
//  NetEaseMusic
//
//  Created by 罗小红 on 16/2/24.
//  Copyright © 2016年 Lt-Red. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LTParam.h"

@interface LTRequestModel : NSObject

@property(nonatomic,copy) NSString* url;

@property(nonatomic,strong) NSDictionary* header;

@property(nonatomic,strong) LTParam* baseParam;

@end
