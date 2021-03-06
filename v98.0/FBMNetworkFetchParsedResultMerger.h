/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager, MNThreadMessageCaching, MNThreadSummaryCaching, MNThreadSummaryNetworkFetchedListening, MNGlobalMuteStatusReading, MNGlobalMuteStatusWriting, OS_dispatch_queue;
@class FBAnalytics, MNFetchedThreadKeyTracker, MNMessageListFetchedTracker, MNThreadListContinuityTracker, MNThreadListFetchedTracker, FBMLoggedInUserInfoManager, NSObject;

@interface FBMNetworkFetchParsedResultMerger : NSObject {

	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	id<MNThreadMessageCaching> _threadMessageCache;
	id<MNThreadSummaryCaching> _threadSummaryCache;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	MNMessageListFetchedTracker* _messageListFetchedTracker;
	MNThreadListContinuityTracker* _threadListContinuityTracker;
	MNThreadListFetchedTracker* _threadListFetchedTracker;
	id<MNThreadSummaryNetworkFetchedListening> _networkFetchListener;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	id<MNGlobalMuteStatusWriting> _globalMuteStatusWriter;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_updateAppCachesWithNetworkFetchResult:(id)arg1 ;
-(id)_updateCachesWithThreadListFetchedResult:(id)arg1 ;
-(id)_updateThreadListWithParsedNetworkResults:(id)arg1 ;
-(void)_updateThreadFolderContinuityForThreadListType:(long long)arg1 summaries:(id)arg2 ;
-(void)_mergeThreadSummaryIntoMemoryCaches:(id)arg1 ;
-(void)_mergeIndexedMessageSet:(id)arg1 withRangeType:(long long)arg2 ontoThreadWithThreadKey:(id)arg3 shouldMarkAsFetched:(BOOL)arg4 isMessageOnlyRequest:(BOOL)arg5 ;
-(BOOL)_tryPerformMergeMessageSet:(id)arg1 withRangeType:(long long)arg2 ontoThreadWithThreadKey:(id)arg3 canFallbackToSet:(BOOL)arg4 isMessageOnlyRequest:(BOOL)arg5 ;
-(id)initWithAuthManager:(id)arg1 analytics:(id)arg2 threadMessageCache:(id)arg3 threadSummaryCache:(id)arg4 fetchedThreadKeyTracker:(id)arg5 messageListFetchedTracker:(id)arg6 threadListContinuityTracker:(id)arg7 threadListFetchedTracker:(id)arg8 threadSummaryNetworkFetchListener:(id)arg9 globalMuteStatusReader:(id)arg10 globalMuteStatusWriter:(id)arg11 loggedInUserInfoManager:(id)arg12 queue:(id)arg13 ;
-(void)updateAppCachesWithNetworkFetchResults:(id)arg1 mergingCompletionBlock:(/*^block*/id)arg2 ;
-(void)updateInboxThreadListWithParsedResult:(id)arg1 globalMuteStatus:(long long)arg2 mergingCompletionBlock:(/*^block*/id)arg3 ;
-(void)updateThreadListWithParsedResult:(id)arg1 mergingCompletionBlock:(/*^block*/id)arg2 ;
@end

