/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {

	SKUIDownloadsCellView* _cellView;
	UIImageView* _editIndicator;
	long long _cellState;

}

@property (nonatomic,readonly) SKUIDownloadsCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
@property (assign,nonatomic) long long cellState;                             //@synthesize cellState=_cellState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(SKUIDownloadsCellView *)cellView;
-(void)setCellState:(long long)arg1 ;
-(void)_reloadEditState;
-(long long)cellState;
@end

