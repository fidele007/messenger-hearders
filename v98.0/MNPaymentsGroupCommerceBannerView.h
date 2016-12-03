/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsView.h>

@protocol MNPaymentsGroupCommerceBannerViewDelegate;
@class MNPaymentsSaleItemView, MNPaymentsGroupCommerceBannerActionsView, UIView, UIButton, MNPaymentsGroupCommerceBannerViewModel, NSString;

@interface MNPaymentsGroupCommerceBannerView : UIView <MNPaymentsView> {

	MNPaymentsSaleItemView* _itemTextView;
	MNPaymentsGroupCommerceBannerActionsView* _actionsView;
	UIView* _seperatorView;
	UIButton* _closeButton;
	MNPaymentsGroupCommerceBannerViewModel* _viewModel;
	id<MNPaymentsGroupCommerceBannerViewDelegate> _delegate;

}

@property (nonatomic,copy) MNPaymentsGroupCommerceBannerViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsGroupCommerceBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 ;
-(void)didFirstActionButtonClicked:(id)arg1 ;
-(void)didSecondActionButtonClicked:(id)arg1 ;
-(void)didCloseButtonClicked:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsGroupCommerceBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsGroupCommerceBannerViewDelegate>)delegate;
-(MNPaymentsGroupCommerceBannerViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsGroupCommerceBannerViewModel *)arg1 ;
@end
