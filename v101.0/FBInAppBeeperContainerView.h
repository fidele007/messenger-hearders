/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol InAppNotificationContentView, FBInAppBeeperContainerViewDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, UIView, NSTimer, NSString;

@interface FBInAppBeeperContainerView : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _singleTap;
	UIPanGestureRecognizer* _swipeRecognizer;
	BOOL _isShowing;
	double _dismissalDelayAfterSwipeGesture;
	int _beeperDismissalAction;
	double _containerViewHeight;
	long long _appStatusBarStyle;
	UIView* _blurBackgroundView;
	UIView* _blurView;
	BOOL _swipeEnabled;
	BOOL _hasBackgroundBlur;
	UIView*<InAppNotificationContentView> _contentView;
	id<FBInAppBeeperContainerViewDelegate> _delegate;
	long long _statusBarStyle;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;                                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) UIView*<InAppNotificationContentView> contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<FBInAppBeeperContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSwipeEnabled,nonatomic) BOOL swipeEnabled;                             //@synthesize swipeEnabled=_swipeEnabled - In the implementation block
@property (assign,nonatomic) long long statusBarStyle;                                            //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundBlur;                                              //@synthesize hasBackgroundBlur=_hasBackgroundBlur - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_scheduleDismissAfterDelay:(double)arg1 ;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(void)_finishedHiding;
-(void)_slideOutWithSpringDamping:(double)arg1 springVelocity:(double)arg2 ;
-(void)_slideOut;
-(void)setHasBackgroundBlur:(BOOL)arg1 ;
-(void)slideInAndDismissAfterNSeconds:(double)arg1 ;
-(BOOL)hasBackgroundBlur;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBInAppBeeperContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBInAppBeeperContainerViewDelegate>)delegate;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(UIView*<InAppNotificationContentView>)contentView;
-(void)setContentView:(UIView*<InAppNotificationContentView>)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)_resetTimer;
-(void)_handlePan:(id)arg1 ;
-(BOOL)isSwipeEnabled;
-(void)_handleSingleTap:(id)arg1 ;
@end

