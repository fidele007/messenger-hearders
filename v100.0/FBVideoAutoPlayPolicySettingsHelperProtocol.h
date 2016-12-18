/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoAutoPlayPolicySettingsHelperProtocol
@required
-(void)setDefaultAutoplaySettings;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(id)initWithSession:(id)arg1;

@end

