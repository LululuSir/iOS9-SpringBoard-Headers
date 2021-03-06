/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMAuthenticationResponse.h>
#import <libobjc.A.dylib/ACMAuthenticationResponse_URLAccess.h>

@class NSString, NSError, NSURL, NSDictionary;

@interface ACMAuthenticationResponseImpl : NSObject <ACMAuthenticationResponse, ACMAuthenticationResponse_URLAccess> {

	NSString* _token;
	NSString* _userName;
	NSDictionary* _rawResponseData;
	NSError* _error;
	NSURL* _responseUrl;

}

@property (retain) NSString * token;                                //@synthesize token=_token - In the implementation block
@property (retain) NSString * userName;                             //@synthesize userName=_userName - In the implementation block
@property (retain) NSDictionary * rawResponseData;                  //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSURL * responseUrl;                             //@synthesize responseUrl=_responseUrl - In the implementation block
+(id)authenticationResponse;
-(NSString *)userName;
-(NSError *)error;
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(void)setResponseUrl:(NSURL *)arg1 ;
-(NSURL *)responseUrl;
-(NSDictionary *)rawResponseData;
@end

