//
//  LTHistoryData.h
//  __PRODUCTNAME__
//
//  Created by LtRed on 16/02/24
//  Copyright (c) __ORGANIZATIONNAME__. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  LTHistoryData->Weekdata->Song
 *  LTHistoryData->Alldata->Song
 */
@interface Song : NSObject

@property (nonatomic, strong) NSArray *alia;

@property (nonatomic, assign) NSInteger cp;

@property (nonatomic, copy) NSString *rurl;

@property (nonatomic, assign) NSInteger mv;

@property (nonatomic, strong) NSArray *rtUrls;

@property (nonatomic, assign) NSInteger rtype;

@property (nonatomic, assign) NSInteger t;

@property (nonatomic, copy) NSString *h;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger v;

@property (nonatomic, assign) NSInteger pst;

@property (nonatomic, copy) NSString *cd;

//@property (nonatomic, strong) NSArray<Ar *> *ar;

//@property (nonatomic, assign) NSInteger id;

@property (nonatomic, copy) NSString *rtUrl;

@property (nonatomic, assign) NSInteger ftype;

@property (nonatomic, assign) NSInteger no;

@property (nonatomic, copy) NSString *rt;

//@property (nonatomic, strong) L *l;

@property (nonatomic, copy) NSString *crbt;

@property (nonatomic, copy) NSString *cf;

@property (nonatomic, assign) NSInteger fee;

//@property (nonatomic, strong) Privilege *privilege;

//@property (nonatomic, strong) Al *al;

@property (nonatomic, assign) NSInteger mst;

@property (nonatomic, assign) NSInteger dt;

//@property (nonatomic, strong) M *m;
//
//@property (nonatomic, strong) A *a;

@property (nonatomic, assign) NSInteger st;

@property (nonatomic, assign) NSInteger pop;

@end

/**
 *  LTHistoryData->Alldata
 */
@interface Alldata : NSObject

@property (nonatomic, assign) NSInteger score;

@property (nonatomic, assign) NSInteger playCount;

@property (nonatomic, strong) Song *song;

@end

/**
 *  LTHistoryData->Weekdata
 */
@interface Weekdata : NSObject

@property (nonatomic, assign) NSInteger score;

@property (nonatomic, assign) NSInteger playCount;

@property (nonatomic, strong) Song *song;

@end


/**
 *  LTHistoryData
 */
@interface LTHistoryData : NSObject

@property (nonatomic, strong) NSArray<Alldata *> *allData;

@property (nonatomic, strong) NSArray<Weekdata *> *weekData;

@property (nonatomic, assign) NSInteger code;

@end