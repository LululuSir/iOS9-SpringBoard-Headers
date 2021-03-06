/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface ADVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(id)_newVolumeWarningView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_updateTrackTintForVolumeControlAvailability;
-(id)_trackImageWithTintColor:(id)arg1 ;
@end

