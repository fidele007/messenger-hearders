/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBWebRTCViewControllerDelegate.h>
#import <Messenger/FBWebRTCCallStatusBarViewControllerDelegate.h>
#import <Messenger/FBWebRTCVideoCallOverlayDelegate.h>
#import <Messenger/FBWebRTCSurveyViewControllerDelegate.h>
#import <Messenger/RTCVideoCaptureSessionListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, FBWebRTCVideoCallOverlay, MNAuthenticationManager, MNAvatarImageDecorating, FBWebRTCHostApplication;
@class FBExperimentManager, FBMobileConfigContextManager, FBWebRTCEngine, FBWebRTCRingtoneManager, FBWebRTCScreenSensorCallListener, FBWebRTCKeyboardBoundsManager, FBWebRTCIncomingCallNotification, FBWebRTCEndCallInfo, FBWebRTCViewController, FBWebRTCCallStatusBarViewController, UIViewController, FBWebRTCInstantVideoAdminMessagePublisher, FBWebRTCUIDisplayCoordinator, RTCVideoCaptureSession, MNThreadStore, MNUserStore, FBWebRTCNetworkAvailability, FBWebRTCDeviceRequestFailureController, MNThreadParticipantNameFormatter, MNBatchProfileImageFetcher, FBWebRTCVideoChatHeadsUsageTracker, FBTimer, FBWebRTCCallActionHandler, FBWebRTCCallKitDelegate, NSString;

@interface FBWebRTCCallUIController : NSObject <FBWebRTCEngineListener, FBWebRTCViewControllerDelegate, FBWebRTCCallStatusBarViewControllerDelegate, FBWebRTCVideoCallOverlayDelegate, FBWebRTCSurveyViewControllerDelegate, RTCVideoCaptureSessionListener, FBClassProvidable> {

	FBExperimentManager* _experimentManager;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCEngine* _engine;
	FBWebRTCRingtoneManager* _ringtoneManager;
	FBWebRTCScreenSensorCallListener* _screenSensorCallListener;
	id<FBProvider> _localNotificationProvider;
	FBWebRTCKeyboardBoundsManager* _keyboardBoundsManager;
	FBWebRTCIncomingCallNotification* _localNotification;
	FBWebRTCEndCallInfo* _endCallInfo;
	FBWebRTCViewController* _callScreenViewController;
	id<FBProvider> _callScreenViewControllerProvider;
	BOOL _callStatusBarActive;
	FBWebRTCCallStatusBarViewController* _callStatusBarViewController;
	id<FBProvider> _callStatusBarViewControllerProvider;
	BOOL _messengerOverlayActive;
	UIViewController*<FBWebRTCVideoCallOverlay> _callOverlayViewController;
	id<FBProvider> _callOverlayViewControllerProvider;
	FBWebRTCInstantVideoAdminMessagePublisher* _instantVideoAdminMessagePublisher;
	FBWebRTCUIDisplayCoordinator* _displayCoordinator;
	RTCVideoCaptureSession* _videoCaptureSession;
	MNThreadStore* _threadStore;
	MNUserStore* _userStore;
	FBWebRTCNetworkAvailability* _networkAvailability;
	FBWebRTCDeviceRequestFailureController* _deviceRequestFailureController;
	FBWebRTCLogWrapper* _logWrapper;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNBatchProfileImageFetcher* _batchProfileImageFetcher;
	id<MNAvatarImageDecorating> _avatarDecorator;
	id<FBWebRTCHostApplication> _hostApplication;
	BOOL _otherFeatureCapturingCamera;
	BOOL _localVideoAutoPaused;
	BOOL _runningInBackground;
	BOOL _useCallKit;
	BOOL _overlayShouldHaveVideoExpressionEntryPoint;
	FBWebRTCVideoChatHeadsUsageTracker* _chatHeadsUsageTracker;
	FBTimer* _incomingCallLocalNotificationTimer;
	FBWebRTCCallActionHandler* _actionHandler;
	FBWebRTCCallKitDelegate* _callKitDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)surveyViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 ;
-(id)initWithIncomingCallNotificationProvider:(id)arg1 callScreenViewControllerProvider:(id)arg2 callStatusBarViewControllerProvider:(id)arg3 callOverlayViewControllerProvider:(id)arg4 instantVideoAdminMessagePublisher:(id)arg5 displayCoordinator:(id)arg6 hostApplication:(id)arg7 networkAvailability:(id)arg8 experimentManager:(id)arg9 batchProfileImageFetcher:(id)arg10 userSettings:(id)arg11 avatarImageDecorator:(id)arg12 configManager:(id)arg13 authManager:(id)arg14 nameFormatter:(id)arg15 applicationName:(id)arg16 threadStore:(id)arg17 userStore:(id)arg18 ;
-(void)_autoAccept;
-(void)_createEndCallSummary;
-(void)_showInComingCallLocalNotificationIfNeeded;
-(id)_createIncomingCallLocalNotificationTimer:(long long)arg1 ;
-(void)_presentCallView;
-(void)_updateAnalyticsForCall:(id)arg1 ;
-(void)_prepareForCall:(/*^block*/id)arg1 ;
-(void)_createIncomingCallNotificationForCall:(id)arg1 withUsers:(id)arg2 ;
-(void)_incomingCallLocalNotificationTimerFired;
-(void)_cancelIncomingCallNotificationTimer;
-(void)_handleEndCall:(id)arg1 reason:(int)arg2 callSummary:(id)arg3 ;
-(void)_finalizeCallAnimated:(BOOL)arg1 ;
-(void)_dismissCallViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isVideoChatHeadsEnabled;
-(BOOL)_canStartCallFromVideoChatHead;
-(void)_displayMessengerOverlay;
-(void)_displayCallScreenAnimated:(BOOL)arg1 ;
-(void)_showMessengerOverlayIfNeeded;
-(void)_updateMessengerStatusBarHiddenWhenCallOverlayViewVisible;
-(void)_autoPauseSendingVideoIfNeeded;
-(void)_showMessengerStatusBarIfNeeded;
-(BOOL)_isCallUIFinished;
-(void)_hideMessengerOverlayAnimated:(BOOL)arg1 ;
-(void)_hideMessengerStatusBarIfNeeded;
-(void)_autoResumeSendingVideoIfNeeded;
-(void)_returnToCall;
-(void)callViewControllerCallStatusDidChange:(id)arg1 ;
-(void)callViewControllerWillMinimizeCallScreen:(id)arg1 allowVoiceMessage:(BOOL)arg2 ;
-(void)callViewControllerDidShowStarRating:(id)arg1 ;
-(void)callViewController:(id)arg1 didSelectStarRating:(unsigned long long)arg2 ;
-(void)callViewControllerPromptCallSurvey:(id)arg1 ;
-(void)callViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)callViewControllerIsBackTooltipEnabled:(id)arg1 ;
-(void)callViewControllerDidFinishCall:(id)arg1 ;
-(void)callViewControllerDidStartVoicemailExperience:(id)arg1 withActiveCallUI:(BOOL)arg2 ;
-(void)callViewController:(id)arg1 logAnalyticsValue:(id)arg2 forKey:(id)arg3 ;
-(void)callViewControllerDidBecomeUsableExpression:(id)arg1 ;
-(void)didTapCallStatusBarView:(id)arg1 ;
-(void)rtcVideoCaptureSessionStarted;
-(void)rtcVideoCaptureSessionEnded;
-(void)rtcVideoCaptureSessionInterruptionBegan;
-(void)rtcVideoCaptureSessionInterruptionEnded;
-(void)configureWithEngine:(id)arg1 logWrapper:(FBWebRTCLogWrapper*)arg2 ;
-(void)autoAcceptIncomingCall;
-(void)allUsersForConferenceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)videoCallOverlay:(id)arg1 didChangeActive:(BOOL)arg2 ;
-(void)videoCallOverlayDidRequestFullScreen:(id)arg1 withExpressionEnabled:(BOOL)arg2 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
