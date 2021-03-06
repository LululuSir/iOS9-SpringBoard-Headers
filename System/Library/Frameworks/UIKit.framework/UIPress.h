/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIResponderForwardable.h>

@class NSMutableArray, UIWindow, UIResponder, NSArray, NSString;

@interface UIPress : NSObject <_UIResponderForwardable> {

	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	BOOL _abandonForwardingRecord;
	BOOL __synthetic;
	double _timestamp;
	long long _phase;
	long long _type;
	UIWindow* _window;
	UIResponder* _responder;
	double _force;

}

@property (assign,nonatomic) double timestamp;                                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase;                                                        //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                      //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIResponder * responder;                                                //@synthesize responder=_responder - In the implementation block
@property (nonatomic,copy) NSArray * gestureRecognizers; 
@property (assign,nonatomic) double force;                                                           //@synthesize force=_force - In the implementation block
@property (assign,setter=_setSynthetic:,getter=_isSynthetic,nonatomic) BOOL _synthetic;              //@synthesize _synthetic=__synthetic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
-(UIWindow *)window;
-(NSString *)description;
-(double)timestamp;
-(void)setWindow:(UIWindow *)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(void)_setSynthetic:(BOOL)arg1 ;
-(double)force;
-(void)setType:(long long)arg1 ;
-(void)setResponder:(UIResponder *)arg1 ;
-(void)setForce:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(long long)type;
-(NSArray *)gestureRecognizers;
-(void)_setForwardablePhase:(long long)arg1 ;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1 ;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(UIResponder *)responder;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(long long)_forwardablePhase;
-(BOOL)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
-(BOOL)_isDirectionalPress;
-(BOOL)_isSynthetic;
@end

