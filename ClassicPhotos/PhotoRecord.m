//
//  PhotoRecord.m
//  ClassicPhotos
//
//  Created by zhang andy on 13-1-23.
//  Copyright (c) 2013年 com.andy. All rights reserved.
//

#import "PhotoRecord.h"

@implementation PhotoRecord

- (BOOL)hasImage
{
    return _image !=nil;
}
- (BOOL)isFailed
{
    return _failed;
}

- (BOOL)isFiltered
{
    return _filtered;
}
@end
