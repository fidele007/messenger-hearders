/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadLoadEventMarking <NSObject>
@required
-(void)messagesViewWillReuseViewController:(BOOL)arg1 threadSummary:(id)arg2 offlineThreadId:(id)arg3;
-(void)messagesViewReadyToAppearWithNumberOfMessages:(long long)arg1 composerState:(id)arg2;
-(void)messagesViewDidAppear;
-(void)messagesViewDidOpenThreadSummary:(id)arg1 offlineThreadId:(id)arg2;
-(void)messagesViewDidDisappearWithThreadSummary:(id)arg1 offlineThreadId:(id)arg2;
-(void)threadNavigationWillBeginWithLocalThreadQuery:(id)arg1 eventDescriptor:(id)arg2;
-(void)threadNavigationDidBeginLoadingFromNetwork:(id)arg1;
-(void)threadNavigationDidEndLoadingWithThreadSummary:(id)arg1 offlineThreadId:(id)arg2;
-(void)messagesViewDidFinishPresentingThreadSummary:(id)arg1 offlineThreadId:(id)arg2;

@end

