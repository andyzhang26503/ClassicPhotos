//
//  ImageDownloader.h
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PhotoRecord.h"

@protocol ImageDownloaderDelegate;

@interface ImageDownloader : NSOperation
@property (nonatomic,assign) id<ImageDownloaderDelegate> delegate;

@property (nonatomic,readonly,strong) NSIndexPath *indexPathInTableView;
@property (nonatomic,readonly,strong) PhotoRecord *photoRecord;

- (id)initWithPhotoRecord:(PhotoRecord *)record
              atIndexPath:(NSIndexPath *)indexPath
                 delegate:(id<ImageDownloaderDelegate>)theDelegate;

@end

@protocol ImageDownloaderDelegate <NSObject>

- (void)imageDownloaderDidFinish:(ImageDownloader *)downloader;

@end
