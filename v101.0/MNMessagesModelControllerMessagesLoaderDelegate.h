/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagesModelControllerMessagesLoaderDelegate <NSObject>
@required
-(void)messagesLoader:(id)arg1 didLoadMoreMessagesWithThreadViewModelLoadResult:(id)arg2;
-(void)messagesLoader:(id)arg1 didLoadUnreadMessagesWithThreadViewModelLoadResult:(id)arg2;
-(void)messagesLoader:(id)arg1 didBeginLoadingMoreMessages:(BOOL)arg2 withPreliminaryResult:(id)arg3;
-(void)messagesLoader:(id)arg1 didFailLoadingMoreMessagesWithError:(id)arg2;
-(void)messagesLoader:(id)arg1 didFailLoadingUnreadMessagesWithError:(id)arg2;

@end

