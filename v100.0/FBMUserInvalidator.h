/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserInvalidating.h>

@protocol MNLegacySyncEngineManaging;
@class FBMUserStoreUserUpdateAnnouncingAdapter, FBMLoggedInUserInfoManager, FBMLoggedInUserFetcher, NSString;

@interface FBMUserInvalidator : NSObject <FBClassProvidable, MNUserInvalidating> {

	id<MNLegacySyncEngineManaging> _DEPRECATED_legacySyncEngineManager;
	FBMUserStoreUserUpdateAnnouncingAdapter* _userStoreUpdateAdapter;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMLoggedInUserFetcher* _loggedInUserFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)invalidateUsersWithIds:(id)arg1 ;
-(id)initWithLegacySyncEngineManager:(id)arg1 userStoreUpdateAdapter:(id)arg2 loggedInUserInfoManager:(id)arg3 loggedInUserFetcher:(id)arg4 ;
-(void)_updateLoggedInUserIfNecessary:(id)arg1 ;
@end

