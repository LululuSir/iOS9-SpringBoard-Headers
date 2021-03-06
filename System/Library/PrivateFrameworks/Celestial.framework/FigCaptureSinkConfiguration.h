/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sinkID;
	int _sinkType;
	BOOL _videoDataDiscardsLateVideoFrames;
	BOOL _videoDataDerivedFromPreview;
	BOOL _irisMovieCaptureEnabled;
	SCD_Struct_BW2 _irisMovieDuration;
	SCD_Struct_BW2 _irisMovieVideoFrameDuration;
	int _irisMovieAutoTrimMethod;
	BOOL _optimizesImagesForOfflineVideoStabilization;
	BOOL _quadraHighResStillImageCaptureEnabled;

}

@property (nonatomic,copy) NSString * sinkID;                                               //@synthesize sinkID=_sinkID - In the implementation block
@property (assign,nonatomic) int sinkType;                                                  //@synthesize sinkType=_sinkType - In the implementation block
@property (assign,nonatomic) BOOL videoDataDiscardsLateVideoFrames;                         //@synthesize videoDataDiscardsLateVideoFrames=_videoDataDiscardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL videoDataDerivedFromPreview;                              //@synthesize videoDataDerivedFromPreview=_videoDataDerivedFromPreview - In the implementation block
@property (assign,nonatomic) BOOL irisMovieCaptureEnabled;                                  //@synthesize irisMovieCaptureEnabled=_irisMovieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieDuration;                              //@synthesize irisMovieDuration=_irisMovieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieVideoFrameDuration;                    //@synthesize irisMovieVideoFrameDuration=_irisMovieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                   //@synthesize irisMovieAutoTrimMethod=_irisMovieAutoTrimMethod - In the implementation block
@property (assign,nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;              //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResStillImageCaptureEnabled;                    //@synthesize quadraHighResStillImageCaptureEnabled=_quadraHighResStillImageCaptureEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)stringForSinkType:(int)arg1 ;
+(int)sinkTypeForString:(id)arg1 ;
-(NSString *)sinkID;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setSinkType:(int)arg1 ;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)setVideoDataDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setVideoDataDerivedFromPreview:(BOOL)arg1 ;
-(BOOL)irisMovieCaptureEnabled;
-(void)setIrisMovieDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setSinkID:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(void)setIrisMovieCaptureEnabled:(BOOL)arg1 ;
-(int)sinkType;
-(BOOL)videoDataDerivedFromPreview;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(BOOL)videoDataDiscardsLateVideoFrames;
-(int)irisMovieAutoTrimMethod;
-(SCD_Struct_BW2)irisMovieDuration;
-(SCD_Struct_BW2)irisMovieVideoFrameDuration;
@end

