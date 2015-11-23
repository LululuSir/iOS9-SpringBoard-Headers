/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>

@class EKCalendarDate, NSNumber, NSString, NSDate, EKStructuredLocation, EKParticipant, NSURL, EKEventStore, NSArray, EKSuggestedEventInfo;

@interface EKEvent : EKCalendarItem {

	BOOL _occurrenceIsAllDay;
	BOOL _requiresDetachDueToSnoozedAlarm;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;
	NSString* _birthdayPersonUniqueID;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) long long availability; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) BOOL isDetached; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (nonatomic,readonly) NSString * birthdayContactIdentifier; 
@property (nonatomic,readonly) long long birthdayPersonID; 
@property (nonatomic,readonly) NSString * birthdayPersonUniqueID;                                  //@synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (assign,nonatomic) long long participationStatus; 
@property (nonatomic,readonly) BOOL allowsPrivacyLevelModifications; 
@property (assign,nonatomic) long long privacyLevel; 
@property (nonatomic,readonly) BOOL locationIsAConferenceRoom; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,readonly) BOOL dateChanged; 
@property (nonatomic,readonly) BOOL timeChanged; 
@property (nonatomic,readonly) BOOL titleChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) BOOL attendeeReplyChanged; 
@property (nonatomic,readonly) SCD_Struct_EK3 startDateGr; 
@property (nonatomic,readonly) SCD_Struct_EK3 endDateGr; 
@property (nonatomic,copy,readonly) NSDate * initialStartDate; 
@property (nonatomic,copy,readonly) NSDate * initialEndDate; 
@property (nonatomic,copy) NSString * responseComment; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL isStatusDirty; 
@property (nonatomic,readonly) BOOL isStartDateDirty; 
@property (nonatomic,readonly) BOOL isEndDateDirty; 
@property (nonatomic,readonly) BOOL isAllDayDirty; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double travelTime; 
@property (nonatomic,readonly) NSDate * startDateIncludingTravel; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDateIncludingTravelTime; 
@property (nonatomic,readonly) double durationIncludingTravel; 
@property (nonatomic,readonly) long long travelRoutingMode; 
@property (nonatomic,readonly) BOOL isTravelTimeEditable; 
@property (nonatomic,readonly) BOOL canBeRespondedTo; 
@property (nonatomic,readonly) BOOL canSetAvailability; 
@property (nonatomic,readonly) BOOL automaticLocationGeocodingAllowed; 
@property (assign,nonatomic) long long travelAdvisoryBehavior; 
@property (nonatomic,readonly) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled; 
@property (nonatomic,readonly) BOOL eligibleForTravelAdvisories; 
@property (nonatomic,copy,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) long long pendingParticipationStatus; 
@property (nonatomic,readonly) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) unsigned modifiedProperties; 
@property (nonatomic,readonly) BOOL canDetachSingleOccurrence; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (nonatomic,readonly) BOOL responseMustApplyToAll; 
@property (nonatomic,retain) EKSuggestedEventInfo * suggestionInfo; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                                   //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                                     //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) BOOL occurrenceIsAllDay;                                              //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;                           //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                             //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                                  //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) BOOL requiresDetachDueToSnoozedAlarm;                                 //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
+(id)eventWithEventStore:(id)arg1 ;
+(id)privacyLevelAsString:(long long)arg1 ;
-(long long)daySpan;
-(id)sortedEKAttachmentsDisplayStrings;
-(id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1 ;
-(id)_commentIconString;
-(id)sortEKParticipantsIgnoringNonHumans:(id)arg1 ;
-(id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1 ;
-(BOOL)hasHumanInviteesToDisplay;
-(id)initWithPersistentObject:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(id)externalURI;
-(id)_dateForNextOccurrence;
-(void)didCommit;
-(NSDate *)initialStartDate;
-(NSDate *)initialEndDate;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsAlarmModifications;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)_sendModifiedNote;
-(BOOL)attendeeReplyChanged;
-(NSURL *)externalURL;
-(NSDate *)participationStatusModifiedDate;
-(long long)pendingParticipationStatus;
-(long long)travelAdvisoryBehavior;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(void)setOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(void)setOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(BOOL)_isAllDay;
-(void)setOccurrenceIsAllDay:(BOOL)arg1 ;
-(id)_persistentEvent;
-(EKCalendarDate *)originalOccurrenceStartDate;
-(EKCalendarDate *)occurrenceStartDate;
-(EKCalendarDate *)originalOccurrenceEndDate;
-(void)setOriginalOccurrenceIsAllDay:(NSNumber *)arg1 ;
-(void)setOriginalOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(id)_effectiveTimeZone;
-(SCD_Struct_EK3)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2 ;
-(BOOL)_validateDurationConstrainedToRecurrenceInterval;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(long long)arg1 ;
-(id)_travelTimeInternalDescription;
-(void)setRequiresDetachDueToSnoozedAlarm:(BOOL)arg1 ;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)requiresDetachDueToSnoozedAlarm;
-(BOOL)_isInitialOccurrenceDate:(id)arg1 ;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(BOOL)_isSimpleRepeatingEvent;
-(BOOL)conformsToRecurrenceRules:(id)arg1 ;
-(BOOL)occurrenceIsAllDay;
-(NSNumber *)originalOccurrenceIsAllDay;
-(BOOL)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK3)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2 ;
-(SCD_Struct_EK3)startDatePinnedForAllDay;
-(SCD_Struct_EK3)endDatePinnedForAllDay;
-(void)_deleteThisOccurrence;
-(BOOL)_eventIsTheOnlyRemainingRecurrence;
-(BOOL)_shouldCancelInsteadOfDeleteWithSpan:(long long)arg1 ;
-(BOOL)_cancelWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_shouldDeclineInsteadOfDelete;
-(BOOL)_deleteWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)_suggestedEventInfoRelation;
-(NSString *)birthdayContactIdentifier;
-(void)clearInvitationStatus;
-(BOOL)hasSelfAttendee;
-(BOOL)validateWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)commitWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)dirtyPropertiesToSkip;
-(void)revert;
-(BOOL)removeWithSpan:(long long)arg1 error:(id*)arg2 ;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(BOOL)updateEventToEvent:(id)arg1 ;
-(NSString *)birthdayPersonUniqueID;
-(BOOL)isAllDay;
-(NSDate *)occurrenceDate;
-(NSDate *)startDateIncludingTravel;
-(id)recurrenceRule;
-(id)startDateForRecurrence;
-(EKEventStore *)eventStore;
-(void)setRecurrenceRule:(id)arg1 ;
-(BOOL)isStartDateDirty;
-(BOOL)isEndDateDirty;
-(BOOL)timeChanged;
-(BOOL)dateChanged;
-(BOOL)locationChanged;
-(long long)travelRoutingMode;
-(BOOL)eligibleForTravelAdvisories;
-(BOOL)travelAdvisoryBehaviorIsEffectivelyEnabled;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(NSString *)eventIdentifier;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(EKCalendarDate *)startCalendarDateIncludingTravelTime;
-(EKCalendarDate *)startCalendarDate;
-(BOOL)canBeRespondedTo;
-(NSString *)responseComment;
-(EKCalendarDate *)endCalendarDate;
-(BOOL)allowsPrivacyLevelModifications;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(id)exportToICS;
-(BOOL)titleChanged;
-(void)setResponseComment:(NSString *)arg1 ;
-(BOOL)locationIsAConferenceRoom;
-(BOOL)automaticLocationGeocodingAllowed;
-(SCD_Struct_EK3)startDateGr;
-(SCD_Struct_EK3)endDateGr;
-(id)committedValueForKey:(id)arg1 ;
-(BOOL)changingAllDayPropertyIsAllowed;
-(BOOL)canDetachSingleOccurrence;
-(BOOL)isTentative;
-(BOOL)isTravelTimeEditable;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)canSetAvailability;
-(void)setParticipationStatus:(long long)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(BOOL)responseMustApplyToAll;
-(long long)participationStatus;
-(long long)_parentParticipationStatus;
-(EKSuggestedEventInfo *)suggestionInfo;
-(BOOL)isStatusDirty;
-(long long)birthdayPersonID;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)validateRecurrenceRule:(id)arg1 error:(id*)arg2 ;
-(double)durationIncludingTravel;
-(BOOL)isAllDayDirty;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)isDetached;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(id)title;
-(void)setTimeZone:(id)arg1 ;
-(BOOL)isEditable;
-(NSString *)uniqueId;
-(long long)status;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(void)setAllDay:(BOOL)arg1 ;
-(void)rollback;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(BOOL)refresh;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
