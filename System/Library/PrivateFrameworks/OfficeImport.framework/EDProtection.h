/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDProtection : NSObject <NSCopying> {

	BOOL mHidden;
	BOOL mLocked;

}
+(id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isHidden;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isEqualToProtection:(id)arg1 ;
@end

