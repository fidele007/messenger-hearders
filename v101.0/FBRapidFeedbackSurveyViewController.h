/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBOrientationStateDelegate.h>

@protocol FBRapidFeedbackSurveyViewDelegate;
@class FBUserSession, UIViewController, FBRapidFeedbackPopoverView, UIView, NSLayoutConstraint, UITapGestureRecognizer, UIButton, FBKeyboardObserver, FBKVOController, FBOrientationState, UIPanGestureRecognizer, FBNetworkImageView, FBRapidFeedbackStyleSheet, NSString;

@interface FBRapidFeedbackSurveyViewController : UIViewController <FBKeyboardObserverDelegate, FBOrientationStateDelegate> {

	FBUserSession* _session;
	UIViewController* _contentViewController;
	FBRapidFeedbackPopoverView* _popoverView;
	UIView* _fadingFullScreenBackgroundView;
	unsigned long long _popoverState;
	NSLayoutConstraint* _popoverTopConstraint;
	NSLayoutConstraint* _popoverBottomConstraint;
	NSLayoutConstraint* _popoverCenterYConstraint;
	NSLayoutConstraint* _popoverHeightConstraint;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _topBar;
	UIView* _brandedTopBar;
	UIButton* _closeButton;
	UIView* _bottomBar;
	UIButton* _submitButton;
	FBKeyboardObserver* _keyboardObserver;
	FBKVOController* _contentViewScrollObserver;
	FBOrientationState* _orientationState;
	UIPanGestureRecognizer* _panRecognizer;
	CGPoint _initialViewPosition;
	FBKVOController* _contentSizeObserver;
	FBNetworkImageView* _headerImageView;
	BOOL _showXOutButton;
	id<FBRapidFeedbackSurveyViewDelegate> _delegate;
	/*^block*/id _submitButtonHandler;
	/*^block*/id _closeButtonHandler;
	double _bottomPaddingOffset;
	FBRapidFeedbackStyleSheet* _styleSheet;
	NSLayoutConstraint* _popoverWidthConstraint;
	NSLayoutConstraint* _popoverCenterXConstraint;
	UIView* _topBarFadingBackground;
	NSString* _submitButtonTitle;
	long long _underlyingStatusBarStyle;

}

@property (nonatomic,retain) NSLayoutConstraint * popoverWidthConstraint;                        //@synthesize popoverWidthConstraint=_popoverWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * popoverCenterXConstraint;                      //@synthesize popoverCenterXConstraint=_popoverCenterXConstraint - In the implementation block
@property (nonatomic,retain) UIView * topBarFadingBackground;                                    //@synthesize topBarFadingBackground=_topBarFadingBackground - In the implementation block
@property (nonatomic,copy) NSString * submitButtonTitle;                                         //@synthesize submitButtonTitle=_submitButtonTitle - In the implementation block
@property (assign,nonatomic) long long underlyingStatusBarStyle;                                 //@synthesize underlyingStatusBarStyle=_underlyingStatusBarStyle - In the implementation block
@property (assign,nonatomic,__weak) id<FBRapidFeedbackSurveyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id submitButtonHandler;                                               //@synthesize submitButtonHandler=_submitButtonHandler - In the implementation block
@property (nonatomic,copy) id closeButtonHandler;                                                //@synthesize closeButtonHandler=_closeButtonHandler - In the implementation block
@property (assign,nonatomic) double bottomPaddingOffset;                                         //@synthesize bottomPaddingOffset=_bottomPaddingOffset - In the implementation block
@property (assign,nonatomic) BOOL showXOutButton;                                                //@synthesize showXOutButton=_showXOutButton - In the implementation block
@property (nonatomic,retain) FBRapidFeedbackStyleSheet * styleSheet;                             //@synthesize styleSheet=_styleSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setShowXOutButton:(BOOL)arg1 ;
-(NSString *)submitButtonTitle;
-(void)orientationState:(id)arg1 didChangeToInterfaceOrientation:(long long)arg2 ;
-(void)setStyleSheet:(FBRapidFeedbackStyleSheet *)arg1 ;
-(BOOL)fb_disableFakePush;
-(id)initWithContentViewController:(id)arg1 styleSheet:(id)arg2 state:(unsigned long long)arg3 userSession:(id)arg4 submitButtonTitle:(id)arg5 ;
-(void)setSubmitButtonHandler:(id)arg1 ;
-(void)setCloseButtonHandler:(id)arg1 ;
-(void)setContentViewController:(id)arg1 state:(unsigned long long)arg2 submitButtonTitle:(id)arg3 ;
-(void)setUnderlyingStatusBarStyle:(long long)arg1 ;
-(void)_panGestureHandle:(id)arg1 ;
-(double)_popoverWidth;
-(void)_handleSubmitButton:(id)arg1 ;
-(void)_addBrandedTopBar;
-(void)_addTopBar;
-(void)_addBottomBar;
-(void)_setSurveyContentView:(id)arg1 state:(unsigned long long)arg2 ;
-(void)_initConstraints;
-(void)_updateViewsConstraints;
-(double)_popoverBottomOuterPadding;
-(void)_updateHeaderIfNeeded;
-(void)_updateConstraintsForToastState;
-(void)_updateConstraintsForFullScreenState;
-(void)_updateConstraintsForVerticallyCenteredState;
-(UIView *)topBarFadingBackground;
-(void)_handleCloseButton:(id)arg1 ;
-(void)_applyShadowToBarView:(id)arg1 ;
-(double)_timeForPopoverToLeaveScreenBoredersWithVelocity:(CGPoint)arg1 ;
-(void)_updateKeyboardStateWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 ;
-(id)submitButtonHandler;
-(id)closeButtonHandler;
-(double)bottomPaddingOffset;
-(void)setBottomPaddingOffset:(double)arg1 ;
-(BOOL)showXOutButton;
-(NSLayoutConstraint *)popoverWidthConstraint;
-(void)setPopoverWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)popoverCenterXConstraint;
-(void)setPopoverCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopBarFadingBackground:(UIView *)arg1 ;
-(void)setSubmitButtonTitle:(NSString *)arg1 ;
-(long long)underlyingStatusBarStyle;
-(void)setDelegate:(id<FBRapidFeedbackSurveyViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBRapidFeedbackSurveyViewDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBRapidFeedbackStyleSheet *)styleSheet;
@end
