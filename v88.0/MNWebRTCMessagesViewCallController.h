/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCCallabilityAwareCallControllerDelegate.h>
#import <Messenger/MNThreadPresenceListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNWebRTCMessagesViewCallControllerDelegate;
@class FBWebRTCCallabilityAwareCallController, FBWebRTCCallButtonImageProvider, MNWebRTCMessagesViewGroupCallStarter, FBExperimentManager, FBWebRTCInstantVideoExperimentContext, FBMobileConfigContextManager, FBWebRTCSynchronousContactsRetriever, FBMUser, MNUserSettings, UIBarButtonItem, FBWebRTCCallButton, MNComposerDynamicExperimentContext, FBWebRTCRecentCallLog, FBWebRTCMultiwayLargeGroupsExperimentContext, MNThreadPresenceTracker, FBMThreadKey, FBMRTCCallData, MNFullScreenTooltipController, FBTimer, NSString, FBWebRTCCallLogActionHandler;

@interface MNWebRTCMessagesViewCallController : NSObject <FBWebRTCCallabilityAwareCallControllerDelegate, MNThreadPresenceListener, FBClassProvidable> {

	FBWebRTCCallabilityAwareCallController* _callController;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	MNWebRTCMessagesViewGroupCallStarter* _groupCallStarter;
	FBExperimentManager* _experimentManager;
	FBWebRTCInstantVideoExperimentContext* _instantVideoExperimentContext;
	FBMobileConfigContextManager* _configManager;
	FBWebRTCSynchronousContactsRetriever* _synchronousContactsRetriever;
	FBMUser* _otherUser;
	MNUserSettings* _userSettings;
	UIBarButtonItem* _audioButtonItem;
	UIBarButtonItem* _videoButtonItem;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	MNComposerDynamicExperimentContext* _composerDynamicExperiment;
	FBWebRTCRecentCallLog* _callLog;
	FBWebRTCMultiwayLargeGroupsExperimentContext* _groupSizeContext;
	BOOL _isRtcConferencingRingingEnabled;
	BOOL _isRtcConferencingCallingEnabled;
	BOOL _isRtcConferencingDirectVideoEnabled;
	MNThreadPresenceTracker* _threadPresenceTracker;
	FBMThreadKey* _threadKey;
	BOOL _isMultiwayCallOngoingForThread;
	BOOL _shouldUseDeltaForStatus;
	FBMRTCCallData* _callData;
	MNFullScreenTooltipController* _tooltipController;
	FBTimer* _showTooltipTimer;
	BOOL _canShowTooltip;
	NSString* _applicationName;
	BOOL _instantVideoTooltipShownForCurrentThread;
	BOOL _compactMode;
	BOOL _messagesViewVisible;
	FBWebRTCCallLogActionHandler* _callLogActionHandler;
	id<MNWebRTCMessagesViewCallControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBWebRTCCallLogActionHandler * callLogActionHandler;                       //@synthesize callLogActionHandler=_callLogActionHandler - In the implementation block
@property (nonatomic,readonly) BOOL isOtherUserCallable; 
@property (assign,nonatomic,__weak) id<MNWebRTCMessagesViewCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCompactMode,nonatomic) BOOL compactMode;                                       //@synthesize compactMode=_compactMode - In the implementation block
@property (assign,getter=isMessagesViewVisible,nonatomic) BOOL messagesViewVisible;                       //@synthesize messagesViewVisible=_messagesViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithCallController:(id)arg1 callButtonImageProvider:(id)arg2 experimentManager:(id)arg3 callLogActionHandler:(id)arg4 synchronousContactsRetriever:(id)arg5 callLog:(id)arg6 configManager:(id)arg7 threadPresenceTracker:(id)arg8 peoplePickerViewControllerProvider:(id)arg9 userStore:(id)arg10 navigationCoordinator:(id)arg11 userSettings:(id)arg12 userSession:(id)arg13 applicationName:(id)arg14 ;
-(void)_didPressAudioButton;
-(void)_didPressVideoButton;
-(void)_updateButtonSizes;
-(FBWebRTCCallLogActionHandler *)callLogActionHandler;
-(void)updateGroupCallStatus:(BOOL)arg1 withServerInfoData:(id)arg2 ;
-(void)_setCallButtonsWidth:(double)arg1 ;
-(void)_startTooltipTimer;
-(void)_cancelModalUI;
-(void)_stopTooltip;
-(void)_hideTooltipIfNeeded;
-(BOOL)hasButtonsForCurrentMessageThread;
-(BOOL)_isInstantVideoTooltipSupportedForThread;
-(BOOL)_canShowInstantTooltip;
-(void)_showTooltipIfNeeded;
-(id)_callAnalyticsExtraData;
-(BOOL)_shouldStartInstantVideoCall;
-(BOOL)_isInstantVideoEnabled;
-(id)_autoExposedInstantVideoExperiment;
-(BOOL)_isCoPresentWithCapability;
-(id)_autoExposedComposerDynamicExperiment;
-(void)_startTooltipTimerComplete;
-(void)_showInstantVideoTooltipIfNeeded;
-(BOOL)_canShowGroupVideoCallingTooltip;
-(void)_showGroupVideoCallingTooltipIfNeeded;
-(BOOL)_canShowGroupCallingTooltip;
-(void)_showGroupCallingTooltipIfNeeded;
-(void)_showInstantVideoTooltip:(unsigned long long)arg1 ;
-(CGPoint)_tooltipScreenPositionForTargetView:(id)arg1 ;
-(void)_showGroupCallingTooltip;
-(void)_showGroupVideoCallingTooltip;
-(void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1 ;
-(void)threadPresenceDidChange;
-(void)configureWithThreadSummary:(id)arg1 users:(id)arg2 barButtonWidth:(double)arg3 ;
-(void)setMessagesViewVisible:(BOOL)arg1 ;
-(void)willChangeButtonPosition;
-(BOOL)shouldCheckGroupCallStatus;
-(BOOL)isOtherUserCallable;
-(id)rencentContacts;
-(void)setCompactMode:(BOOL)arg1 ;
-(BOOL)isCompactMode;
-(BOOL)isMessagesViewVisible;
-(void)setDelegate:(id<MNWebRTCMessagesViewCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNWebRTCMessagesViewCallControllerDelegate>)delegate;
-(void)_updateButtons;
-(id)barButtonItems;
-(void)_updateButtonVisibility;
-(void)tearDown;
-(void)refreshUI;
@end

