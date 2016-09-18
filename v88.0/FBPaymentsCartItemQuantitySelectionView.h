/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, FBPaymentsButton;

@interface FBPaymentsCartItemQuantitySelectionView : UIView {

	unsigned long long _minimumQuantity;
	UILabel* _titleLabel;
	UILabel* _quantityLabel;
	FBPaymentsButton* _minusButton;
	FBPaymentsButton* _plusButton;
	unsigned long long _selectedQuantity;

}

@property (assign,nonatomic) unsigned long long selectedQuantity;              //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
-(id)initWithSelectedQuantity:(unsigned long long)arg1 minimumQuantity:(unsigned long long)arg2 ;
-(unsigned long long)selectedQuantity;
-(void)setSelectedQuantity:(unsigned long long)arg1 ;
-(id)_quantityLabel;
-(id)_minusButton;
-(id)_plusButton;
-(id)_selectedQuantityString;
-(void)_didTapMinusButton;
-(void)_didTapPlusButton;
-(void)layoutSubviews;
-(id)_titleLabel;
@end

