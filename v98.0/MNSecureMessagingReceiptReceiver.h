/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNSecureMessagingMessagingCollectionAddress, MNSecureThreadUpdater, MNSecureMessagingStore, NSObject;

@interface MNSecureMessagingReceiptReceiver : NSObject {

	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	MNSecureMessagingStore* _store;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)processReceiptPacket:(id)arg1 ;
-(id)initWithThreadUpdater:(id)arg1 localAddress:(id)arg2 store:(id)arg3 queue:(id)arg4 ;
@end

