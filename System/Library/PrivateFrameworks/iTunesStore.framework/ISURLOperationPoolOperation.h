/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	long long _cancelCount;
	BOOL _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)run;
-(ISURLOperation *)mainOperation;
-(BOOL)containsOperation:(id)arg1 ;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
-(void)cancelOperation:(id)arg1 ;
@end

