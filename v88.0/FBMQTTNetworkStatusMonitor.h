/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMQTTNetworkDetectDelegate.h>
#import <Messenger/FBMQTTAdditionalAnalyticsLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, FBMQTTNetworkStatusChangedListeningAnnouncer, FBMQTTNetworkConnectivityDetector, NSString, FBRadioTechnologyFetcher;

@interface FBMQTTNetworkStatusMonitor : NSObject <FBMQTTNetworkDetectDelegate, FBMQTTAdditionalAnalyticsLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	FBMQTTNetworkStatusChangedListeningAnnouncer* _eventAnnouncer;
	FBMQTTNetworkConnectivityDetector* _networkDetector;
	NSString* _currentHostName;
	long long _currentNetworkStatus;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	long long _networkCategory;

}

@property (nonatomic,readonly) long long networkCategory;              //@synthesize networkCategory=_networkCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 announcer:(id)arg2 ;
-(void)setupMonitoringForHostName:(id)arg1 ;
-(long long)networkCategory;
-(void)onMqttConnectFailure:(id)arg1 appForeground:(BOOL)arg2 ;
-(void)networkDetectFinished:(BOOL)arg1 ;
-(void)onReachabilityChanged:(unsigned)arg1 ;
-(void)_setupReachabilityWithHostName:(id)arg1 ;
-(void)_unsetReachability;
-(void)_fireNetworkStatusChangedEvent:(long long)arg1 ;
-(id)_currentRadioType;
-(void)_refreshNetworkCategory;
-(id)analyticsLogging;
-(unsigned)currentReachabilityFlags;
-(void)tearDown;
-(long long)currentNetworkStatus;
@end

