/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplication, NSUserDefaults, NSString;

@interface MNMessageLocalNotificationFallbackScheduler : NSObject {

	UIApplication* _application;
	NSUserDefaults* _userDefaults;
	NSString* _identifier;

}
-(id)initWithApplication:(id)arg1 userDefaults:(id)arg2 identifier:(id)arg3 ;
-(BOOL)cancelAllFallbackNotifications;
-(void)scheduleFallbackNotificationWithAlertBody:(id)arg1 date:(id)arg2 timeZone:(id)arg3 sound:(BOOL)arg4 ;
-(void)_cancelLocalNotifications:(id)arg1 ;
-(void)_scheduleLocalNotification:(id)arg1 ;
@end

