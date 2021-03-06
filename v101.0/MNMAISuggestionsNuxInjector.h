/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMobileConfigContextManager, MNUserSettings, MNMActionsService, MNOmniMNuxDataFetcher, FBMThreadKey;

@interface MNMAISuggestionsNuxInjector : NSObject {

	FBMobileConfigContextManager* _configManager;
	MNUserSettings* _userSettings;
	MNMActionsService* _actionService;
	MNOmniMNuxDataFetcher* _nuxDataFetcher;
	BOOL _needsShowNux;
	FBMThreadKey* _lastUsedThreadKey;

}
-(id)initWithMobileConfigContextManager:(id)arg1 userSettings:(id)arg2 actionService:(id)arg3 session:(id)arg4 ;
-(void)markSuggestionNuxCompleted:(id)arg1 ;
-(id)actionsByAddingNuxIfNeeded:(id)arg1 threadKey:(id)arg2 ;
@end

