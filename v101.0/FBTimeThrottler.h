/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBCancelable;
@class NSObject;

@interface FBTimeThrottler : NSObject {

	double _period;
	long long _options;
	NSObject*<OS_dispatch_queue> _queueForPerforming;
	/*^block*/id _block;
	/*^block*/id _timeBlock;
	/*^block*/id _callAfterBlock;
	double _lastCallTime;
	id<FBCancelable> _scheduledTrailingInvocation;

}
-(id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)callWithThrottling;
-(id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(/*^block*/id)arg4 timeBlock:(/*^block*/id)arg5 callAfterBlock:(/*^block*/id)arg6 ;
-(BOOL)_shouldInvokeImmediately_unlocked:(double)arg1 ;
-(void)_cancelScheduledTrailingInvocation_unlocked;
-(void)_scheduleTrailingInvocationIfNeeded_unlocked:(double)arg1 ;
-(void)_performTrailingInvocation;
-(void)reset;
@end

