/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/AFDataDecompressor.h>

@interface AFZlibDataDecompressor : AFDataDecompressor {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(void)dealloc;
-(id)init;
-(id)decompressedDataForBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end
