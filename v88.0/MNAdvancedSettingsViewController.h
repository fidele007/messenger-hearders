/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBTweakViewControllerDelegate.h>
#import <Messenger/FBAlertViewCreating.h>
#import <Messenger/FBDiagnosticsManagerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNAuthenticationManager, MNThreadMessageCaching;
@class MNBadgeCountUpdateService, FBUserSession, ZRApplicationState, ZRTokenUpdater, ZRTokenRefreshCoordinator, MNUserSettings, MNUserSetUpStatePersister, FBMSPDataStore, FBMSPErrorRetryManager, FBMessagingStore, MNRegistrationExperimentOverrides, FBDiagnosticsDownloader, FBMMQTTManager, FBUpdater, FBContactStore, MNContactSyncPolicy, MNUserProvider, MNFetchedThreadKeyTracker, MNThreadUpdateService, FBMemoryProfiler, MNZRBannerDismissalManager, MNSecureMessagingServiceProvider, MNInboxService, MNInboxFetchConfigFactory, FBMNetworkMonitorController, MNEmojiOmnistore, FBProvider, FBNetworkerMonitor, UIAlertView, UIAlertController, UIActivityIndicatorView, UITableView, NSString;

@interface MNAdvancedSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, FBTweakViewControllerDelegate, FBAlertViewCreating, FBDiagnosticsManagerDelegate, FBClassProvidable> {

	MNBadgeCountUpdateService* _badgeService;
	FBUserSession* _session;
	ZRApplicationState* _zeroRatingState;
	ZRTokenUpdater* _zeroTokenUpdater;
	ZRTokenRefreshCoordinator* _zeroTokenRefreshCoordinator;
	MNUserSettings* _userSettings;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	FBMSPDataStore* _spDataStore;
	FBMSPErrorRetryManager* _spErrorRetryManager;
	FBMessagingStore* _messagingStore;
	id<FBProvider> _groupsSettingsVCProvider;
	MNRegistrationExperimentOverrides* _registrationExperimentOverrides;
	FBDiagnosticsDownloader* _downloader;
	FBMMQTTManager* _mqttManager;
	FBUpdater* _updater;
	FBContactStore* _contactStore;
	MNContactSyncPolicy* _contactSyncPolicy;
	id<MNAuthenticationManager> _authManager;
	MNUserProvider* _userProvider;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	id<MNThreadMessageCaching> _threadMessageCache;
	MNThreadUpdateService* _threadUpdateService;
	FBMemoryProfiler* _memoryProfiler;
	MNZRBannerDismissalManager* _zeroRatingBannerDismissalManager;
	id<FBProvider> _spSettingsViewControllerProvider;
	MNSecureMessagingServiceProvider* _secureMessagingServiceProvider;
	MNInboxService* _inboxService;
	MNInboxFetchConfigFactory* _inboxFetchConfigFactory;
	FBMNetworkMonitorController* _networkMonitorController;
	MNEmojiOmnistore* _emojiOmnistore;
	id<FBProvider> _simpleSearchViewControllerProvider;
	FBProvider* _loomServiceProvider;
	FBNetworkerMonitor* _networkerMonitor;
	UIAlertView* _profileAlertView;
	UIAlertView* _clearCacheAlertView;
	UIAlertView* _crashNowAlertView;
	UIAlertView* _resnapshotAlertView;
	UIAlertController* _loomAlertController;
	UIActivityIndicatorView* _powerUploadActivityIndicator;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 zeroTokenUpdater:(id)arg2 zeroTokenRefreshCoordinator:(id)arg3 userSettings:(id)arg4 userSetUpStatePersister:(id)arg5 session:(id)arg6 spDataStore:(id)arg7 spErrorRetryManager:(id)arg8 memoryProfiler:(id)arg9 messagingStore:(id)arg10 groupsSettingsVCProvider:(id)arg11 mqttManager:(id)arg12 updater:(id)arg13 contactStore:(id)arg14 contactSyncPolicy:(id)arg15 authManager:(id)arg16 userProvider:(id)arg17 fetchedThreadKeyTracker:(id)arg18 threadMessageCache:(id)arg19 threadUpdateService:(id)arg20 networkMonitorController:(id)arg21 zeroRatingBannerDismissalManager:(id)arg22 spSettingsViewControllerProvider:(id)arg23 secureMessagingServiceProvider:(id)arg24 badgeService:(id)arg25 inboxService:(id)arg26 inboxFetchConfigFactory:(id)arg27 emojiOmnistore:(id)arg28 networkerMonitor:(id)arg29 simpleSearchViewControllerProvider:(id)arg30 loomServiceProvider:(id)arg31 ;
-(void)_setUpNotificationObserver;
-(void)zeroRatingStatusChanged:(id)arg1 ;
-(id)_lastExceptionURL;
-(void)_memoryProfilerSwitch:(id)arg1 ;
-(void)_userDidSwitchForceMessengerRegistration:(id)arg1 ;
-(void)_userDidSwitchForceAuthenticationOptions:(id)arg1 ;
-(id)_configureLoginWithFacebookStyleOverrideSwitchWithTableViewCell:(id)arg1 override:(BOOL)arg2 ;
-(void)_userDidSwitchShouldShowSignInWithFacebookButtonWithIcon:(id)arg1 ;
-(void)_userDidSwitchLoginWithFacebookShowContinueWithPhoneNumberButton:(id)arg1 ;
-(void)_userDidSwitchLoginWithFacebookDisableAutoFocusUsernameField:(id)arg1 ;
-(void)_userDidSwitchLoginWithFacebookShowDescriptionTextForRegistration:(id)arg1 ;
-(void)userDidSwitchPerformanceMonitor:(id)arg1 ;
-(void)userDidSwitchTigonDebugMonitor:(id)arg1 ;
-(void)userDidSwitchAnalyticsEnabled:(id)arg1 ;
-(void)userDidSwitchWifiZeroRating:(id)arg1 ;
-(id)alertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)_clearZeroRatingBannerSetting;
-(void)_corruptThreads;
-(void)_crashNow;
-(void)clearActivityIndicator;
-(void)tweakViewControllerPressedDone:(id)arg1 ;
-(void)diagnosticsManagerDidCompleteUploadOfPowerLogs;
-(void)diagnosticsManagerFailedUploadOfPowerLogs;
-(void)userDidSwitchNetworkMonitor:(id)arg1 ;
-(id)analyticsModule;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

