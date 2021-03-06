/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPaymentsBannerViewDelegate;
@class MNPaymentsBannerViewModel, UIImageView, UILabel, UIButton, UIControl, UITapGestureRecognizer, NSString;

@interface MNPaymentsBannerView : UIView <UIGestureRecognizerDelegate> {

	MNPaymentsBannerViewModel* _viewModel;
	UIImageView* _bannerImageView;
	UIImageView* _arrowImageView;
	UILabel* _titleLabel;
	UILabel* _detailsTextLabel;
	UIButton* _dismissButton;
	UIControl* _bannerBackgroundView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNPaymentsBannerViewDelegate> _delegate;

}

@property (nonatomic,copy) MNPaymentsBannerViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapBanner;
-(void)_didTapDismissButton:(id)arg1 ;
-(void)setDelegate:(id<MNPaymentsBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsBannerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(MNPaymentsBannerViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsBannerViewModel *)arg1 ;
@end

