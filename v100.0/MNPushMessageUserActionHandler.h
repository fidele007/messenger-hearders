/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class FBMThreadMessageSender, FBWebRTCCallStarter, MNThreadUpdateRunningService, NSObject, FBAnalytics, NSString;

@interface MNPushMessageUserActionHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	FBMThreadMessageSender* _threadMessageSender;
	id<MNAuthenticationManager> _authManager;
	FBWebRTCCallStarter* _callStarter;
	MNThreadUpdateRunningService* _summaryUpdateRunningService;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_muteThreadForThreadKey:(id)arg1 ;
-(void)_sendLikeMessageForThreadKey:(id)arg1 messageLifeTime:(long long)arg2 ;
-(void)_sendReply:(id)arg1 forThreadKey:(id)arg2 messageLifeTime:(long long)arg3 ;
-(void)_returnCall:(id)arg1 ;
-(void)_joinMultiwayCallFromNotificationMessage:(id)arg1 threadSummary:(id)arg2 ;
-(void)_presentThreadMutingLocalNotificationWithThreadKey:(id)arg1 type:(id)arg2 alertBody:(id)arg3 alertAction:(id)arg4 soundName:(id)arg5 ;
-(void)_didMuteThreadWithKey:(id)arg1 until:(long long)arg2 ;
-(void)_didFailToMuteThreadWithKey:(id)arg1 withError:(id)arg2 ;
-(id)initWithThreadMessageSender:(id)arg1 summaryUpdateRunningService:(id)arg2 authManager:(id)arg3 callStarter:(id)arg4 queue:(id)arg5 analytics:(id)arg6 ;
@end

