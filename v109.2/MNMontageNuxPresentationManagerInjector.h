/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, MNMontageNavigationCoordinator, MNInboxService, FBMobileConfigContextManager, MNUserSettings, NSString;

@interface MNMontageNuxPresentationManagerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNMontageNavigationCoordinator* _montageNavigationCoordinator;
	MNInboxService* _inboxService;
	FBMobileConfigContextManager* _configManager;
	MNUserSettings* _userSettings;

}

@property (nonatomic,readonly) MNMontageNavigationCoordinator * montageNavigationCoordinator;              //@synthesize montageNavigationCoordinator=_montageNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNInboxService * inboxService;                                              //@synthesize inboxService=_inboxService - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                               //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                              //@synthesize userSettings=_userSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNInboxService *)inboxService;
-(FBMobileConfigContextManager *)configManager;
-(MNMontageNavigationCoordinator *)montageNavigationCoordinator;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNUserSettings *)userSettings;
@end

