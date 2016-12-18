/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDeviceClock;
@class MNNetworkUsageTimeLogger, NSMutableArray;

@interface MNNetworkUsageTimeTracker : NSObject {

	MNNetworkUsageTimeLogger* _usageTimeLogger;
	id<FBDeviceClock> _deviceClock;
	double _fullPowerTimeSpent;
	double _standbyTimeSpent;
	long long _idleWakeupCount;
	double _fullPowerTimeSpentForAlert;
	long long _networkerRequestCount;
	long long _mqttRequestCount;
	double _trackerTimeStarted;
	NSMutableArray* _fullPowerIntervals;

}
-(void)didEnterForeground;
-(void)_resetTracker;
-(void)_flushQueueForEventsUpToTime:(double)arg1 ;
-(double)_idleTimeSpent;
-(void)_didEndNetworkingWithDuration:(double)arg1 requestName:(id)arg2 requestType:(unsigned long long)arg3 ;
-(void)_removeLastTimeInterval;
-(void)_addTimeInterval:(id)arg1 ;
-(void)_removeFirstTimeInterval;
-(void)_triggerAlertIfNeeded;
-(id)initWithDeviceClock:(id)arg1 usageTimeLogger:(id)arg2 ;
-(void)didEndNetworkActivityWithDuration:(double)arg1 requestName:(id)arg2 ;
-(void)didSendMQTTPayload;
-(void)didEnterBackground;
@end

