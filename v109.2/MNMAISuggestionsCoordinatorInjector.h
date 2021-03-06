/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@protocol MNAuthenticationManager, MNModalPresentation;
@class FBProviderMapData, FBUserSession, FBMobileConfigContextManager, MNUserSettings, MNOmniMSettingsStore, MNMAISuggestionsHandler, MNMActionsService, MNOmniMSettingsViewController, FBBackgroundingAnnouncer, NSString;

@interface MNMAISuggestionsCoordinatorInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	id<MNAuthenticationManager> _authManager;
	MNUserSettings* _userSettings;
	MNOmniMSettingsStore* _omniMSettingsStore;
	MNMAISuggestionsHandler* _suggestionsHandler;
	MNMActionsService* _actionsService;
	id<MNModalPresentation> _modalPresenter;
	MNOmniMSettingsViewController* _settingsViewController;
	FBBackgroundingAnnouncer* _backgroundingAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                        //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authManager;                             //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                       //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,readonly) MNOmniMSettingsStore * omniMSettingsStore;                           //@synthesize omniMSettingsStore=_omniMSettingsStore - In the implementation block
@property (nonatomic,readonly) MNMAISuggestionsHandler * suggestionsHandler;                        //@synthesize suggestionsHandler=_suggestionsHandler - In the implementation block
@property (nonatomic,readonly) MNMActionsService * actionsService;                                  //@synthesize actionsService=_actionsService - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                              //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNOmniMSettingsViewController * settingsViewController;              //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,readonly) FBBackgroundingAnnouncer * backgroundingAnnouncer;                   //@synthesize backgroundingAnnouncer=_backgroundingAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNOmniMSettingsStore *)omniMSettingsStore;
-(MNMAISuggestionsHandler *)suggestionsHandler;
-(MNMActionsService *)actionsService;
-(FBBackgroundingAnnouncer *)backgroundingAnnouncer;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(id<MNAuthenticationManager>)authManager;
-(FBUserSession *)session;
-(MNUserSettings *)userSettings;
-(MNOmniMSettingsViewController *)settingsViewController;
@end

