/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface _SFNavigationBarReaderButton : UIButton {

	UIImageView* _glyphView;
	UIImageView* _glyphKnockoutView;
	BOOL _drawsLightGlyph;

}

@property (assign,nonatomic) BOOL drawsLightGlyph;              //@synthesize drawsLightGlyph=_drawsLightGlyph - In the implementation block
@property (nonatomic,readonly) CGSize visibleSize; 
-(void)setDrawsLightGlyph:(BOOL)arg1 ;
-(CGSize)visibleSize;
-(BOOL)drawsLightGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end
