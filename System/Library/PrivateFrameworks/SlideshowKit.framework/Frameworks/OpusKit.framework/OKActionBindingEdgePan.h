/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingPan.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIScreenEdgePanGestureRecognizer, NSString;

@interface OKActionBindingEdgePan : OKActionBindingPan <UIGestureRecognizerDelegate> {

	unsigned long long _edges;
	UIScreenEdgePanGestureRecognizer* _edgePanGestureRecognizer;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)edges;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)performActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
@end

