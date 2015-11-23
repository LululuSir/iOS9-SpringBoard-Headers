/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView {

	NSArray* _highlightSelectionRects;
	UIColor* _selectionColor;

}

@property (nonatomic,retain) NSArray * highlightSelectionRects;              //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                       //@synthesize selectionColor=_selectionColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(NSArray *)highlightSelectionRects;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
@end
