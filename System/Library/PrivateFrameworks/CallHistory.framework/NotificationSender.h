/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface NotificationSender : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithName:(id)arg1 ;
@end
