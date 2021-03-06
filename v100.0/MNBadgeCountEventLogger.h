/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBClock, OS_dispatch_queue;
@class FBUserSession, NSUserDefaults, FBAnalytics, NSObject;

@interface MNBadgeCountEventLogger : NSObject {

	FBUserSession* _userSession;
	NSUserDefaults* _userDefaults;
	id<FBClock> _clock;
	FBAnalytics* _analytics;
	double _logInterval;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_clearHistory;
-(void)_executeAnalyticsWrite:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 userDefaults:(id)arg2 clock:(id)arg3 analytics:(id)arg4 queue:(id)arg5 ;
-(void)writeToAnalyticsIfNecessary:(id)arg1 ;
@end

