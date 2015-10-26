//
//  Comment.h
//  Blocstagram
//
//  Created by Matthew Weintrub on 10/26/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import "user.h"
@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end