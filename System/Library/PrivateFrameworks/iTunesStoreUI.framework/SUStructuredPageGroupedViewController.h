/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {

	SULoadingView* _loadingView;

}
-(void)dealloc;
-(id)init;
-(void)setLoading:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)newNoItemsOverlayLabel;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(BOOL)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_performPurchaseAnimationForIndexPath:(id)arg1 ;
@end
