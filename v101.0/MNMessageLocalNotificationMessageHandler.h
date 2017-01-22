/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, OS_dispatch_queue;
@class MNMessageLocalNotificationDataPreparer, MNMessageLocalNotificationActionPolicy, MNMessageLocalNotificationScheduler, MNThreadSnippetGenerator, FBPushRegistrar, MNThreadParticipantNameFormatter, MNMessageRawSnippetFormatter, FBMobileConfigContextManager, MNUserSettings, NSObject;

@interface MNMessageLocalNotificationMessageHandler : NSObject {

	MNMessageLocalNotificationDataPreparer* _dataPreparer;
	MNMessageLocalNotificationActionPolicy* _actionPolicy;
	MNMessageLocalNotificationScheduler* _scheduler;
	MNThreadSnippetGenerator* _snippetGenerator;
	id<MNAuthenticationManager> _authenticationManager;
	FBPushRegistrar* _pushRegistrar;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNMessageRawSnippetFormatter* _rawSnippetFormatter;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	MNUserSettings* _userSettings;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_processPreparedData:(id)arg1 ;
-(id)_messageLocalNotificationsFromPreparedData:(id)arg1 ;
-(void)_recordLatestHandledMessageTimestampFromMessageLocalNotifications:(id)arg1 ;
-(id)initWithDataPreparer:(id)arg1 actionPolicy:(id)arg2 scheduler:(id)arg3 snippetGenerator:(id)arg4 authenticationManager:(id)arg5 pushRegistrar:(id)arg6 nameFormatter:(id)arg7 rawSnippetFormatter:(id)arg8 mobileConfigContextManager:(id)arg9 userSettings:(id)arg10 queue:(id)arg11 ;
-(void)handleMessages:(id)arg1 ;
@end
