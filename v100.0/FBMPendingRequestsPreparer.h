/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMThreadListFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMailboxPreparing.h>

@protocol FBMMailboxPreparingDelegate;
@class FBMThreadListFetcher, MNThreadListMetadataFetcher, MNPendingRequestsStore, NSString;

@interface FBMPendingRequestsPreparer : NSObject <FBMThreadListFetcherDelegate, FBClassProvidable, FBMMailboxPreparing> {

	FBMThreadListFetcher* _threadListFetcher;
	MNThreadListMetadataFetcher* _filteredThreadsMetaDataFetcher;
	id<FBMMailboxPreparingDelegate> _delegate;
	long long _threadListType;
	MNPendingRequestsStore* _pendingRequestsStore;
	unsigned long long _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_couldNotFetchThreadListMetaDataWithError:(id)arg1 ;
-(void)configureAndPrepareThreadListWithDelegate:(id)arg1 ;
-(id)initWithThreadListFetcher:(id)arg1 filteredThreadsMetaDataFetcher:(id)arg2 pendingRequestsStore:(id)arg3 ;
-(void)_fetchAdditionalInformation;
-(void)_didFetchUnreadRequestNumber:(unsigned long long)arg1 totalNumber:(unsigned long long)arg2 mailboxSnippet:(id)arg3 ;
-(void)_didFinishMerging;
-(void)threadListFetcherDidCancelFetch:(id)arg1 ;
-(void)threadListFetcherDidFailToFetch:(id)arg1 error:(id)arg2 ;
-(void)threadListFetcherDidFinishFetch:(id)arg1 didLoadAllThreads:(BOOL)arg2 ;
-(void)cancel;
-(unsigned long long)currentState;
-(BOOL)isFetching;
@end

