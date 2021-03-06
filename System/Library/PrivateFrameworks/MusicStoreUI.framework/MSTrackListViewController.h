/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageViewController.h>
#import <libobjc.A.dylib/MSTrackListHeaderDelegate.h>

@class MSTrackListHeaderView, NSString;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {

	MSTrackListHeaderView* _headerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_webViewsLoaded:(id)arg1 ;
-(void)_reloadFooterView;
-(void)_delayedReloadForWebViews;
-(id)_headerArtworkItemImage;
-(id)_newImageDataProvider;
-(id)_newPlaceholderImage;
-(id)_headerArtworkImage;
-(id)purchasableItemsForHeaderView:(id)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_reloadHeaderView;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)newTermsAndConditionsFooter;
@end

