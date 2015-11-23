/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>

@class CRCameraReader, WBSCreditCardData, NSString;

@interface WBUCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate> {

	CRCameraReader* _reader;
	WBSCreditCardData* _receivedCardData;

}

@property (assign,nonatomic,__weak) id<WBUCreditCardCaptureViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canCapture;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
