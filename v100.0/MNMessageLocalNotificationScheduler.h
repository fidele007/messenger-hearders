/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLocalNotificationBuzzHistoryRecording, FBClock, OS_dispatch_queue;
@class MNLocalNotificationController, MNMessageLocalNotificationSharedHistoryCache, MNMessageLocalNotificationSchedulerLogger, MNMessageLocalNotificationSchedulerListeningAnnouncer, NSObject;

@interface MNMessageLocalNotificationScheduler : NSObject {

	id<MNMessageLocalNotificationBuzzHistoryRecording> _buzzHistoryRecorder;
	MNLocalNotificationController* _localNotificationController;
	MNMessageLocalNotificationSharedHistoryCache* _sharedHistoryCache;
	MNMessageLocalNotificationSchedulerLogger* _logger;
	MNMessageLocalNotificationSchedulerListeningAnnouncer* _announcer;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_scheduleNotificationRequestsOnMainThread:(id)arg1 ;
-(void)_scheduleLocalNotificationsOnMainThread:(id)arg1 ;
-(void)_recordBuzzHistoryWithMessageLocalNotifications:(id)arg1 ;
-(void)_logScheduledMessageLocalNotifications:(id)arg1 ;
-(id)initWithBuzzHistoryRecorder:(id)arg1 localNotificationController:(id)arg2 sharedHistoryCache:(id)arg3 logger:(id)arg4 clock:(id)arg5 announcer:(id)arg6 queue:(id)arg7 ;
-(void)scheduleMessageLocalNotificationsForDisplay:(id)arg1 shouldSupportContextExtension:(BOOL)arg2 ;
@end
