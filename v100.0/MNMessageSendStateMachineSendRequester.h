/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendStateMachineSendRequester <NSObject>
@required
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageViaExtension:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageBatchViaMQTTBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2;
-(void)sendMessageViaGraph:(id)arg1 preparedAttachment:(id)arg2;
-(void)retryMessage:(id)arg1;
-(void)prepareAttachment:(id)arg1 forMessage:(id)arg2;
-(void)cancelMessage:(id)arg1;

@end
