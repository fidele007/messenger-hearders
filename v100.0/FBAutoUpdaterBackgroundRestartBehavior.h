/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

