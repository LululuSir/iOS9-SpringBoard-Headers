/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageTable, NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	int _imageFormat;

}
-(void)dealloc;
-(void)reset;
-(void)_cleanup;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1 ;
-(id)initWithWithPath:(id)arg1 imageFormat:(int)arg2 ;
-(void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(id)dataForItemAtIndex:(unsigned long long)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7 ;
-(id)imageForItemAtIndex:(unsigned long long)arg1 ;
-(void)insertItemAtIndex:(unsigned long long)arg1 ;
@end

