/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
