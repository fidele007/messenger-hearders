/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFriendSearchOperationAggregatorDelegate;
@class FBTimeThrottler, FBSyncStorePersonSearchOperation, FBFriendSearchOperationRunner;

@interface FBFriendSearchOperationAggregator : NSObject {

	FBTimeThrottler* _throttler;
	FBSyncStorePersonSearchOperation* _runningJob;
	FBFriendSearchOperationRunner* _runner;
	unsigned long long _queuedOperationType;
	id<FBFriendSearchOperationAggregatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFriendSearchOperationAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSearchOperationRunner:(id)arg1 minTimeBetweenOperations:(double)arg2 ;
-(void)_runOperation;
-(void)_cleanUpOpeation:(id)arg1 ;
-(void)beginNextOperationIfPossible:(BOOL)arg1 ;
-(void)setDelegate:(id<FBFriendSearchOperationAggregatorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFriendSearchOperationAggregatorDelegate>)delegate;
-(void)cancelOperations;
@end

