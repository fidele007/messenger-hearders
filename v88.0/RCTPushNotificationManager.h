/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>

@interface RCTPushNotificationManager : RCTEventEmitter {

	/*^block*/id _requestPermissionsResolveBlock;

}
+(id)moduleName;
+(void)didRegisterUserNotificationSettings:(id)arg1 ;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
+(void)didReceiveRemoteNotification:(id)arg1 ;
+(void)didReceiveLocalNotification:(id)arg1 ;
+(id)__rct_export__1810;
+(id)__rct_export__1891;
+(id)__rct_export__1962;
+(id)__rct_export__2353;
+(id)__rct_export__2404;
+(id)__rct_export__2555;
+(id)__rct_export__2606;
+(id)__rct_export__2657;
+(id)__rct_export__2708;
+(id)__rct_export__2929;
+(id)__rct_export__31010;
+(void)load;
-(id)supportedEvents;
-(id)methodQueue;
-(void)handleLocalNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationsRegistered:(id)arg1 ;
-(void)handleRegisterUserNotificationSettings:(id)arg1 ;
-(void)getApplicationIconBadgeNumber:(/*^block*/id)arg1 ;
-(void)requestPermissions:(id)arg1 resolver:(/*^block*/id)arg2 rejecter:(/*^block*/id)arg3 ;
-(void)abandonPermissions;
-(void)checkPermissions:(/*^block*/id)arg1 ;
-(void)presentLocalNotification:(id)arg1 ;
-(void)getInitialNotification:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)getScheduledLocalNotifications:(/*^block*/id)arg1 ;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(void)cancelAllLocalNotifications;
-(void)startObserving;
-(void)stopObserving;
-(void)cancelLocalNotifications:(id)arg1 ;
@end

