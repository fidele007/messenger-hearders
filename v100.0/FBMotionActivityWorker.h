/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAccelerometerTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class FBAccelerometerTracker, NSObject, FBActivitySensorDataCollectionConfig, FBBackgroundTaskHandler, FBMotionActivity, NSMutableSet;

@interface FBMotionActivityWorker : NSObject <FBAccelerometerTrackerDelegate> {

	FBAccelerometerTracker* _tracker;
	NSObject*<OS_dispatch_queue> _workQueue;
	FBActivitySensorDataCollectionConfig* _sensorDataCollectionConfig;
	NSObject*<OS_dispatch_queue> _activityQueryHandlerCallBackQueue;
	double _minimumDataCollectionSessionGapSeconds;
	FBBackgroundTaskHandler* _backgroundTaskHandler;
	unsigned long long _backgroundTaskIdentifier;
	FBMotionActivity* _cachedActivity;
	NSMutableSet* _completionHandlers;

}

@property (nonatomic,copy,readonly) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (readonly) FBMotionActivity * cachedActivity;                             //@synthesize cachedActivity=_cachedActivity - In the implementation block
-(void)_stopTaskHandler;
-(id)initWithMotionActivityPredictor:(id)arg1 sensorDataCollectionConfig:(id)arg2 minimumDataCollectionSessionGapSecond:(double)arg3 ;
-(void)recentActivity:(/*^block*/id)arg1 ;
-(id)initWithTracker:(id)arg1 sensorDataCollectionConfig:(id)arg2 minimumDataCollectionSessionGap:(double)arg3 ;
-(void)_currentActivityAllowStaleAgeSeconds:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendActivityToCompletionHandlers:(id)arg1 error:(id)arg2 ;
-(void)_getMotionActivity:(id)arg1 error:(id)arg2 ;
-(void)_setCachedMotionActivity:(id)arg1 ;
-(void)accelerometerTracker:(id)arg1 didFetchMotionActivity:(id)arg2 error:(id)arg3 ;
-(FBMotionActivity *)cachedActivity;
-(void)dealloc;
-(NSMutableSet *)completionHandlers;
@end

