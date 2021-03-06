/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNContactSearchStandardSourcesConfigurationBuilder : NSObject {

	BOOL _includeUsers;
	BOOL _includeGroups;
	BOOL _includePages;
	BOOL _includeVCEndpoints;
	BOOL _includeGames;
	BOOL _includeInternalBots;
	BOOL _includeSecureThreads;
	BOOL _includeAddressBookEntries;
	BOOL _includeNetworkResults;
	BOOL _includeLocalResults;

}
+(id)contactSearchStandardSourcesConfiguration;
+(id)contactSearchStandardSourcesConfigurationFromExistingContactSearchStandardSourcesConfiguration:(id)arg1 ;
-(id)withIncludeSecureThreads:(BOOL)arg1 ;
-(id)withIncludeVCEndpoints:(BOOL)arg1 ;
-(id)withIncludeInternalBots:(BOOL)arg1 ;
-(id)withIncludeGames:(BOOL)arg1 ;
-(id)withIncludeLocalResults:(BOOL)arg1 ;
-(id)withIncludeUsers:(BOOL)arg1 ;
-(id)withIncludeGroups:(BOOL)arg1 ;
-(id)withIncludePages:(BOOL)arg1 ;
-(id)withIncludeAddressBookEntries:(BOOL)arg1 ;
-(id)withIncludeNetworkResults:(BOOL)arg1 ;
-(id)build;
@end

