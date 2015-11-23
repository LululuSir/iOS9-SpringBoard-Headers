/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {

	BOOL _shouldInvalidateOnAddressBookChange;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKConversation * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateOnAddressBookChange;              //@synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange - In the implementation block
-(void)dealloc;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)shouldInvalidateOnAddressBookChange;
@end
