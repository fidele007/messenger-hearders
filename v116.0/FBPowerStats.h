/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLocalStatsListener.h>

@protocol FBMQTTTrafficTracking;
@class FBLocalStatsLogger, FBPowerMetricsData, FBLigerNetStat, FBMQTTTrafficTracker, MQTTTrafficInfo, NSString;

@interface FBPowerStats : NSObject <FBLocalStatsListener> {

	FBLocalStatsLogger* _logger;
	atomic<bool> _isRunning;
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
-(int)_getBatteryCapacityWithDevice:(id)arg1 ;
-(void)_recordBattery:(id)arg1 ;
-(void)_recordDisplay:(id)arg1 ;
-(void)_recordEnergy:(id)arg1 ;
-(void)_recordCPU:(id)arg1 ;
-(void)_recordCameraTime:(id)arg1 ;
-(void)_recordNetStats:(id)arg1 ;
-(void)_recordLocation:(id)arg1 ;
-(void)_recordDataFromPowerMetricsData;
-(void)_recordBackgroundTime:(BOOL)arg1 ;
-(void)_recordLigerNetStats;
-(void)_recordMQTTStats;
-(void)onJustBeforePeriodEnd:(BOOL)arg1 duration:(double)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

