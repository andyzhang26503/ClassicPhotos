//
//  ImageFiltration.h
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PhotoRecord.h"

@protocol ImageFiltrationDelegate; 

@interface ImageFiltration : NSOperation


@property (nonatomic,weak) id<ImageFiltrationDelegate> delegate;
@property (nonatomic,readonly,strong) NSIndexPath *indexPathInTableView;
@property (nonatomic,readonly,strong) PhotoRecord *photoRecord;

- (id)initWithPhotoRecord:(PhotoRecord *)record
              atIndexPath:(NSIndexPath *)indexPath
                 delegate:(id<ImageFiltrationDelegate>)theDelegate;
@end

@protocol ImageFiltrationDelegate <NSObject>

- (void)imageFiltrationDidFinish:(ImageFiltration *)filtration;

@end