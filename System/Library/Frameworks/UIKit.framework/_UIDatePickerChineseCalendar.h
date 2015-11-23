/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar {

	NSCalendar* realCalendar;

}

@property (assign) NSCalendar * realCalendar; 
+(id)cyclicalFromRelated:(id)arg1 ;
+(id)relatedFromCyclical:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(void)setRealCalendar:(NSCalendar *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(NSCalendar *)realCalendar;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
@end
