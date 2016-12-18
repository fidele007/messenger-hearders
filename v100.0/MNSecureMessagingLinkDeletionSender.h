/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingSendHandling, MNSecureMessagingSingleDeviceCryptoEngine, MNSecureMessagingSingleDeviceCryptoStateStoring, OS_dispatch_queue;
@class MNSecureMessagingMessagingCollectionAddress, MNSecureMessagingPacketFactory, NSObject;

@interface MNSecureMessagingLinkDeletionSender : NSObject {

	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	id<MNSecureMessagingSendHandling> _sendHandler;
	MNSecureMessagingPacketFactory* _factory;
	id<MNSecureMessagingSingleDeviceCryptoEngine> _cryptoEngine;
	id<MNSecureMessagingSingleDeviceCryptoStateStoring> _cryptoStateStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)sendLinkDeletedForThread:(id)arg1 ;
-(id)initWithCryptoStateStore:(id)arg1 localAddress:(id)arg2 sendHandler:(id)arg3 packetFactory:(id)arg4 cryptoEngine:(id)arg5 queue:(id)arg6 ;
@end

