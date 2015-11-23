/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/GEOTileRequesterDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSThread, NSTimer, NSMutableArray, GEOVoltaireSimpleTileRequester, NSString;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver> {

	NSThread* _startThread;
	NSTimer* _activeTileGroupTimeoutTimer;
	NSMutableArray* _errors;
	GEOVoltaireSimpleTileRequester* _simpleRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_GE55*)newExpiringTilesets;
+(unsigned long long)expiringTilesetsCount;
+(unsigned char)tileProviderIdentifier;
+(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(Class)simpleRequesterClass;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)cleanup;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tryFinish;
-(void)_startWithTileKeys:(id)arg1 ;
-(void)_failedToReceiveActiveTileGroup:(id)arg1 ;
@end
