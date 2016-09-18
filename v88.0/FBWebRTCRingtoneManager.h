/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCEngineListener.h>
#import <Messenger/FBSystemAudioSessionManagerListener.h>

@class FBWebRTCEngine, FBRingingAudioSession, FBWebRTCCallModel, FBExperimentManager, FBWebRTCInstantVideoExperimentContext, NSTimer, FBWebRTCInCallSoundEffect, NSString;

@interface FBWebRTCRingtoneManager : NSObject <FBWebRTCEngineListener, FBSystemAudioSessionManagerListener> {

	FBWebRTCEngine* _engine;
	FBRingingAudioSession* _ringingSession;
	FBWebRTCCallModel* _currentCall;
	FBExperimentManager* _experimentManager;
	FBWebRTCInstantVideoExperimentContext* _instantVideoExperimentContext;
	BOOL _voicemailOrVideoMailEnabled;
	BOOL _connectionStatusHasConnected;
	BOOL _isFirstTimeToUpdateThisCallState;
	BOOL _instantVideoWaitingForVideo;
	BOOL _ringOnIncomingCall;
	NSTimer* _searchingTimer;
	BOOL _audioSessionHasStarted;
	BOOL _hasPendingPlaySearchingSound;
	BOOL _vibrationLoopShouldContinue;
	BOOL _isPlayingRepeatingSound;
	BOOL _isInterrupted;
	BOOL _hasConnected;
	BOOL _shouldPlayHoldTone;
	int _waitingJoinTones;
	int _waitingLeaveTones;
	FBWebRTCInCallSoundEffect* _incomingRingtoneSoundEffect;
	FBWebRTCInCallSoundEffect* _ringbackSoundEffect;
	FBWebRTCInCallSoundEffect* _searchingSoundEffect;
	FBWebRTCInCallSoundEffect* _endCallSoundEffect;
	FBWebRTCInCallSoundEffect* _droppedCallSoundEffect;
	FBWebRTCInCallSoundEffect* _remoteVideoStartedSoundEffect;
	FBWebRTCInCallSoundEffect* _connectedSoundEffect;
	FBWebRTCInCallSoundEffect* _disconnectedSoundEffect;
	FBWebRTCInCallSoundEffect* _userJoinedSoundEffect;
	FBWebRTCInCallSoundEffect* _userLeftSoundEffect;
	FBWebRTCInCallSoundEffect* _instantVideoRequestSoundEffect;
	FBWebRTCInCallSoundEffect* _currentRepeatingSoundEffect;

}

@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * incomingRingtoneSoundEffect;                   //@synthesize incomingRingtoneSoundEffect=_incomingRingtoneSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * ringbackSoundEffect;                           //@synthesize ringbackSoundEffect=_ringbackSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * searchingSoundEffect;                          //@synthesize searchingSoundEffect=_searchingSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * endCallSoundEffect;                            //@synthesize endCallSoundEffect=_endCallSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * droppedCallSoundEffect;                        //@synthesize droppedCallSoundEffect=_droppedCallSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * remoteVideoStartedSoundEffect;                 //@synthesize remoteVideoStartedSoundEffect=_remoteVideoStartedSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * connectedSoundEffect;                          //@synthesize connectedSoundEffect=_connectedSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * disconnectedSoundEffect;                       //@synthesize disconnectedSoundEffect=_disconnectedSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * userJoinedSoundEffect;                         //@synthesize userJoinedSoundEffect=_userJoinedSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * userLeftSoundEffect;                           //@synthesize userLeftSoundEffect=_userLeftSoundEffect - In the implementation block
@property (nonatomic,readonly) FBWebRTCInCallSoundEffect * instantVideoRequestSoundEffect;                //@synthesize instantVideoRequestSoundEffect=_instantVideoRequestSoundEffect - In the implementation block
@property (assign,nonatomic,__weak) FBWebRTCInCallSoundEffect * currentRepeatingSoundEffect;              //@synthesize currentRepeatingSoundEffect=_currentRepeatingSoundEffect - In the implementation block
@property (assign,nonatomic) BOOL audioSessionHasStarted;                                                 //@synthesize audioSessionHasStarted=_audioSessionHasStarted - In the implementation block
@property (assign,nonatomic) BOOL hasPendingPlaySearchingSound;                                           //@synthesize hasPendingPlaySearchingSound=_hasPendingPlaySearchingSound - In the implementation block
@property (assign,nonatomic) BOOL vibrationLoopShouldContinue;                                            //@synthesize vibrationLoopShouldContinue=_vibrationLoopShouldContinue - In the implementation block
@property (assign,nonatomic) BOOL isPlayingRepeatingSound;                                                //@synthesize isPlayingRepeatingSound=_isPlayingRepeatingSound - In the implementation block
@property (assign,nonatomic) BOOL isInterrupted;                                                          //@synthesize isInterrupted=_isInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasConnected;                                                           //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayHoldTone;                                                     //@synthesize shouldPlayHoldTone=_shouldPlayHoldTone - In the implementation block
@property (assign,nonatomic) int waitingJoinTones;                                                        //@synthesize waitingJoinTones=_waitingJoinTones - In the implementation block
@property (assign,nonatomic) int waitingLeaveTones;                                                       //@synthesize waitingLeaveTones=_waitingLeaveTones - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)configureWithEngine:(id)arg1 ;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(unsigned long long)inputOptions;
-(id)initWithExperimentManager:(id)arg1 ringOnIncomingCall:(BOOL)arg2 ;
-(void)_setupAllSoundEffects;
-(void)_startRingingInForegroundIfNeeded;
-(void)_responseToAudioDeviceInterrupt:(id)arg1 ;
-(BOOL)_isVoicemailOrVideomailEnabled:(id)arg1 ;
-(void)_cancelSearchingTimer;
-(void)_stopPlayingSound;
-(void)_stopVibrationLoop;
-(void)_stopCurrentRepeatingSoundEffect;
-(float)_instantVideoRingVolume;
-(void)_startIncomingInstantVideo;
-(void)_startContacting;
-(void)_startRinging;
-(void)stopAll;
-(void)_playRemoteVideoStartedSound;
-(void)_playVideoEscalationRequestVibrationLoop;
-(void)_transitionFromCallState:(unsigned long long)arg1 toCallState:(unsigned long long)arg2 ;
-(void)_startConnecting;
-(void)playRingbackSound;
-(void)_playConnectedSound;
-(void)_playDisconnectedAndSearchingSound;
-(void)_playEndCallTone:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)stopPlayingHoldTone;
-(void)playUserJoinedConferenceCallTone;
-(void)playUserLeftConferenceCallTone;
-(void)_startSearchingTimer;
-(void)_playIncomingInstantVideoVibrationLoop;
-(BOOL)_shouldPlayWithReducedVolume;
-(void)_vibrateAndPlayIncomingRingtone;
-(void)_playRingingSound:(/*^block*/id)arg1 ;
-(void)_pauseCurrentRepeatingSoundEffect;
-(void)_resumeCurrentRepeatingSoundEffect;
-(void)_playSearchingSound;
-(void)_playRepeatingSoundEffect:(id)arg1 ;
-(BOOL)_isRunningInBackground;
-(BOOL)_localNotificationsEnabled;
-(void)_playVibrationLoopWithDelayBetweenPulses:(double)arg1 abort:(/*^block*/id)arg2 ;
-(BOOL)vibrationLoopShouldContinue;
-(BOOL)_shouldPlayVibration;
-(void)setVibrationLoopShouldContinue:(BOOL)arg1 ;
-(void)_vibrateAndLoop:(int)arg1 delayBetweenPulses:(double)arg2 abort:(/*^block*/id)arg3 ;
-(void)playEndCallTone:(BOOL)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)_playRingingSoundInternal:(/*^block*/id)arg1 ;
-(void)_playIncomingRingVibrationLoop;
-(void)_playSearchingSoundIfPending;
-(void)_onSearchingTimer;
-(void)startJoinedConferenceCallTone;
-(void)safeJoinedConferenceToneCompletionHandler;
-(int)waitingJoinTones;
-(void)setWaitingJoinTones:(int)arg1 ;
-(void)startLeftConferenceCallTone;
-(void)safeLeftConferenceToneCompletionHandler;
-(int)waitingLeaveTones;
-(void)setWaitingLeaveTones:(int)arg1 ;
-(void)updateToneVolume;
-(void)_stopConnecting;
-(FBWebRTCInCallSoundEffect *)incomingRingtoneSoundEffect;
-(FBWebRTCInCallSoundEffect *)ringbackSoundEffect;
-(FBWebRTCInCallSoundEffect *)searchingSoundEffect;
-(FBWebRTCInCallSoundEffect *)endCallSoundEffect;
-(FBWebRTCInCallSoundEffect *)droppedCallSoundEffect;
-(FBWebRTCInCallSoundEffect *)remoteVideoStartedSoundEffect;
-(FBWebRTCInCallSoundEffect *)connectedSoundEffect;
-(FBWebRTCInCallSoundEffect *)disconnectedSoundEffect;
-(FBWebRTCInCallSoundEffect *)userJoinedSoundEffect;
-(FBWebRTCInCallSoundEffect *)userLeftSoundEffect;
-(FBWebRTCInCallSoundEffect *)instantVideoRequestSoundEffect;
-(FBWebRTCInCallSoundEffect *)currentRepeatingSoundEffect;
-(void)setCurrentRepeatingSoundEffect:(FBWebRTCInCallSoundEffect *)arg1 ;
-(BOOL)audioSessionHasStarted;
-(void)setAudioSessionHasStarted:(BOOL)arg1 ;
-(BOOL)hasPendingPlaySearchingSound;
-(void)setHasPendingPlaySearchingSound:(BOOL)arg1 ;
-(BOOL)isPlayingRepeatingSound;
-(void)setIsPlayingRepeatingSound:(BOOL)arg1 ;
-(void)setIsInterrupted:(BOOL)arg1 ;
-(BOOL)shouldPlayHoldTone;
-(void)setShouldPlayHoldTone:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasConnected;
-(BOOL)isInterrupted;
@end

