/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property (assign) CGPathRef emitterPath; 
@property (assign) float emitterDuration; 
@property (assign) float spinBias; 
@property (copy) NSArray * emitterBehaviors; 
@property (assign) CGRect cullRect; 
@property (assign) double cullMinZ; 
@property (assign) double cullMaxZ; 
@property (copy) NSArray * emitterCells; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) CGPoint emitterPosition; 
@property (assign) double emitterZPosition; 
@property (assign) CGSize emitterSize; 
@property (assign) double emitterDepth; 
@property (copy) NSString * emitterShape; 
@property (copy) NSString * emitterMode; 
@property (copy) NSString * renderMode; 
@property (assign) BOOL preservesDepth; 
@property (assign) float velocity; 
@property (assign) float scale; 
@property (assign) float spin; 
@property (assign) unsigned seed; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(NSArray *)emitterBehaviors;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(float)emitterDuration;
-(float)spinBias;
-(CGRect)cullRect;
-(double)cullMinZ;
-(double)cullMaxZ;
-(CGPathRef)emitterPath;
-(void)setEmitterPath:(CGPathRef)arg1 ;
-(void)setEmitterDuration:(float)arg1 ;
-(void)setSpinBias:(float)arg1 ;
-(void)setCullRect:(CGRect)arg1 ;
-(void)setCullMinZ:(double)arg1 ;
-(void)setCullMaxZ:(double)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)preservesDepth;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)setVelocity:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(float)scale;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(float)velocity;
-(unsigned)seed;
-(NSString *)renderMode;
-(float)birthRate;
-(void)setBirthRate:(float)arg1 ;
-(NSArray *)emitterCells;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(float)lifetime;
-(void)setLifetime:(float)arg1 ;
-(float)spin;
-(void)setSpin:(float)arg1 ;
-(void)setEmitterShape:(NSString *)arg1 ;
-(NSString *)emitterShape;
-(void)setSeed:(unsigned)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(double)emitterDepth;
-(void)setEmitterDepth:(double)arg1 ;
-(NSString *)emitterMode;
-(CGPoint)emitterPosition;
-(CGSize)emitterSize;
-(void)setEmitterSize:(CGSize)arg1 ;
-(double)emitterZPosition;
-(void)setEmitterZPosition:(double)arg1 ;
-(void)reloadValueForKeyPath:(id)arg1 ;
@end

