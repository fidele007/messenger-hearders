/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendQueueMutating.h>
#import <Messenger/MNMessageSendStateMachineListening.h>
#import <Messenger/MNMessageSendScheduling.h>
#import <Messenger/MNMessageSendQueueRestorationListening.h>
#import <Messenger/MNMessageSendClientTriggeredThreadDeletionListening.h>

@protocol MNMessageSendConfigurationFactory, MNMessageSendTimestampGenerating, MNMessageSendSchedulerListening, FBClock, OS_dispatch_queue, MNMessageSendStateMachineListening;
@class MNMessageSendRequestCoordinator, MNMessageSendStateStore, MNMessageSendQueueStore, NSObject, MNMessageSendCleaner, MNMessageSendStateMachineListeningAnnouncer, MNMessageSendQueueDiskHandler, NSString;

@interface MNMessageSendScheduler : NSObject <MNMessageSendQueueMutating, MNMessageSendStateMachineListening, MNMessageSendScheduling, MNMessageSendQueueRestorationListening, MNMessageSendClientTriggeredThreadDeletionListening> {

	MNMessageSendRequestCoordinator* _sendRequestCoordinator;
	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;
	id<MNMessageSendConfigurationFactory> _sendConfigurationFactory;
	id<MNMessageSendTimestampGenerating> _sendTimestampGenerator;
	id<MNMessageSendSchedulerListening> _messageSendListener;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _queue;
	MNMessageSendCleaner* _messageSendCleaner;
	id<MNMessageSendStateMachineListening> _analyticsLoggerStateMachineListener;
	id<MNMessageSendStateMachineListening> _reliabilityLoggerStateMachineListener;
	MNMessageSendStateMachineListeningAnnouncer* _stateMachineAnnouncer;
	MNMessageSendQueueDiskHandler* _sendQueueDiskHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageDidSyncViaOmnistore:(id)arg1 messageId:(id)arg2 ;
-(void)cancelMessageWithOfflineThreadingId:(id)arg1 ;
-(void)retryMessageWithOfflineThreadingId:(id)arg1 ;
-(void)retryAllMessagesForTarget:(id)arg1 ;
-(void)retryAllQueuedMessages;
-(void)messageDidSyncViaSyncProtocol:(id)arg1 messageId:(id)arg2 ;
-(void)messageDidSyncViaThreadFetch:(id)arg1 messageId:(id)arg2 ;
-(void)clientTriggeredThreadDeleteCompletedForThreadWithKey:(id)arg1 ;
-(void)_didSendMessage:(id)arg1 ;
-(void)messageSendStateMachine:(id)arg1 stateChangedFromState:(id)arg2 toState:(id)arg3 ;
-(void)messageSendStateMachine:(id)arg1 stateFailedToChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)didRestoreOutgoingMessagesWithSendStatesFromDisk:(id)arg1 ;
-(void)addMessageToSendQueue:(id)arg1 ;
-(void)_prepareSendingMessage:(id)arg1 initialSendState:(unsigned long long)arg2 ;
-(BOOL)_shouldRetryMessageWithOfflineThreadingId:(id)arg1 ;
-(void)_retryMessageWithOfflineThreadingId:(id)arg1 shouldMoveToEndOfSendQueue:(BOOL)arg2 ;
-(void)retryQueuedMessagesForTarget:(id)arg1 ;
-(void)_moveMessageToEndOfSendQueue:(id)arg1 ;
-(void)_sendFirstPendingMessageInSameQueueAsMessageIfNecessary:(id)arg1 willSendAnnounceBlock:(/*^block*/id)arg2 willNotSendAnnounceBlock:(/*^block*/id)arg3 ;
-(void)_updateSendStateForMessage:(id)arg1 sendState:(unsigned long long)arg2 ;
-(void)removeMessageFromSendQueue:(id)arg1 ;
-(unsigned long long)_initialMessageSendStateAfterRestoration:(id)arg1 ;
-(BOOL)_isMessageSent:(id)arg1 ;
-(id)initWithGraphRequestRunner:(id)arg1 attachmentPreparer:(id)arg2 attachmentContextProvider:(id)arg3 mqttSender:(id)arg4 extensionSender:(id)arg5 reachabilityAnnouncer:(id)arg6 sendStateStore:(id)arg7 sendQueueStore:(id)arg8 sendConfigurationFactory:(id)arg9 sendTimestampGenerator:(id)arg10 messageSendListener:(id)arg11 attachmentProgressListener:(id)arg12 analyticsLogger:(id)arg13 reliabilityLogger:(id)arg14 attachmentCleaner:(id)arg15 sendQueueDiskHandler:(id)arg16 requestCoordinatorListener:(id)arg17 clock:(id)arg18 queue:(id)arg19 ;
-(void)sendMessage:(id)arg1 ;
@end

