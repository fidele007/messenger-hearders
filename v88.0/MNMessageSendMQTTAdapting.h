/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendMQTTAdapting <NSObject>
@required
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2 callbackQueue:(id)arg3 publishBlock:(/*^block*/id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6;
-(void)sendMessageBatchViaMQTT:(id)arg1 callbackQueue:(id)arg2 publishBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4;
-(BOOL)canSendMessageViaMQTT:(id)arg1;
-(BOOL)isRetriableMQTTError:(id)arg1;
-(BOOL)mqttStatusEligibleForSend;
-(BOOL)isMessageBatchSendingSupported;

@end

