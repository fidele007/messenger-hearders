/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface MNMontageArtPickerFunctionCollectionViewCell : UICollectionViewCell {

	UIImageView* _backgroundImageView;
	UIImageView* _imageView;
	long long _cellType;

}

@property (assign,nonatomic) long long cellType;              //@synthesize cellType=_cellType - In the implementation block
-(void)showSelectedState;
-(void)hideSelectedState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setCellType:(long long)arg1 ;
-(long long)cellType;
@end

