/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding> {

	BOOL _shouldDiscoverAllContacts;
	NSArray* _emails;
	NSArray* _userRecordIDs;

}

@property (nonatomic,retain) NSArray * emails;                            //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDs;                     //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldDiscoverAllContacts;              //@synthesize shouldDiscoverAllContacts=_shouldDiscoverAllContacts - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(void)setShouldDiscoverAllContacts:(BOOL)arg1 ;
-(BOOL)shouldDiscoverAllContacts;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)activityStart;
-(NSArray *)userRecordIDs;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
@end
