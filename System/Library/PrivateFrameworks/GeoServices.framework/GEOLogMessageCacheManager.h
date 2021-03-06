/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSObject;

@interface GEOLogMessageCacheManager : NSObject {

	NSString* _logMessageCacheFilePath;
	sqlite3Ref _logMessageCacheDatabase;
	long long _logMessageCacheIterator;
	NSMutableArray* _retrivedLogMessageCacheIds;
	int _currentRetrivedLogMessageRetryCount;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	void* _databaseQueueIdentityKey;
	void* _databaseQueueIdentityValue;

}

@property (readonly) int currentRetrivedLogMessageRetryCount;              //@synthesize currentRetrivedLogMessageRetryCount=_currentRetrivedLogMessageRetryCount - In the implementation block
-(void)dealloc;
-(void)_createTables;
-(long long)_queryLogMessageCacheDBUserVersion;
-(int)currentRetrivedLogMessageRetryCount;
-(void)openLogMessageCache;
-(void)purgeCurrentlyRetrievedLogMessagesFromCache;
-(void)resetLogMessageCacheIterator;
-(id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
-(void)_deleteExpiredLogMessageCacheDBFile:(double)arg1 ;
-(id)_groupIDOfNextPendingLogMessage;
-(void)_migrateDatabaseIfNeeded;
-(void)insertLogMessageIntoCache:(id)arg1 ;
-(void)updateCurrentlyRetrievedLogMessagesRetryCount;
-(void)closeLogMessageCache;
-(void)_openCreateLogMessageCacheDBFile;
-(id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
-(id)initWithLogMessageCacheFilePath:(id)arg1 ;
-(void)_executeSQL:(id)arg1 ;
-(void)_addRetryCountColumnToTable;
-(void)_deleteAllExpiredLogMessages:(double)arg1 ;
-(void)_cleanupLogMessageCacheDatabase;
-(void)_updateLogMessageCacheDBUserVersion;
-(id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2 ;
-(long long)_getNumberOfLogMessagesInCache;
-(void)purgeExpiredLogMessagesFromCache:(double)arg1 ;
-(void)_openLogMessageCacheDBFile;
-(BOOL)isLogMessageCacheEmpty;
@end

