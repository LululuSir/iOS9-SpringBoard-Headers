/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCROWeakReferenceContainer;

@interface SCROConnection : NSObject {

	BOOL _isConnectionStarted;
	unsigned _pingPort;
	CFRunLoopSourceRef _pingSource;
	CFRunLoopSourceRef _invalidationSource;
	unsigned _identifier;
	int _handlerType;
	SCROWeakReferenceContainer* _delegate;

}
+(void)initialize;
+(void)_createConnectionRunLoop;
+(void)_configServer;
+(void)_unconfigServerAndRetry:(BOOL)arg1 ;
+(void)_addConnectionToRunLoop:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(int)sendEvent:(id)arg1 ;
-(void)_ping;
-(id)handlerValueForKey:(int)arg1 ;
-(id)initWithHandlerType:(int)arg1 delegate:(id)arg2 ;
-(int)registerHandlerCallbackForKey:(int)arg1 ;
-(int)setHandlerValue:(id)arg1 forKey:(int)arg2 ;
-(id)handlerArrayValueForKey:(int)arg1 ;
-(int)performHandlerActionForKey:(int)arg1 ;
-(id)handlerValueForKey:(int)arg1 withObject:(id)arg2 ;
-(void)_startConnection;
-(void)_stopConnection;
@end
