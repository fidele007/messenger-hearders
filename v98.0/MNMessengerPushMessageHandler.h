/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessagePostHandlingDelegate.h>
#import <Messenger/MNSyncMessageHandlerListening.h>
#import <Messenger/MNAPNSMessageDiskRestoreListening.h>

@protocol MNPushMessageChainedHandling, MNPushMessageReceivedListening;
@class NSString;

@interface MNMessengerPushMessageHandler : NSObject <MNAPNSMessagePostHandlingDelegate, MNSyncMessageHandlerListening, MNAPNSMessageDiskRestoreListening> {

	id<MNPushMessageChainedHandling> _handlerChain;
	id<MNPushMessageReceivedListening> _pushMessageReceivedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(id)initWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 experimentManager:(id)arg5 pushLogger:(id)arg6 attachmentUtils:(id)arg7 sharedMediaModelCache:(id)arg8 inAppNotificationManager:(id)arg9 threadNavigationCoordinator:(id)arg10 soundController:(id)arg11 notificationPreviewGenerator:(id)arg12 userStore:(id)arg13 application:(id)arg14 pushRegistrar:(id)arg15 userSettings:(id)arg16 pushMessageReceivedListener:(id)arg17 threadMessageSender:(id)arg18 summaryUpdateRunningService:(id)arg19 callStarter:(id)arg20 fetchCompletionHandlerExecutor:(id)arg21 servicesInitializedDelayer:(id)arg22 userSession:(id)arg23 cdnPhotoDownloader:(id)arg24 globalMuteStatusReader:(id)arg25 threadMediaFetcherFactory:(id)arg26 analytics:(id)arg27 ;
-(id)_wireUpHandlerChainWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 experimentManager:(id)arg5 pushLogger:(id)arg6 attachmentUtils:(id)arg7 sharedMediaModelCache:(id)arg8 inAppNotificationManager:(id)arg9 threadNavigationCoordinator:(id)arg10 soundController:(id)arg11 notificationPreviewGenerator:(id)arg12 userStore:(id)arg13 application:(id)arg14 pushRegistrar:(id)arg15 userSettings:(id)arg16 pushMessageReceivedListener:(id)arg17 threadMessageSender:(id)arg18 summaryUpdateRunningService:(id)arg19 callStarter:(id)arg20 fetchCompletionHandlerExecutor:(id)arg21 servicesInitializedDelayer:(id)arg22 userSession:(id)arg23 cdnPhotoDownloader:(id)arg24 globalMuteStatusReader:(id)arg25 threadMediaFetcherFactory:(id)arg26 analytics:(id)arg27 ;
-(void)beginPostHandlingForAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 networkFetchCompletionBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
@end

