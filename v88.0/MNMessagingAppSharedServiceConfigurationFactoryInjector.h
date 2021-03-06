/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, UIApplication, NSString;

@interface MNMessagingAppSharedServiceConfigurationFactoryInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	UIApplication* _application;

}

@property (nonatomic,readonly) FBUserSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)secureThreadsServiceProvider;
-(id)accountRecoveryIdRegistrationServiceProvider;
-(id)calendarSyncServiceProvider;
-(id)watchDataServiceProvider;
-(id)watchLogFileServiceProvider;
-(id)applicationShortcutItemsConfigurerServiceProvider;
-(id)badgeCountServiceProvider;
-(id)loomServiceProvider;
-(id)loggedInCheckpointServiceProvider;
-(id)networkLinkConditionerEmpathyServiceProvider;
-(id)zeroRatingServiceProvider;
-(id)reactivationNotificationFetchingServiceProvider;
-(id)addressBookContactSyncServiceProvider;
-(id)apnsPushServiceProvider;
-(id)contactSyncServiceProvider;
-(id)emojiFontServiceProvider;
-(id)messageSendServiceProvider;
-(id)messagingQuickReplyStoreServiceProvider;
-(id)mqttConnectStateTrackerServiceProvider;
-(id)omnistoreServiceProvider;
-(id)omnistoreMobileConfigServiceProvider;
-(id)omnistoreNuxServiceProvider;
-(id)omnistoreUserPrefsServiceProvider;
-(id)presenceServiceProvider;
-(id)realTimeBannerServiceProvider;
-(id)syncedInboxServerBadgeCountTrackingServiceProvider;
-(id)syncProtocolServiceAdapterProvider;
-(id)threadSummaryUpdateServiceProvider;
-(id)threadUpdateServiceProvider;
-(id)montageStoreServiceProvider;
-(id)watchRequestHandlerServiceProvider;
-(id)pushRegistrationServiceProvider;
-(id)loggedInUserRefreshServiceProvider;
-(id)nonEssentialServicesProvider;
-(id)messageLocalNotificationServiceProvider;
-(id)viewLifecycleManagerProvider;
-(id)photoViewNodeReusePoolProvider;
-(id)crashReportInfoUpdatingServiceProvider;
-(id)ephemeralMessagingSetupServiceProvider;
-(id)connectionStatusToastControllerServiceProvider;
-(id)keyboardStateTrackerServiceProvider;
-(id)appTerminationServiceProvider;
-(id)montageViewModelSubscriptionServiceProvider;
-(id)webKitCleanupServiceProvider;
-(id)deprecationServiceProvider;
-(id)credentialValidationServiceProvider;
-(id)invalidTokenErrorNotificationHandlingServiceProvider;
-(id)legacySyncEngineManagingServiceProvider;
-(id)spCoordinatorServiceProvider;
-(id)networkMonitorControllerServiceProvider;
-(id)orcaPersistManagerServiceProvider;
-(id)nuxBootstrapperServiceProvider;
-(id)imageStreamingServiceInitializerRegistryServiceProvider;
-(id)spotlightUserIndexServiceProvider;
-(id)accountNotificationsFetchingServiceProvider;
-(id)accountSwitchingPolicyBridgeServiceProvider;
-(id)additionalContactsServiceProvider;
-(id)canonicalGroupFetcherServiceProvider;
-(id)compactDiskServiceProvider;
-(id)composerExtensionOrderFetcherServiceProvider;
-(id)mAISuggestionsServiceProvider;
-(id)montageRecentForwardedMessageStoreServiceProvider;
-(id)mapSnapshotterControllerServiceProvider;
-(id)threadTypingStateTrackerServiceProvider;
-(id)configManagerProvider;
-(id)exceptionHandlerProvider;
-(id)contactSyncStateLoggingServiceProvider;
-(id)messagesDiskRestorerServiceProvider;
-(id)frequentlyUsedEmojisStoreServiceProvider;
-(id)groupThreadsFetcherServiceProvider;
-(id)internalStarRatingServiceProvider;
-(id)keyboardCacheServiceProvider;
-(id)linkTimeLoggingServiceProvider;
-(id)mAIUserActionServiceProvider;
-(id)messagesNetworkPrefetcherServiceProvider;
-(id)messagingRegionFetcherServiceProvider;
-(id)nuxControllerServiceProvider;
-(id)pendingRequestsNumberDownloaderServiceProvider;
-(id)phoneReverificationPresenterServiceProvider;
-(id)pushNotificationToggledSurveyCoordinatorServiceProvider;
-(id)qplPerfLoggerGatekeeperServiceProvider;
-(id)recentMessagesTrackingServiceProvider;
-(id)searchNullStateViewModelSubscriptionServiceProvider;
-(id)starRatingServiceProvider;
-(id)voicemailAssetDownloaderServiceProvider;
-(id)webRTCCallTabBadgeUpdateServiceProvider;
-(id)wifiWatcherServiceProvider;
-(id)contactStoreIntegrityVerifierServiceProvider;
-(id)secureThreadAppNotificationServiceProvider;
-(id)messagingStorePruningServiceProvider;
-(id)mqttServiceProvider;
-(id)syncEngineServiceProvider;
-(id)threadSharedMediaModelCacheServiceProvider;
-(id)threadStoreServiceProvider;
-(id)voipCoordinatorServiceProvider;
-(id)webRTCServiceProvider;
-(id)updaterServiceProvider;
-(id)inboxViewModelSubscriptionServiceProviderWithIdentifier:(id)arg1 ;
-(id)phoneReverificationPresenterProvider;
-(UIApplication *)application;
-(FBUserSession *)session;
@end

