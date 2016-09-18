/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNInAppNotificationManaging, MNAuthenticationManager, MNPushMessageReceivedListening, MNGlobalMuteStatusReading, OS_dispatch_queue, MNPushMessageChainedHandling;
@class MNSoundController, MNNotificationPreviewGenerator, MNUserStore, UIApplication, FBMAppProperties, MNThreadStore, OrcaPushRegistrar, MNUserSettings, FBMPushLogger, NSObject, FBCache, NSString;

@interface MNPushMessageNotificationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	id<MNInAppNotificationManaging> _inAppNotificationManager;
	MNSoundController* _soundController;
	MNNotificationPreviewGenerator* _notificationPreviewGenerator;
	MNUserStore* _userStore;
	UIApplication* _application;
	FBMAppProperties* _appProperties;
	id<MNAuthenticationManager> _authManager;
	MNThreadStore* _threadStore;
	OrcaPushRegistrar* _pushRegistrar;
	MNUserSettings* _userSettings;
	FBMPushLogger* _pushLogger;
	id<MNPushMessageReceivedListening> _pushMessageReceivedListener;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	FBCache* _notifiedMessageIdCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_postNotificationForMessage:(id)arg1 syncedThreadKey:(id)arg2 attachment:(id)arg3 messageId:(id)arg4 offlineThreadingId:(id)arg5 pushSource:(unsigned long long)arg6 supportsPreview:(BOOL)arg7 isLaunchedByUser:(BOOL)arg8 threadSummary:(id)arg9 ;
-(void)_continueProcessingSyncMessage:(id)arg1 withFetchedThreadSummary:(id)arg2 ;
-(void)_playSoundForMessageIfNeededForMessageWithTimestamp:(unsigned long long)arg1 attachment:(id)arg2 threadSummary:(id)arg3 ;
-(void)_showInAppNotificationIfNeededForThread:(id)arg1 message:(id)arg2 pushSource:(unsigned long long)arg3 ;
-(id)initWithInAppNotificationManager:(id)arg1 soundController:(id)arg2 notificationPreviewGenerator:(id)arg3 userStore:(id)arg4 application:(id)arg5 appProperties:(id)arg6 authManager:(id)arg7 pushRegistrar:(id)arg8 userSettings:(id)arg9 pushLogger:(id)arg10 pushMessageReceivedListener:(id)arg11 threadStore:(id)arg12 globalMuteStatusReader:(id)arg13 queue:(id)arg14 ;
-(void)_postLocalNotificationForMessageIfNeeded:(id)arg1 threadSummary:(id)arg2 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
@end

