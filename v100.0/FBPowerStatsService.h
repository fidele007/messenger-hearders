/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLocalStatsListener.h>
#import <Messenger/FBAppService.h>
#import <Messenger/MNServiceControllable.h>

@protocol FBMQTTTrafficTracking;
@class FBLocalStatsLogger, FBPowerMetricsData, FBLigerNetStat, FBMQTTTrafficTracker, MQTTTrafficInfo, NSString;

@interface FBPowerStatsService : NSObject <FBLocalStatsListener, FBAppService, MNServiceControllable> {

	id _batteryStateObserver;
	id _batteryLevelObserver;
	FBLocalStatsLogger* _logger;
	atomic<bool> _isRunning;
	float _startingBatteryLevel;
	atomic<float> _batteryLevel;
	atomic<bool> _wasCharging;
	atomic<UIDeviceBatteryState> _batteryState;
	int _batteryCapacity;
	FBPowerMetricsData* _metricsData;
	double _backgroundTimeStart;
	FBLigerNetStat* _ligerNetStat;
	FBMQTTTrafficTracker* _tracker;
	id<FBMQTTTrafficTracking> _mqttTrafficTracking;
	MQTTTrafficInfo* _mqttTrafficInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_getBackgroundTimeSeconds;
-(void)startAppService;
-(void)stopAppService;
-(void)_onBatteryStateChanged;
-(void)_onBatteryLevelChanged;
-(int)_getBatteryCapacityWithDevice:(id)arg1 ;
-(void)_recordBatteryUsage;
-(void)_recordDataFromPowerMetricsData;
-(void)_recordBackgroundTime:(BOOL)arg1 ;
-(void)_recordLigerNetStats;
-(void)_recordMQTTStats;
-(void)onJustBeforePeriodEnd:(BOOL)arg1 duration:(double)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
