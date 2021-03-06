/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncDataPreparerErrorHandling.h>

@protocol MNMessagesSyncThreadPrepareJobExecuting, OS_dispatch_queue, MNMessagesSyncDataPreparerErrorHandlingListening;
@class FBExponentialBackoffTimer, FBAnalytics, NSMutableSet, NSObject, NSString;

@interface MNMessagesSyncDataPreparerErrorHandler : NSObject <MNMessagesSyncDataPreparerErrorHandling> {

	id<MNMessagesSyncThreadPrepareJobExecuting> _threadPrepareJobExecutor;
	FBExponentialBackoffTimer* _exponentialBackoffTimer;
	FBAnalytics* _analytics;
	NSMutableSet* _jobsInFlight;
	NSMutableSet* _jobsWaitingForFulfillment;
	NSMutableSet* _completedJobs;
	NSMutableSet* _failedJobs;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNMessagesSyncDataPreparerErrorHandlingListening> _listener;

}

@property (assign,nonatomic,__weak) id<MNMessagesSyncDataPreparerErrorHandlingListening> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadPrepareJobExecutor:(id)arg1 analytics:(id)arg2 queue:(id)arg3 ;
-(void)_handleCompletedJobs:(id)arg1 failedJobs:(id)arg2 ;
-(void)handleErrorEncounteredWhenPreparingJobs:(id)arg1 ;
-(id)initWithThreadPrepareJobExecutor:(id)arg1 backoffTimer:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)_scheduleTimerToFireOffJobs;
-(void)_informNetworkMonitorUIOfChange;
-(void)_jobsFinishedExecutingWithCompletedJobs:(id)arg1 failedJobs:(id)arg2 ;
-(void)_fireOffJobs;
-(id<MNMessagesSyncDataPreparerErrorHandlingListening>)listener;
-(void)setListener:(id<MNMessagesSyncDataPreparerErrorHandlingListening>)arg1 ;
@end

