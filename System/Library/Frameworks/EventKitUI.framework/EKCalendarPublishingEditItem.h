/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <libobjc.A.dylib/CalendarPublishingActivityDelegate.h>

@class UIView, UILabel, UIActivityIndicatorView, NSString;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {

	BOOL _published;
	UIView* _footerView;
	UILabel* _descriptionLabel;
	UILabel* _publishingLabel;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) BOOL published;                        //@synthesize published=_published - In the implementation block
@property (nonatomic,readonly) UIView * footerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)pubishURL;
-(id)calendarTitle;
-(void)setPublished:(BOOL)arg1 ;
-(void)_publishChanged:(id)arg1 ;
-(BOOL)published;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)reset;
-(UIView *)footerView;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end
