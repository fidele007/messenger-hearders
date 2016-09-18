/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNJointRequestChainHandling.h>
#import <Messenger/MNBatchThreadNetworkFetchRequestRunningListener.h>

@protocol MNBatchThreadNetworkRequestRunnerProviding, OS_dispatch_queue, MNBatchThreadNetworkFetchRequestRunningListener;
@class NSMutableDictionary, FBNetworkActivityManager, FBAnalytics, NSObject, NSString;

@interface MNRemoteJointRequestHandler : NSObject <MNJointRequestChainHandling, MNBatchThreadNetworkFetchRequestRunningListener> {

	NSMutableDictionary* _pendingThreadFetches;
	FBNetworkActivityManager* _networkActivityManager;
	FBAnalytics* _analytics;
	id<MNBatchThreadNetworkRequestRunnerProviding> _networkFetchRunnerProviding;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNBatchThreadNetworkFetchRequestRunningListener> _requestRunnerDispatcherToSelf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)threadFetchRunnerDidFailFetchForThreadQueries:(id)arg1 withError:(id)arg2 forRequestWithId:(unsigned long long)arg3 ;
-(void)threadFetchRunnerDidFetchThreadSummaries:(id)arg1 messageResponses:(id)arg2 encounteredErrors:(id)arg3 forRequestWithId:(unsigned long long)arg4 ;
-(id)_loadTrackedInformationForCompletionOfRequestWithId:(unsigned long long)arg1 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 messageBatchRequest:(id)arg2 longOperationDidBeginBlock:(/*^block*/id)arg3 forwardBlock:(/*^block*/id)arg4 threadResponseBlock:(/*^block*/id)arg5 messageResponseBlock:(/*^block*/id)arg6 ;
-(id)initWithNetworkFetchRunnerProviding:(id)arg1 networkActivityManager:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)dealloc;
@end

