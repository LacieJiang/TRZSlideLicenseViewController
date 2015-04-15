//
//  TRZSlideLicenseScrollView.h
//  TRZSlideLicenseViewController
//
//  Created by yam on 2014/04/18.
//  Copyright (c) 2014年 yam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TRZSlideLicenseScrollView : UIScrollView

@property (nonatomic) UIColor *titleColor;
@property (nonatomic) UIColor *textColor;
@property (nonatomic) UIFont *titleFont;
@property (nonatomic) UIFont *textFont;

- (id)initWithFrame:(CGRect)frame licenses:(NSArray*)licenses;

@end
