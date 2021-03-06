/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPreferences;

@interface FBPrivacySettingPersister : NSObject {

	FBPreferences* _preferences;
	long long _cacheVersion;
	BOOL _useStickyBehavior;

}
-(id)loadAvailablePrivacySettings;
-(void)storeAvailablePrivacySettings:(id)arg1 ;
-(void)storeSelectedPrivacySetting:(id)arg1 ;
-(id)loadSelectedPrivacySetting;
-(void)clearPrivacySettingCache;
-(void)loadSelectedPrivacySettingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadAvailablePrivacySettingsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_cachedData;
-(void)_storeCacheData:(id)arg1 ;
-(id)initWithPreferences:(id)arg1 useStickyBehavior:(BOOL)arg2 cacheVersion:(long long)arg3 ;
@end

