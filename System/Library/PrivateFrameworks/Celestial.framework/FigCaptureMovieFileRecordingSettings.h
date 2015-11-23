/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRecordingSettings.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding, NSCopying> {

	NSDictionary* _videoSettings;
	NSDictionary* _audioSettings;
	BOOL _videoMirrored;
	int _videoOrientation;
	BOOL _recordVideoOrientationAndMirroringChanges;
	SCD_Struct_BW2 _movieFragmentInterval;
	NSArray* _movieLevelMetadata;
	BOOL _sendThumbnailIOSurface;
	BOOL _irisRecording;

}

@property (nonatomic,copy) NSDictionary * videoSettings;                                  //@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,copy) NSDictionary * audioSettings;                                  //@synthesize audioSettings=_audioSettings - In the implementation block
@property (assign,nonatomic) BOOL videoMirrored;                                          //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                        //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) BOOL recordVideoOrientationAndMirroringChanges;              //@synthesize recordVideoOrientationAndMirroringChanges=_recordVideoOrientationAndMirroringChanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieFragmentInterval;                        //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadata;                                  //@synthesize movieLevelMetadata=_movieLevelMetadata - In the implementation block
@property (assign,nonatomic) BOOL sendThumbnailIOSurface;                                 //@synthesize sendThumbnailIOSurface=_sendThumbnailIOSurface - In the implementation block
@property (assign,getter=isIrisRecording,nonatomic) BOOL irisRecording;                   //@synthesize irisRecording=_irisRecording - In the implementation block
-(void)setIrisRecording:(BOOL)arg1 ;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(int)videoOrientation;
-(void)setRecordVideoOrientationAndMirroringChanges:(BOOL)arg1 ;
-(void)setSendThumbnailIOSurface:(BOOL)arg1 ;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_BW2)arg1 ;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
-(NSDictionary *)audioSettings;
-(SCD_Struct_BW2)movieFragmentInterval;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)videoSettings;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(BOOL)isIrisRecording;
-(NSArray *)movieLevelMetadata;
-(BOOL)sendThumbnailIOSurface;
-(BOOL)videoMirrored;
-(BOOL)recordVideoOrientationAndMirroringChanges;
-(void)setVideoOrientation:(int)arg1 ;
@end
