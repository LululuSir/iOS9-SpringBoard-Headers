/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UIImageView, UIImage;

@interface UIAlertMediaButton : UIAlertButton {

	UIImageView* _checkmarkView;
	UIImage* _tableIcon;
	UIImage* _highlightedTableIcon;

}

@property (nonatomic,readonly) UIImageView * checkmarkView; 
@property (nonatomic,retain) UIImage * tableIcon;                         //@synthesize tableIcon=_tableIcon - In the implementation block
@property (nonatomic,retain) UIImage * highlightedTableIcon;              //@synthesize highlightedTableIcon=_highlightedTableIcon - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIImageView *)checkmarkView;
-(UIImage *)tableIcon;
-(void)setTableIcon:(UIImage *)arg1 ;
-(UIImage *)highlightedTableIcon;
-(void)setHighlightedTableIcon:(UIImage *)arg1 ;
@end
