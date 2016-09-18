/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncPersistenceJobHandling.h>

@protocol MNIncrementalPersistenceJobBuilding, MNIncrementalPersistenceCoordinating, OS_dispatch_queue;
@class MNMessagesSyncPersistenceDuplicateSequenceIdDelayer, MNMessagesSyncPersistenceContinuousSequenceIdDelayer, NSObject, NSString;

@interface MNMessagesSyncPersistenceJobHandler : NSObject <MNMessagesSyncPersistenceJobHandling> {

	id<MNIncrementalPersistenceJobBuilding> _persistenceJobBuilder;
	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	MNMessagesSyncPersistenceDuplicateSequenceIdDelayer* _duplicateSequenceIDDelayer;
	MNMessagesSyncPersistenceContinuousSequenceIdDelayer* _continuousSequenceIDDelayer;
	BOOL _shouldFilterIPJobsBeforeRunning;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPersistenceJobBuilder:(id)arg1 persistenceCoordinator:(id)arg2 duplicateSequenceIDDelayer:(id)arg3 continuousSequenceIDDelayer:(id)arg4 queue:(id)arg5 ;
-(void)handlePersistenceJobsWithSequenceIds:(id)arg1 ;
-(void)_runJobDescriptionsWithSequenceIds:(id)arg1 ;
-(void)_passJobsToCoordinator:(id)arg1 withSequenceId:(long long)arg2 ;
@end
