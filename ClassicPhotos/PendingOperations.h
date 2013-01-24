//
//  PendingOperations.h
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PendingOperations : NSObject

@property (nonatomic,strong) NSMutableDictionary *downloadsInProgress;
@property (nonatomic,strong) NSOperationQueue *downloadQueue;

@property (nonatomic,strong) NSMutableDictionary *filtrationsInProgress;
@property (nonatomic,strong) NSOperationQueue *filtrationQueue;
@end
