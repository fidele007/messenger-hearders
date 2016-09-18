/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSpotlightIndexing.h>

@protocol MNSpotlightItemPreparing, MNSpotlightIndexingListener, OS_dispatch_queue, MNSpotlightBatchIndexingListener;
@class MNSpotlightIndexer, NSObject, NSArray, NSMutableArray, FBTimeThrottler, NSString;

@interface MNSpotlightIndexerHandler : NSObject <MNSpotlightIndexing> {

	MNSpotlightIndexer* _spotlightIndexer;
	id<MNSpotlightItemPreparing> _spotlightItemPreparer;
	id<MNSpotlightIndexingListener> _spotlightIndexingListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _currentOperation;
	NSMutableArray* _currentOperationRemovals;
	NSMutableArray* _pendingUserIndexingOperations;
	NSMutableArray* _pendingGroupIndexingOperations;
	BOOL _isBatchIndexingRunning;
	FBTimeThrottler* _userIndexTimeThrottler;
	FBTimeThrottler* _groupIndexTimeThrottler;
	id<MNSpotlightBatchIndexingListener> _spotlightBatchIndexingListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSpotlightBatchIndexingListener> spotlightBatchIndexingListener;              //@synthesize spotlightBatchIndexingListener=_spotlightBatchIndexingListener - In the implementation block
-(id)initWithSpotlightIndexer:(id)arg1 itemPreparer:(id)arg2 spotlightIndexingListener:(id)arg3 queue:(id)arg4 ;
-(void)indexContactSyncUserFriends:(id)arg1 ;
-(void)deleteIndexForContactSyncUserFriends:(id)arg1 ;
-(void)deleteIndexForFriendsWithUserIds:(id)arg1 ;
-(void)indexGroupThread:(id)arg1 ;
-(void)deleteIndexForGroupThreadWithKey:(id)arg1 ;
-(void)clearIndex;
-(void)clearAllGroupThreads;
-(id<MNSpotlightBatchIndexingListener>)spotlightBatchIndexingListener;
-(void)setSpotlightBatchIndexingListener:(id<MNSpotlightBatchIndexingListener>)arg1 ;
-(void)_executePendingUserIndexingOperations;
-(void)_executePendingGroupIndexingOperations;
-(void)_enqueueIndexingOperation:(id)arg1 ;
-(void)_handleUpdateWhileBatchingForUsersWithUserIds:(id)arg1 ;
-(void)_completeDeleteIndexesWithIndentifiers:(id)arg1 error:(id)arg2 ;
-(void)_completeClearAllIndexesWithError:(id)arg1 ;
-(void)_completeClearGroupIndexesWithError:(id)arg1 ;
-(void)_completeIndexSearchableItem:(id)arg1 error:(id)arg2 ;
-(id)_dequeueIndexingOperation;
-(void)_completeForItemsForUsersWithSearchableItems:(id)arg1 ;
-(id)_filterUpdatesFromCurrentOperation:(id)arg1 ;
-(void)_indexSearchableItems:(id)arg1 ;
-(void)_executePendingUserIndexingOperationsThrottled;
-(void)_indexSearchableItem:(id)arg1 ;
-(void)_executePendingGroupIndexingOperationsThrottled;
-(void)_completeIndexingIfNotCleared:(id)arg1 ;
-(void)_removeUsersWithUserIdsFromPendingOperations:(id)arg1 ;
-(void)_removeUsersWithUserIdsFromCurrentOperation:(id)arg1 ;
@end
