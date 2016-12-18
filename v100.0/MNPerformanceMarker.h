/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)messagesViewWillReuseViewController:(BOOL)arg1 threadViewModel:(id)arg2 ;
-(void)messagesViewReadyToAppearWithNumberOfMessages:(long long)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppear;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappearWithThreadViewModel:(id)arg1 ;
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
-(void)threadNavigationWillBeginWithLocalThreadQuery:(id)arg1 eventDescriptor:(id)arg2 ;
-(void)threadNavigationDidBeginLoadingFromNetwork:(id)arg1 ;
-(void)threadNavigationDidEndLoadingWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidFinishPresentingThreadViewModel:(id)arg1 ;
-(void)threadListDidStartScrollingWithModule:(id)arg1 ;
-(void)threadListDidEndScrollingWithModule:(id)arg1 ;
-(void)threadListWillDisplayCellWithType:(id)arg1 ;
-(id)initWithAnalyticsPerfLogger:(id)arg1 analytics:(id)arg2 ;
@end

