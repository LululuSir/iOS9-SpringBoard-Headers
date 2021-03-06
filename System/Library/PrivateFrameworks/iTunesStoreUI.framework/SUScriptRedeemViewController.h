/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {

	long long _category;
	NSString* _initialCode;

}

@property (nonatomic,copy) NSString * initialCode; 
@property (nonatomic,readonly) long long redeemCategoryApps; 
@property (nonatomic,readonly) long long redeemCategoryBooks; 
@property (nonatomic,readonly) long long redeemCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)initialCode;
-(void)setInitialCode:(NSString *)arg1 ;
-(id)newNativeViewController;
-(void)setRedeemStyle:(long long)arg1 ;
-(long long)redeemCategoryApps;
-(long long)redeemCategoryBooks;
-(long long)redeemCategoryMedia;
@end

