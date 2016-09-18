/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBMNetworkFetchParsedResultMerging, FBMThreadListFetcherDelegate, MNAuthenticationManager;
@class FBUserSession, MNGraphQLThreadListFetcher, NSString;

@interface FBMThreadListFetcher : NSObject <FBClassProvidable> {

	FBUserSession* _session;
	MNGraphQLThreadListFetcher* _graphQLThreadListFetcher;
	id<FBMNetworkFetchParsedResultMerging> _networkFetchedResultsMerger;
	id<FBMThreadListFetcherDelegate> _delegate;
	id<MNAuthenticationManager> _authManager;
	long long _threadListType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithGraphQLThreadListFetcher:(id)arg1 networkFetchedResultsMerger:(id)arg2 authManger:(id)arg3 session:(id)arg4 ;
-(void)_didFetchMemModelForMessageThreadsConnection:(id)arg1 ;
-(void)couldNotFetchThreadsWithError:(id)arg1 ;
-(void)_didFinishMergingFetchedResultsForFetchWithNumberOfThreads:(unsigned long long)arg1 ;
-(void)configureAndFetchThreadListWithType:(long long)arg1 andDelegate:(id)arg2 ;
-(void)cancel;
@end

