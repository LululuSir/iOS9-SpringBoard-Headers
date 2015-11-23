/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface RDGizmoCommands : NSObject
-(void)disableSleep;
-(void)enableSleep;
-(void)startPlayingDemoMovie;
-(void)resetNotificationCenterIfNecessary;
-(void)requestNotificationCenterCleanup;
-(void)resetBrightnessToDefaultValue;
-(void)resetFontSizeToDefaultValue;
-(void)resetHeySiri;
-(void)resetStopwatch;
-(void)stopPlayingDemoMovie;
-(void)disableMessageExpiration;
-(void)disableCalendarSync;
-(void)disableMusicSync;
-(id)getBacklightAssertionQueue;
-(void)renewBacklightAssertion;
-(void)reboot;
@end
