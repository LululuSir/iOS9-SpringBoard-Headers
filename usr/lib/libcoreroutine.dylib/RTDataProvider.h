/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/RTDataProviderProtocol.h>

@class RTInvocationDispatcher, NSMutableArray, NSError, NSString;

@interface RTDataProvider : RTNotifier <RTDataProviderProtocol> {

	BOOL _populating;
	RTInvocationDispatcher* _dispatcher;
	NSMutableArray* _cachedEvents;
	unsigned long long _state;
	NSError* _invalidationError;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedEvents;                    //@synthesize cachedEvents=_cachedEvents - In the implementation block
@property (assign,nonatomic) BOOL populating;                                  //@synthesize populating=_populating - In the implementation block
@property (assign,nonatomic) unsigned long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * invalidationError;                      //@synthesize invalidationError=_invalidationError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)providerName;
-(void)purgeCache;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)_didReceiveMemoryWarning:(long long)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)shutdown;
-(void)refresh;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(NSMutableArray *)cachedEvents;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsEventClass:(Class)arg1 ;
-(id)supportedEventClasses;
-(void)fetchAllEventsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchEventsWithFilterPredicate:(id)arg1 sortDescriptors:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)onMemoryWarningNotification:(id)arg1 ;
-(void)setCachedEvents:(NSMutableArray *)arg1 ;
-(void)_purgeCache;
-(void)_removeAllEvents;
-(void)setInvalidationError:(NSError *)arg1 ;
-(NSError *)invalidationError;
-(void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)populating;
-(void)setPopulating:(BOOL)arg1 ;
-(void)__fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)removeObserverInternal:(id)arg1 notificationName:(id)arg2 ;
-(void)addObserverInternal:(id)arg1 notificationName:(id)arg2 ;
-(void)fetchDataProviderStatus:(/*^block*/id)arg1 ;
@end
