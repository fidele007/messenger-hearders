/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBNotificationsJewelExperimentContext : FBExperimentContext {

	BOOL _inlineActionDisableLegacyUpdateMap;
	BOOL _inlineActionSupportSettingsOptionRow;
	BOOL _inlineActionSupportReadnessOptionRows;
	BOOL _inlineActionSupportOptionSets;
	BOOL _inlineActionSupportNewNUX;
	BOOL _shouldShowSearchBar;
	BOOL _shouldUseFBNotificationText;
	BOOL _useFixedReadnessManager;
	BOOL _useInMemoryReadStateCache;
	BOOL _isBackgroundFetchingEnabled;
	BOOL _isStoryPrefetchingEnabled;
	BOOL _isNotificationListRefreshingEnabled;
	BOOL _connectionControllerUseFetchLessExperiment;
	BOOL _componentsScrollRestorationEnabled;
	BOOL _componentsSuspensionEnabled;
	BOOL _shouldUseOptimizedDiffAlgorithm;
	BOOL _richNotificationsDarkToggleFont;
	BOOL _preloadViewControllerInModuleInit;
	BOOL _prefetchViewControllerAfterStartup;
	BOOL _doNotWaitForIdleWhenForegroundingForNotifications;
	BOOL _enableCollectionView;
	BOOL _collectionViewShouldUseTransactionalDataSource;
	BOOL _enableNativeSettingsFromNavigationBar;
	BOOL _enableFIGStandardContentComponent;
	BOOL _enableNewAPI;
	BOOL _refreshPermalinkOnClick;
	BOOL _unifyPrefetchManager;
	BOOL _enableListKit;
	BOOL _usePillInListKit;
	NSString* _inlineActionTypeString;
	long long _inlineActionMaxSwipeNUXAnimations;
	NSString* _inlineActionDrawerAnimationStyleString;
	NSString* _inlineActionConfirmationStyleString;
	double _inlineActionConfirmationDuration;
	long long _inlineActionNUXPresentationLimit;
	long long _inlineActionNUXPresentationMaximumTimeInterval;
	NSString* _inlineActionNUXContentString;
	NSString* _inlineActionNUXContentStringBoldEntitySubstringsCSV;
	NSString* _inlineActionNUXTimestampString;
	NSString* _iconDisplayStyleString;
	NSString* _timestampDisplayStyleString;
	double _tailLoadTriggerBuffer;
	double _deltaSyncInterval;
	double _maxPTRDeltaInterval;
	long long _maxWakeUpsPerBackground;
	NSString* _wakeUpIntervalString;
	double _backgroundFetchInterval;
	double _minBackgroundFetchInterval;
	double _maxBackgroundFetchInterval;
	double _backgroundFetchIntervalStep;
	long long _secondsBeforeStaleness;
	long long _connectionControllerNotificationsToFetch;
	long long _connectionControllerNotificationsToPersist;
	double _FIGContentComponentProfilePicSize;
	double _FIGContentComponentTopPadding;
	double _FIGContentComponentBottomPadding;

}

@property (nonatomic,copy,readonly) NSString * inlineActionTypeString;                                           //@synthesize inlineActionTypeString=_inlineActionTypeString - In the implementation block
@property (nonatomic,readonly) long long inlineActionMaxSwipeNUXAnimations;                                      //@synthesize inlineActionMaxSwipeNUXAnimations=_inlineActionMaxSwipeNUXAnimations - In the implementation block
@property (nonatomic,readonly) BOOL inlineActionDisableLegacyUpdateMap;                                          //@synthesize inlineActionDisableLegacyUpdateMap=_inlineActionDisableLegacyUpdateMap - In the implementation block
@property (nonatomic,readonly) BOOL inlineActionSupportSettingsOptionRow;                                        //@synthesize inlineActionSupportSettingsOptionRow=_inlineActionSupportSettingsOptionRow - In the implementation block
@property (nonatomic,readonly) BOOL inlineActionSupportReadnessOptionRows;                                       //@synthesize inlineActionSupportReadnessOptionRows=_inlineActionSupportReadnessOptionRows - In the implementation block
@property (nonatomic,readonly) BOOL inlineActionSupportOptionSets;                                               //@synthesize inlineActionSupportOptionSets=_inlineActionSupportOptionSets - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlineActionDrawerAnimationStyleString;                           //@synthesize inlineActionDrawerAnimationStyleString=_inlineActionDrawerAnimationStyleString - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlineActionConfirmationStyleString;                              //@synthesize inlineActionConfirmationStyleString=_inlineActionConfirmationStyleString - In the implementation block
@property (nonatomic,readonly) double inlineActionConfirmationDuration;                                          //@synthesize inlineActionConfirmationDuration=_inlineActionConfirmationDuration - In the implementation block
@property (nonatomic,readonly) BOOL inlineActionSupportNewNUX;                                                   //@synthesize inlineActionSupportNewNUX=_inlineActionSupportNewNUX - In the implementation block
@property (nonatomic,readonly) long long inlineActionNUXPresentationLimit;                                       //@synthesize inlineActionNUXPresentationLimit=_inlineActionNUXPresentationLimit - In the implementation block
@property (nonatomic,readonly) long long inlineActionNUXPresentationMaximumTimeInterval;                         //@synthesize inlineActionNUXPresentationMaximumTimeInterval=_inlineActionNUXPresentationMaximumTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlineActionNUXContentString;                                     //@synthesize inlineActionNUXContentString=_inlineActionNUXContentString - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlineActionNUXContentStringBoldEntitySubstringsCSV;              //@synthesize inlineActionNUXContentStringBoldEntitySubstringsCSV=_inlineActionNUXContentStringBoldEntitySubstringsCSV - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlineActionNUXTimestampString;                                   //@synthesize inlineActionNUXTimestampString=_inlineActionNUXTimestampString - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconDisplayStyleString;                                           //@synthesize iconDisplayStyleString=_iconDisplayStyleString - In the implementation block
@property (nonatomic,copy,readonly) NSString * timestampDisplayStyleString;                                      //@synthesize timestampDisplayStyleString=_timestampDisplayStyleString - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSearchBar;                                                         //@synthesize shouldShowSearchBar=_shouldShowSearchBar - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseFBNotificationText;                                                 //@synthesize shouldUseFBNotificationText=_shouldUseFBNotificationText - In the implementation block
@property (nonatomic,readonly) double tailLoadTriggerBuffer;                                                     //@synthesize tailLoadTriggerBuffer=_tailLoadTriggerBuffer - In the implementation block
@property (nonatomic,readonly) BOOL useFixedReadnessManager;                                                     //@synthesize useFixedReadnessManager=_useFixedReadnessManager - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryReadStateCache;                                                   //@synthesize useInMemoryReadStateCache=_useInMemoryReadStateCache - In the implementation block
@property (nonatomic,readonly) double deltaSyncInterval;                                                         //@synthesize deltaSyncInterval=_deltaSyncInterval - In the implementation block
@property (nonatomic,readonly) double maxPTRDeltaInterval;                                                       //@synthesize maxPTRDeltaInterval=_maxPTRDeltaInterval - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundFetchingEnabled;                                                 //@synthesize isBackgroundFetchingEnabled=_isBackgroundFetchingEnabled - In the implementation block
@property (nonatomic,readonly) long long maxWakeUpsPerBackground;                                                //@synthesize maxWakeUpsPerBackground=_maxWakeUpsPerBackground - In the implementation block
@property (nonatomic,copy,readonly) NSString * wakeUpIntervalString;                                             //@synthesize wakeUpIntervalString=_wakeUpIntervalString - In the implementation block
@property (nonatomic,readonly) double backgroundFetchInterval;                                                   //@synthesize backgroundFetchInterval=_backgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) double minBackgroundFetchInterval;                                                //@synthesize minBackgroundFetchInterval=_minBackgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) double maxBackgroundFetchInterval;                                                //@synthesize maxBackgroundFetchInterval=_maxBackgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) double backgroundFetchIntervalStep;                                               //@synthesize backgroundFetchIntervalStep=_backgroundFetchIntervalStep - In the implementation block
@property (nonatomic,readonly) BOOL isStoryPrefetchingEnabled;                                                   //@synthesize isStoryPrefetchingEnabled=_isStoryPrefetchingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isNotificationListRefreshingEnabled;                                         //@synthesize isNotificationListRefreshingEnabled=_isNotificationListRefreshingEnabled - In the implementation block
@property (nonatomic,readonly) long long secondsBeforeStaleness;                                                 //@synthesize secondsBeforeStaleness=_secondsBeforeStaleness - In the implementation block
@property (nonatomic,readonly) long long connectionControllerNotificationsToFetch;                               //@synthesize connectionControllerNotificationsToFetch=_connectionControllerNotificationsToFetch - In the implementation block
@property (nonatomic,readonly) long long connectionControllerNotificationsToPersist;                             //@synthesize connectionControllerNotificationsToPersist=_connectionControllerNotificationsToPersist - In the implementation block
@property (nonatomic,readonly) BOOL connectionControllerUseFetchLessExperiment;                                  //@synthesize connectionControllerUseFetchLessExperiment=_connectionControllerUseFetchLessExperiment - In the implementation block
@property (nonatomic,readonly) BOOL componentsScrollRestorationEnabled;                                          //@synthesize componentsScrollRestorationEnabled=_componentsScrollRestorationEnabled - In the implementation block
@property (nonatomic,readonly) BOOL componentsSuspensionEnabled;                                                 //@synthesize componentsSuspensionEnabled=_componentsSuspensionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseOptimizedDiffAlgorithm;                                             //@synthesize shouldUseOptimizedDiffAlgorithm=_shouldUseOptimizedDiffAlgorithm - In the implementation block
@property (nonatomic,readonly) BOOL richNotificationsDarkToggleFont;                                             //@synthesize richNotificationsDarkToggleFont=_richNotificationsDarkToggleFont - In the implementation block
@property (nonatomic,readonly) BOOL preloadViewControllerInModuleInit;                                           //@synthesize preloadViewControllerInModuleInit=_preloadViewControllerInModuleInit - In the implementation block
@property (nonatomic,readonly) BOOL prefetchViewControllerAfterStartup;                                          //@synthesize prefetchViewControllerAfterStartup=_prefetchViewControllerAfterStartup - In the implementation block
@property (nonatomic,readonly) BOOL doNotWaitForIdleWhenForegroundingForNotifications;                           //@synthesize doNotWaitForIdleWhenForegroundingForNotifications=_doNotWaitForIdleWhenForegroundingForNotifications - In the implementation block
@property (nonatomic,readonly) BOOL enableCollectionView;                                                        //@synthesize enableCollectionView=_enableCollectionView - In the implementation block
@property (nonatomic,readonly) BOOL collectionViewShouldUseTransactionalDataSource;                              //@synthesize collectionViewShouldUseTransactionalDataSource=_collectionViewShouldUseTransactionalDataSource - In the implementation block
@property (nonatomic,readonly) BOOL enableNativeSettingsFromNavigationBar;                                       //@synthesize enableNativeSettingsFromNavigationBar=_enableNativeSettingsFromNavigationBar - In the implementation block
@property (nonatomic,readonly) BOOL enableFIGStandardContentComponent;                                           //@synthesize enableFIGStandardContentComponent=_enableFIGStandardContentComponent - In the implementation block
@property (nonatomic,readonly) double FIGContentComponentProfilePicSize;                                         //@synthesize FIGContentComponentProfilePicSize=_FIGContentComponentProfilePicSize - In the implementation block
@property (nonatomic,readonly) double FIGContentComponentTopPadding;                                             //@synthesize FIGContentComponentTopPadding=_FIGContentComponentTopPadding - In the implementation block
@property (nonatomic,readonly) double FIGContentComponentBottomPadding;                                          //@synthesize FIGContentComponentBottomPadding=_FIGContentComponentBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL enableNewAPI;                                                                //@synthesize enableNewAPI=_enableNewAPI - In the implementation block
@property (nonatomic,readonly) BOOL refreshPermalinkOnClick;                                                     //@synthesize refreshPermalinkOnClick=_refreshPermalinkOnClick - In the implementation block
@property (nonatomic,readonly) BOOL unifyPrefetchManager;                                                        //@synthesize unifyPrefetchManager=_unifyPrefetchManager - In the implementation block
@property (nonatomic,readonly) BOOL enableListKit;                                                               //@synthesize enableListKit=_enableListKit - In the implementation block
@property (nonatomic,readonly) BOOL usePillInListKit;                                                            //@synthesize usePillInListKit=_usePillInListKit - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldShowSearchBar;
-(BOOL)doNotWaitForIdleWhenForegroundingForNotifications;
-(unsigned long long)inlineActionType;
-(unsigned long long)inlineActionDrawerAnimationStyle;
-(unsigned long long)inlineActionConfirmationStyle;
-(id)inlineActionNUXContentStringBoldEntitySubstrings;
-(unsigned long long)iconDisplayStyle;
-(unsigned long long)timestampDisplayStyle;
-(double)wakeUpInterval;
-(NSString *)inlineActionTypeString;
-(long long)inlineActionMaxSwipeNUXAnimations;
-(BOOL)inlineActionDisableLegacyUpdateMap;
-(BOOL)inlineActionSupportSettingsOptionRow;
-(BOOL)inlineActionSupportReadnessOptionRows;
-(BOOL)inlineActionSupportOptionSets;
-(NSString *)inlineActionDrawerAnimationStyleString;
-(NSString *)inlineActionConfirmationStyleString;
-(double)inlineActionConfirmationDuration;
-(BOOL)inlineActionSupportNewNUX;
-(long long)inlineActionNUXPresentationLimit;
-(long long)inlineActionNUXPresentationMaximumTimeInterval;
-(NSString *)inlineActionNUXContentString;
-(NSString *)inlineActionNUXContentStringBoldEntitySubstringsCSV;
-(NSString *)inlineActionNUXTimestampString;
-(NSString *)iconDisplayStyleString;
-(NSString *)timestampDisplayStyleString;
-(BOOL)shouldUseFBNotificationText;
-(BOOL)useFixedReadnessManager;
-(BOOL)useInMemoryReadStateCache;
-(double)deltaSyncInterval;
-(double)maxPTRDeltaInterval;
-(BOOL)isBackgroundFetchingEnabled;
-(long long)maxWakeUpsPerBackground;
-(NSString *)wakeUpIntervalString;
-(double)backgroundFetchInterval;
-(double)minBackgroundFetchInterval;
-(double)maxBackgroundFetchInterval;
-(double)backgroundFetchIntervalStep;
-(BOOL)isStoryPrefetchingEnabled;
-(BOOL)isNotificationListRefreshingEnabled;
-(long long)secondsBeforeStaleness;
-(long long)connectionControllerNotificationsToFetch;
-(long long)connectionControllerNotificationsToPersist;
-(BOOL)connectionControllerUseFetchLessExperiment;
-(BOOL)componentsScrollRestorationEnabled;
-(BOOL)componentsSuspensionEnabled;
-(BOOL)shouldUseOptimizedDiffAlgorithm;
-(BOOL)richNotificationsDarkToggleFont;
-(BOOL)preloadViewControllerInModuleInit;
-(BOOL)prefetchViewControllerAfterStartup;
-(BOOL)enableCollectionView;
-(BOOL)collectionViewShouldUseTransactionalDataSource;
-(BOOL)enableNativeSettingsFromNavigationBar;
-(BOOL)enableFIGStandardContentComponent;
-(double)FIGContentComponentProfilePicSize;
-(double)FIGContentComponentTopPadding;
-(double)FIGContentComponentBottomPadding;
-(BOOL)enableNewAPI;
-(BOOL)refreshPermalinkOnClick;
-(BOOL)unifyPrefetchManager;
-(BOOL)enableListKit;
-(BOOL)usePillInListKit;
-(double)tailLoadTriggerBuffer;
@end

