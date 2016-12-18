/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNInboxViewControllerDelegate <NSObject>
@required
-(void)inboxViewController:(id)arg1 didSelectThreadWithLocalThreadKey:(id)arg2 sendConversionContext:(id)arg3;
-(void)inboxViewController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2;
-(void)inboxViewController:(id)arg1 didSelectSearchResultWithViewController:(id)arg2;
-(void)inboxViewController:(id)arg1 didSelectFailedStatusIndicatorForThreadWithLocalThreadKey:(id)arg2;
-(void)inboxViewControllerDidPressCompose:(id)arg1;
-(void)inboxViewControllerDidPressComposeWithFlowers:(id)arg1;
-(void)inboxViewControllerDidPressMAssistant:(id)arg1;
-(void)inboxViewControllerDidPressSettings:(id)arg1;
-(void)inboxViewControllerDidSelectPendingRequestsFolderThreads:(id)arg1;
-(void)inboxViewController:(id)arg1 didTapURL:(id)arg2;
-(void)inboxViewController:(id)arg1 didTapShareWithContent:(id)arg2 sendConversionContext:(id)arg3;
-(void)inboxViewController:(id)arg1 wantsToPushViewController:(id)arg2;
-(void)inboxViewController:(id)arg1 didSelectMontageWithIdentifier:(id)arg2 allInboxMontages:(id)arg3 entryPoint:(id)arg4;
-(void)inboxViewController:(id)arg1 didSelectContentSubscriptionPublisherWithID:(id)arg2;
-(BOOL)inboxViewControllerShouldDisplayMeButton:(id)arg1;
-(void)inboxViewController:(id)arg1 didSelectMontageComposerWithConfiguration:(id)arg2 fromEntryPoint:(long long)arg3;
-(void)inboxViewControllerDidSelectCreateRoom:(id)arg1;
-(void)inboxViewController:(id)arg1 didSelectJoinableRoomWithHash:(id)arg2 loggingData:(id)arg3 loggingSource:(id)arg4;

@end

