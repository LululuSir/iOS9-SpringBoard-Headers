/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {

	AVItemAccessLogEventInternal* _playerItemAccessLogEvent;

}

@property (nonatomic,readonly) long long numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) long long numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) long long numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) long long numberOfDroppedVideoFrames; 
-(NSDate *)playbackStartDate;
-(NSString *)serverAddress;
-(long long)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(long long)numberOfDroppedVideoFrames;
-(long long)numberOfSegmentsDownloaded;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(NSString *)URI;
-(double)durationWatched;
@end
