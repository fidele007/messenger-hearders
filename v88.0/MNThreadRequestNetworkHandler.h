/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBatchThreadNetworkFetchRequestRunningListener.h>
#import <Messenger/MNThreadSummaryRequestHandling.h>

@protocol FBProvider, MNBatchThreadNetworkRequestRunnerProviding, MNBatchThreadNetworkFetchRequestRunningListener, OS_dispatch_queue;
@class NSMutableDictionary, FBNetworkActivityManager, FBAnalytics, NSObject, NSString;

@interface MNThreadRequestNetworkHandler : NSObject <MNBatchThreadNetworkFetchRequestRunningListener, MNThreadSummaryRequestHandling> {

	NSMutableDictionary* _pendingThreadFetches;
	id<FBProvider> _canonicalThreaFetcherProvider;
	FBNetworkActivityManager* _networkActivityManager;
	FBAnalytics* _analytics;
	id<MNBatchThreadNetworkRequestRunnerProviding> _networkFetchRunnerProviding;
	id<MNBatchThreadNetworkFetchRequestRunningListener> _requestRunnerDispatcherToSelf;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)threadFetchRunnerDidFailFetchForThreadQueries:(id)arg1 withError:(id)arg2 forRequestWithId:(unsigned long long)arg3 ;
-(void)threadFetchRunnerDidFetchThreadSummaries:(id)arg1 messageResponses:(id)arg2 encounteredErrors:(id)arg3 forRequestWithId:(unsigned long long)arg4 ;
-(id)_loadTrackedInformationForCompletionOfRequestWithId:(unsigned long long)arg1 ;
-(id)initWithNetworkFetchRunnerProviding:(id)arg1 networkActivityManager:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)_buildSingleThreadSummaryFetchConfigurationsForRequest:(id)arg1 ;
-(void)_handleRequestWithRequestId:(unsigned long long)arg1 configuration:(id)arg2 postProgressBlock:(/*^block*/id)arg3 continueHandlerBlock:(/*^block*/id)arg4 buildConfigurationsBlock:(/*^block*/id)arg5 requestSetterBlock:(/*^block*/id)arg6 ;
-(void)_broadcastThreadSummaryFetchResultsWithJobInfo:(id)arg1 fetchedThreadSummaries:(id)arg2 encounteredErrors:(id)arg3 ;
-(void)dealloc;
@end
