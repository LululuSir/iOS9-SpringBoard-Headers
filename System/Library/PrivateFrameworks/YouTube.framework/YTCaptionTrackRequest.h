/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@protocol YTCaptionTrackRequestDelegate;
@class YTCaptionTrack;

@interface YTCaptionTrackRequest : YTXMLHTTPRequest {

	id<YTCaptionTrackRequestDelegate> _delegate;
	YTCaptionTrack* _captionTrack;

}
-(int)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)_requestCaptionTrackDataWithURL:(id)arg1 ;
-(id)initCaptionTrackDataRequest:(id)arg1 withDelegate:(id)arg2 ;
-(id)captionTrack;
@end
