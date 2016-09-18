/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCommerceOrderDetailOrderSummaryView, MNBusinessSeparatorView, MNCommerceLabelWithHeaderView, NSString, MNCommerceOrderDetailInformationViewModel, NSOrderedSet;

@interface MNCommerceOrderDetailInformationView : UIView {

	MNCommerceOrderDetailOrderSummaryView* _totalPriceView;
	MNBusinessSeparatorView* _separatorView;
	MNCommerceLabelWithHeaderView* _paymentMethodView;
	MNCommerceLabelWithHeaderView* _addressView;
	MNCommerceLabelWithHeaderView* _orderedOnView;
	MNCommerceLabelWithHeaderView* _receiptIDView;
	NSString* _receiptString;
	MNCommerceOrderDetailInformationViewModel* _viewModel;
	NSOrderedSet* _subviews;

}
-(void)_updateView:(id)arg1 forLabel:(id)arg2 ;
-(void)_updateSubviewsWithViewModel:(id)arg1 ;
-(void)_initializeSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end
