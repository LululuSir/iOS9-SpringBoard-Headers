/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SPUISearchFirstTimeViewControllerDelegate;
@class NSString, UIScrollView;

@interface SPUISearchFirstTimeViewController : UIViewController <UITextViewDelegate> {

	NSString* _fteString;
	NSString* _learnMoreLinkString;
	NSString* _continueLinkString;
	id<SPUISearchFirstTimeViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<SPUISearchFirstTimeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SPUISearchFirstTimeViewControllerDelegate>)arg1 ;
-(id<SPUISearchFirstTimeViewControllerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)loadView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_configureFTEViews;
-(id)_vibrantTextViewWithText:(id)arg1 linkAttributes:(id)arg2 ;
-(void)updateWithFTEString:(id)arg1 learnMoreLinkString:(id)arg2 continueLinkString:(id)arg3 ;
@end

