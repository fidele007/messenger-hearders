/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagesModelControllerDelegate <NSObject>
@required
-(void)messagesModelController:(id)arg1 didUpdateThreadViewModelWithLoadResult:(id)arg2;
-(void)messagesModelController:(id)arg1 didSendMessage:(id)arg2;
-(void)messagesModelController:(id)arg1 didFailToSendMessage:(id)arg2 failure:(id)arg3;
-(void)messagesModelControllerDidBeginNetworkFetch:(id)arg1;
-(void)messagesModelControllerDidEndNetworkFetch:(id)arg1;
-(void)messagesModelController:(id)arg1 didFailFetchMessagesWithError:(id)arg2;
-(void)messagesModelControllerDidBeginMoreMessagesFetch:(id)arg1 isLongOperation:(BOOL)arg2;
-(void)messagesModelControllerDidEndMoreMessagesFetch:(id)arg1;
-(void)messagesModelController:(id)arg1 didFailFetchMoreMessagesWithError:(id)arg2;
-(void)messagesModelControllerDidFetchUnreadMessages:(id)arg1;
-(void)messagesModelController:(id)arg1 didFailFetchUnreadMessagesWithError:(id)arg2;
-(void)messagesModelControllerDidDetectThreadDeleted:(id)arg1 withPrompt:(BOOL)arg2;
-(void)messagesModelControllerDidFetchUser:(id)arg1;
-(void)messagesModelControllerDidChangeThreadName:(id)arg1;
-(void)messagesModelController:(id)arg1 didFailToDeleteMessageWithId:(id)arg2 withError:(id)arg3;

@end
