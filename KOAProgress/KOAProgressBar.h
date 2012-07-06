//
//  KOAProgressBar.h
//  KOAProgress
//
//  Created by Miroslav Perović on 7/5/12.
//  Copyright (c) 2012 KeepOnApps. All rights reserved.
//

#import <UIKit/UIKit.h>

enum components {
	progressComponent,
	stripesComponent
};

@interface KOAProgressBar : UIProgressView

@property (getter = isDisplayedWhenStopped) BOOL displayedWhenStopped;
@property (strong) UIColor *shadowColor;
@property (strong) UIColor *stripeColor;
@property float stripeWidth;
@property float inset;
@property float radius;
@property (strong) UIColor *progressBarColorBackground;
@property (strong) UIColor *progressBarColorBackgroundGlow;
@property (strong) UIColor *lighterProgressColor;
@property (strong) UIColor *darkerProgressColor;

@property (readonly) float minValue;
@property (readonly) float maxValue;

- (void)setMinValue:(float)mValue;
- (void)setMaxValue:(float)mValue;
@end