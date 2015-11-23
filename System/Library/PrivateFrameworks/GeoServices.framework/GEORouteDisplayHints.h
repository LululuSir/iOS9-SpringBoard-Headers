/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORouteDisplayHints : PBCodable <NSCopying> {

	SCD_Struct_GE1* _availablePrioritizations;
	BOOL _showTransitSchedules;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules;                                       //@synthesize showTransitSchedules=_showTransitSchedules - In the implementation block
@property (nonatomic,readonly) unsigned long long availablePrioritizationsCount; 
@property (nonatomic,readonly) int* availablePrioritizations; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)showTransitSchedules;
-(int*)availablePrioritizations;
-(void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)availablePrioritizationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)availablePrioritizationsCount;
-(void)clearAvailablePrioritizations;
-(void)addAvailablePrioritization:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
