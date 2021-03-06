/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageLocalNotificationZeroPayloadWakeupPushListening.h>
#import <Messenger/MNMessageLocalNotificationSchedulerListening.h>

@protocol FBClock, FBMQTTConnectivityChecking;
@class MNMessageLocalNotificationFallbackScheduler, FBAnalytics, FBMobileConfigContextManager, NSString;

@interface MNMessageLocalNotificationFallbackCoordinator : NSObject <MNMessageLocalNotificationZeroPayloadWakeupPushListening, MNMessageLocalNotificationSchedulerListening> {

	MNMessageLocalNotificationFallbackScheduler* _fallbackScheduler;
	FBAnalytics* _analytics;
	id<FBClock> _clock;
	id<FBMQTTConnectivityChecking> _mqttConnectivityChecker;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFallbackScheduler:(id)arg1 analytics:(id)arg2 clock:(id)arg3 mqttConnectivityChecker:(id)arg4 configManager:(id)arg5 ;
-(void)didReceiveZeroPayloadWakeupPush;
-(void)schedulerDidFinishProcessingZeroPayloadNotifications:(id)arg1 ;
@end

