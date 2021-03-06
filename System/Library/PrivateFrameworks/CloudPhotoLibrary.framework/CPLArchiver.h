/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <Foundation/NSCoder.h>

@interface CPLArchiver : NSCoder {

	id _archive;
	id _archiveCursor;
	id _rootObject;
	BOOL _forDisplay;

}

@property (nonatomic,readonly) BOOL forDisplay;              //@synthesize forDisplay=_forDisplay - In the implementation block
@property (nonatomic,retain) id archiveCursor;               //@synthesize archiveCursor=_archiveCursor - In the implementation block
+(id)archivedDataWithRootObject:(id)arg1 ;
+(id)archivedPropertyListWithRootObject:(id)arg1 ;
+(id)archivedPropertyListWithRootObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)_initializeSmallKeyMapping;
+(id)archivedDataWithRootObject:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)displayablePropertyListWithRootObject:(id)arg1 ;
+(id)fullDescriptionForObject:(id)arg1 ;
+(id)unarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(void)encodeBycopyObject:(id)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(id)rootObject;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeObject;
-(id)decodePropertyList;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(id)initWithRootObject:(id)arg1 forDisplay:(BOOL)arg2 ;
-(id)archivedPropertyList;
-(id)initWithRootObject:(id)arg1 forDisplay:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithArchive:(id)arg1 rootClass:(Class)arg2 ;
-(void)encodePropertyList:(id)arg1 ;
-(BOOL)forDisplay;
-(id)archiveCursor;
-(void)setArchiveCursor:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
@end

