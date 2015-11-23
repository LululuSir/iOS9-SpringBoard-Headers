/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath;

@interface SCNShape : SCNGeometry {

	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	long long _chamferMode;
	UIBezierPath* _path;

}

@property (nonatomic,copy) UIBezierPath * path; 
@property (assign,nonatomic) double extrusionDepth; 
@property (assign,nonatomic) long long chamferMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
+(id)shapeWithPath:(id)arg1 extrusionDepth:(double)arg2 ;
+(BOOL)supportsSecureCoding;
-(long long)primitiveType;
-(void)setPrimitiveType:(long long)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DShapeGeometry*)arg1 ;
-(long long)chamferMode;
-(void)setChamferMode:(long long)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(SCD_Struct_SC89*)params;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(double)discretizedStraightLineMaxLength;
-(id)initPresentationShapeGeometryWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
-(id)initWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
-(void)_customEncodingOfSCNShape:(id)arg1 ;
-(void)_customDecodingOfSCNShape:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copy;
-(UIBezierPath *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(double)chamferRadius;
-(void)setChamferRadius:(double)arg1 ;
@end
