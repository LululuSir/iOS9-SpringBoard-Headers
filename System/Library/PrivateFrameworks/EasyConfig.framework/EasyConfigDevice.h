/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _userQueue;
	NSDictionary* _scanRecord;
	BOOL _started;
	int _firstErr;
	BonjourBrowserRef _airplayBrowser;
	NSDictionary* _airplayBonjourInfo;
	BonjourBrowserRef _raopBrowser;
	NSDictionary* _raopBonjourInfo;
	BonjourBrowserRef _mfiConfigBrowser;
	NSDictionary* _mfiConfigBonjourInfo;
	BonjourBrowserRef _hapBrowser;
	NSDictionary* _hapBonjourInfo;
	unsigned _configSeed;
	HTTPClientPrivateRef _httpClient;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	int _state;
	double _securityStartTime;
	double _securityFinishTime;
	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	/*^block*/id _promptForSetupCodeBlock;
	unsigned long long _deviceIdentifier;
	unsigned long long _features;
	NSString* _model;
	NSString* _name;
	NSDictionary* _configuration;
	NSDictionary* _configResponse;
	BOOL _pausesAfterApply;
	BOOL _supportsHAP;
	BOOL _supportsMFi;
	BOOL _supportsTLV;
	BOOL _preConfigMetricsSet;
	SCD_Struct_Ea5 _preConfigMetrics;
	BOOL _postConfigMetricsSet;
	SCD_Struct_Ea6 _postConfigMetrics;
	double _configStartTime;
	double _findPreConfigStartTime;
	double _findPreConfigFoundTime;
	double _findPostConfigStartTime;
	double _findPostConfigFoundTime;
	double _applyConfigStartTime;
	double _applyConfigFinishTime;
	double _postConfigCheckStartTime;
	double _postConfigCheckFinishTime;

}

@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long deviceIdentifier;                     //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (assign,nonatomic) unsigned long long features;                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL pausesAfterApply;                                   //@synthesize pausesAfterApply=_pausesAfterApply - In the implementation block
+(id)deviceWithScanRecord:(id)arg1 ;
+(BOOL)supportedScanRecord:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)stop;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_start;
-(void)start;
-(NSString *)model;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(void)setModel:(NSString *)arg1 ;
-(void)resumePostConfig;
-(void)setPromptForSetupCodeHandler:(/*^block*/id)arg1 ;
-(void)setPausesAfterApply:(BOOL)arg1 ;
-(void)trySetupCode:(id)arg1 ;
-(void)setPreConfigMetrics:(const SCD_Struct_Ea5*)arg1 ;
-(void)setPostConfigMetrics:(const SCD_Struct_Ea6*)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)deviceIdentifier;
-(void)setDeviceIdentifier:(unsigned long long)arg1 ;
-(int)_pairSetupStart;
-(int)_pairVerifyStart;
-(void)_stop:(int)arg1 ;
-(int)_timeoutTimerStart:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(int)_startBonjourWithTimeout:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)_postNote:(id)arg1 info:(id)arg2 ;
-(void)_postConfigCheckStart:(id)arg1 ;
-(BOOL)pausesAfterApply;
-(void)_postConfigCheckCompletion:(HTTPMessagePrivate*)arg1 ;
-(int)_configureStart:(id)arg1 ;
-(void)_applyConfigCompletion:(HTTPMessagePrivate*)arg1 ;
-(int)_mfiSAPNext:(HTTPMessagePrivate*)arg1 ;
-(void)_findDevicePreConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(BOOL)updated:(id)arg1 ;
-(int)_mfiSAPStart;
-(int)_findDevicePreConfigStart;
-(void)_postProgress:(int)arg1 withResponse:(id)arg2 ;
-(BOOL)removed:(id)arg1 ;
-(void)_postProgress:(int)arg1 ;
-(int)_pairSetupNext:(HTTPMessagePrivate*)arg1 ;
-(int)_applyConfigStart;
-(void)_trySetupCode:(id)arg1 ;
-(int)_findDevicePostConfigStart;
-(void)_logEnded;
-(int)_setupClient:(id)arg1 ;
-(int)_pairVerifyNext:(HTTPMessagePrivate*)arg1 ;
-(void)_findDevicePostConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)_handleError:(int)arg1 ;
-(unsigned long long)features;
-(void)setFeatures:(unsigned long long)arg1 ;
@end
