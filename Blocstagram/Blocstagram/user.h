//
//  user.h
//  Blocstagram
//
//  Created by Matthew Weintrub on 10/26/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import <UIKit/UIkit.h>

@interface User : NSObject

@property(nonatomic,strong) NSString *idNumber;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *fullName;
@property(nonatomic,strong) NSURL *profilePictureURl;
@property (nonatomic, strong) UIImage *profilePicture;

@end