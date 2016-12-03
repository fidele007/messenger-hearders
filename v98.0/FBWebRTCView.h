/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBWebRTCCallActionViewDelegate.h>
#import <Messenger/FBWebRTCSelfVideoOverlayViewDelegate.h>
#import <Messenger/FBWebRTCInteractionBlockingViewDelegate.h>
#import <Messenger/FBWebRTCRingGroupNoticeViewDelegate.h>

@protocol FBWebRTCViewDelegate, FBWebRTCCallActionViewDelegate, FBWebRTCStarRatingViewDelegate;
@class FBWebRTCNonZeroRatedSessionWarningView, UIView, UIImageView, UILabel, FBWebRTCPeerView, FBWebRTCSelfVideoOverlayView, FBWebRTCInteractionBlockingView, FBWebRTCSnakeView, FBWebRTCActiveAudioSpeakerView, FBWebRTCCountdownView, FBWebRTCRingGroupNoticeView, NSMutableArray, _FBTouchCapturingGestureRecognizer, MNUserSettings, FBUserSession, NSTimer, FBMUserName, FBWebRTCRemoteVideoRenderStatus, FBWebRTCCallAgainExperimentContext, FBMobileConfigContextManager, FBWebRTCStarRatingView, FBWebRTCInfoView, UICollectionView, FBWebRTCVideoView, FBWebRTCCallActionView, FBWebRTCActiveUserOverlayView, FBWebRTCCallAgainView, FBWebRTCGroupMultiView, FBWebRTCPeerVideoView, NSString;

@interface FBWebRTCView : UIView <FBWebRTCCallActionViewDelegate, FBWebRTCSelfVideoOverlayViewDelegate, FBWebRTCInteractionBlockingViewDelegate, FBWebRTCRingGroupNoticeViewDelegate> {

	FBWebRTCNonZeroRatedSessionWarningView* _nonZeroRatingWarningView;
	UIView* _backgroundView;
	UIImageView* _coverPhotoImageView;
	UIView* _gradientOverlayView;
	UIView* _statusBarUnderlay;
	UILabel* _rosterGroupLabel;
	UILabel* _rosterTimeLabel;
	FBWebRTCPeerView* _peerView;
	FBWebRTCSelfVideoOverlayView* _selfVideoOverlayView;
	FBWebRTCInteractionBlockingView* _interactionBlockingView;
	FBWebRTCSnakeView* _snakeView;
	FBWebRTCActiveAudioSpeakerView* _activeSpeakerView;
	UIView* _dimmingView;
	UIView* _activityView;
	UIView* _countdownContainer;
	FBWebRTCCountdownView* _countdownView;
	FBWebRTCRingGroupNoticeView* _ringGroupNoticeView;
	NSMutableArray* _overlays;
	_FBTouchCapturingGestureRecognizer* _touchCapturingRecognizer;
	unsigned long long _viewState;
	MNUserSettings* _userSettings;
	FBUserSession* _userSession;
	NSTimer* _videoButtonsTimer;
	NSTimer* _disclaimerTimer;
	NSTimer* _videoDisabledMessageTimer;
	NSTimer* _delayedInteractionBlockingTimer;
	FBMUserName* _calleeUserName;
	BOOL _isInteractingWithSelfView;
	BOOL _isLocalVideoSupported;
	BOOL _zeroRatingEnabled;
	BOOL _rosterEnabled;
	FBWebRTCRemoteVideoRenderStatus* _videoRenderStatus;
	CGPoint _backgroundPanStart;
	FBWebRTCCallAgainExperimentContext* _callAgainExperiment;
	FBMobileConfigContextManager* _configManager;
	UIView* _fullscreenVideoView;
	BOOL _isConferenceCall;
	BOOL _actionControlsOffscreen;
	id<FBWebRTCViewDelegate> _delegate;
	id<FBWebRTCCallActionViewDelegate> _actionViewDelegate;
	id<FBWebRTCStarRatingViewDelegate> _starRatingViewDelegate;
	FBWebRTCStarRatingView* _starRatingView;
	FBWebRTCInfoView* _infoView;
	UICollectionView* _audioRosterView;
	UICollectionView* _videoRosterView;
	UICollectionView* _filterView;
	FBWebRTCVideoView* _selfView;
	FBWebRTCCallActionView* _callActionView;
	FBWebRTCActiveUserOverlayView* _activeUserView;
	FBWebRTCCallAgainView* _callAgainView;
	FBWebRTCGroupMultiView* _groupMultiView;
	double _systemStatusBarHeight;
	double _selfViewAspectRatio;

}

@property (assign,nonatomic,__weak) id<FBWebRTCViewDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCCallActionViewDelegate> actionViewDelegate;                       //@synthesize actionViewDelegate=_actionViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCStarRatingViewDelegate> starRatingViewDelegate;                   //@synthesize starRatingViewDelegate=_starRatingViewDelegate - In the implementation block
@property (nonatomic,readonly) FBWebRTCStarRatingView * starRatingView;                                          //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) FBWebRTCInfoView * infoView;                                                      //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) UICollectionView * audioRosterView;                                               //@synthesize audioRosterView=_audioRosterView - In the implementation block
@property (nonatomic,readonly) UICollectionView * videoRosterView;                                               //@synthesize videoRosterView=_videoRosterView - In the implementation block
@property (nonatomic,readonly) UICollectionView * filterView;                                                    //@synthesize filterView=_filterView - In the implementation block
@property (nonatomic,readonly) FBWebRTCPeerVideoView * peerVideoView; 
@property (nonatomic,readonly) FBWebRTCVideoView * selfView;                                                     //@synthesize selfView=_selfView - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallActionView * callActionView;                                          //@synthesize callActionView=_callActionView - In the implementation block
@property (nonatomic,readonly) FBWebRTCSnakeView * snakeView; 
@property (nonatomic,readonly) FBWebRTCActiveUserOverlayView * activeUserView;                                   //@synthesize activeUserView=_activeUserView - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallAgainView * callAgainView;                                            //@synthesize callAgainView=_callAgainView - In the implementation block
@property (nonatomic,readonly) UIView * floatingVideoView; 
@property (nonatomic,readonly) FBWebRTCCountdownView * countdownView;                                            //@synthesize countdownView=_countdownView - In the implementation block
@property (nonatomic,readonly) FBWebRTCGroupMultiView * groupMultiView;                                          //@synthesize groupMultiView=_groupMultiView - In the implementation block
@property (nonatomic,readonly) FBWebRTCRingGroupNoticeView * ringGroupNoticeView;                                //@synthesize ringGroupNoticeView=_ringGroupNoticeView - In the implementation block
@property (assign,nonatomic) double systemStatusBarHeight;                                                       //@synthesize systemStatusBarHeight=_systemStatusBarHeight - In the implementation block
@property (assign,nonatomic) double selfViewAspectRatio;                                                         //@synthesize selfViewAspectRatio=_selfViewAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL actionControlsOffscreen;                                                       //@synthesize actionControlsOffscreen=_actionControlsOffscreen - In the implementation block
@property (assign,nonatomic) BOOL countdownVisible; 
@property (assign,getter=isEnableSpeakerButtonSelected,nonatomic) BOOL enableSpeakerButtonSelected; 
@property (assign,getter=isEnableVideoButtonEnabled,nonatomic) BOOL enableVideoButtonEnabled; 
@property (assign,getter=isEnableVideoButtonSelected,nonatomic) BOOL enableVideoButtonSelected; 
@property (assign,getter=isMuteAudioButtonSelected,nonatomic) BOOL muteAudioButtonSelected; 
@property (assign,getter=isRemoteVideoEnabled,nonatomic) BOOL remoteVideoEnabled; 
@property (assign,getter=isRingUsersSelected,nonatomic) BOOL ringUsersSelected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)switchLayoutToState:(unsigned long long)arg1 ;
-(BOOL)isRemoteVideoEnabled;
-(void)setRemoteVideoEnabled:(BOOL)arg1 ;
-(void)_logAction:(id)arg1 forFunnel:(id)arg2 withTag:(id)arg3 ;
-(FBWebRTCPeerVideoView *)peerVideoView;
-(void)setActionViewDelegate:(id<FBWebRTCCallActionViewDelegate>)arg1 ;
-(void)setStarRatingViewDelegate:(id<FBWebRTCStarRatingViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showZeroRating:(BOOL)arg2 supportLocalVideo:(BOOL)arg3 hasMultipleCameras:(BOOL)arg4 isConferenceCall:(BOOL)arg5 avatarImageDecorator:(id)arg6 userSettings:(id)arg7 userSession:(id)arg8 showRoster:(BOOL)arg9 isConferenceVideoCanCall:(BOOL)arg10 isOneOnOneMultiWayCall:(BOOL)arg11 showDebugInfo:(BOOL)arg12 callAgainExperiment:(id)arg13 configManager:(id)arg14 useMultiViewGroupVideo:(BOOL)arg15 ;
-(UICollectionView *)filterView;
-(FBWebRTCCallAgainView *)callAgainView;
-(void)setRemoteVideoRenderStatus:(id)arg1 ;
-(UICollectionView *)audioRosterView;
-(UICollectionView *)videoRosterView;
-(FBWebRTCActiveUserOverlayView *)activeUserView;
-(void)enableSwipeToMinimize;
-(FBWebRTCGroupMultiView *)groupMultiView;
-(FBWebRTCVideoView *)selfView;
-(void)addActivityView:(id)arg1 ;
-(void)setActionControlsOffscreen:(BOOL)arg1 ;
-(void)setRingUsersSelected:(BOOL)arg1 ;
-(void)setFilterViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEnableSpeakerButtonSelected;
-(void)setEnableSpeakerButtonSelected:(BOOL)arg1 ;
-(void)setAudioRosterHidden:(BOOL)arg1 ;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(void)setSystemStatusBarHeight:(double)arg1 ;
-(void)setCalleeUserName:(id)arg1 ;
-(void)setEnableVideoButtonEnabled:(BOOL)arg1 ;
-(void)setEnableVideoButtonSelected:(BOOL)arg1 ;
-(void)setMuteAudioButtonSelected:(BOOL)arg1 ;
-(void)hideActiveSpeakerView;
-(FBWebRTCCallActionView *)callActionView;
-(void)setSelfViewAspectRatio:(double)arg1 ;
-(void)refreshVideoViewsVisibility;
-(void)setCalleeDisplayName:(id)arg1 ;
-(void)setMiniStatus:(id)arg1 ;
-(void)setRosterTime:(id)arg1 ;
-(void)setRosterStatus:(id)arg1 ;
-(void)showActiveSpeakerViewForViewModel:(id)arg1 ;
-(FBWebRTCSnakeView *)snakeView;
-(void)setCountdownVisible:(BOOL)arg1 ;
-(FBWebRTCCountdownView *)countdownView;
-(void)transitionFromGroupCountdownToRingNotice:(BOOL)arg1 ;
-(UIView *)floatingVideoView;
-(void)setCallActionViewContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)actionControlsOffscreen;
-(void)callActionViewDidPressDisabledVideo:(id)arg1 ;
-(void)callActionViewDidPressSwitchCamera:(id)arg1 ;
-(void)callActionViewDidPressFilterButton:(id)arg1 ;
-(void)callActionViewDidPressEndCall:(id)arg1 ;
-(void)callActionViewDidPressAcceptCall:(id)arg1 ;
-(void)callActionViewDidPressDeclineCall:(id)arg1 ;
-(void)callActionViewDidPressMute:(id)arg1 shouldMute:(BOOL)arg2 ;
-(void)callActionViewDidPressVideoCall:(id)arg1 shouldEnable:(BOOL)arg2 ;
-(void)callActionViewDidPressHideCall:(id)arg1 ;
-(void)callActionViewDidPressRedial:(id)arg1 ;
-(void)callActionViewDidPressCancel:(id)arg1 ;
-(void)callActionViewDidPressVoiceClip:(id)arg1 ;
-(void)callActionViewDidPressDone:(id)arg1 ;
-(void)callActionViewDidPressAcceptVideo:(id)arg1 ;
-(void)callActionViewDidPressDeclineVideo:(id)arg1 ;
-(void)callActionViewDidPressBeginVoicemail:(id)arg1 ;
-(void)callActionViewDidPressShowRosterButton:(id)arg1 shouldShow:(BOOL)arg2 ;
-(void)callActionViewDidPressSettings:(id)arg1 ;
-(void)callActionViewToggleSpeakerMode:(id)arg1 ;
-(void)callActionViewDidPressTakeSnapshot:(id)arg1 ;
-(void)callActionViewDidPressAudioclipButton:(id)arg1 ;
-(void)callActionViewDidPressSwitchLayout:(id)arg1 ;
-(void)callActionViewDidPressRingUsers:(id)arg1 ;
-(BOOL)isEnableVideoButtonEnabled;
-(BOOL)isEnableVideoButtonSelected;
-(BOOL)isMuteAudioButtonSelected;
-(void)webRTCInteractionBlockingViewDidUnlock:(id)arg1 ;
-(void)ringGroupNoticeDidTouchBackground:(id)arg1 ;
-(void)ringGroupNoticeDidTapRing:(id)arg1 ;
-(void)didTapSelfView:(id)arg1 ;
-(void)didDoubleTapSelfView:(id)arg1 ;
-(void)didBeginInteraction:(id)arg1 ;
-(void)didEndInteraction:(id)arg1 ;
-(void)_onActiveUserOverlayTapped:(id)arg1 ;
-(void)_onVideoViewTapped:(id)arg1 ;
-(void)_configureSelfViewSize:(unsigned long long)arg1 ;
-(void)_createCountdownViews;
-(void)_stopVideoDisabledMessageTimer;
-(void)_updatelayoutForStatusBars;
-(void)_refreshButtonsAndSelfViewLayoutAnimated:(BOOL)arg1 ;
-(BOOL)_shouldShowMuteState;
-(void)_disclaimerTimerFired;
-(void)_setupLayoutForState:(unsigned long long)arg1 ;
-(void)_showDisclaimerBrieflyIfNeededForTransitionFrom:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(BOOL)_shouldAutoHideInlineButtons:(unsigned long long)arg1 ;
-(void)_startOrStopVideoButtonsOffScreenTimer;
-(void)_refreshSelfViewVisibilityForViewState:(unsigned long long)arg1 ;
-(void)_fadeInActionButtonsIfNeeded;
-(void)_showDisclaimerViewIfNeeded;
-(void)_setShowZeroRatingView:(BOOL)arg1 ;
-(void)_refreshBackgroundColor:(unsigned long long)arg1 ;
-(void)_updateInteractionBlockingForState:(unsigned long long)arg1 ;
-(void)_hideOrShowCallActionViewIfNeeded:(unsigned long long)arg1 ;
-(void)_refreshStatusBarUnderlayColor:(unsigned long long)arg1 ;
-(void)_refreshButtonsAndSelfViewLayout:(unsigned long long)arg1 ;
-(void)_refreshStarRatingViewVisibilityForviewState:(unsigned long long)arg1 ;
-(void)_refreshButtonsAndSelfViewLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onViewDragged:(id)arg1 ;
-(void)_swapSelfAndPeerViewAnimated:(BOOL)arg1 ;
-(void)setFloatingVideoView:(UIView *)arg1 ;
-(void)_setFullscreenVideoView:(id)arg1 ;
-(void)_startHideDisclaimerCountDownTimer;
-(void)_hideDisclaimerViewAnimated:(BOOL)arg1 ;
-(CGRect)_getSelfViewFrameWithActionControlsOffscreen:(BOOL)arg1 dodgeVideoRoster:(BOOL)arg2 ;
-(BOOL)_isFilterSelectionUIVisible;
-(void)_onSwipeToMinimize;
-(void)_moveVideoButtonsOffScreen:(id)arg1 ;
-(void)_disclaimerWasFullyDisplayed;
-(void)_showInteractionBlockingView;
-(void)_cancelDelayedInteractionBlocking;
-(void)_hideInteractionBlockingView;
-(void)_initInteractionBlockingViewIfNeeded;
-(void)_startDelayedInteractionBlocking;
-(void)_startInteractionBlockingIfNeeded;
-(void)_initTouchCapturingRecognizerIfNeeded;
-(void)_didTouch;
-(void)_restartDelayedInteractionBlocking;
-(void)_stopInteractionBlockingIfNeeded;
-(id<FBWebRTCCallActionViewDelegate>)actionViewDelegate;
-(void)_startVideoDisabledTimer;
-(BOOL)countdownVisible;
-(BOOL)isRingUsersSelected;
-(long long)_captureOrientationForDeviceOrientation:(long long)arg1 ;
-(id<FBWebRTCStarRatingViewDelegate>)starRatingViewDelegate;
-(FBWebRTCRingGroupNoticeView *)ringGroupNoticeView;
-(double)systemStatusBarHeight;
-(double)selfViewAspectRatio;
-(void)setDelegate:(id<FBWebRTCViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBWebRTCViewDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)setStatus:(id)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(FBWebRTCStarRatingView *)starRatingView;
-(FBWebRTCInfoView *)infoView;
@end
