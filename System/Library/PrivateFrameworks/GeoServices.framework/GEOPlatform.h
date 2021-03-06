/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
-(id)buildVersion;
-(id)clientCapabilities;
-(id)hardwareIdentifier;
-(id)osVersion;
-(double)deviceScreenScale;
-(BOOL)isInternalInstall;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsNewiOS9Features;
-(long long)deviceScreenWidthInPixels;
-(id)_systemInfoDictionary;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenHeightInPixels;
-(BOOL)supportsNavigation;
@end

