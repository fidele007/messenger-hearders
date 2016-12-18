/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBatchRequestMergeResultPropagating;
@class NSMutableDictionary;

@interface MNBatchRequestMerger : NSObject {

	NSMutableDictionary* _trackedQueryToRequestIdMap;
	NSMutableDictionary* _requestIdToMergeInfo;
	id<MNBatchRequestMergeResultPropagating> _mergerHandler;

}
-(id)initWithMergeHander:(id)arg1 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg5 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 asHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 wasNotHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(id)_newlyTrackedQueriesForRequestId:(unsigned long long)arg1 queries:(id)arg2 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg3 ;
-(void)_clearCompletedRequests;
-(void)_trackQueries:(id)arg1 mergeInfo:(id)arg2 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 ;
@end

