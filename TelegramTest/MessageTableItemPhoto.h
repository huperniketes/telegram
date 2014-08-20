//
//  MessageTableItemPhoto.h
//  Telegram P-Edition
//
//  Created by Dmitry Kondratyev on 2/12/14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import "MessageTableItem.h"
#import "TGImageObject.h"
@interface MessageTableItemPhoto : MessageTableItem

@property (nonatomic, strong) TGFileLocation *photoLocation;
@property (nonatomic, strong) NSImage *cachePhoto;

@property (nonatomic) int photoSize;

@property (nonatomic,strong) TGImageObject *imageObject;

@end