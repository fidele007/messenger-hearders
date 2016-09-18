/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/MNPendingThreadRequestListening.h>
#import <Messenger/MNMessagesSyncSnapshotListening.h>
#import <Messenger/FBMThreadModelControllerDelegate.h>
#import <Messenger/MNThreadSummaryOptimisticCacheUpdateListening.h>
#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBMThreadTypingStateTrackerListener.h>
#import <Messenger/MNPushMessageReceivedListening.h>

@protocol MNAuthenticationManager, MNThreadSummaryOptimisticCacheUpdateListening;
@class FBMThreadListUpdateMonitorListenerAnnouncer, MNThreadSummarySubscribingAnnouncer, FBMMessageSendListeningAnnouncer, MNPendingThreadRequestListeningAnnouncer, FBMSPErrorRetryManager, FBMThreadModelController, FBMThreadTypingStateTracker, MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer, FBAnalytics, NSString;

@interface FBMThreadListUpdateMonitor : NSObject <FBMMessageSendListening, MNPendingThreadRequestListening, MNMessagesSyncSnapshotListening, FBMThreadModelControllerDelegate, MNThreadSummaryOptimisticCacheUpdateListening, MNThreadSummarySubscribing, FBMThreadTypingStateTrackerListener, MNPushMessageReceivedListening> {

	FBMThreadListUpdateMonitorListenerAnnouncer* _announcer;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	FBMMessageSendListeningAnnouncer* _messageSendAnnouncer;
	MNPendingThreadRequestListeningAnnouncer* _pendingThreadAnnouncer;
	FBMSPErrorRetryManager* _spErrorRetryManager;
	FBMThreadModelController* _threadModelController;
	FBMThreadTypingStateTracker* _threadTypingStateTracker;
	MNThreadSummaryOptimisticCacheUpdateListeningAnnouncer* _threadOptimisticUpdateAnnouncer;
	FBAnalytics* _analytics;
	id<MNAuthenticationManager> _authManager;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _dispatchedListeningSelf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)_stopObservers;
-(void)_startObservers;
-(void)willCreateThreadForPendingThread:(id)arg1 ;
-(void)didCreateThreadWithKey:(id)arg1 forPendingThread:(id)arg2 ;
-(void)didFailToCreateThreadForPendingThread:(id)arg1 error:(id)arg2 ;
-(void)didCancelCreatingThreadForPendingThread:(id)arg1 ;
-(void)willRetryCreatingThreadForPendingThread:(id)arg1 ;
-(void)didScheduleSendingMessage:(id)arg1 toPendingThread:(id)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 fromPendingThread:(id)arg2 ;
-(void)didUpdateOptimisticStateForThreadKey:(id)arg1 ;
-(void)didUpdateOptimisticStateForAllThreadKeys;
-(void)didReceiveAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 preparedThreadSummary:(id)arg4 ;
-(void)didReceiveSyncMessage:(id)arg1 ;
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)configureWithThreadModelController:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(id)initWithMessageSendAnnouncer:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 pendingThreadAnnouncer:(id)arg3 notificationCenter:(id)arg4 spErrorRetryManager:(id)arg5 threadTypingStateTracker:(id)arg6 threadOptimisticUpdateAnnouncer:(id)arg7 authManager:(id)arg8 analytics:(id)arg9 ;
-(void)messagesSyncWillPerformCriticalSnapshot;
-(void)messagesSyncDidCompleteCriticalSnapshot;
-(void)messagesSyncDidFailCriticalSnapshotWithError:(id)arg1 ;
-(void)messagesSyncDidCompleteNonCriticalSnapshot;
-(void)didTypingStateChangeWithSenderId:(id)arg1 ;
-(void)_threadListDidChangeThreadForOutgoingMessage:(id)arg1 ;
-(void)threadModelController:(id)arg1 willFetchWithOptions:(unsigned long long)arg2 ;
-(void)threadModelControllerDidFinishFetch:(id)arg1 ;
-(void)threadModelControllerDidFinishDeltaRequest:(id)arg1 ;
-(void)threadModelControllerDidFailFetch:(id)arg1 error:(id)arg2 ;
-(void)threadModelControllerDidFinishProcessingSyncProtocolDeltas:(id)arg1 ;
-(void)threadModelControllerDidFinishFetchAdditionalInformation:(id)arg1 ;
-(void)threadModelControllerDidFailToFetchAdditionalInformation:(id)arg1 ;
-(void)threadModelController:(id)arg1 willDeleteBatchThreadsWithThreadKeys:(id)arg2 ;
-(void)threadModelController:(id)arg1 didFinishDeleteBatchWithSuccessfulKeys:(id)arg2 failedKeys:(id)arg3 ;
-(void)threadModelController:(id)arg1 didFailToDeleteBatchThreadsWithThreadKeys:(id)arg2 error:(id)arg3 ;
-(void)threadModelController:(id)arg1 willIgnoreBatchThreadsWithThreadKeys:(id)arg2 ;
-(void)threadModelController:(id)arg1 didFinishIgnoreBatchWithSuccessfulKeys:(id)arg2 failedKeys:(id)arg3 ;
-(void)threadModelController:(id)arg1 didFailToIgnoreBatchThreadsWithThreadKeys:(id)arg2 error:(id)arg3 ;
-(void)threadModelController:(id)arg1 willUpdateThreadWithKey:(id)arg2 update:(id)arg3 ;
-(void)threadModelController:(id)arg1 didUpdateThreadWithKey:(id)arg2 update:(id)arg3 ;
-(void)threadModelController:(id)arg1 didFailToUpdateThreadWithKey:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)threadModelControllerWillFetchMoreThreads:(id)arg1 ;
-(void)threadModelControllerDidFinishFetchMoreThreads:(id)arg1 ;
-(void)threadModelControllerDidFailFetchMoreThreads:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

