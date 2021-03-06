/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBRecentActivitySentinelManager : NSObject
+(void)processEvent:(id)arg1 ;
+(void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2 extra:(id)arg3 ;
+(void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2 ;
+(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
+(id)recentActivitiesFromCurrentSession:(int)arg1 convertEventsToStrings:(BOOL)arg2 ;
+(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
+(id)customizeActivitiesBeforeReport:(id)arg1 fromSession:(int)arg2 ;
+(id)recentActivitiesFromPreviousSession:(int)arg1 ;
+(double)delayForDevice;
+(void)setupColdStartTimerIfNeeded;
+(void)setupSentinelsIfNeeded;
+(id)bugReportWhiteListedEventList;
+(void)setupCrashReportingChannel;
+(void)setupPerformanceReportingChannel;
+(void)setupBugReportingChannel;
+(void)setupStarRatingsChannel;
+(void)setupComposerChannel;
+(void)setupStartupChannel;
+(void)setupNotificationsAnalyticsReportingChannel;
+(void)setupWebViewChannel;
+(void)setupPlaceTipsReportingChannel;
+(void)setupPagesManagerReportingChannel;
+(void)setupInstantArticleChannel;
+(void)setupWebImageChannel;
+(void)setupLigerChannel;
+(void)setupOmnistoreChannel;
+(void)setupFriendingReportingChannel;
+(void)setupSentinels;
+(void)clearQueue;
@end

