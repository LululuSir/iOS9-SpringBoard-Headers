/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {

	NSString* _source;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(BOOL)isEqualToMailMessageKey:(id)arg1 ;
-(id)initWithSource:(id)arg1 messageId:(id)arg2 ;
-(NSString *)messageId;
@end

