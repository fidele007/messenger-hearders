/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProvider;
@class MNThreadMediaFetchGraphQLRunner, FBMSyncedThreadKey, NSString, NSMutableArray;

@interface MNThreadMediaFetcher : NSObject {

	id<FBProvider> _threadMediaFetchGraphQLRunnerProvider;
	MNThreadMediaFetchGraphQLRunner* _threadMediaFetchGraphQLRunner;
	unsigned long long _threadMediaFetchGraphQLRunnerForRequestType;
	FBMSyncedThreadKey* _threadKey;
	long long _fetcherScope;
	unsigned long long _numberOfItemsToFetchPerBatch;
	BOOL _fetchedAllThreadMediaFromBegining;
	BOOL _fetchedAllThreadMediaFromEnd;
	BOOL _allowMultiplePendingRequestOfSameType;
	NSString* _beginingCursor;
	NSString* _endCursor;
	NSMutableArray* _pendingRequests;

}
-(void)fetchThreadMediaFromLastCursorSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(BOOL)hasFetchedAllTrailingThreadMedia;
-(BOOL)hasFetchedThreadMedia;
-(BOOL)_sanityCheckWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_pushPendingRequestIfPossible:(id)arg1 ;
-(void)_popPendingRequestIfPossible;
-(void)fetchThreadMediaFromBeginningWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_fetchThreadMediaForRequestType:(unsigned long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processSuccessForRequestType:(unsigned long long)arg1 messageSharedMediaConnection:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)_processFailureWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_updateBeginingCursorRelatedValuesIfNeededForRequestType:(unsigned long long)arg1 pageInfo:(id)arg2 fetchedCount:(unsigned long long)arg3 ;
-(void)_updateEndCursorRelatedValuesIfNeededForRequestType:(unsigned long long)arg1 pageInfo:(id)arg2 fetchedCount:(unsigned long long)arg3 ;
-(id)initWithThreadMediaFetchGraphQLRunnerProvider:(id)arg1 threadKey:(id)arg2 fetcherScope:(long long)arg3 numberOfItemsToFetchPerBatch:(unsigned long long)arg4 allowMultiplePendingRequestOfSameType:(BOOL)arg5 ;
-(void)fetchThreadMediaFromFirstCursorSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(BOOL)hasFetchedAllLeadingThreadMedia;
-(void)dealloc;
-(void)cancelAllRequests;
@end

