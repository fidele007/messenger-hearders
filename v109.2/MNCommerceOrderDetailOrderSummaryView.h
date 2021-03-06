/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCommerceOrderDetailInformationViewModel, FBRichTextView, MNCommerceHorizontallyStackedColumnView, NSMutableArray;

@interface MNCommerceOrderDetailOrderSummaryView : UIView {

	MNCommerceOrderDetailInformationViewModel* _viewModel;
	FBRichTextView* _headerLabel;
	MNCommerceHorizontallyStackedColumnView* _subtotalView;
	MNCommerceHorizontallyStackedColumnView* _shippingCostView;
	NSMutableArray* _adjustmentsViews;
	MNCommerceHorizontallyStackedColumnView* _taxView;
	MNCommerceHorizontallyStackedColumnView* _totalCostView;

}
-(void)_initializeSubviews;
-(void)_configureOptionalRow:(id)arg1 withCurrencyString:(id)arg2 ;
-(void)_updateAdjustments;
-(CGSize)_headerLabelSizeConstrainedToSize:(CGSize)arg1 ;
-(void)_setHeaderViewTitle:(id)arg1 ;
-(void)_setUpHeaderView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

