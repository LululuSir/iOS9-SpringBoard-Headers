/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(void)dealloc;
-(unsigned long long)window;
-(void)reset;
-(id)initWithWindow:(unsigned long long)arg1 ;
-(void)update:(double)arg1 ;
-(double)average;
@end
