/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FB360HeadingIndicatorViewDelegate.h>

@protocol FB360IndicatorViewDelegate, FB360DeviceIndicatorView;
@class UIView, FB360GyroIndicatorView, FB360HeadingIndicatorView, NSString;

@interface FB360IndicatorView : UIView <FB360HeadingIndicatorViewDelegate> {

	BOOL _highlighted;
	BOOL _animationsPaused;
	unsigned long long _animations;
	id<FB360IndicatorViewDelegate> _delegate;
	unsigned long long _stage;
	UIView*<FB360DeviceIndicatorView> _deviceIndicator;
	FB360GyroIndicatorView* _gyroIndicator;
	FB360HeadingIndicatorView* _headingIndicator;
	UIEdgeInsets _layoutInsets;

}

@property (nonatomic,readonly) unsigned long long stage;                                     //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) UIView*<FB360DeviceIndicatorView> deviceIndicator;              //@synthesize deviceIndicator=_deviceIndicator - In the implementation block
@property (nonatomic,retain) FB360GyroIndicatorView * gyroIndicator;                         //@synthesize gyroIndicator=_gyroIndicator - In the implementation block
@property (nonatomic,retain) FB360HeadingIndicatorView * headingIndicator;                   //@synthesize headingIndicator=_headingIndicator - In the implementation block
@property (assign,nonatomic) BOOL animationsPaused;                                          //@synthesize animationsPaused=_animationsPaused - In the implementation block
@property (nonatomic,readonly) unsigned long long animations;                                //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                               //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) id<FB360IndicatorViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets;                                      //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FB360GyroIndicatorView *)gyroIndicator;
-(void)setGyroIndicator:(FB360GyroIndicatorView *)arg1 ;
-(void)_applicationWillForeground;
-(UIEdgeInsets)layoutInsets;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)updateIndicatorWithFieldOfView:(double)arg1 headingAngle:(double)arg2 ;
-(void)headingIndicatorDidTapHeading:(id)arg1 ;
-(void)_transitionToNextStage;
-(void)_pauseAnimations;
-(BOOL)animationsPaused;
-(void)_startGyroAnimationAnimateFadeIn:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startPhoneAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_addFadeOutAnimationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fadeHeadingIndicatorIn:(BOOL)arg1 ;
-(FB360HeadingIndicatorView *)headingIndicator;
-(void)setAnimationsPaused:(BOOL)arg1 ;
-(UIView*<FB360DeviceIndicatorView>)deviceIndicator;
-(void)startGyroAnimation;
-(void)stopGyroAnimation;
-(void)runPhoneAnimation;
-(void)cancelPhoneAnimation;
-(void)stopAnimationsAnimated:(BOOL)arg1 ;
-(void)signalInteraction;
-(void)setDeviceIndicator:(UIView*<FB360DeviceIndicatorView>)arg1 ;
-(void)setHeadingIndicator:(FB360HeadingIndicatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FB360IndicatorViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<FB360IndicatorViewDelegate>)delegate;
-(void)_commonInit;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned long long)animations;
-(BOOL)highlighted;
-(unsigned long long)stage;
-(void)_applicationWillResignActive;
-(void)_resumeAnimations;
@end

