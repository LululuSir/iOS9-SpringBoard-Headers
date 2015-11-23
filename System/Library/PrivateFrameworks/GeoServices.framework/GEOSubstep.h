/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying> {

	int _maneuverType;
	GEONameInfo* _name;
	NSMutableArray* _signposts;
	int _zilchIndex;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) BOOL hasZilchIndex; 
@property (assign,nonatomic) int zilchIndex;                          //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEONameInfo * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(GEONameInfo *)arg1 ;
-(GEONameInfo *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(int)maneuverType;
-(void)addSignpost:(id)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(BOOL)hasManeuverType;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signpostsCount;
-(NSMutableArray *)signposts;
-(void)clearSignposts;
-(int)zilchIndex;
-(void)setZilchIndex:(int)arg1 ;
-(void)setHasZilchIndex:(BOOL)arg1 ;
-(BOOL)hasZilchIndex;
-(BOOL)readFrom:(id)arg1 ;
@end
