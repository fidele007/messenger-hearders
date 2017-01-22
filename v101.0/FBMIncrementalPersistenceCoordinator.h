/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNIncrementalPersistenceCoordinating.h>

@protocol FBMIncrementalPersistenceCoordinatorObserving, OS_dispatch_queue;
@class FBMessagingStore, FBMMessagingStoreRestoreCompleteDelayer, NSObject, NSString;

@interface FBMIncrementalPersistenceCoordinator : NSObject <MNIncrementalPersistenceCoordinating> {

	FBMessagingStore* _messagingStore;
	FBMMessagingStoreRestoreCompleteDelayer* _databaseRestoredDelayer;
	id<FBMIncrementalPersistenceCoordinatorObserving> _observer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasExperiencedMessagingStoreErrors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tellObserverThatNonSyncJobs:(id)arg1 didFinishWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_runJobQueue:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_tellObserverThatSyncJobs:(id)arg1 withSequenceId:(long long)arg2 didFinishWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)_handleMessagingStoreJobsFinishWithSuccess:(BOOL)arg1 ;
-(void)runJobsFromSyncProtocol:(id)arg1 withSequenceId:(long long)arg2 ;
-(void)runJobs:(id)arg1 ;
-(id)initWithMessagingStore:(id)arg1 databaseRestoredDelayer:(id)arg2 observer:(id)arg3 queue:(id)arg4 ;
@end
