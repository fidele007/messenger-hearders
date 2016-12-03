/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNComposerBarDelegate.h>
#import <Messenger/MNComposerContaining.h>
#import <Messenger/MNComposerPrimaryExtensionViewing.h>

@protocol MNComposerBannerViewPresenterDelegate, MNComposerDynamicContainerViewDelegate;
@class MNNuxView, MNComposerBannerWrapperView, MNComposerBar, UIView, MNComposerExtensionSegmentedControlView, UIPanGestureRecognizer, NSString, NSSet, MNComposerActionView;

@interface MNComposerDynamicContainerView : UIView <MNComposerBarDelegate, MNComposerContaining, MNComposerPrimaryExtensionViewing> {

	long long _actionNuxButtonType;
	MNNuxView* _actionNuxView;
	MNComposerBannerWrapperView* _bannerWrapperView;
	MNComposerBar* _composerBar;
	BOOL _excludeBannerWrapperViewInSize;
	UIView* _previewView;
	BOOL _skipBannerWrapperViewLayout;
	BOOL _skipComposerBarLayout;
	UIView* _contentView;
	UIView* _controlsView;
	MNComposerExtensionSegmentedControlView* _extensionSegmentedControlView;
	long long _layoutMode;
	id<MNComposerBannerViewPresenterDelegate> _bannerViewPresenterDelegate;
	id<MNComposerDynamicContainerViewDelegate> _delegate;
	UIPanGestureRecognizer* _moreDrawerPanGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<MNComposerDynamicContainerViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * moreDrawerPanGestureRecognizer;                                 //@synthesize moreDrawerPanGestureRecognizer=_moreDrawerPanGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerBannerViewPresenterDelegate> bannerViewPresenterDelegate;              //@synthesize bannerViewPresenterDelegate=_bannerViewPresenterDelegate - In the implementation block
@property (nonatomic,readonly) id<MNComposerSearchBarConfiguring> composerSearchBar; 
@property (nonatomic,readonly) id<MNComposerTextViewConfiguring> textView; 
@property (nonatomic,copy) NSSet * primaryExtensionTypes; 
@property (nonatomic,readonly) MNComposerActionView * composerActionView; 
@property (nonatomic,retain) UIView * contentView;                                                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * controlsView;                                                              //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) MNComposerExtensionSegmentedControlView * extensionSegmentedControlView;                   //@synthesize extensionSegmentedControlView=_extensionSegmentedControlView - In the implementation block
@property (assign,nonatomic) long long layoutMode;                                                                      //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) long long composerBarLeftButtonMode; 
@property (assign,nonatomic) long long composerBarMode; 
-(void)setLayoutMode:(long long)arg1 ;
-(void)presentBannerView:(id)arg1 options:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissBannerView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)composerActionButtonForPrimaryExtensionType:(long long)arg1 ;
-(void)composerPrimaryExtensionDeselected;
-(void)composerPrimaryExtensionTypeSelected:(long long)arg1 ;
-(void)setComposerActionButton:(id)arg1 forPrimaryExtensionType:(long long)arg2 ;
-(void)setPrimaryExtensionTypes:(NSSet *)arg1 ;
-(NSSet *)primaryExtensionTypes;
-(void)composerBarDidUpdateActionButtonLayout:(id)arg1 ;
-(void)composerBar:(id)arg1 didTapButtonWithType:(long long)arg2 ;
-(void)addTextViewFocusHandler:(/*^block*/id)arg1 ;
-(id<MNComposerSearchBarConfiguring>)composerSearchBar;
-(id)initWithFrame:(CGRect)arg1 composerConfiguration:(id)arg2 ;
-(void)setControlsView:(UIView *)arg1 ;
-(MNComposerActionView *)composerActionView;
-(UIView *)controlsView;
-(void)setBannerViewPresenterDelegate:(id<MNComposerBannerViewPresenterDelegate>)arg1 ;
-(long long)composerBarMode;
-(void)setComposerBarMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)endComposerBarReparenting;
-(id)beginComposerBarReparenting;
-(UIPanGestureRecognizer *)moreDrawerPanGestureRecognizer;
-(void)setComposerBarLeftButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)presentPreview:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPreview:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentBannerView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)dismissActionNuxViewForButtonType:(long long)arg1 ;
-(BOOL)presentActionNuxView:(id)arg1 forButtonType:(long long)arg2 ;
-(id)presentedNuxViewForButtonType:(long long)arg1 ;
-(void)setExtensionSegmentedControlView:(MNComposerExtensionSegmentedControlView *)arg1 ;
-(MNComposerExtensionSegmentedControlView *)extensionSegmentedControlView;
-(id<MNComposerBannerViewPresenterDelegate>)bannerViewPresenterDelegate;
-(long long)composerBarLeftButtonMode;
-(void)setComposerBarLeftButtonMode:(long long)arg1 ;
-(void)setComposerBarMode:(long long)arg1 ;
-(double)_measuredHeightForWidth:(double)arg1 ;
-(id)composerBarDelegate;
-(void)setComposerBarDelegate:(id)arg1 ;
-(void)setDelegate:(id<MNComposerDynamicContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNComposerDynamicContainerViewDelegate>)delegate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<MNComposerTextViewConfiguring>)textView;
-(long long)layoutMode;
@end
