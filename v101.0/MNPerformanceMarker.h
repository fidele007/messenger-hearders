/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPerformanceMarking.h>

@class MNMessageSendExperienceTracker, MNThreadLoadPerfLogger, MNInboxScrollPerfTracker, NSString;

@interface MNPerformanceMarker : NSObject <MNPerformanceMarking> {

	MNMessageSendExperienceTracker* _messageSendExperienceTracker;
	MNThreadLoadPerfLogger* _threadLoadPerfLogger;
	MNInboxScrollPerfTracker* _inboxScrollPerfTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesViewWillReuseViewController:(BOOL)arg1 threadSummary:(id)arg2 offlineThreadId:(id)arg3 ;
-(void)messagesViewReadyToAppearWithNumberOfMessages:(long long)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppear;
-(void)messagesViewDidOpenThreadSummary:(id)arg1 offlineThreadId:(id)arg2 ;
-(void)messagesViewDidDisappearWithThreadSummary:(id)arg1 offlineThreadId:(id)arg2 ;
-(void)threadNavigationWillBeginWithLocalThreadQuery:(id)arg1 eventDescriptor:(id)arg2 ;
-(void)threadNavigationDidBeginLoadingFromNetwork:(id)arg1 ;
-(void)threadNavigationDidEndLoadingWithThreadSummary:(id)arg1 offlineThreadId:(id)arg2 ;
-(void)didQueueMessageSend;
-(void)didDequeueMessageSend;
-(void)userDidTapGroupTabCell;
-(void)userDidPressSend;
-(void)messagesCollectionViewDidCompleteDrawing;
-(void)userDidTapInboxCell;
-(void)userDidTapPeopleTabCell;
-(void)userDidTapSearchCell;
-(void)userDidTapPushNotification;
-(void)userDidTapInAppNotification;
-(void)userDidTapMessageInThreadsDetail;
-(void)userDidTapMessageInUserInfo;
-(void)userDidDismissCall;
-(void)userDidTriggerURL;
-(void)userDidTapMThread;
-(void)messagesViewDidFinishPresentingThreadSummary:(id)arg1 offlineThreadId:(id)arg2 ;
-(void)threadListDidStartScrollingWithModule:(id)arg1 ;
-(void)threadListDidEndScrollingWithModule:(id)arg1 ;
-(void)threadListWillDisplayCellWithType:(id)arg1 ;
-(id)initWithAnalyticsPerfLogger:(id)arg1 analytics:(id)arg2 ;
@end
