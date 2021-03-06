/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class FBOmnistore, FBMobileConfigContextManager, FBOmnistoreCollection, FBNuxConfigurationProfile, FBNuxCatalogUpdater, NSDate, FBUserPreferences;

@interface MNOmnistoreNuxStore : NSObject {

	FBOmnistore* _omnistore;
	FBMobileConfigContextManager* _configManager;
	FBOmnistoreCollection* _userCollection;
	id<MNAuthenticationManager> _authManager;
	FBNuxConfigurationProfile* _nuxConfigurationProfile;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSDate* _lastFetchDeltaDate;
	FBUserPreferences* _userPreferences;

}
-(id)initWithAuthManager:(id)arg1 userPreferences:(id)arg2 configManager:(id)arg3 omnistore:(id)arg4 nuxConfigurationProfile:(id)arg5 nuxCatalogUpdater:(id)arg6 ;
-(void)forceUpdateEligibility;
-(id)fetchAllNuxesDictionary;
-(id)lastFetchDeltaDate;
-(void)_processDeltaReceivedCallback:(id)arg1 ;
-(id)_fetchAllNuxes;
-(id)_getFBOmnistoreNuxCollectionName;
-(id)_subscribeToCollection;
-(void)start;
@end

