/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>

@class UIApplication;

@interface FBCLApplicationEventSource : FBCLEventSource {

	BOOL _started;
	UIApplication* _application;

}
-(void)_applicationDidEnterBackgroundNotification;
-(id)initWithEventChannel:(id)arg1 ;
-(id)initWithEventChannel:(id)arg1 application:(id)arg2 ;
-(void)_applicationWillTerminateNotification;
-(void)_applicationWillEnterForegroundNotificationIdle;
-(void)_triggerDebugNotification;
-(void)_applicationWillEnterForegroundNotification;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

