/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBWebRTCCallActionViewDelegate.h>
#import <Messenger/FBWebRTCStarRatingViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBWebRTCInCallEventListener.h>
#import <Messenger/FBWebRTCGameEventListener.h>
#import <Messenger/FBWebRTCSnakeViewDelegate.h>
#import <Messenger/FBWebRTCViewDelegate.h>
#import <Messenger/FBWebRTCVoicemailDelegate.h>
#import <Messenger/FBWebRTCRemoteVideoRenderStatusListener.h>
#import <Messenger/FBWebRTCRosterDelegate.h>
#import <Messenger/FBWebRTCCallAgainViewDelegate.h>
#import <Messenger/RTCVideoCaptureSessionListener.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBWebRTCVideoFilterControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol NSCopying, MNAvatarImageDecorating, MNAuthenticationManager, FBMProfileURLUtils, MNPresenceSubscribing, FBWebRTCSettingsPopoverControlling, FBWebRTCViewControllerDelegate;
@class FBWebRTCView, FBWebRTCEngine, FBWebRTCCallModel, FBMThreadSummary, FBMGroupThreadProperties, MNProfileImageViewController, MNThreadImageManager, MNCDNProfileImageDownloader, FBImageDownloader, MNGroupThreadImageURLGenerator, MNUserSettings, FBWebRTCNetworkAvailability, FBWebRTCCallActionHandler, FBUserSession, FBMobileConfigContextManager, FBSimpleNetworkerRequest, FBExperimentManager, FBWebRTCVideoExpressionExperimentContext, FBWebRTCCallButtonImageProvider, RTCVideoCaptureSession, FBWebRTCRosterDataSource, MNThreadParticipantNameFormatter, MNUserStore, MNThreadStore, FBNuxCoordinator, MNTooltipOverlayController, NSTimer, ZRApplicationState, FBWebRTCViewControllerConfiguration, FBSimpleDownloader, FBWebRTCConferenceParticipantInfo, NSString, FBWebRTCVideoFilterController, UIActionSheet, UIAlertView, FBWebRTCStarRating, FBWebRTCVoicemailHandler;

@interface FBWebRTCViewController : UIViewController <FBWebRTCCallActionViewDelegate, FBWebRTCStarRatingViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, FBWebRTCEngineListener, FBWebRTCInCallEventListener, FBWebRTCGameEventListener, FBWebRTCSnakeViewDelegate, FBWebRTCViewDelegate, FBWebRTCVoicemailDelegate, FBWebRTCRemoteVideoRenderStatusListener, FBWebRTCRosterDelegate, FBWebRTCCallAgainViewDelegate, RTCVideoCaptureSessionListener, UICollectionViewDelegate, FBWebRTCVideoFilterControllerDelegate, FBClassProvidable> {

	FBWebRTCView* _webRTCView;
	FBWebRTCEngine* _engine;
	FBWebRTCCallModel* _currentCall;
	FBMThreadSummary* _threadSummary;
	FBMGroupThreadProperties* _groupThreadProperties;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	FBImageDownloader* _imageDownloader;
	MNGroupThreadImageURLGenerator* _groupThreadImageURLGenerator;
	id<NSCopying> _currentAudioSpeakerImageRequest;
	MNUserSettings* _userSettings;
	FBWebRTCNetworkAvailability* _networkAvailability;
	FBWebRTCLogWrapper* _webrtcLogger;
	FBWebRTCCallActionHandler* _actionHandler;
	FBUserSession* _userSession;
	FBMobileConfigContextManager* _configManager;
	FBSimpleNetworkerRequest* _coverPhotoURLRequest;
	FBExperimentManager* _experimentManager;
	FBWebRTCVideoExpressionExperimentContext* _videoExpressionExperimentContext;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	id<MNAvatarImageDecorating> _avatarDecorator;
	RTCVideoCaptureSession* _videoCaptureSession;
	FBWebRTCRosterDataSource* _audioRosterController;
	FBWebRTCRosterDataSource* _videoRosterController;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	id<FBMProfileURLUtils> _profileURLUtils;
	FBNuxCoordinator* _nuxCoordinator;
	MNTooltipOverlayController* _tooltipController;
	int _backButtonTooltipShownCount;
	int _filterButtonTooltipShownCount;
	BOOL _usedBackButton;
	BOOL _usedFilterButton;
	BOOL _userHungUpCall;
	BOOL _connectionStatusHasConnected;
	BOOL _callTimerActive;
	BOOL _isInfoViewHidden;
	NSTimer* _callTimer;
	NSTimer* _endCallTimer;
	NSTimer* _surveyTimer;
	double _lastPressTime;
	ZRApplicationState* _zeroRatingState;
	BOOL _refreshOrientationInProgress;
	BOOL _lockOrientationToPortraitOnly;
	FBWebRTCViewControllerConfiguration* _configuration;
	BOOL _allowVoicemailInBackground;
	BOOL _useShortVoicemailPrompt;
	BOOL _userClickedVoicemailButton;
	long long _voicemailButtonType;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	FBSimpleDownloader* _audioDownloader;
	FBWebRTCConferenceParticipantInfo* _loudestParticipant;
	id<FBWebRTCSettingsPopoverControlling> _settingsPopoverController;
	BOOL _callUIActive;
	BOOL _canMinimizeToVideoChatHead;
	BOOL _callInitialized;
	BOOL _statusBarHiddenOverride;
	id<FBWebRTCViewControllerDelegate> _delegate;
	NSString* _mainCallStatus;
	NSString* _miniCallStatus;
	FBWebRTCVideoFilterController* _filterController;
	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	UIAlertView* _endCallAlertView;
	FBWebRTCStarRating* _starRating;
	FBWebRTCVoicemailHandler* _voicemailHandler;

}

@property (assign,getter=isCallInitialized,nonatomic) BOOL callInitialized;                   //@synthesize callInitialized=_callInitialized - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                     //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                         //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) UIAlertView * endCallAlertView;                                  //@synthesize endCallAlertView=_endCallAlertView - In the implementation block
@property (nonatomic,retain) FBWebRTCStarRating * starRating;                                 //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) FBWebRTCVoicemailHandler * voicemailHandler;                     //@synthesize voicemailHandler=_voicemailHandler - In the implementation block
@property (assign,nonatomic) BOOL statusBarHiddenOverride;                                    //@synthesize statusBarHiddenOverride=_statusBarHiddenOverride - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * mainCallStatus;                                //@synthesize mainCallStatus=_mainCallStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * miniCallStatus;                                //@synthesize miniCallStatus=_miniCallStatus - In the implementation block
@property (nonatomic,readonly) FBWebRTCVideoFilterController * filterController;              //@synthesize filterController=_filterController - In the implementation block
@property (assign,getter=isCallUIActive,nonatomic) BOOL callUIActive;                         //@synthesize callUIActive=_callUIActive - In the implementation block
@property (assign,nonatomic) BOOL canMinimizeToVideoChatHead;                                 //@synthesize canMinimizeToVideoChatHead=_canMinimizeToVideoChatHead - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(UIActionSheet *)actionSheet;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)callAgainViewDidSelectCallAgainButton:(id)arg1 ;
-(void)startRatingView:(id)arg1 ratingDidChange:(long long)arg2 ;
-(void)starRatingViewDidPressSubmit:(id)arg1 ;
-(void)starRatingViewDidPressDismiss:(id)arg1 ;
-(void)abortAll;
-(void)configureWithEngine:(id)arg1 actionHandler:(id)arg2 webrtcLogger:(FBWebRTCLogWrapper*)arg3 ;
-(void)setCanMinimizeToVideoChatHead:(BOOL)arg1 ;
-(FBWebRTCVideoFilterController *)filterController;
-(BOOL)isCallUIActive;
-(NSString *)miniCallStatus;
-(void)enableExpressionUX;
-(void)rtcVideoCaptureSessionStarted;
-(void)rtcVideoCaptureSessionEnded;
-(void)rtcVideoCaptureSessionInterruptionBegan;
-(void)rtcVideoCaptureSessionInterruptionEnded;
-(void)voicemailHandler:(id)arg1 logAnalyticsValue:(id)arg2 forKey:(id)arg3 ;
-(void)voicemailHandler:(id)arg1 didCompleteWithPossibleAttachment:(id)arg2 ;
-(BOOL)_isInForeground;
-(void)voicemailHandler:(id)arg1 didUpdateRecordingElapsedTime:(float)arg2 ;
-(void)_hideTooltipAnimated:(BOOL)arg1 ;
-(void)remoteVideoRenderStatusChanged:(id)arg1 ;
-(void)rosterRequestedMuteForUserId:(id)arg1 ;
-(void)rosterRequestedRingForUserId:(id)arg1 ;
-(void)callUpdatedInputAudioLevel:(unsigned long long)arg1 outputAudioLevel:(unsigned long long)arg2 forCall:(id)arg3 ;
-(void)callUpdatedActiveAudioLevels:(id)arg1 forCall:(id)arg2 ;
-(void)callReceivedData:(id)arg1 topic:(id)arg2 forCall:(id)arg3 ;
-(void)filterControllerDidBecomeUsable:(id)arg1 ;
-(void)filterController:(id)arg1 didStopApplyingFilter:(id)arg2 afterDuration:(double)arg3 ;
-(void)filterController:(id)arg1 didStartApplyingFilter:(id)arg2 ;
-(void)filterController:(id)arg1 filterDidBecomeUsableAtIndexPath:(id)arg2 ;
-(void)filterController:(id)arg1 filterDidUpdateDownloadProgress:(double)arg2 atIndexPath:(id)arg3 ;
-(void)filterController:(id)arg1 filterDidBecomeUnusableAtIndexPath:(id)arg2 ;
-(void)_cleanUpEndCall;
-(void)_infoViewMultipleTapGesture:(id)arg1 ;
-(void)setCallUIActive:(BOOL)arg1 ;
-(void)_initializeFromCurrentCall;
-(void)_updateOutgoingVideoOrientation;
-(void)_updateSelfViewProperties;
-(void)_dismissPendingAlerts;
-(void)_finalizeCall;
-(void)setEndCallAlertView:(UIAlertView *)arg1 ;
-(void)_dismissCallViewAnimated:(BOOL)arg1 callEndAction:(int)arg2 ;
-(void)_enableLocalVideo;
-(void)_timeoutStarRating;
-(void)_dismissCallViewAnimated:(BOOL)arg1 shouldOpenVoice:(BOOL)arg2 shouldOpenMessage:(BOOL)arg3 ;
-(void)_disableLocalVideo;
-(void)_logCallAction:(id)arg1 extra:(id)arg2 ;
-(void)_hideCall;
-(void)_endCallImmediately;
-(BOOL)_shouldIgnorePress;
-(void)_resetIgnorePressInterval;
-(void)_toggleVideo:(BOOL)arg1 ;
-(void)_updateStatusMessage;
-(void)_showFilterButtonTooltipIfNeeded;
-(void)_showCallSurvey;
-(void)_forceOrientationRefreshWithCompletion:(/*^block*/id)arg1 ;
-(long long)_currentDeviceOrientation;
-(void)_showBackButtonTooltipIfNeeded;
-(void)_updateTooltipPosition;
-(void)_viewUserProfile:(id)arg1 ;
-(void)_navigateToUserThread:(id)arg1 ;
-(BOOL)isCallInitialized;
-(void)_setGroupPicture:(id)arg1 groupFbId:(id)arg2 ;
-(void)_setUserPictures:(id)arg1 ;
-(void)_updateToCurrentCallState;
-(void)_updateViewFromCurrentCall;
-(void)_onConnectedCall;
-(void)setCallInitialized:(BOOL)arg1 ;
-(void)_updateConnectionStatusFromStatus:(id)arg1 toStatus:(id)arg2 ;
-(BOOL)_isVideoButtonSelectedForCallState:(unsigned long long)arg1 ;
-(void)_startVoicemail;
-(void)_timeoutRedial;
-(void)_timeoutEndCall;
-(void)_setMainCallStatus:(id)arg1 miniStatus:(id)arg2 ;
-(id)participantsString;
-(void)_updateStatusMessageForIncomingConferenceCallForVideo:(BOOL)arg1 ;
-(void)updateMultiwayParticipantStrings;
-(void)_stopCallTimerIfNeeded;
-(void)_startCallTimerIfNeeded;
-(void)_updateStatusMessageWithCallTime;
-(void)_prepareAudioViewForActiveSpeaker:(id)arg1 ;
-(void)_updateLoudestParticipantUser:(id)arg1 ;
-(BOOL)_isOrientationRequirementDifferentBetweenCallStates:(unsigned long long)arg1 andCallState:(unsigned long long)arg2 ;
-(BOOL)_shouldShowVoicemailForReason:(int)arg1 ;
-(void)_showEndCallWithPresenter:(id)arg1 shouldShowVoicemail:(BOOL)arg2 ;
-(void)_updateLoudestParticipant:(id)arg1 ;
-(void)_dismissCallingView;
-(CGPoint)_backButtonTooltipPosition;
-(CGPoint)_filterButtonTooltipPosition;
-(void)callUpdateGame:(id)arg1 forCall:(id)arg2 ;
-(void)_doEndCall:(int)arg1 ;
-(void)setStatusBarHiddenOverride:(BOOL)arg1 ;
-(void)lockOrientationToPortraitWithRefreshIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)unlockOrientation;
-(CGPoint)_speakerButtonTooltipPosition;
-(NSString *)mainCallStatus;
-(BOOL)canMinimizeToVideoChatHead;
-(UIAlertView *)endCallAlertView;
-(FBWebRTCVoicemailHandler *)voicemailHandler;
-(void)setVoicemailHandler:(FBWebRTCVoicemailHandler *)arg1 ;
-(BOOL)statusBarHiddenOverride;
-(void)snakeView:(id)arg1 didReceivedPlayerInput:(unsigned long long)arg2 ;
-(void)viewStateDidChange:(id)arg1 ;
-(BOOL)shouldForceSelfViewHidden:(id)arg1 ;
-(void)rtcViewWillHideActionButtons:(id)arg1 ;
-(void)rtcViewWillShowActionButtons:(id)arg1 ;
-(void)rtcViewDidHideActionButtons:(id)arg1 ;
-(void)rtcViewDidShowActionButtons:(id)arg1 ;
-(void)rtcViewDidLayoutActionButtons:(id)arg1 ;
-(void)_logAction:(id)arg1 forFunnel:(id)arg2 withTag:(id)arg3 ;
-(void)rtcViewDidSwipeToMinimize:(id)arg1 ;
-(void)rtcViewDidTapActiveUserOverlay:(id)arg1 ;
-(void)callActionViewDidPressBeginVoicemail:(id)arg1 ;
-(void)callActionViewDidPressSwitchCamera:(id)arg1 ;
-(void)callActionViewDidPressFilterButton:(id)arg1 ;
-(void)callActionViewDidPressEndCall:(id)arg1 ;
-(void)callActionViewDidPressAcceptCall:(id)arg1 ;
-(void)callActionViewDidPressDeclineCall:(id)arg1 ;
-(void)callActionViewDidPressMute:(id)arg1 shouldMute:(BOOL)arg2 ;
-(void)callActionViewDidPressDownloadAndPlayAudioClip:(id)arg1 url:(id)arg2 ;
-(void)callActionViewDidPressShowRosterButton:(id)arg1 shouldShow:(BOOL)arg2 ;
-(void)callActionViewDidPressVideoCall:(id)arg1 shouldEnable:(BOOL)arg2 ;
-(void)callActionViewDidPressHideCall:(id)arg1 ;
-(void)callActionViewDidPressRedial:(id)arg1 ;
-(void)callActionViewDidPressCancelRedial:(id)arg1 ;
-(void)callActionViewDidPressVoiceClip:(id)arg1 ;
-(void)callActionViewDidPressDone:(id)arg1 ;
-(void)callActionViewToggleSpeakerMode:(id)arg1 ;
-(void)callActionViewDidPressAcceptVideo:(id)arg1 ;
-(void)callActionViewDidPressDeclineVideo:(id)arg1 ;
-(void)callActionViewDidPressSettings:(id)arg1 ;
-(void)callActionViewDidUpdateFilterButtonVisibility:(id)arg1 ;
-(void)callActionViewDidPressDisabledVideo:(id)arg1 ;
-(void)callActionView:(id)arg1 didShownICAExtendedView:(BOOL)arg2 ;
-(double)_systemStatusBarHeight;
-(void)setDelegate:(id<FBWebRTCViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCViewControllerDelegate>)delegate;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setStarRating:(FBWebRTCStarRating *)arg1 ;
-(FBWebRTCStarRating *)starRating;
-(void)_setStatus:(id)arg1 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
@end

