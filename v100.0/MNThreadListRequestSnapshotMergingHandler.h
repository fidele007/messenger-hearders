/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListRequestHandling.h>
#import <Messenger/MNThreadListRequestHandlerSnapshotListening.h>

@protocol MNThreadMessageCacheReading, OS_dispatch_queue, MNThreadListFetchedMemoryStateAffirming;
@class MNThreadSummaryCacheThreadListFilterer, NSObject, NSMutableArray, NSString;

@interface MNThreadListRequestSnapshotMergingHandler : NSObject <MNThreadListRequestHandling, MNThreadListRequestHandlerSnapshotListening> {

	MNThreadSummaryCacheThreadListFilterer* _threadListCacheFilterer;
	id<MNThreadMessageCacheReading> _messageMemoryCache;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _snapshotIsCurrentlyOngoing;
	id<MNThreadListFetchedMemoryStateAffirming> _threadListFetchedAffirmer;
	NSMutableArray* _waitingRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadListCacheFilterer:(id)arg1 threadListFetchedAffirmer:(id)arg2 messageMemoryCache:(id)arg3 queue:(id)arg4 ;
-(void)snapshotDidBegin;
-(void)snapshotDidEnd;
-(void)handleThreadListRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleRequestAfterSnapshotFinished:(id)arg1 ;
@end

