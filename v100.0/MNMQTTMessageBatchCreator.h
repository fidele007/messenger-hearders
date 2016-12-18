/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNMessageSendStateStore, MNMessageSendQueueStore, NSObject;

@interface MNMQTTMessageBatchCreator : NSObject {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)mqttMessageBatchBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2 ;
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 queue:(id)arg3 ;
@end

