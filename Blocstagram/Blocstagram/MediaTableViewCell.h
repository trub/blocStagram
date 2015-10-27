//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Matthew Weintrub on 10/26/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property(nonatomic,strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;


@end
