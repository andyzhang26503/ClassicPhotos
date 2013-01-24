//
//  ImageDownloader.m
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import "ImageDownloader.h"

@interface ImageDownloader()
@property (nonatomic,readwrite,strong)NSIndexPath *indexPathInTableView;
@property (nonatomic,readwrite,strong)PhotoRecord *photoRecord;

@end

@implementation ImageDownloader
@synthesize delegate = _delegate;
@synthesize indexPathInTableView = _indexPathInTableView;
@synthesize photoRecord = _photoRecord;

- (id)initWithPhotoRecord:(PhotoRecord *)record atIndexPath:(NSIndexPath *)indexPath delegate:(id<ImageDownloaderDelegate>)theDelegate
{
    self = [super init];
    if (self) {
        self.delegate = theDelegate;
        self.indexPathInTableView = indexPath;
        self.photoRecord = record;
    }
    return self;
}

- (void)main
{
    @autoreleasepool {
        
        if (self.isCancelled) {
            return;
        }
        
        NSData *imageData = [[NSData alloc] initWithContentsOfURL:self.photoRecord.URL];
        if (self.isCancelled) {
            imageData = nil;
            return;
        }
        
        if (imageData) {
            UIImage *downloadedImage = [UIImage imageWithData:imageData];
            self.photoRecord.image = downloadedImage;
        }else{
            self.photoRecord.failed = YES;
        }
        
        imageData = nil;
        if (self.isCancelled) {
            return;
        }
        [(NSObject *)self.delegate performSelectorOnMainThread:@selector(imageDownloaderDidFinish:) withObject:self waitUntilDone:NO];
    }
}
@end
