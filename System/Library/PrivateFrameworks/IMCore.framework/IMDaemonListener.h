/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSProtocolChecker, NSDate, NSData, NSString, NSDictionary, NSArray;

@interface IMDaemonListener : NSObject {

	NSMutableDictionary* _properties;
	NSMutableDictionary* _persistentProperties;
	NSMutableArray* _deferredChatMessages;
	NSMutableArray* _handlers;
	NSProtocolChecker* _protocol;
	NSMutableDictionary* _services;
	NSDate* _myIdleSince;
	NSData* _myPicture;
	NSMutableDictionary* _contexts;
	NSString* _myStatusMessage;
	NSString* _myNowPlayingString;
	unsigned long long _myStatus;
	unsigned long long _vcCapabilities;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;
	BOOL _holdingChatMessages;
	BOOL _hidingDisconnect;
	BOOL _hasPendingProcessChange;

}

@property (nonatomic,readonly) NSDictionary * properties;                                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSDictionary * persistentProperties;                            //@synthesize persistentProperties=_persistentProperties - In the implementation block
@property (nonatomic,readonly) unsigned long long myStatus; 
@property (nonatomic,readonly) NSString * myStatusMessage;                                     //@synthesize myStatusMessage=_myStatusMessage - In the implementation block
@property (nonatomic,readonly) unsigned myIdleTime; 
@property (nonatomic,readonly) unsigned long long vcCapabilities;                              //@synthesize vcCapabilities=_vcCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL shouldHoldChatMessages;                                    //@synthesize holdingChatMessages=_holdingChatMessages - In the implementation block
@property (nonatomic,readonly) BOOL isHoldingChatMessages; 
@property (nonatomic,readonly) BOOL isSetupComplete;                                           //@synthesize setupComplete=_setupComplete - In the implementation block
@property (nonatomic,readonly) BOOL hasPostedSetupComplete;                                    //@synthesize postedSetupComplete=_postedSetupComplete - In the implementation block
@property (nonatomic,readonly) NSArray * handlers;                                             //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSArray * allServices; 
@property (nonatomic,retain,readonly) NSMutableDictionary * _contexts;                         //@synthesize contexts=_contexts - In the implementation block
@property (assign,setter=_setHidingDisconnect:,nonatomic) BOOL _hidingDisconnect;              //@synthesize hidingDisconnect=_hidingDisconnect - In the implementation block
-(NSArray *)handlers;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSDictionary *)properties;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
-(unsigned)myIdleTime;
-(unsigned long long)myStatus;
-(NSString *)myStatusMessage;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)defaultsChanged:(id)arg1 forService:(id)arg2 ;
-(void)activeAccountsChanged:(id)arg1 forService:(id)arg2 ;
-(void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned)arg5 blockIdleStatus:(BOOL)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned)arg9 loginStatusMessage:(id)arg10 ;
-(void)account:(id)arg1 loginStatusChanged:(unsigned)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5 ;
-(void)account:(id)arg1 defaultsChanged:(id)arg2 ;
-(void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2 ;
-(void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3 ;
-(void)accountRemoved:(id)arg1 ;
-(void)account:(id)arg1 buddyPropertiesChanged:(id)arg2 ;
-(void)account:(id)arg1 blockListChanged:(id)arg2 ;
-(void)account:(id)arg1 allowListChanged:(id)arg2 ;
-(void)account:(id)arg1 blockingModeChanged:(unsigned)arg2 ;
-(void)account:(id)arg1 blockIdleStatusChanged:(BOOL)arg2 ;
-(void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4 ;
-(void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3 ;
-(void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3 ;
-(void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3 ;
-(void)account:(id)arg1 buddyInfo:(id)arg2 commandReceived:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 buddyInfo:(id)arg2 commandDelivered:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5 ;
-(void)standaloneFileTransferRegistered:(id)arg1 ;
-(void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2 ;
-(void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2 ;
-(void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4 ;
-(void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)account:(id)arg1 statusChanged:(id)arg2 ;
-(void)account:(id)arg1 postedError:(id)arg2 ;
-(void)databaseUpdated:(id)arg1 ;
-(void)databaseFull;
-(void)databaseNoLongerFull;
-(void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5 ;
-(void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(BOOL)arg5 wasCancelled:(BOOL)arg6 ;
-(void)_reallyProcessMyStatusChanged;
-(BOOL)isHoldingChatMessages;
-(void)_processDeferredInvitationDictionary:(id)arg1 ;
-(void)_processMyStatusChanged;
-(BOOL)shouldHoldChatMessages;
-(void)_deferNotification:(id)arg1 ;
-(void)_cacheValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2 ;
-(void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned)arg4 loginStatusMessage:(id)arg5 ;
-(void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3 ;
-(void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6 ;
-(void)_setStamp:(id)arg1 forContext:(id)arg2 ;
-(void)_deferredSetup:(id)arg1 ;
-(BOOL)_hidingDisconnect;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)holdChatMessages;
-(void)releaseHeldChatMessages;
-(id)_stampForContext:(id)arg1 ;
-(id)valueOfProperty:(id)arg1 ;
-(id)valueOfPersistentProperty:(id)arg1 ;
-(NSMutableDictionary *)_contexts;
-(void)_setHidingDisconnect:(BOOL)arg1 ;
-(BOOL)isSetupComplete;
-(unsigned long long)vcCapabilities;
-(BOOL)hasPostedSetupComplete;
-(NSDictionary *)persistentProperties;
@end
