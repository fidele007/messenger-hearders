/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@class FBUserPreferences, FBViewerContext, NSMutableDictionary, FBAPISessionStore, FBAppModuleManager, FBClashManager, FBFeedEventListener, FBSimpleSearchCacheService, FBSearchBootstrapSuggestionGeneratorService, FBSearchBootstrapDownloadService, FBVideoPlayerManager, NSString, FBNuxCoordinator, FBVideoTagDatabase, FBVideoTagSuggestionManager, FBMemModelPhotoTaggingAssetStore, FBPhotoTagSuggestionManager, FBCLBackgroundLocationService, FBSponsoredStoryImpressionSender, FBFeedbackReactionSettingsFetchService, FBFeedInstallNotificationCoordinator, FBVideoNetworker, NSDictionary, FBDelightsEventHandler, FBDelightsKeyframesAnimationController, FBDelightsNYE2017FeatureGating, FBDelightsAttributedStringStylizer, FBBrowserPrefetchCoordinator, FBSoundController, FBReactionCoordinator, FBMQTTManager, FBGametimeScoreUpdater, FBCurrentActorController, FBFeedUnitDebugInfoManager, FBImagePrefetchController, FBFontManager, FBDictionaryRegistry, FBNetworkerMonitor;

@interface FBUserSession : NSObject <FBInvalidating> {

	recursive_mutex _lock;
	FBUserPreferences* _userPreferences;
	BOOL _invalidated;
	FBViewerContext* _loggedInUserContext;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _initializerDurations;
	FBAPISessionStore* _apiSessionStore;

}

@property (nonatomic,readonly) BOOL searchResultsEnableFiltersAsSeeMore; 
@property (nonatomic,readonly) BOOL pagesTabPilltersEnabled; 
@property (nonatomic,readonly) BOOL usersTabPilltersEnabled; 
@property (nonatomic,readonly) unsigned long long searchPeopleFiltersStyle; 
@property (nonatomic,readonly) BOOL videoSERPSocialModuleEnabled; 
@property (nonatomic,readonly) FBAppModuleManager * appModuleManager; 
@property (nonatomic,readonly) FBClashManager * clashManager; 
@property (nonatomic,readonly) FBFeedEventListener * feedEventListener; 
@property (nonatomic,readonly) NSMutableDictionary * channelSessionIDCache; 
@property (nonatomic,readonly) FBSimpleSearchCacheService * simpleSearchCacheService; 
@property (nonatomic,readonly) FBSearchBootstrapSuggestionGeneratorService * searchBootstrapSuggestionGeneratorService; 
@property (nonatomic,readonly) FBSearchBootstrapDownloadService * searchBootstrapDownloadService; 
@property (nonatomic,readonly) FBVideoPlayerManager * videoPlayerManager; 
@property (nonatomic,copy,readonly) NSString * searchKeywordsOnlyRankingExperimentName; 
@property (nonatomic,readonly) BOOL searchTypeaheadUseEntityKeywordText; 
@property (nonatomic,readonly) BOOL searchResultsEntityModuleDoNotTruncate; 
@property (nonatomic,readonly) unsigned long long searchMaxKeywordBootstrapSuggestions; 
@property (nonatomic,readonly) unsigned long long searchMaxEntityBootstrapSuggestions; 
@property (nonatomic,readonly) BOOL searchResultsSaveCapacityOnInitialLoad; 
@property (nonatomic,readonly) BOOL searchPrefixOnlyQueryCache; 
@property (nonatomic,readonly) BOOL pulseEnabled; 
@property (nonatomic,readonly) unsigned long long pulseRequiredShareCountForWebview; 
@property (nonatomic,readonly) unsigned long long pulseLinksTabHeaderLinkRequiredShareCount; 
@property (nonatomic,readonly) BOOL useNewPulseDesign; 
@property (nonatomic,readonly) FBNuxCoordinator * nuxCoordinator; 
@property (assign,nonatomic) FBNuxCoordinator * nuxCoordinator; 
@property (nonatomic,readonly) FBVideoTagDatabase * videoTagDatabase; 
@property (nonatomic,readonly) FBVideoTagSuggestionManager * videoTagSuggestionManager; 
@property (nonatomic,readonly) FBMemModelPhotoTaggingAssetStore * memModelPhotoTaggingAssetStore; 
@property (nonatomic,readonly) FBPhotoTagSuggestionManager * tagSuggestionManager; 
@property (nonatomic,readonly) FBCLBackgroundLocationService * backgroundLocationService; 
@property (nonatomic,readonly) FBSponsoredStoryImpressionSender * sponsoredStoryImpressionSender; 
@property (nonatomic,readonly) FBFeedbackReactionSettingsFetchService * feedbackReactionSettingsFetchService; 
@property (readonly) FBFeedInstallNotificationCoordinator * installNotificationCoordinator; 
@property (nonatomic,readonly) FBVideoNetworker * videoNetworker; 
@property (nonatomic,readonly) unsigned long long searchMode; 
@property (nonatomic,readonly) BOOL trendingNewsEnabled; 
@property (nonatomic,readonly) BOOL trendingNewsEnabledOnPad; 
@property (nonatomic,readonly) BOOL mediaSearch2015H1M3ImprovementsEnabled; 
@property (nonatomic,copy,readonly) NSString * searchFieldPlaceholderText; 
@property (nonatomic,readonly) BOOL typeaheadSuggestionCacheEnabled; 
@property (nonatomic,readonly) BOOL clientSerpCacheEnabled; 
@property (nonatomic,readonly) BOOL searchNativeTemplateEnabled; 
@property (nonatomic,readonly) BOOL searchTabPreloadEnabled; 
@property (nonatomic,readonly) BOOL useSimpleSearchBasedMentions; 
@property (nonatomic,readonly) BOOL debug_enableSearchResultsPageReload; 
@property (nonatomic,readonly) BOOL debug_graphSearchColorLocalEcho; 
@property (nonatomic,readonly) BOOL debug_searchTypeaheadSourceColor; 
@property (nonatomic,readonly) BOOL graphSearchShowVideosTab; 
@property (nonatomic,readonly) unsigned long long recentSearchesStyle; 
@property (nonatomic,readonly) BOOL graphSearchShowKeywordSubtext; 
@property (nonatomic,readonly) BOOL graphSearchNullStateEnableCombinedGraphQLEndpoint; 
@property (nonatomic,readonly) BOOL graphSearchTypeaheadKeywordTopEnabled; 
@property (nonatomic,readonly) BOOL searchTypeaheadQueryFormationEnabled; 
@property (nonatomic,readonly) BOOL graphSearchEnablePublicPostsOnly; 
@property (nonatomic,readonly) BOOL graphSearchShowRecommendationsInNullState; 
@property (nonatomic,readonly) BOOL scopedSearchEnabled; 
@property (nonatomic,readonly) BOOL appShouldCenterAlignVerifiedBadgeInNullState; 
@property (nonatomic,readonly) BOOL appShouldUseFollowIconInsteadOfLikeIcon; 
@property (nonatomic,readonly) BOOL appShouldAllowUnfollowing; 
@property (nonatomic,readonly) BOOL appShouldAllowUserFollow; 
@property (nonatomic,readonly) BOOL appShouldAllowUserSendFriendRequest; 
@property (nonatomic,readonly) BOOL appShouldAllowSearchMessagingInlineAction; 
@property (nonatomic,readonly) BOOL appShouldDisplayChevronAndSeparator; 
@property (nonatomic,readonly) BOOL appShouldUseCustomizedIcon; 
@property (nonatomic,readonly) double thumbComponentRightPadding; 
@property (nonatomic,copy,readonly) NSString * simpleSearchNullServiceClassName; 
@property (nonatomic,readonly) BOOL appSeeMoreResultsDisabled; 
@property (nonatomic,readonly) BOOL shouldEnableScrollableTabBar; 
@property (nonatomic,readonly) BOOL searchResultsContentCentered; 
@property (nonatomic,readonly) BOOL searchKeyboardShortcutsEnabled; 
@property (nonatomic,readonly) unsigned long long searchMultiResultsViewStyle; 
@property (nonatomic,readonly) BOOL searchS19Nabled; 
@property (nonatomic,copy,readonly) NSString * graphSearchTARankingExperimentName; 
@property (nonatomic,readonly) BOOL graphSearchTypeaheadEnableTwoRequestMode; 
@property (nonatomic,readonly) double graphSearchTypeaheadEntityBootstrapRefreshIntervalWifi; 
@property (nonatomic,readonly) double graphSearchTypeaheadEntityBootstrapRefreshIntervalNonWifi; 
@property (nonatomic,readonly) double graphSearchTypeaheadKeywordBootstrapRefreshIntervalWifi; 
@property (nonatomic,readonly) double graphSearchTypeaheadKeywordBootstrapRefreshIntervalNonWifi; 
@property (nonatomic,readonly) unsigned long long graphSearchTypeaheadReduceFlickeringBucketSize; 
@property (nonatomic,readonly) BOOL searchInVideoHomeEnabled; 
@property (nonatomic,readonly) BOOL searchInVideoHomeNullstateShowGraphSearchTab; 
@property (nonatomic,copy,readonly) NSString * searchInVideoHomeNullstateSuggestionSource; 
@property (nonatomic,readonly) BOOL searchInVideoHomeNullstateShowRecentSearches; 
@property (nonatomic,readonly) BOOL searchInVideoHomeNullstateShowSuggestions; 
@property (nonatomic,readonly) BOOL searchInVideoHomeUseDarkStyle; 
@property (nonatomic,readonly) BOOL searchInVideoHomeTypeaheadShowGraphSearchTab; 
@property (nonatomic,readonly) BOOL searchInVideoHomeTypeaheadShowPPSEcho; 
@property (nonatomic,readonly) BOOL searchInVideoHomeTypeaheadShowVideoSERPEcho; 
@property (nonatomic,readonly) BOOL searchInVideoHomeTypeaheadShowKeywordSuggestions; 
@property (nonatomic,readonly) BOOL searchInVideoHomeTypeaheadShowEntitySuggestions; 
@property (nonatomic,readonly) BOOL searchInVideoHomeShowVideoSERPResult; 
@property (nonatomic,readonly) BOOL searchInVideoHomeVideoSerpShowChannelsTab; 
@property (nonatomic,readonly) unsigned long long searchInVideoHomeI18NTier; 
@property (nonatomic,copy,readonly) NSDictionary * searchInVideoHomeTierExperienceLoggingData; 
@property (nonatomic,readonly) BOOL searchNullstateTypeaheadNoKeywordsHoldoutEnabled; 
@property (nonatomic,readonly) FBDelightsEventHandler * delightsEventHandler; 
@property (nonatomic,readonly) FBDelightsKeyframesAnimationController * delightsKeyframesAnimationController; 
@property (nonatomic,readonly) FBDelightsNYE2017FeatureGating * delightsNYE2017FeatureGating; 
@property (nonatomic,readonly) FBDelightsAttributedStringStylizer * delightsAttributedStringStylizer; 
@property (nonatomic,readonly) FBBrowserPrefetchCoordinator * browserPrefetchCoordinator; 
@property (nonatomic,readonly) FBSoundController * soundController; 
@property (readonly) FBReactionCoordinator * reactionCoordinator; 
@property (nonatomic,readonly) FBMQTTManager * mqttManager; 
@property (nonatomic,readonly) FBGametimeScoreUpdater * gametimeScoreUpdater; 
@property (nonatomic,readonly) FBCurrentActorController * currentActorController; 
@property (nonatomic,readonly) FBFeedUnitDebugInfoManager * feedUnitDebugInfoManager; 
@property (nonatomic,readonly) FBImagePrefetchController * imagePrefetchController; 
@property (nonatomic,readonly) FBFontManager * fontManager; 
@property (nonatomic,copy,readonly) FBDictionaryRegistry * scriptMessageHandlerRegistry; 
@property (nonatomic,readonly) FBNetworkerMonitor * networkerMonitor; 
@property (retain) FBUserPreferences * userPreferences; 
@property (retain,readonly) FBAPISessionStore * apiSessionStore;                                                                     //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (readonly) FBViewerContext * loggedInUserContext; 
@property (nonatomic,readonly) BOOL didLogin; 
@property (copy,readonly) NSString * userFBID; 
@property (copy,readonly) NSString * defaultViewerFBID; 
@property (readonly) BOOL hasUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(void)setOverrideProviderForStickerUserSettings:(/*^block*/id)arg1 forLayoutIdiom:(unsigned long long)arg2 ;
+(void)setSimpleSearchForMentionsEnabled:(BOOL)arg1 ;
-(void)setProviderMap:(id)arg1 ;
-(id)mobileConfigContextManager;
-(FBMQTTManager *)mqttManager;
-(FBNetworkerMonitor *)networkerMonitor;
-(id)sessionStartupManager;
-(NSString *)userFBID;
-(id)networkDispatcher;
-(void)snoozeProductionLockoutForDuration:(double)arg1 ;
-(id)graphQLService;
-(id)imageDownloader;
-(id)stickerResourceManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)experimentManager;
-(id)stickerPurchaseManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(FBAPISessionStore *)apiSessionStore;
-(FBVideoNetworker *)videoNetworker;
-(id)stickerManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(FBNuxCoordinator *)nuxCoordinator;
-(id)quickPromotionCoordinator;
-(void)setNuxCoordinator:(FBNuxCoordinator *)arg1 ;
-(id)diskCacheForName:(id)arg1 ;
-(id)stickerServiceControllerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)diskCacheForConfig:(id)arg1 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 ;
-(id)nuxAppConfiguration;
-(void)injectExtraImageFormatsForCachedImageFactory:(id)arg1 ;
-(id)destinationManager;
-(id)initWithApiSessionStore:(id)arg1 ;
-(id)httpUpperStack;
-(void)setEnabledETagForGraphQL:(BOOL)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 ;
-(id)scopedObjectsPluginRegistry;
-(/*^block*/id)imageStreamingServiceInitializer;
-(id)mapSnapshotterController;
-(id)sessionPreferences;
-(id)diskStoreForName:(id)arg1 ;
-(id)filterAssetDownloader;
-(id)filterAssetManager;
-(id)scenePathRootContext;
-(id)graphQLFragmentService;
-(id)diskStore;
-(id)graphQLMutator;
-(FBDictionaryRegistry *)scriptMessageHandlerRegistry;
-(id)composerPrivacySettingFetcher;
-(unsigned long long)searchMode;
-(id)webImageDownloaderFactory;
-(id)consistentLookasideCache;
-(id)feedGraphQLConnectionManager;
-(id)graphQLMemResponseController_DEPRECATED;
-(BOOL)appShouldCenterAlignVerifiedBadgeInNullState;
-(BOOL)appShouldUseFollowIconInsteadOfLikeIcon;
-(BOOL)appShouldAllowUnfollowing;
-(BOOL)appShouldAllowUserFollow;
-(BOOL)appShouldAllowUserSendFriendRequest;
-(BOOL)graphSearchShowKeywordSubtext;
-(BOOL)debug_graphSearchColorLocalEcho;
-(id)viewerResolver;
-(id)friendingActionManager;
-(BOOL)appShouldAllowSearchMessagingInlineAction;
-(unsigned long long)simpleSearchSERPType;
-(BOOL)graphSearchEnableSERPFilters;
-(BOOL)pagesTabPilltersEnabled;
-(BOOL)usersTabPilltersEnabled;
-(BOOL)pilltersEnabledForResultType:(unsigned long long)arg1 ;
-(unsigned long long)searchPeopleFiltersStyle;
-(BOOL)videoSERPSocialModuleEnabled;
-(BOOL)searchResultsEnableFiltersAsSeeMore;
-(BOOL)clientSerpCacheEnabled;
-(id)diskCache;
-(id)networkDispatcherWithSessionConfigOnly_DO_NOT_USE;
-(id)diskStoreForConfig:(id)arg1 ;
-(id)WWWSegueRegistry;
-(id)valueForKey:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(FBVideoPlayerManager *)videoPlayerManager;
-(id)videoAudioRouteMonitor;
-(id)sessionBasedSavedUsageHelper;
-(id)videoCurrentlyCastingID;
-(id)videoSoundTogglePluginSettingStore;
-(id)ntCachedTemplateCache;
-(id)ntCachedTemplateFetcher;
-(FBViewerContext *)loggedInUserContext;
-(id)workThrottler;
-(id)deferredJobsRegistry;
-(FBAppModuleManager *)appModuleManager;
-(id)nativeArticleLoadingManager;
-(FBFeedbackReactionSettingsFetchService *)feedbackReactionSettingsFetchService;
-(id)intentHandlerRegistry;
-(id)applicationShortcutManager;
-(id)applicationShortcutMapperRegistry;
-(id)menuItemDecoratorRegistry;
-(id)menuItemHandlerRegistry;
-(id)providerMap;
-(id)webViewProvider;
-(id)deeplinkableNativeThirdPartyURLController;
-(id)webViewProviderConfigurationRegistry;
-(BOOL)isWorkUser_DO_NOT_USE;
-(BOOL)pulseEnabled;
-(id)browserSurfaceProviderRegistry;
-(id)moviesLogger;
-(id)albumStoreManager;
-(id)imageStreamingService;
-(id)mediaSetStoreManager;
-(id)memPhotoCache;
-(id)livePhotoAssetCoordinator;
-(id)webViewProcessPoolContainer;
-(NSString *)defaultViewerFBID;
-(id)three60PhotoAssetDownloader;
-(id)gifLoader;
-(id)nativeAdBlockLoggingController;
-(id)nativeArticleLoaderProvider;
-(FBBrowserPrefetchCoordinator *)browserPrefetchCoordinator;
-(id)getStoreManagerFactory;
-(id)browserSavedLinksDataStoreManager;
-(id)savedDashboardStoreManager;
-(id)minimizedTabBarViewCoordinator;
-(unsigned long long)pulseRequiredShareCountForWebview;
-(id)pkvsObjectStoreFactory;
-(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
-(id)defaultSerialPerformer_DEPRECATED;
-(id)hScrollViewDurationTracker;
-(FBSponsoredStoryImpressionSender *)sponsoredStoryImpressionSender;
-(id)feedStoryPositionTrackerController;
-(id)publisherManager;
-(id)publishingListenerRegistry;
-(id)publisherPluginRegistry;
-(id)mediaPublishingInfoCache;
-(id)graphQLConnectionPersistenceIdleDetector;
-(id)feedGraphQLConnectionManagerListenerRegistry;
-(FBPhotoTagSuggestionManager *)tagSuggestionManager;
-(FBMemModelPhotoTaggingAssetStore *)memModelPhotoTaggingAssetStore;
-(id)imageProcessingFaceDetectRequestFactory;
-(id)eventRsvpListenerAnnouncer;
-(double)defaultStreamPollInterval;
-(FBClashManager *)clashManager;
-(id)resourceFetcher;
-(id)graphQLOTAManager;
-(id)webImageCache;
-(id)savedTriggers;
-(id)nativeTemplateGlobalMutator;
-(id)ntJavaScriptContext;
-(id)persistentKeyValueStoreForName:(id)arg1 ;
-(FBFeedEventListener *)feedEventListener;
-(id)vpvdLoggingPipelineProvider;
-(id)waterfallLoggerForAnalyticsModule:(id)arg1 ;
-(id)defaultStickerManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerStoreManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerUserSettingsForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerPackDownloaderQueue;
-(id)stickerSearchPerformer;
-(id)storyDeduplicationKeyToUnitIDMap;
-(id)attributionGenerator;
-(NSString *)searchFieldPlaceholderText;
-(FBDictionaryRegistry*)webImageDownloaderConfigurationRegistry;
-(id)dashLivePrefetcher;
-(id)liveStatusUpdateService;
-(NSMutableDictionary *)channelSessionIDCache;
-(FBSearchBootstrapSuggestionGeneratorService *)searchBootstrapSuggestionGeneratorService;
-(BOOL)useSimpleSearchBasedMentions;
-(BOOL)searchPrefixOnlyQueryCache;
-(BOOL)graphSearchTypeaheadEnableTwoRequestMode;
-(BOOL)searchS19Nabled;
-(unsigned long long)graphSearchTypeaheadReduceFlickeringBucketSize;
-(unsigned long long)searchMaxEntityBootstrapSuggestions;
-(unsigned long long)searchMaxKeywordBootstrapSuggestions;
-(BOOL)typeaheadSuggestionCacheEnabled;
-(BOOL)searchTypeaheadQueryFormationEnabled;
-(BOOL)searchNullstateTypeaheadNoKeywordsHoldoutEnabled;
-(NSString *)graphSearchTARankingExperimentName;
-(BOOL)graphSearchTypeaheadKeywordTopEnabled;
-(BOOL)searchTypeaheadUseEntityKeywordText;
-(double)graphSearchTypeaheadKeywordBootstrapRefreshIntervalWifi;
-(double)graphSearchTypeaheadKeywordBootstrapRefreshIntervalNonWifi;
-(BOOL)shouldSuppressProductionLockout;
-(id)pageTimelineHeaderLogger;
-(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManagerFactory>*)storeManagerFactory;
-(id)magicStoryCollectionIndex;
-(id)magicStoryTopicDetectionIndex;
-(id)magicStoryClassifier;
-(id)friendingActionListenerAnnouncer;
-(id)feedSecondaryActionRegistry;
-(id)preferencesForViewer:(id)arg1 ;
-(FBSearchBootstrapDownloadService *)searchBootstrapDownloadService;
-(double)graphSearchTypeaheadEntityBootstrapRefreshIntervalWifi;
-(double)graphSearchTypeaheadEntityBootstrapRefreshIntervalNonWifi;
-(FBSimpleSearchCacheService *)simpleSearchCacheService;
-(id)beaconsManager;
-(id)notificationsBadgeTracker;
-(id)notificationsMQTTBroadcaster;
-(FBDictionaryRegistry*)jewelManagerRegistry;
-(id)feedUnitNuxManager;
-(shared_ptr<facebook::mobile::graphstore::AsyncMutationAwareGraphStore>*)asyncGraphStore;
-(id)autoplaySettingsHelper;
-(id)autoplaySettingsLocalHelper;
-(id)autoplaySettingsServerGraphQLHelper;
-(id)autoplaySettingsServerHelper;
-(id)zrApplicationState;
-(NSString *)searchKeywordsOnlyRankingExperimentName;
-(BOOL)searchResultsEntityModuleDoNotTruncate;
-(BOOL)searchResultsSaveCapacityOnInitialLoad;
-(id)viewerFactory;
-(unsigned long long)pulseLinksTabHeaderLinkRequiredShareCount;
-(BOOL)useNewPulseDesign;
-(id)nuxAppEventManager;
-(id)nuxPresenterRegistry;
-(id)qpCustomRenderManagerHandlerCache;
-(id)qpCustomRenderManager;
-(FBVideoTagSuggestionManager *)videoTagSuggestionManager;
-(FBVideoTagDatabase *)videoTagDatabase;
-(FBCLBackgroundLocationService *)backgroundLocationService;
-(id)locationPermissionManager;
-(id)impressionTrackingPersister;
-(id)friendingPossibilitiesDataCoordinator;
-(id)friendingPossibilitiesMQTTBroadcaster;
-(id)friendingPossibilitiesStateFetcher;
-(id)friendingPossibilitiesIncludeHiddenDataCoordinator;
-(id)feedbackReactionsMutationListenerAnnouncer;
-(FBFeedInstallNotificationCoordinator *)installNotificationCoordinator;
-(id)ZRProjectGatingDelegate;
-(id)ZRApplicationState;
-(id)ZRBannerDataFetcher;
-(id)ZRBannerDataCache;
-(id)ZRDataFetchErrorDelegate;
-(id)ZRCampaignDataFetcher;
-(void)setZRDataFetchErrorDelegate:(id)arg1 ;
-(id)ZRHeaderRequestDataFetcher;
-(id)ZRTokenUpdater;
-(id)ZRHeaderRequestCoordinator;
-(void)setZRLoggedInUserId:(id)arg1 ;
-(id)ZRLoggedInUserId;
-(id)ZRNetworkActivityDestroyer;
-(id)ZROneTimeTokenUpdater;
-(void)setZRProjectGatingDelegate:(id)arg1 ;
-(id)ZRUrlRewriter;
-(id)ZRTariffedUrlBoundary;
-(id)ZRTariffedUxSessionManager;
-(id)ZRTokenRefreshCoordinator;
-(id)videoDownloadDiskCache:(id)arg1 ;
-(id)cdScope;
-(void)logGraphSearchTypeaheadExperimentExposure;
-(BOOL)shouldEnableScrollableTabBar;
-(BOOL)graphSearchEnablePublicPostsOnly;
-(unsigned long long)recentSearchesStyle;
-(BOOL)graphSearchShowRecommendationsInNullState;
-(BOOL)searchKeyboardShortcutsEnabled;
-(double)thumbComponentRightPadding;
-(NSString *)simpleSearchNullServiceClassName;
-(unsigned long long)searchMultiResultsViewStyle;
-(id)persistedDictionary;
-(BOOL)overrideActive;
-(id)searchConfig;
-(void)setPersistedDictionary:(id)arg1 ;
-(BOOL)searchNativeTemplateEnabled;
-(BOOL)searchTabPreloadEnabled;
-(BOOL)trendingNewsEnabled;
-(BOOL)trendingNewsEnabledOnPad;
-(BOOL)mediaSearch2015H1M3ImprovementsEnabled;
-(BOOL)graphSearchShowVideosTab;
-(BOOL)graphSearchNullStateEnableCombinedGraphQLEndpoint;
-(BOOL)scopedSearchEnabled;
-(BOOL)appShouldDisplayChevronAndSeparator;
-(BOOL)appSeeMoreResultsDisabled;
-(BOOL)searchResultsContentCentered;
-(BOOL)appShouldUseCustomizedIcon;
-(BOOL)debug_searchTypeaheadSourceColor;
-(BOOL)debug_enableSearchResultsPageReload;
-(void)searchInVideoHomeLogExposureIfNeeded;
-(unsigned long long)searchInVideoHomeI18NTier;
-(BOOL)_isAtLeastTier:(unsigned long long)arg1 ;
-(id)_videoHomeConfig;
-(BOOL)searchInVideoHomeEnabled;
-(NSString *)searchInVideoHomeNullstateSuggestionSource;
-(BOOL)searchInVideoHomeNullstateShowGraphSearchTab;
-(BOOL)searchInVideoHomeNullstateShowRecentSearches;
-(BOOL)searchInVideoHomeUseDarkStyle;
-(BOOL)searchInVideoHomeNullstateShowSuggestions;
-(BOOL)searchInVideoHomeShowVideoSERPResult;
-(BOOL)searchInVideoHomeTypeaheadShowGraphSearchTab;
-(BOOL)searchInVideoHomeTypeaheadShowVideoSERPEcho;
-(BOOL)searchInVideoHomeTypeaheadShowPPSEcho;
-(BOOL)searchInVideoHomeTypeaheadShowKeywordSuggestions;
-(BOOL)searchInVideoHomeTypeaheadShowEntitySuggestions;
-(BOOL)searchInVideoHomeVideoSerpShowChannelsTab;
-(NSDictionary *)searchInVideoHomeTierExperienceLoggingData;
-(id)savedDashboardInstantArticlePositionStoreManager;
-(id)savedDashboardNotificationStoreManager;
-(id)likeListenerAnnouncer;
-(id)forceTouchHandlerRegistry;
-(FBDelightsAttributedStringStylizer *)delightsAttributedStringStylizer;
-(FBDelightsKeyframesAnimationController *)delightsKeyframesAnimationController;
-(FBDelightsNYE2017FeatureGating *)delightsNYE2017FeatureGating;
-(FBDelightsEventHandler *)delightsEventHandler;
-(id)stickerImageConverter;
-(id)stickerResourceTypeConfigProvider;
-(id)stickerStoragePathManagerForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerPackPromoterForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerTrayConfigSyncCoordinatorForLayoutIdiom:(unsigned long long)arg1 ;
-(id)stickerUpdateServiceForLayoutIdiom:(unsigned long long)arg1 ;
-(id)_staticStickerCache;
-(id)_animatedStickerCache;
-(id)_stickerInMemoryCache;
-(id)starRatingsMediator;
-(id)soundConfiguringBlockRegistry;
-(FBReactionCoordinator *)reactionCoordinator;
-(id)reactiveSocketClient;
-(id)closeFriendsSessionID;
-(FBGametimeScoreUpdater *)gametimeScoreUpdater;
-(id)feedUDPPrimingManager;
-(void)castingExperience:(/*^block*/id)arg1 ;
-(void)casting360PhotoExperience:(/*^block*/id)arg1 ;
-(id)persistentKeyValueStoreForConfig:(id)arg1 ;
-(id)ntViewControllerCache;
-(id)classifierRegistry;
-(void)initiateExperimentDiskFetch;
-(BOOL)isExperimentManagerInitialized;
-(id)experimentDiskFetcher;
-(FBCurrentActorController *)currentActorController;
-(id)three60PhotoBatchAssetDownloader;
-(FBFeedUnitDebugInfoManager *)feedUnitDebugInfoManager;
-(id)accessTokenStore;
-(id)graphQLDynamicMutator;
-(id)graphQLMemResponseCache;
-(shared_ptr<facebook::graphql::GraphQLService>*)tigonGraphQLService;
-(id)graphQLStaticMutator;
-(id)scenePathAnnouncer;
-(id)graphQLConsistency;
-(id)graphQLServiceUserSessionHandle;
-(shared_ptr<facebook::graphql::GraphQLConsistency>*)graphStoreGraphQLConsistency;
-(id)imageDownloaderAdditionalImageFormats;
-(id)pluginValueForSelector:(SEL)arg1 ;
-(id)imageDownloaderWeakImageStorage;
-(FBImagePrefetchController *)imagePrefetchController;
-(BOOL)isDefaultViewerAPage;
-(id)pageAccountsStore;
-(id)DO_NOT_USE_OR_YOU_WILL_BE_FIREDvalueForKeyRequiresUser:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(void)setGraphStoreExpander:(shared_ptr<facebook::mobile::graphstore::FBAsyncMutationAwareGraphStore::Expander>*)arg1 ;
-(id)autoupdaterReactService;
-(id)httpExecutor;
-(id)httpUpperStackConfiguration;
-(void)enableStartupRequestGatingWithWhitelist:(id)arg1 ;
-(void)_onUserLoggedOut;
-(void)_onUserAuthenticated;
-(void)delayStartupServices;
-(id)diskStoreForName:(id)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
-(id)diskStoreForConfig:(id)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
-(shared_ptr<facebook::mobile::xplat::compactdisk::IosPrivacyGuard>*)privacyGuardForGroupIdentifier:(id)arg1 ;
-(shared_ptr<facebook::mobile::xplat::compactdisk::IosPrivacyGuard>*)privacyGuard;
-(id)pluginValueForSelector:(SEL)arg1 withDefaultValue:(/*^block*/id)arg2 ;
-(id)accessTokenManagerForFBID:(id)arg1 ;
-(id)generatedImageCache;
-(id)outboundClickCoordinator;
-(void)updateAccessToken:(id)arg1 ;
-(BOOL)didLogin;
-(id)_valueForKey:(id)arg1 requiresUser:(BOOL)arg2 withInitializer:(/*^block*/id)arg3 ;
-(/*^block*/id)_initializerForPluginValue:(SEL)arg1 ;
-(id)initializerDurations;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(id)valueForUndefinedKey:(id)arg1 ;
-(FBSoundController *)soundController;
-(id)service;
-(FBFontManager *)fontManager;
-(id)notificationCenter;
-(FBUserPreferences *)userPreferences;
-(void)setUserPreferences:(FBUserPreferences *)arg1 ;
-(BOOL)hasUser;
-(id)motionActivityManager;
@end

