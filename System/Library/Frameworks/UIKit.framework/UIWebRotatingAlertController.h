/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController {

	BOOL _wasDeferringCallbacks;
	UIWebDocumentView* _webBrowserView;

}
-(void)dealloc;
-(void)doneWithSheet;
-(id)initWithUIWebDocumentView:(id)arg1 ;
-(BOOL)presentSheet;
-(void)_enableWebView;
-(void)_disableWebView;
@end
