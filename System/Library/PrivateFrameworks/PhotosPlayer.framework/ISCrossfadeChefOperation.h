/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@class AVAsset;

@interface ISCrossfadeChefOperation : NSOperation {

	int _photoEXIFOrientation;
	AVAsset* _videoAsset;
	double _crossfadeDuration;
	double _sourceStartTime;
	id _stillPhoto;
	unsigned long long _numberOfFrames;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                           //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) double crossfadeDuration;                       //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,readonly) double sourceStartTime;                         //@synthesize sourceStartTime=_sourceStartTime - In the implementation block
@property (nonatomic,retain) id stillPhoto;                                    //@synthesize stillPhoto=_stillPhoto - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                       //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFrames;              //@synthesize numberOfFrames=_numberOfFrames - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                              //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                          //@synthesize resultHandler=_resultHandler - In the implementation block
-(AVAsset *)videoAsset;
-(CGSize)targetSize;
-(id)resultHandler;
-(double)crossfadeDuration;
-(int)photoEXIFOrientation;
-(id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(CGImageRef)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(CGSize)arg7 resultHandler:(/*^block*/id)arg8 ;
-(void)setStillPhoto:(id)arg1 ;
-(double)sourceStartTime;
-(id)stillPhoto;
-(unsigned long long)numberOfFrames;
@end

