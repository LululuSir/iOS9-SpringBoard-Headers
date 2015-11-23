/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSString, MPStorePlayWhileDownloadSession, MPStreamingDownloadSession, MPMediaPlaybackItemMetadata;

@interface MPStoreAVItem : MPAVItem {

	NSString* _aggregateDictionaryItemIdentifier;
	unsigned long long _assetQuality;
	BOOL _hasEverPrioritizedPlayerItem;
	BOOL _hasPrioritizedPlayWhileDownloadSession;
	BOOL _hasPrioritizedStreamingDownloadSession;
	BOOL _hasValidAggregateDictionaryItemIdentifier;
	BOOL _hasValidAssetQuality;
	BOOL _isActivePlayerItem;
	MPStorePlayWhileDownloadSession* _playWhileDownloadSession;
	unsigned long long _preferredAssetQuality;
	MPStreamingDownloadSession* _streamingDownloadSession;
	unsigned long long _options;
	MPMediaPlaybackItemMetadata* _playbackItemMetadata;

}

@property (nonatomic,readonly) unsigned long long options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPMediaPlaybackItemMetadata * playbackItemMetadata;              //@synthesize playbackItemMetadata=_playbackItemMetadata - In the implementation block
+(void)applyVolumeNormalizationForQueuedItems:(id)arg1 ;
+(BOOL)isPlaybackItemMetadataValidForAssetCreation:(id)arg1 ;
+(BOOL)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long*)arg2 ;
+(unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1 ;
+(id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long*)arg4 assetQuality:(unsigned long long*)arg5 usesPurchaseBundle:(BOOL*)arg6 ;
-(BOOL)mpuReporting_isValidReportingItem;
-(unsigned long long)mpuReporting_itemType;
-(BOOL)mpuReporting_shouldReportPlayEventsToStore;
-(id)mpuReporting_storeItemID;
-(long long)_mpuReporting_storeItemInt64IDFromIdentifierCollection:(id)arg1 ;
-(long long)_mpuReporting_storeItemInt64ID;
-(id)MPU_contentItemIdentifierCollection;
-(void)setAlternateAudioTrackID:(int)arg1 ;
-(void)loadAssetAndPlayerItem;
-(id)displayableText;
-(long long)_persistedLikedState;
-(void)_handleUpdatedLikedState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)storeItemInt64ID;
-(BOOL)useEmbeddedChapterData;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(double)durationFromExternalMetadata;
-(long long)customAVEQPreset;
-(BOOL)allowsEQ;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(BOOL)isSupportedDefaultPlaybackSpeed:(unsigned long long)arg1 ;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(double)playbackCheckpointCurrentTime;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(id)artist;
-(id)albumArtist;
-(long long)artistStoreID;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)canSeedGenius;
-(id)composer;
-(unsigned long long)discNumber;
-(unsigned long long)discCount;
-(BOOL)isCloudItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isExplicitTrack;
-(id)genre;
-(BOOL)hasAlternatesForTypes:(unsigned long long)arg1 ;
-(BOOL)isStreamable;
-(id)mainTitle;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsRewindAndFastForward15Seconds;
-(id)titlesForTime:(double)arg1 ;
-(id)aggregateDictionaryItemIdentifier;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reevaluateType;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(long long)albumStoreID;
-(id)copyrightText;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(long long)storeSubscriptionAdamID;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsExternalPlayback;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(BOOL)usesSubscriptionLease;
-(void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1 ;
-(void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1 ;
-(id)_newTimeMarkersForChapterType:(long long)arg1 ;
-(MPMediaPlaybackItemMetadata *)playbackItemMetadata;
-(BOOL)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned long long*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(BOOL)arg7 ;
-(void)_prioritizeDownloadSessionsIfNeeded;
-(void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2 ;
-(void)_applyLoudnessInfo;
-(void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(id)_chapterTitleForTime:(double)arg1 ;
-(void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2 ;
-(id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isStreamingLowQualityAsset;
-(id)storeDownload;
-(id)album;
-(id)mediaItem;
-(unsigned long long)persistentID;
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)options;
-(void)setRating:(float)arg1 ;
-(float)userRating;
@end
