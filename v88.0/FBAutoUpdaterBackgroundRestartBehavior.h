/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoUpdaterAutomaticRestartBehavior.h>

@class UIApplication, NSNotificationCenter, FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer;

@interface FBAutoUpdaterBackgroundRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior> {

	UIApplication* _application;
	NSNotificationCenter* _notificationCenter;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;

}
-(id)initWithApplication:(id)arg1 notificationCenter:(id)arg2 ;
-(BOOL)autoUpdaterShouldAutomaticallyRestart;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(void)_beginObservingLifecycleNotifications;
-(void)_onBackground;
-(void)dealloc;
-(id)init;
@end
