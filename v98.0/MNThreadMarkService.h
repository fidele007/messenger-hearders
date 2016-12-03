/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummaryOptimisticStateApplying.h>

@protocol MNThreadMarkRunning, MNThreadSummarySingleUpdateListening, MNThreadSummaryNetworkFetchedListening, MNAPNSMessageReadListening, MNThreadSummaryUpdateWithSourceUpdateListening, MNThreadSummaryCacheReading, MNAPNSMessageStoreReading, MNAuthenticationManager;
@class MNAPNSMessageMarkHandler, FBMCustomDictionaryStore, MNThreadUpdater, MNThreadMarkRunJobListenerFactory, FBUserSession, MNThreadSummarySingleUpdateListeningAnnouncer, MNThreadSummaryUpdateWithSourceUpdateListeningAnnouncer, MNThreadSummaryNetworkFetchedListeningAnnouncer, MNMessagingRegionHeaderHelper, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, NSString;

@interface MNThreadMarkService : NSObject <MNThreadSummaryOptimisticStateApplying> {

	id<MNThreadMarkRunning> _markingRunner;
	MNAPNSMessageMarkHandler* _apnsMarkHandler;
	FBMCustomDictionaryStore* _apnsMarkDiskStore;
	MNThreadUpdater* _threadUpdater;
	MNThreadMarkRunJobListenerFactory* _listenerFactory;
	id<MNThreadSummarySingleUpdateListening> _cachePopulatorDispatcher;
	id<MNThreadSummaryNetworkFetchedListening> _cacheSubscribingDispatcher;
	id<MNAPNSMessageReadListening> _apnsMarkHandlerReadListeningDispatcher;
	id<MNThreadSummaryUpdateWithSourceUpdateListening> _apnsMarkHandlerUpdateListeningDispatcher;
	BOOL _isStarted;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	id<MNAPNSMessageStoreReading> _apnsMessageStoreReader;
	id<MNThreadMarkRunning> _externalThreadMarkRunner;
	id<MNAuthenticationManager> _authenticationManager;
	FBUserSession* _userSession;
	MNThreadSummarySingleUpdateListeningAnnouncer* _threadUpdateAnnouncer;
	MNThreadSummaryUpdateWithSourceUpdateListeningAnnouncer* _threadUpdateWithSourceAnnouncer;
	MNThreadSummaryNetworkFetchedListeningAnnouncer* _threadSummaryNetworkFetchedAnnouncer;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDatabaseDelayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)threadSummaryWithAllOptimisticUpdatesApplied:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 threadSummaryCacheReader:(id)arg2 userSession:(id)arg3 messagingRegionHeaderHelper:(id)arg4 messagingStore:(id)arg5 messagingStoreDatabaseDelayer:(id)arg6 threadUpdateAnnouncer:(id)arg7 threadUpdateWithSourceAnnouncer:(id)arg8 threadFetchedFromNetworkAnnouncer:(id)arg9 apnsMessageStoreReader:(id)arg10 externalThreadMarkRunner:(id)arg11 ;
-(void)startWithOptimisticStateListener:(id)arg1 ;
-(void)markThreadWithKey:(id)arg1 action:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)markAPNSMessagesAsRead:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)_createGraphMarkRunnerForQueue:(id)arg1 ;
-(void)stop;
@end
