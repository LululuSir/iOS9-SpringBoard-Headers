/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicTransferObserver.h>
#import <libobjc.A.dylib/MusicTransferProgressViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class MusicTransferProgressBannerView, UIPopoverPresentationController, MusicTransferAggregator, MusicTransferProgressViewController, NSString;

@interface MusicTransferProgressBannerViewController : UIViewController <MusicTransferObserver, MusicTransferProgressViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	MusicTransferProgressBannerView* _bannerView;
	UIPopoverPresentationController* _presentationController;
	MusicTransferAggregator* _transferAggregator;
	MusicTransferProgressViewController* _transferProgressViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)transferAggregatorDidChange:(id)arg1 ;
-(void)_bannerEvent:(id)arg1 ;
-(void)_reloadBannerViewAnimated:(BOOL)arg1 ;
-(id)initWithTransferAggregator:(id)arg1 ;
-(void)transferProgressViewControllerWillDismiss:(id)arg1 ;
@end

