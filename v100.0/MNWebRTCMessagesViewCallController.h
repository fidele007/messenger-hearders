/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCCallStarterDelegate.h>
#import <Messenger/MNThreadPresenceListener.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNWebRTCMessagesViewCallControllerDelegate;
@class FBWebRTCCallStarter, MNPresenceSubscriptionService, FBWebRTCCallButtonImageProvider, FBWebRTCGroupCallStarter, FBMobileConfigContextManager, MNComposerConfiguration, MNThreadPresenceTracker, MNUserSettings, NSString, FBMThreadSummary, FBMIndexedUserSet, UIBarButtonItem, FBWebRTCCallButton, MNFullScreenTooltipController, FBTimer;

@interface MNWebRTCMessagesViewCallController : NSObject <FBWebRTCCallStarterDelegate, MNThreadPresenceListener, MNPresenceUpdateListening, FBClassProvidable> {

	FBWebRTCCallStarter* _callStarter;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBWebRTCGroupCallStarter* _groupCallStarter;
	FBMobileConfigContextManager* _configManager;
	MNComposerConfiguration* _composerConfiguration;
	MNThreadPresenceTracker* _threadPresenceTracker;
	MNUserSettings* _userSettings;
	NSString* _applicationName;
	FBMThreadSummary* _messengerThread;
	FBMIndexedUserSet* _users;
	BOOL _isRtcP2PCallingEnabledForCurrentThread;
	BOOL _isRtcConferencingRingingEnabledForCurrentThread;
	BOOL _isRtcConferencingCallingEnabledForCurrentThread;
	BOOL _isRtcConferencingDirectVideoEnabledForCurrentThread;
	UIBarButtonItem* _audioButtonItem;
	UIBarButtonItem* _videoButtonItem;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	id<FBProvider> _tooltipControllerProvider;
	MNFullScreenTooltipController* _tooltipController;
	FBTimer* _showTooltipTimer;
	BOOL _canShowTooltip;
	BOOL _instantVideoTooltipShownForCurrentThread;
	BOOL _compactMode;
	BOOL _messagesViewVisible;
	id<MNWebRTCMessagesViewCallControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNWebRTCMessagesViewCallControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCompactMode,nonatomic) BOOL compactMode;                                       //@synthesize compactMode=_compactMode - In the implementation block
@property (assign,getter=isMessagesViewVisible,nonatomic) BOOL messagesViewVisible;                       //@synthesize messagesViewVisible=_messagesViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithCallStarter:(id)arg1 groupCallStarter:(id)arg2 presenceSubscriptionService:(id)arg3 callButtonImageProvider:(id)arg4 configManager:(id)arg5 threadPresenceTracker:(id)arg6 userSettings:(id)arg7 tooltipControllerProvider:(id)arg8 composerConfiguration:(id)arg9 applicationName:(id)arg10 ;
-(void)_didPressAudioButton;
-(void)_didPressVideoButton;
-(void)_updateButtonSizes;
-(void)_startTooltipTimer;
-(void)_cancelModalUI;
-(void)_stopTooltip;
-(void)_hideTooltipIfNeeded;
-(BOOL)_shouldShowP2PButtons;
-(BOOL)_shouldShowMultiwayButtons;
-(BOOL)_isMultiwayCallOngoingForThread;
-(BOOL)_canStartInstantVideoCall;
-(void)_showTooltipIfNeeded;
-(void)_startGroupCallWithVideo:(BOOL)arg1 ;
-(id)_callAnalyticsExtraData;
-(BOOL)_isInstantVideoEnabledForCurrentThread;
-(void)_startTooltipTimerComplete;
-(void)_showInstantVideoTooltipIfNeeded;
-(BOOL)_canShowGroupVideoCallingTooltip;
-(void)_showGroupVideoCallingTooltipIfNeeded;
-(BOOL)_canShowGroupCallingTooltip;
-(void)_showGroupCallingTooltipIfNeeded;
-(void)_showInstantVideoTooltipWithUser:(id)arg1 ;
-(CGPoint)_tooltipScreenPositionForTargetView:(id)arg1 ;
-(void)_showGroupCallingTooltip;
-(void)_showGroupVideoCallingTooltip;
-(BOOL)hasButtonsForCurrentMessageThread;
-(BOOL)_isCoPresent;
-(void)callStarterDidUpdateCallState:(id)arg1 ;
-(void)callStarter:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2 ;
-(void)threadPresenceDidChange;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)updateThreadSummary:(id)arg1 users:(id)arg2 ;
-(void)setMessagesViewVisible:(BOOL)arg1 ;
-(void)willChangeButtonPosition;
-(void)setCompactMode:(BOOL)arg1 ;
-(BOOL)isCompactMode;
-(BOOL)isMessagesViewVisible;
-(void)setDelegate:(id<MNWebRTCMessagesViewCallControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNWebRTCMessagesViewCallControllerDelegate>)delegate;
-(void)_updateButtons;
-(id)barButtonItems;
-(void)tearDown;
-(void)refreshUI;
@end
