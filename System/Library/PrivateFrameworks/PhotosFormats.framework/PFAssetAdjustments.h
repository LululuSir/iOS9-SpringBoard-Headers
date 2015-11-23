/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSData;

@interface PFAssetAdjustments : NSObject <NSCopying> {

	NSDictionary* _propertyListDictionary;

}

@property (nonatomic,copy,readonly) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,copy,readonly) NSString * adjustmentFormatVersion; 
@property (nonatomic,readonly) NSData * adjustmentData; 
@property (nonatomic,readonly) long long adjustmentBaseVersion; 
@property (nonatomic,retain) NSDictionary * propertyListDictionary;                     //@synthesize propertyListDictionary=_propertyListDictionary - In the implementation block
-(NSData *)adjustmentData;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 ;
-(NSString *)adjustmentFormatIdentifier;
-(NSString *)adjustmentFormatVersion;
-(long long)adjustmentBaseVersion;
-(id)description;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(NSDictionary *)propertyListDictionary;
-(void)setPropertyListDictionary:(NSDictionary *)arg1 ;
@end
