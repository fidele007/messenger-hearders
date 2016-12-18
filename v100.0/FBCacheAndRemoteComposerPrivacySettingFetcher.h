/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPreferencesPrivacySettingPersister, FBUserSession;

@interface FBCacheAndRemoteComposerPrivacySettingFetcher : NSObject {

	FBPreferencesPrivacySettingPersister* _privacySettingPersister;
	FBUserSession* _userSession;

}
+(id)privacySettingsHelper;
+(BOOL)userObeysDefaultPrivacyModel:(id)arg1 ;
+(void)setPrivacySettingsHelper:(id)arg1 ;
+(BOOL)isCustomPrivacySettingsSupported;
+(void)updateLocalHasDefaultPrivacy:(BOOL)arg1 forSession:(id)arg2 ;
-(void)updateStickyCachePrivacySetting:(id)arg1 updateDefaultCachePrivacySetting:(BOOL)arg2 ;
-(void)clearPrivacySettingCache;
-(void)_remoteFetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)_remoteFetchCurrentlySelectedPrivacySettingWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(id)cachedDefaultPrivacySetting_DO_NOT_USE_UNLESS_ABSOLUTELY_NECESSARY;
-(id)initWithUserSession:(id)arg1 privacySettingPersister:(id)arg2 ;
-(void)updateCachedAndServerStickyPrivacySetting:(id)arg1 updateCachedAndServerDefaultPrivacySetting:(BOOL)arg2 ;
-(void)updatePrivacySettingsCache;
-(void)fetchCurrentlySelectedComposerPrivacySettingWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)fetchPrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)cachedPrivacySettings:(out id*)arg1 selectedPrivacySetting:(out id*)arg2 ;
@end

