/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformAppManagerListener.h>
#import <Messenger/MNComposerExtensionProviding.h>

@protocol FBProvider, MNPlatformAppActionFactory;
@class MNLightweightActionConfigManager, MNMessageLiveLocationConfigManager, MNPlatformAppListService, MNPlatformAppActionHandler, MNPlatformComposerGatingChecker, MNComposerExtensionProviderListenerAnnouncer, NSArray, FBUserSession, FBMobileConfigContextManager, MNPlatformAppManager, MNComposerConfiguration, NSString;

@interface MNComposerExtensionProvider : NSObject <MNPlatformAppManagerListener, MNComposerExtensionProviding> {

	BOOL _includeFailsafeCheck;
	id<FBProvider> _cameraExtensionProvider;
	id<FBProvider> _phoneExtensionProvider;
	id<FBProvider> _videoExtensionProvider;
	id<FBProvider> _contactShareExtensionProvider;
	id<FBProvider> _dayCameraExtensionProvider;
	id<FBProvider> _mediaExtensionProvider;
	id<FBProvider> _stickerExtensionProvider;
	id<FBProvider> _lightweightActionExtensionProvider;
	MNLightweightActionConfigManager* _lightweightActionConfigManager;
	id<FBProvider> _gameExtensionProvider;
	id<FBProvider> _pollExtensionProvider;
	id<FBProvider> _audioExtensionProvider;
	id<FBProvider> _paymentExtensionProvider;
	id<FBProvider> _locationExtensionProvider;
	id<FBProvider> _liveLocationExtensionProvider;
	MNMessageLiveLocationConfigManager* _liveLocationConfigManager;
	id<FBProvider> _gifExtensionProvider;
	id<FBProvider> _contentSearchExtensionProvider;
	id<FBProvider> _rideServiceExtensionProvider;
	id<FBProvider> _quickReplyExtensionProvider;
	id<FBProvider> _platformAppsExtensionProvider;
	id<FBProvider> _eventReminderExtensionProvider;
	MNPlatformAppListService* _platformAppListService;
	MNPlatformAppActionHandler* _platformAppActionHandler;
	MNPlatformComposerGatingChecker* _platformComposerGatingChecker;
	MNComposerExtensionProviderListenerAnnouncer* _announcer;
	NSArray* _defaultComposerExtensions;
	NSArray* _platformExtensions;
	NSArray* _platformApps;
	id<MNPlatformAppActionFactory> _platformAppActionFactory;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNPlatformAppManager* _platformAppManager;
	MNComposerConfiguration* _composerConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_defaultComposerExtensions;
-(void)_updatePlatformAppsIfNecessary;
-(BOOL)_isMoreDrawerAboveComposer;
-(BOOL)_shouldShowCameraOnTabBar;
-(BOOL)_shouldShowPhoneOnTabBar;
-(BOOL)_shouldShowVideoOnTabBar;
-(BOOL)_shouldShowDayCameraOnTabBar;
-(BOOL)_shouldShowMediaOnTabBar;
-(BOOL)_shouldShowStickersOnTabBar;
-(BOOL)_shouldShowContentSearchOnTabBar;
-(BOOL)_shouldShowAudioOnTabBar;
-(BOOL)_shouldShowQuickReplyOnTabBar;
-(BOOL)_shouldShowGIFInMoreTab;
-(BOOL)_shouldShowPaymentsOnTabBar;
-(BOOL)_shouldShowLocationInMoreTab;
-(BOOL)_shouldShowLiveLocationInMoreTab;
-(BOOL)_shouldShowGameOnTabBar;
-(BOOL)_shouldShowPollOnTabBar;
-(BOOL)_shouldShowRideServiceInMoreTab;
-(BOOL)_shouldShowContactShareInMoreTab;
-(BOOL)_shouldShowPlatformAppsExtensionInMoreMenu;
-(BOOL)_shouldShowLightweightActionOnTabBar;
-(BOOL)_shouldShowEventReminderExtensionInMoreMenu;
-(void)_updatePlatformExtensions;
-(void)didUpdateApps;
-(void)didInstallApp:(id)arg1 ;
-(id)availableExtensions;
-(id)overflowStrategyWithExtension:(id)arg1 platformAppsExtension:(id)arg2 ;
-(id)initWithSession:(id)arg1 configManager:(id)arg2 platformComposerGatingChecker:(id)arg3 platformAppListService:(id)arg4 platformAppActionHandler:(id)arg5 platformAppActionFactory:(id)arg6 platformAppManager:(id)arg7 cameraExtensionProvider:(id)arg8 phoneExtensionProvider:(id)arg9 videoExtensionProvider:(id)arg10 contactShareExtensionProvider:(id)arg11 dayCameraExtensionProvider:(id)arg12 mediaExtensionProvider:(id)arg13 stickerExtensionProvider:(id)arg14 lightweightActionExtensionProvider:(id)arg15 lightweightActionConfigManager:(id)arg16 audioExtensionProvider:(id)arg17 paymentExtensionProvider:(id)arg18 locationExtensionProvider:(id)arg19 liveLocationExtensionProvider:(id)arg20 liveLocationConfigManager:(id)arg21 gifExtensionProvider:(id)arg22 contentSearchExtensionProvider:(id)arg23 gameExtensionProvider:(id)arg24 pollExtensionProvider:(id)arg25 rideServiceExtensionProvider:(id)arg26 quickReplyExtensionProvider:(id)arg27 platformAppsExtensionProvider:(id)arg28 eventReminderExtensionProvider:(id)arg29 includeFailsafeCheck:(BOOL)arg30 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

