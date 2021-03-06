/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayPolicySettingsHelperProtocol.h>

@class FBUserSession;

@interface FBVideoAutoPlayPolicyLocalSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol> {

	FBUserSession* _session;
	BOOL _defaultsRegistered;
	long long _defaultAutoplaySetting;

}
-(void)setDefaultAutoplaySettings;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)getGatekeeperDefaultAutoplaySetting;
-(void)setDefaultAutoplaySettings:(long long)arg1 ;
-(void)setSmartAutoplayLocalCache:(BOOL)arg1 autoplaySetting:(long long)arg2 postLocalCacheUpdateCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(void)setAutoplaySettingLocalCache:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 ;
-(void)_setPreviousAutoplaySettingLocalCache:(long long)arg1 ;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(void)cancelServerSettingUpdateIfInProgress;
-(BOOL)localCacheHasSettings;
-(BOOL)localCacheHasDefaultAutoplaySetting;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(id)initWithSession:(id)arg1 ;
@end

