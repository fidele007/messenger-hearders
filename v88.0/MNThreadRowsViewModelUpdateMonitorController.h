/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadSummarySubscribing, MNThreadSummaryOptimisticCacheUpdateListening, MNThreadMessageSubscribing, MNSecureThreadSubscribing, FBMMessageSendListening, MNPendingThreadRequestListening, MNPushMessageReceivedListening, FBMThreadTypingStateTrackerListener, MNMessagesSyncSnapshotListening, FBMSPForcedFetchDeltaHandlerListening, FBFriendChangedMonitorListener, FBMSPFolderCountDeltaHandlerListener, MNEphemeralMessageExpirationTimerStoreListening, MNThreadRowsViewModelEnterForegroundListening;
@class MNThreadRowsViewModelUpdateMonitor, MNThreadListViewModelSubscriptionServiceDependencies;

@interface MNThreadRowsViewModelUpdateMonitorController : NSObject {

	MNThreadRowsViewModelUpdateMonitor* _monitor;
	MNThreadListViewModelSubscriptionServiceDependencies* _dependencies;
	id<MNThreadSummarySubscribing> _threadSummarySubscriber;
	id<MNThreadSummaryOptimisticCacheUpdateListening> _threadSummaryOptimisticUpdateSubscriber;
	id<MNThreadMessageSubscribing> _threadMessageSubscriber;
	id<MNSecureThreadSubscribing> _secureThreadSubscriber;
	id<FBMMessageSendListening> _messageSendListener;
	id<MNPendingThreadRequestListening> _pendingThreadListener;
	id<MNPushMessageReceivedListening> _pushMessageListener;
	id<FBMThreadTypingStateTrackerListener> _threadTypingStateListener;
	id<MNMessagesSyncSnapshotListening> _messagesSyncSnapshotListener;
	id<FBMSPForcedFetchDeltaHandlerListening> _syncProtocolForceFetchListener;
	id<FBFriendChangedMonitorListener> _friendChangedMonitorListener;
	id<FBMSPFolderCountDeltaHandlerListener> _folderCountDeltaHandlerListener;
	id<MNEphemeralMessageExpirationTimerStoreListening> _ephemeralTimerStoreListener;
	id<MNThreadRowsViewModelEnterForegroundListening> _enterForegroundListener;

}
-(id)initWithMonitor:(id)arg1 dependencies:(id)arg2 queue:(id)arg3 ;
-(void)startMonitoring;
-(void)stopMonitoring;
@end
