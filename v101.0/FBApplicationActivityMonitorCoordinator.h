/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBActivityMonitor, NSNotificationCenter, UIApplication;

@interface FBApplicationActivityMonitorCoordinator : NSObject {

	FBActivityMonitor* _activityMonitor;
	NSNotificationCenter* _notificationCenter;
	UIApplication* _application;
	BOOL _observed;

}
-(id)initWithActivityMonitor:(id)arg1 application:(id)arg2 ;
-(void)observeApplication;
-(id)initWithActivityMonitor:(id)arg1 application:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_applicationDidReceiveMemoryWarning;
-(void)_applicationBackgroundRefreshStatusDidChange;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(id)initWithActivityMonitor:(id)arg1 ;
@end

