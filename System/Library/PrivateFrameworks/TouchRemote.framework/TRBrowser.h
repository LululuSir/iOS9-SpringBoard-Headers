/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface TRBrowser : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _services;
	unsigned long long _browsingCount;

}
+(id)sharedBrowser;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stopBrowsing;
-(void)startBrowsing;
-(void)_XPCClientConnectionDidInterruptNotification:(id)arg1 ;
-(void)getServicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)TRXPCC_browserDidFindService:(id)arg1 ;
-(void)TRXPCC_browserDidRemoveService:(id)arg1 ;
@end
