//
//  media.h
//  Blocstagram
//
//  Created by Matthew Weintrub on 10/26/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "user.h"

@interface Media : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

@end
