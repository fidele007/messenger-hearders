/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingViewersOtherDeviceReadReceiptListening, OS_dispatch_queue;
@class MNSecureMessagingAddress, MNSecureThreadUpdater, MNSecureMessagingStore, NSObject;

@interface MNSecureMessagingReceiptReceiver : NSObject {

	MNSecureMessagingAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	id<MNSecureMessagingViewersOtherDeviceReadReceiptListening> _readReceiptListener;
	MNSecureMessagingStore* _store;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)processReceiptPacket:(id)arg1 ;
-(id)initWithThreadUpdater:(id)arg1 localAddress:(id)arg2 readReceiptListener:(id)arg3 store:(id)arg4 queue:(id)arg5 ;
@end

