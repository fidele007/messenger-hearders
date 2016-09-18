/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMessagesSnapshotCriticalNetworkFetching.h>

@protocol FBMNetworkFetchParsedResultMerging, MNAuthenticationManager, FBMMessagesSnapshotNetworkFetchingDelegate, FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate;
@class FBUserSession, MNGraphQLThreadListFetcher, MNCDNAssetURLReceivedListeningAnnouncer, NSString;

@interface FBMMessagesSnapshotThreadsCriticalFetcher : NSObject <FBClassProvidable, FBMMessagesSnapshotCriticalNetworkFetching> {

	FBUserSession* _session;
	MNGraphQLThreadListFetcher* _graphQLThreadListFetcher;
	id<FBMNetworkFetchParsedResultMerging> _networkFetchedResultsMerger;
	id<MNAuthenticationManager> _authManager;
	MNCDNAssetURLReceivedListeningAnnouncer* _cdnUrlReceivedAnnouncer;
	id<FBMMessagesSnapshotNetworkFetchingDelegate> _delegate;
	id<FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate> _syncProtocolDelegate;

}

@property (assign,nonatomic,__weak) id<FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate> syncProtocolDelegate;              //@synthesize syncProtocolDelegate=_syncProtocolDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)performNetworkFetchWithDelegate:(id)arg1 ;
-(void)setSyncProtocolDelegate:(id<FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate>)arg1 ;
-(id)initWithGraphQLThreadListFetcher:(id)arg1 authManger:(id)arg2 networkFetchedResultsMerger:(id)arg3 cdnUrlReceivedAnnouncer:(id)arg4 session:(id)arg5 ;
-(void)_didFetchMemModelMessageThreadsConnection:(id)arg1 ;
-(void)_didFinishParsingThreadsAndRetrievedNewSequenceId:(long long)arg1 ;
-(id<FBMMessagesSnapshotThreadsCriticalFetcherSyncProtocolDelegate>)syncProtocolDelegate;
-(void)cancel;
-(void)_didFailWithError:(id)arg1 ;
@end
