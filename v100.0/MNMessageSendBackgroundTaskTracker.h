/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendQueueMutationListening.h>
#import <Messenger/MNMessageSendRequestCoordinatorListening.h>

@protocol MNMessageSendConfigurationFactory, OS_dispatch_queue;
@class FBBackgroundTaskHandler, MNMessageSendQueueStore, FBAnalytics, NSMutableSet, NSObject, NSString;

@interface MNMessageSendBackgroundTaskTracker : NSObject <MNMessageSendQueueMutationListening, MNMessageSendRequestCoordinatorListening> {

	FBBackgroundTaskHandler* _backgroundTaskHandler;
	MNMessageSendQueueStore* _sendQueueStore;
	id<MNMessageSendConfigurationFactory> _sendConfigurationFactory;
	FBAnalytics* _analytics;
	unsigned long long _backgroundTaskId;
	NSMutableSet* _suspendableOfflineThreadingIds;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddMessageToSendQueue:(id)arg1 sendStateInfo:(id)arg2 ;
-(void)didRemoveMessageFromSendQueue:(id)arg1 ;
-(void)_endBackgroundTaskIfNoLongerNecessary;
-(void)_endSuspendabilityWithOfflineThreadingId:(id)arg1 ;
-(void)_beginBackgroundTaskIfNecessary;
-(void)_backgroundTaskExpired;
-(id)initWithBackgroundTaskHandler:(id)arg1 sendQueueStore:(id)arg2 sendConfigurationFactory:(id)arg3 analytics:(id)arg4 queue:(id)arg5 ;
-(void)didStartPreparingMessage:(id)arg1 sendMethod:(unsigned long long)arg2 ;
-(void)didStartSendingMessage:(id)arg1 sendMethod:(unsigned long long)arg2 ;
-(void)didEndSendingMessage:(id)arg1 sendMethod:(unsigned long long)arg2 ;
-(void)didFailSendingMessage:(id)arg1 sendMethod:(unsigned long long)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 sendMethod:(unsigned long long)arg2 ;
-(void)_endBackgroundTask;
@end

