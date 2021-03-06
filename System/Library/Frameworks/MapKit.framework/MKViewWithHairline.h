/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MKViewWithHairline : UIView {

	UIView* _bottomHairline;
	UIView* _topHairline;
	UIColor* _hairlineColor;
	double _leftHairlineInset;
	double _rightHairlineInset;

}

@property (nonatomic,retain) UIColor * hairlineColor;                                              //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) double leftHairlineInset;                                             //@synthesize leftHairlineInset=_leftHairlineInset - In the implementation block
@property (assign,nonatomic) double rightHairlineInset;                                            //@synthesize rightHairlineInset=_rightHairlineInset - In the implementation block
@property (assign,getter=isTopHairlineHidden,nonatomic) BOOL topHairlineHidden; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(void)setLeftHairlineInset:(double)arg1 ;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(void)setRightHairlineInset:(double)arg1 ;
-(double)leftHairlineInset;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(BOOL)isTopHairlineHidden;
-(double)rightHairlineInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(UIColor *)hairlineColor;
@end

