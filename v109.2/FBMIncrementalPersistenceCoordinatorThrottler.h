/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNIncrementalPersistenceCoordinating.h>
#import <Messenger/FBMLongBackgroundJobStarting.h>

@protocol MNIncrementalPersistenceCoordinating, OS_dispatch_queue;
@class FBTimeThrottler, NSObject, NSArray, NSString;

@interface FBMIncrementalPersistenceCoordinatorThrottler : NSObject <MNIncrementalPersistenceCoordinating, FBMLongBackgroundJobStarting> {

	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	FBTimeThrottler* _timeThrottler;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _throttlerJobQueue;
	unsigned long long _backgroundTaskId;

}

@property (assign) unsigned long long backgroundTaskId;              //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runJobs:(id)arg1 ;
-(void)runJobsFromSyncProtocol:(id)arg1 withSequenceId:(long long)arg2 ;
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 numberOfSecondsToThrottle:(double)arg2 queue:(id)arg3 ;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)_flushThrottlerJobQueue;
-(void)_addThrottlerJob:(id)arg1 executeJobsImmediately:(BOOL)arg2 ;
-(unsigned long long)backgroundTaskId;
-(void)beginLongBackgroundJob;
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 queue:(id)arg2 ;
-(void)_endBackgroundTask;
@end

