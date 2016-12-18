/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBReachabilityMonitorDelegate.h>
#import <Messenger/FBReachabilityQualityMonitorDelegate.h>

@protocol FBReachabilityQualityAnalyticsLogger, OS_dispatch_queue;
@class FBReachabilityMonitor, FBReachabilityQualityMonitor, FBReachabilityListenerAnnouncer, NSNotificationCenter, NSObject, NSString;

@interface FBReachabilityAnnouncer : NSObject <FBReachabilityMonitorDelegate, FBReachabilityQualityMonitorDelegate> {

	unsigned long long _currentReachabilityState;
	unsigned long long _previousReachabilityState;
	unsigned long long _backgroundedReachabilityState;
	unsigned long long _currentDownloadBandwidthState;
	unsigned long long _previousDownloadBandwidthState;
	unsigned long long _backgroundedDownloadBandwidthState;
	unsigned long long _currentUploadBandwidthState;
	unsigned long long _previousUploadBandwidthState;
	unsigned long long _backgroundedUploadBandwidthState;
	unsigned long long _currentLatencyState;
	unsigned long long _previousLatencyState;
	unsigned long long _backgroundedLatencyState;
	FBReachabilityMonitor* _ipv4ReachabilityMonitor;
	FBReachabilityMonitor* _ipv6ReachabilityMonitor;
	FBReachabilityQualityMonitor* _qualityMonitor;
	FBReachabilityListenerAnnouncer* _codeGenForegroundAnnouncer;
	FBReachabilityListenerAnnouncer* _codeGenBackgroundAnnouncer;
	NSNotificationCenter* _notificationCenter;
	BOOL _backgrounded;
	BOOL _issueReachabilityUpdateOnForeground;
	BOOL _issueDownloadBandwidthUpdateOnForeground;
	BOOL _issueUploadBandwidthUpdateOnForeground;
	BOOL _issueLatencyUpdateOnForeground;
	id<FBReachabilityQualityAnalyticsLogger> _analyticsQualityLogger;
	BOOL _logNextDownloadBandwidthMeasurement;
	BOOL _logNextUploadBandwidthMeasurement;
	BOOL _logNextLatencyMeasurement;
	NSObject*<OS_dispatch_queue> _targetQueue;
	mutex _reachabilityLock;
	mutex _qualityLock;

}

@property (nonatomic,readonly) unsigned long long currentReachabilityState; 
@property (nonatomic,readonly) double currentDownloadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate currentDownloadBandwidthEstimateDetail; 
@property (nonatomic,readonly) unsigned long long currentDownloadBandwidthState; 
@property (nonatomic,readonly) double currentUploadBandwidthEstimate; 
@property (nonatomic,readonly) FBQualityEstimate currentUploadBandwidthEstimateDetail; 
@property (nonatomic,readonly) unsigned long long currentUploadBandwidthState; 
@property (nonatomic,readonly) double currentLatencyEstimate; 
@property (nonatomic,readonly) FBQualityEstimate currentLatencyEstimateDetail; 
@property (nonatomic,readonly) unsigned long long currentLatencyState; 
@property (nonatomic,retain) id<FBReachabilityQualityAnalyticsLogger> analyticsQualityLogger;              //@synthesize analyticsQualityLogger=_analyticsQualityLogger - In the implementation block
@property (nonatomic,readonly) id<FBReachabilityQualityDelegate> qualityDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(unsigned long long)currentReachabilityState;
-(unsigned long long)currentDownloadBandwidthState;
-(unsigned long long)currentUploadBandwidthState;
-(double)currentUploadBandwidthEstimate;
-(double)currentDownloadBandwidthEstimate;
-(FBQualityEstimate)currentDownloadBandwidthEstimateDetail;
-(unsigned long long)currentLatencyState;
-(void)addListener:(id)arg1 receiveBackgroundUpdates:(BOOL)arg2 ;
-(void)setAnalyticsQualityLogger:(id<FBReachabilityQualityAnalyticsLogger>)arg1 ;
-(id)initWithCodeGenForegroundAnnouncer:(id)arg1 codeGenBackgroundAnnouncer:(id)arg2 targetQueue:(id)arg3 ipv4ReachabilityMonitorFactory:(/*^block*/id)arg4 ipv6ReachabilityMonitorFactory:(/*^block*/id)arg5 qualityMonitorFactory:(/*^block*/id)arg6 notificationCenter:(id)arg7 ;
-(void)didBecomeActiveHandler;
-(void)didEnterBackgroundHandler;
-(void)setAnalyticsQualityLoggerHandler:(id)arg1 ;
-(void)addListenerHandler:(id)arg1 receiveBackgroundUpdates:(BOOL)arg2 ;
-(FBQualityEstimate)currentUploadBandwidthEstimateDetail;
-(double)currentLatencyEstimate;
-(FBQualityEstimate)currentLatencyEstimateDetail;
-(id<FBReachabilityQualityAnalyticsLogger>)analyticsQualityLogger;
-(void)reachabilityStateChanged;
-(void)downloadBandwidthEstimateChanged:(double)arg1 isFallback:(BOOL)arg2 ;
-(void)uploadBandwidthEstimateChanged:(double)arg1 isFallback:(BOOL)arg2 ;
-(void)latencyEstimateChanged:(double)arg1 isFallback:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id<FBReachabilityQualityDelegate>)qualityDelegate;
-(void)didBecomeActive;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)didEnterBackground;
@end

