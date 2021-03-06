/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppUserSetupListening.h>

@class NSNotificationCenter, MNLocalNotificationController, NSString;

@interface MNUserSetUpFlowReminderController : NSObject <FBViewerContextClassProvidable, FBMAppUserSetupListening> {

	NSNotificationCenter* _notificationCenter;
	BOOL _isUserSetUpActive;
	MNLocalNotificationController* _localNotificationController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_scheduleReminder;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(void)applicationDidCompleteSetupFlow;
-(void)_stopObservering;
-(id)initWithNotificationCenter:(id)arg1 localNotificationController:(id)arg2 ;
-(void)_deleteScheduledReminderIfNecessary;
-(void)_onApplicationDidBecomeActive;
-(void)_onApplicationDidEnterBackgroundNotification;
-(void)dealloc;
-(void)_startObserving;
@end

