/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class NSString;

@interface _GCControllerButtonInput : GCControllerButtonInput {

	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;
	float _value;
	NSString* _descriptionName;

}
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)pressedChangedHandler;
-(void)setPressedChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
@end

