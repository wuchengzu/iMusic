//
//  DownloadRecord.h
//  iMusic
//
//  Created by Xavier's iCloud ID on 16/4/7.
//  Copyright © 2016年 Xavier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface DownloadRecord : NSManagedObject

// Insert code here to declare functionality of your managed object subclass
@property(nonatomic,assign) float speed;
@end

NS_ASSUME_NONNULL_END

#import "DownloadRecord+CoreDataProperties.h"
