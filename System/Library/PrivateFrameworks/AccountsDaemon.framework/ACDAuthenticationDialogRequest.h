/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, ACAccount, NSString;

@interface ACDAuthenticationDialogRequest : NSObject {

	BOOL _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	NSString* _authDelegateClassName;
	NSString* _authDelegateClassBundlePath;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL confirmationRequired;                         //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassName;                    //@synthesize authDelegateClassName=_authDelegateClassName - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassBundlePath;              //@synthesize authDelegateClassBundlePath=_authDelegateClassBundlePath - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
-(BOOL)confirmationRequired;
-(NSURL *)url;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setConfirmationRequired:(BOOL)arg1 ;
-(NSString *)authDelegateClassName;
-(void)setAuthDelegateClassName:(NSString *)arg1 ;
-(NSString *)authDelegateClassBundlePath;
-(void)setAuthDelegateClassBundlePath:(NSString *)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
@end

