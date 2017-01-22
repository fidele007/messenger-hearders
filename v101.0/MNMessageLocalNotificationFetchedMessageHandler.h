/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncSnapshotListening.h>
#import <Messenger/MNThreadMessageSubscribing.h>

@protocol OS_dispatch_queue;
@class MNMessageLocalNotificationMessageHandler, MNUserSettings, NSObject, NSMutableArray, NSString;

@interface MNMessageLocalNotificationFetchedMessageHandler : NSObject <MNMessagesSyncSnapshotListening, MNThreadMessageSubscribing> {

	MNMessageLocalNotificationMessageHandler* _messageHandler;
	MNUserSettings* _userSettings;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSnapshotInProgress;
	NSMutableArray* _messagesAwaitingHandling;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)messagesSyncWillPerformCriticalSnapshot;
-(void)messagesSyncDidCompleteCriticalSnapshot;
-(void)messagesSyncDidFailCriticalSnapshotWithError:(id)arg1 ;
-(void)messagesSyncDidCompleteNonCriticalSnapshot;
-(void)_flushMessagesForHandling;
-(void)_clearAwaitingMessages;
-(void)_awaitHandlingForMessages:(id)arg1 ;
-(id)initWithMessageLocalNotificationMessageHandler:(id)arg1 userSettings:(id)arg2 queue:(id)arg3 ;
@end
