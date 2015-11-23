/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (assign,nonatomic) int downloadFeeAgreementStatus; 
@property (assign,nonatomic) int termsAndConditionsAgreementStatus; 
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride; 
-(id)initWithMetadata:(id)arg1 ;
-(void)applyDownloadPolicy:(id)arg1 ;
@end
