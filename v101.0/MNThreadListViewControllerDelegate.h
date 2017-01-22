/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadListViewControllerDelegate <NSObject>
@required
-(void)threadListViewController:(id)arg1 didSelectFailedStatusIndicatorForThreadWithLocalThreadKey:(id)arg2;
-(void)threadListViewController:(id)arg1 didSelectThreadWithLocalThreadKey:(id)arg2 sendConversionContext:(id)arg3;
-(void)threadListViewController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2;
-(void)threadListViewController:(id)arg1 didSelectSearchResultWithViewController:(id)arg2;
-(void)threadListViewControllerDidPressNewMessageButton:(id)arg1;
-(void)threadListViewControllerDidTapMessageRequestsCell:(id)arg1;
-(void)threadListViewControllerDidDisplayList:(id)arg1;
-(void)threadListViewControllerDidLoadDataModel:(id)arg1;
-(void)threadListViewControllerDidFailToLoadDataModel:(id)arg1;
-(void)threadListViewControllerDidTapShowMore:(id)arg1;
-(void)threadListViewControllerWillAppear:(id)arg1;
-(void)threadListViewControllerDidAppear:(id)arg1;
-(void)threadListViewControllerWillDisappear:(id)arg1;
-(void)threadListViewControllerDidDisappear:(id)arg1;
-(void)threadListViewControllerWillBeginSearch:(id)arg1;
-(void)threadListViewControllerDidBeginSearch:(id)arg1;
-(void)threadListViewControllerWillEndSearch:(id)arg1;
-(void)threadListViewControllerDidEndSearch:(id)arg1;
-(void)threadListViewController:(id)arg1 didTapURL:(id)arg2;
-(void)threadListViewController:(id)arg1 didTapShareWithContent:(id)arg2 sendConversionContext:(id)arg3;
-(void)threadListViewController:(id)arg1 wantsToPushViewController:(id)arg2;
-(void)threadListViewController:(id)arg1 didSelectMontageWithIdentifier:(id)arg2 wasUnreadByViewer:(BOOL)arg3 allInboxMontages:(id)arg4 entryPoint:(id)arg5;
-(void)threadListViewControllerDidTapOpenMontageComposer:(id)arg1;
-(void)threadListViewController:(id)arg1 didSelectContentSubscriptionPublisherWithID:(id)arg2;
-(void)threadListViewControllerDidSelectSeeAllRecentMessages:(id)arg1;
-(void)threadListViewControllerDidSelectCreateRoom:(id)arg1;
-(void)threadListViewController:(id)arg1 didSelectJoinableRoomWithHash:(id)arg2 loggingData:(id)arg3 loggingSource:(id)arg4;
-(void)threadListViewControllerDidSelectDirectM:(id)arg1;

@end
