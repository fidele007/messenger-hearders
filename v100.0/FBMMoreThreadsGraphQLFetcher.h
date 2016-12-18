/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListFetching.h>

@protocol MNAuthenticationManager, FBMNetworkFetchParsedResultMerging, OS_dispatch_queue;
@class FBUserSession, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, FBMMoreThreadsFetchedListeningAnnouncer, MNThreadListFetchConfiguration, FBAnalytics, NSObject, NSString;

@interface FBMMoreThreadsGraphQLFetcher : NSObject <MNThreadListFetching> {

	FBUserSession* _userSession;
	id<MNAuthenticationManager> _authManager;
	id<FBMNetworkFetchParsedResultMerging> _networkFetchedResultsMerger;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMMoreThreadsFetchedListeningAnnouncer* _moreThreadsFetchedListener;
	MNThreadListFetchConfiguration* _threadListFetchConfiguration;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processThreadsDataFromGraphQLFetch:(id)arg1 threadListType:(long long)arg2 numThreadsToFetch:(long long)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_didFailWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_didSucceedFetchingMoreThreads:(id)arg1 numThreadsToFetch:(long long)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)configureAndStartFetchWithThreadListType:(long long)arg1 latestThreadTimestamp:(unsigned long long)arg2 numThreadsToFetch:(long long)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 networkFetchedResultsMerger:(id)arg3 queryConfigGenerator:(id)arg4 moreThreadsFetchedListener:(id)arg5 messagingRegionHeaderHelper:(id)arg6 threadListFetchConfiguration:(id)arg7 analytics:(id)arg8 queue:(id)arg9 ;
@end

