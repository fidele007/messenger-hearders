/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFullscreenableVideo.h>

@protocol MNMessageVideoViewDelegate;
@class UIView, UIImageView, UIButton, UITapGestureRecognizer, MNCircularProgressIndicator, MNLoadingIndicator, UIActivityIndicatorView, UILabel, MNVideoPlayingView, FNFPlayerLayer, MNVideoErrorView, NSString;

@interface MNMessageVideoView : UIView <MNFullscreenableVideo> {

	UIView* _overlayTouchView;
	UIImageView* _thumbnailView;
	UIImageView* _backgroundStatusView;
	UIButton* _playButton;
	UIImageView* _playIconCircleView;
	UIButton* _retryButton;
	UITapGestureRecognizer* _tapGesture;
	MNCircularProgressIndicator* _progressView;
	MNLoadingIndicator* _indeterminateProgressView;
	UIActivityIndicatorView* _loadingIndicator;
	UILabel* _durationLabel;
	MNVideoPlayingView* _playerLayer;
	FNFPlayerLayer* _playbackLayer;
	MNVideoErrorView* _errorView;
	long long _previousState;
	UIEdgeInsets _contentInsets;
	BOOL _allowsTranslucency;
	UIButton* _soundButton;
	BOOL _isFullScreen;
	id<MNMessageVideoViewDelegate> _delegate;
	long long _state;
	unsigned long long _soundButtonPosition;
	double _duration;

}

@property (assign,nonatomic,__weak) id<MNMessageVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long soundButtonPosition;                      //@synthesize soundButtonPosition=_soundButtonPosition - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoAttachmentViewModel:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 animated:(BOOL)arg2 ;
-(void)setSoundButtonPosition:(unsigned long long)arg1 ;
-(void)configureWithDuration:(double)arg1 allowsTranslucency:(BOOL)arg2 ;
-(void)associateWithPlayer:(id)arg1 ;
-(void)disassociatePlayer;
-(void)prepareReplacingPlaybackController:(id)arg1 ;
-(void)associateWithPlaybackController:(id)arg1 ;
-(void)replacePlaybackController:(id)arg1 ;
-(void)disassociatePlaybackController;
-(unsigned long long)soundButtonPosition;
-(void)_soundButtonTapped:(id)arg1 ;
-(void)_updateSoundButtonVisibilityUponFullScreenStateChange;
-(void)_didTapOverlay:(id)arg1 ;
-(void)_retryTapped:(id)arg1 ;
-(void)_updateDurationLabel;
-(void)_setPlaybackLayerHidden:(BOOL)arg1 ;
-(double)_alphaForPendingState;
-(void)_animateBounceAlphaTransition:(BOOL)arg1 forView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_alphaAnimationFromValue:(double)arg1 toValue:(double)arg2 ;
-(id)_shrinkingBouncingAnimationFromScale:(double)arg1 toScale:(double)arg2 ;
-(void)setSpinnerType:(long long)arg1 ;
-(void)setDelegate:(id<MNMessageVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageVideoViewDelegate>)delegate;
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(UIEdgeInsets)contentInsets;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(id)thumbnailImage;
-(void)setThumbnailImage:(id)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)setIsFullScreen:(BOOL)arg1 ;
@end
