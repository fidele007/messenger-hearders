/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, MNLocalNotificationController, MNBusinessWifiNotificationExperimentContext, MNUserStore, MNBusinessWifiUserFetcher;

@interface MNBusinessWifiNotificationPusher : NSObject {

	FBUserSession* _session;
	MNLocalNotificationController* _notificationController;
	MNBusinessWifiNotificationExperimentContext* _experimentContext;
	MNUserStore* _userStore;
	MNBusinessWifiUserFetcher* _userFetcher;

}
-(id)initWithSession:(id)arg1 userStore:(id)arg2 ;
-(BOOL)_shouldPostNotificationForWifiEntryAtBusiness:(id)arg1 ;
-(void)_postLocalNotificationForBusiness:(id)arg1 toUserWithName:(id)arg2 ;
-(id)_notificationForBusiness:(id)arg1 forUserWithName:(id)arg2 ;
-(id)_notificationNameForBusinessType:(long long)arg1 ;
-(void)_didPostNotificationForBusiness:(id)arg1 ;
-(id)_notificationMessageForUserWithName:(id)arg1 ;
-(void)_initExperimentContextIfNecessary;
-(id)_lastNotificationPostDateForBusiness:(id)arg1 ;
-(void)_saveNotificationPostDateForBusiness:(id)arg1 ;
-(void)postLocalNotificationForBusinessIfApplicable:(id)arg1 ;
@end
