/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, MNUserStore, MNRemoteRankedContactsFetchRequestController, FBAnalytics, FBMobileConfigContextManager, NSString;

@interface MNInviteListRemoteRankedContactsRetrieverInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNUserStore* _userStore;
	MNRemoteRankedContactsFetchRequestController* _remoteRankedContactsFetchRequestController;
	FBAnalytics* _analytics;
	FBMobileConfigContextManager* _configManager;

}

@property (nonatomic,readonly) MNUserStore * userStore;                                                                                //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) MNRemoteRankedContactsFetchRequestController * remoteRankedContactsFetchRequestController;              //@synthesize remoteRankedContactsFetchRequestController=_remoteRankedContactsFetchRequestController - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                                                //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                                           //@synthesize configManager=_configManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNUserStore *)userStore;
-(MNRemoteRankedContactsFetchRequestController *)remoteRankedContactsFetchRequestController;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
@end

