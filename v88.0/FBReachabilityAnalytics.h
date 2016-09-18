/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityQualityAnalyticsLogger.h>

@protocol OS_dispatch_queue;
@class FBReachabilityAnnouncer, FBAnalytics, FBRadioTechnologyFetcher, NSObject, NSString;

@interface FBReachabilityAnalytics : NSObject <FBReachabilityQualityAnalyticsLogger> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBAnalytics* _analytics;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createWithAndAddToReachabilityAnnouncer:(id)arg1 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 analytics:(id)arg2 radioTechnologyFetcher:(id)arg3 ;
-(void)_asyncLogEvent:(id)arg1 key:(id)arg2 estimate:(double)arg3 ;
-(void)logDownloadBandwidthUpdate:(double)arg1 ;
-(void)logUploadBandwidthUpdate:(double)arg1 ;
-(void)logLatencyUpdate:(double)arg1 ;
@end

