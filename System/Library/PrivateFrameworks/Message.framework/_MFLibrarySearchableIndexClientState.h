/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString;

@interface _MFLibrarySearchableIndexClientState : NSObject {

	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                 //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;              //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientStateFromData:(id)arg1 ;
+(id)clientState;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(long long)transaction;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)archiveRepresentation;
-(void)setTransaction:(long long)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
@end
