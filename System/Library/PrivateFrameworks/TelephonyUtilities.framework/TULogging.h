/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TULogging : NSObject
+(BOOL)shouldLogType:(id)arg1 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 backtrace:(BOOL)arg5 format:(id)arg6 ;
+(void)_logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(BOOL)arg5 backtrace:(BOOL)arg6 format:(id)arg7 args:(char*)arg8 ;
+(void)checkpointLoggingSession:(id)arg1 ;
+(void)pulseLoggingSession;
+(BOOL)isWalkaboutEnabled;
+(void)enablePhoneLogging;
+(void)disablePhoneLogging;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 backtrace:(BOOL)arg4 format:(id)arg5 ;
+(void)logType:(id)arg1 topic:(id)arg2 category:(id)arg3 severity:(int)arg4 asSession:(BOOL)arg5 backtrace:(BOOL)arg6 format:(id)arg7 ;
+(void)registerForShouldLogChangedNotification;
+(void)unregisterForShouldLogChangedNotification;
+(BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
+(void)beginLoggingSessionAsInitiator:(BOOL)arg1 ;
+(void)endLoggingSession;
@end
