//
//  ListViewController.h
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhotoRecord.h"
#import "PendingOperations.h"
#import "ImageDownloader.h"
#import "ImageFiltration.h"
#import "AFNetworking.h"

#define kDatasourceURLString @"http://www.raywenderlich.com/downloads/ClassicPhotosDictionary.plist"
@interface ListViewController : UITableViewController<ImageDownloaderDelegate,ImageFiltrationDelegate>


@property (nonatomic,strong) NSMutableArray *photos;
@property (nonatomic,strong) PendingOperations *pendingOperations;
@end
