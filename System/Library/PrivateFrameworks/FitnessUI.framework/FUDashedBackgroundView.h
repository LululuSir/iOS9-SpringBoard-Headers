/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FUChartBackgroundView.h>

@class NSArray, UIColor;

@interface FUDashedBackgroundView : FUChartBackgroundView {

	NSArray* _linePositions;
	unsigned long long _numLines;
	UIColor* _color;
	long long _direction;
	long long _lineType;

}

@property (assign,nonatomic) unsigned long long numLines;              //@synthesize numLines=_numLines - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long lineType;                       //@synthesize lineType=_lineType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)drawLine:(id)arg1 rect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)setNumLines:(unsigned long long)arg1 ;
-(unsigned long long)numLines;
-(long long)lineType;
-(void)setLineType:(long long)arg1 ;
@end
