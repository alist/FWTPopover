//
//  FWTPopoverHintView.h
//  FWTPopoverHintView
//
//  Created by Marco Meschini on 7/12/12.
//  Copyright (c) 2012 Futureworkshops. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FWTPopoverArrow.h"
#import "FWTPopoverBackgroundHelper.h"
#import "FWTPopoverAnimationHelper.h"

@class FWTPopoverView;
typedef void (^FWTPopoverViewDidPresentBlock)(FWTPopoverView *);
typedef void (^FWTPopoverViewDidDismissBlock)(FWTPopoverView *);

@interface FWTPopoverView : UIView

@property (nonatomic, readonly, strong) UIView *contentView;
@property (nonatomic, assign) CGSize contentSize;
@property (nonatomic, assign) BOOL adjustPositionInSuperviewEnabled;

@property (nonatomic, strong) FWTPopoverBackgroundHelper *backgroundHelper;
@property (nonatomic, strong) FWTPopoverArrow *arrow;
@property (nonatomic, strong) FWTPopoverAnimationHelper *animationHelper;

@property (nonatomic, copy) FWTPopoverViewDidPresentBlock didPresentBlock;
@property (nonatomic, copy) FWTPopoverViewDidDismissBlock didDismissBlock;

//
- (void)presentFromRect:(CGRect)rect inView:(UIView *)view permittedArrowDirection:(FWTPopoverArrowDirection)arrowDirection animated:(BOOL)animated;

//
- (void)adjustPositionToRect:(CGRect)rect;
- (void)adjustPositionToRect:(CGRect)rect animated:(BOOL)animated;

//
- (void)dismissPopoverAnimated:(BOOL)animated;

//
- (CGRect)arrowRect;

@end
