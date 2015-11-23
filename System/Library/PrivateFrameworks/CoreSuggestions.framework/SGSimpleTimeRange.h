/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {

	double _start;
	double _end;
	BOOL _floating;
	long long _startUTCOffsetSeconds;
	long long _endUTCOffsetSeconds;

}

@property (nonatomic,readonly) double start;                                 //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double end;                                   //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long startUTCOffsetSeconds;              //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (nonatomic,readonly) long long endUTCOffsetSeconds;                //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (getter=isFloating,nonatomic,readonly) BOOL floating;              //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone; 
@property (nonatomic,readonly) NSTimeZone * endTimeZone; 
+(BOOL)supportsSecureCoding;
+(id)utcRangeWithStart:(double)arg1 end:(double)arg2 ;
+(id)floatingRangeWithLocalStart:(double)arg1 end:(double)arg2 ;
+(id)utcRangeWithStart:(double)arg1 duration:(double)arg2 ;
+(BOOL)isAllDayComponents:(id)arg1 ;
+(double)fromFloatingTime:(double)arg1 ;
+(id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3 ;
+(BOOL)hasYearMonthDayComponents:(id)arg1 ;
+(id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3 ;
+(id)dateFromGregorianComponents:(id)arg1 ;
+(double)toFloatingTime:(double)arg1 ;
+(id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 ;
+(id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2 ;
+(id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)floatingRangeWithUTCStart:(double)arg1 end:(double)arg2 ;
+(id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4 ;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)end;
-(id)initUTCFloatingWithStart:(double)arg1 end:(double)arg2 ;
-(id)initWithStart:(double)arg1 startUTCOffsetSeconds:(long long)arg2 end:(double)arg3 endUTCOffsetSeconds:(long long)arg4 ;
-(id)stableStringRepresentation;
-(BOOL)isEqualToSimpleTimeRange:(id)arg1 ;
-(long long)startUTCOffsetSeconds;
-(long long)endUTCOffsetSeconds;
-(BOOL)isValidAllDayRange;
-(id)absoluteRange;
-(BOOL)isFloating;
@end
