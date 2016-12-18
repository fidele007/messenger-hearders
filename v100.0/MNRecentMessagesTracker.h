/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRecentMessagesTracking.h>

@protocol MNMessageSendQuerying, MNAuthenticationManager, OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface MNRecentMessagesTracker : NSObject <MNRecentMessagesTracking> {

	id<MNMessageSendQuerying> _messageSendQuerier;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _receivedSyncProtocolMessages;
	NSArray* _receivedAPNSMessages;
	NSArray* _sentMessages;

}

@property (copy) NSArray * receivedSyncProtocolMessages;              //@synthesize receivedSyncProtocolMessages=_receivedSyncProtocolMessages - In the implementation block
@property (copy) NSArray * receivedAPNSMessages;                      //@synthesize receivedAPNSMessages=_receivedAPNSMessages - In the implementation block
@property (copy) NSArray * sentMessages;                              //@synthesize sentMessages=_sentMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 preparedThreadSummary:(id)arg4 ;
-(void)didReceiveSyncMessage:(id)arg1 ;
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didEnqueueMessageAndWillSendImmediately:(id)arg1 ;
-(void)didEnqueueMessageAndWillWaitInQueue:(id)arg1 ;
-(void)willSendQueuedMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didCancelMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 errorType:(unsigned long long)arg3 ;
-(id)recentSentMessages;
-(void)setReceivedSyncProtocolMessages:(NSArray *)arg1 ;
-(void)setReceivedAPNSMessages:(NSArray *)arg1 ;
-(void)setSentMessages:(NSArray *)arg1 ;
-(NSArray *)receivedSyncProtocolMessages;
-(NSArray *)receivedAPNSMessages;
-(NSArray *)sentMessages;
-(void)_didOutgoingMessageStateChange:(id)arg1 ;
-(id)recentReceivedSyncProtocolMessages;
-(id)recentReceivedAPNSMessages;
-(id)initWithMessageSendQuerier:(id)arg1 authManager:(id)arg2 queue:(id)arg3 ;
@end

