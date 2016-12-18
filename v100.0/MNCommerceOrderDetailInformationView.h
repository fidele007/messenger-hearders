/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

