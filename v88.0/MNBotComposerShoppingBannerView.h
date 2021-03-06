/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNBotComposerShoppingBannerViewDelegate;
@class UIView, UIButton, MNBotComposerShoppingBannerViewModel;

@interface MNBotComposerShoppingBannerView : UIView {

	UIView* _topSeparatorView;
	UIButton* _dismissButton;
	UIButton* _bannerButton;
	MNBotComposerShoppingBannerViewModel* _viewModel;
	id<MNBotComposerShoppingBannerViewDelegate> _delegate;

}

@property (nonatomic,copy) MNBotComposerShoppingBannerViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNBotComposerShoppingBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapDismissButton;
-(void)_didTapBannerButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNBotComposerShoppingBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNBotComposerShoppingBannerViewDelegate>)delegate;
-(MNBotComposerShoppingBannerViewModel *)viewModel;
-(void)setViewModel:(MNBotComposerShoppingBannerViewModel *)arg1 ;
@end

