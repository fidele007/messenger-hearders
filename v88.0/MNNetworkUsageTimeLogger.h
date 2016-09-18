/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics;

@interface MNNetworkUsageTimeLogger : NSObject {

	FBAnalytics* _analytics;

}
-(id)initWithAnalytics:(id)arg1 ;
-(void)logTimeSpentWithRadioInFullPower:(double)arg1 standby:(double)arg2 idle:(double)arg3 idleWakeups:(long long)arg4 networkerRequestCount:(long long)arg5 mqttRequestCount:(long long)arg6 ;
-(void)logFullPowerAlertTriggered:(id)arg1 ;
@end

