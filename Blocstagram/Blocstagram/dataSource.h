//
//  dataSource.h
//  Blocstagram
//
//  Created by Matthew Weintrub on 10/26/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property(nonatomic, strong, readonly) NSArray *mediaItems;

@end
