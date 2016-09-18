/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPushEventListener.h>
#import <Messenger/FBBackgroundTaskListener.h>
#import <Messenger/FBBackgroundURLSessionHandlingListener.h>

@protocol FBUsageTimeTracking, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, FBBackgroundTaskListenerAnnouncer, NSString;

@interface FBUsageTimeMonitor : NSObject <FBPushEventListener, FBBackgroundTaskListener, FBBackgroundURLSessionHandlingListener> {

	id<FBUsageTimeTracking> _usageTimeTracking;
	NSObject*<OS_dispatch_queue> _queue;
	FBBackgroundTaskListenerAnnouncer* _backgroundTaskAnnouncer;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerRunning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didStartHandlingBackgroundNetworkResponseWithIdentifier:(id)arg1 ;
-(void)didEndHandlingBackgroundNetworkResponseWithIdentifier:(id)arg1 ;
-(id)initWithDeviceClock:(id)arg1 clock:(id)arg2 bundle:(id)arg3 analytics:(id)arg4 pushEventAnnouncer:(id)arg5 backgroundTaskAnnouncer:(id)arg6 backgroundURLSessionAnnouncer:(id)arg7 ;
-(void)didExpireBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)didStartBackgroundTaskWithIdentifier:(unsigned long long)arg1 taskName:(id)arg2 ;
-(void)didFinishBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)willStartHandlingAPNSPushWithToken:(unsigned long long)arg1 ;
-(void)didFinishHandlingAPNSPushWithToken:(unsigned long long)arg1 ;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(void)_willEndBackgroundFetch;
-(void)_willStartPassiveLocationFetch:(id)arg1 ;
-(void)_willEndPassiveLocationFetch:(id)arg1 ;
-(void)_audioRouteChanged:(id)arg1 ;
-(void)_attachPowerLogsToBug:(id)arg1 ;
-(void)didReceivePushKitPayload;
-(void)dealloc;
-(void)_startTimer;
-(void)_stopTimer;
@end

