/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer, WorldClockPreferences, NSDate, NSArray;

@interface WorldClockManager : NSObject {

	BOOL _dirty;
	NSMutableArray* _cities;
	NSTimer* _weatherUpdateTimer;
	WorldClockPreferences* _defaults;
	NSDate* lastModified;

}

@property (nonatomic,readonly) NSArray * cities;                 //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) NSDate * lastModified; 
+(id)sharedManager;
+(id)sharedManagerWithPreferences:(id)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(NSArray *)cities;
-(id)initWithPreferences:(id)arg1 ;
-(void)addDefaultCitiesIfNeeded;
-(id)worldClockCityFromPersistenceRepresentation:(id)arg1 ;
-(void)pushCityPropertiesToPreferences;
-(void)_notifyNano;
-(id)worldClockCityFromPersistenceDictionary:(id)arg1 ;
-(id)worldClockCityFromPersistenceArray:(id)arg1 ;
-(id)fixUpCityProperties:(id)arg1 ;
-(void)saveCities;
-(BOOL)canAddCity;
-(void)updateWeatherDataForCities:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadCities;
-(BOOL)checkIfCitiesModified;
-(id)cityWithIdUrl:(id)arg1 ;
-(unsigned long long)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)removeAllCities;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)updateWeatherDataWithCompletion:(/*^block*/id)arg1 ;
-(id)weatherReachabilityURL;
-(NSDate *)lastModified;
@end

