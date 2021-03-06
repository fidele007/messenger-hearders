/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBBrowserChromeDelegate;
@class FBBrowserLayoutConfig, UIButton, UIToolbar, FBBrowserPulseView, NSString;

@interface FBBrowserFooterView : UIView <UIScrollViewDelegate> {

	FBBrowserLayoutConfig* _layoutConfig;
	UIButton* _backButton;
	UIButton* _forwardButton;
	UIToolbar* _containerView;
	UIButton* _moreButton;
	UIButton* _saveButton;
	UIButton* _switcherButton;
	UIButton* _minimizeButton;
	FBBrowserPulseView* _pulseView;
	BOOL _browserMultiTabsExperimentEnabled;
	BOOL _hasMinimizeButton;
	BOOL _isSaved;
	unsigned long long _pulseShareCount;
	double _chromeState;
	id<FBBrowserChromeDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasBackNavigationAction; 
@property (assign,nonatomic) BOOL hasForwardNavigationAction; 
@property (assign,nonatomic) BOOL hasMinimizeButton;                                   //@synthesize hasMinimizeButton=_hasMinimizeButton - In the implementation block
@property (assign,nonatomic) unsigned long long pulseShareCount;                       //@synthesize pulseShareCount=_pulseShareCount - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                                             //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) double chromeState;                                       //@synthesize chromeState=_chromeState - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserChromeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * saveButtonForNux; 
@property (nonatomic,readonly) UIButton * moreButtonForNux; 
@property (nonatomic,readonly) UIButton * minimizeButtonForNux; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_backButtonTapped;
-(void)setHasMinimizeButton:(BOOL)arg1 ;
-(void)setHasBackNavigationAction:(BOOL)arg1 ;
-(void)_forwardButtonTapped;
-(void)setHasForwardNavigationAction:(BOOL)arg1 ;
-(void)_moreActionsButtonTapped;
-(id)initWithLayoutConfig:(id)arg1 ;
-(void)_didTapPulseView;
-(void)_saveButtonTapped;
-(void)_switcherButtonTapped;
-(void)_minimizeButtonTapped;
-(CGSize)sizeThatFits:(CGSize)arg1 chromeState:(double)arg2 ;
-(BOOL)hasBackNavigationAction;
-(BOOL)hasForwardNavigationAction;
-(void)setPulseShareCount:(unsigned long long)arg1 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(UIButton *)saveButtonForNux;
-(UIButton *)moreButtonForNux;
-(UIButton *)minimizeButtonForNux;
-(BOOL)hasMinimizeButton;
-(unsigned long long)pulseShareCount;
-(double)chromeState;
-(void)setChromeState:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBBrowserChromeDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<FBBrowserChromeDelegate>)delegate;
-(BOOL)isSaved;
@end

