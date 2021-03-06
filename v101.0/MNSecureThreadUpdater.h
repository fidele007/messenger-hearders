/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureThreadSubscribing, MNSecureMessagingReadReceiptSending, MNSecureMessagingThreadRequestAcceptListener, MNSecureThreadMessageReceivedListening, MNSecureMessageSendListening, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingMessagingCollectionAddress, MNSecureMessagingLinkDeletionSender, MNBouncedMessageTracker, MNSecureMessagingSessionCryptoStateStore, FBAnalytics, NSObject;

@interface MNSecureThreadUpdater : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	id<MNSecureThreadSubscribing> _threadSubscriber;
	id<MNSecureMessagingReadReceiptSending> _readReceiptSender;
	MNSecureMessagingLinkDeletionSender* _linkDeletedSender;
	id<MNSecureMessagingThreadRequestAcceptListener> _threadRequestAcceptListener;
	id<MNSecureThreadMessageReceivedListening> _receivedMessageListener;
	id<MNSecureMessageSendListening> _sendListener;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	MNSecureMessagingSessionCryptoStateStore* _cryptoStateStore;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)applySummaryUpdate:(id)arg1 ;
-(BOOL)persistThread:(id)arg1 withThreadStatus:(unsigned long long)arg2 ;
-(BOOL)applyMessage:(id)arg1 andUpdateThread:(id)arg2 ;
-(id)_threadsummaryForKey:(id)arg1 ;
-(id)_persistJobs:(id)arg1 andNotifyUpdatedThread:(id)arg2 ;
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 threadSubscriber:(id)arg3 receivedMessageListener:(id)arg4 readReceiptSender:(id)arg5 linkDeletedSender:(id)arg6 sendListener:(id)arg7 bouncedMessageTracker:(id)arg8 cryptoStateStore:(id)arg9 analytics:(id)arg10 queue:(id)arg11 ;
-(id)applyOutgoingMessage:(id)arg1 andUpdateThread:(id)arg2 reportableContent:(id)arg3 ;
-(void)markMessageAsSent:(id)arg1 serverTimestamp:(unsigned long long)arg2 serverSignature:(id)arg3 ;
-(void)removePendingMessage:(id)arg1 andCryptoState:(BOOL)arg2 ;
-(void)markThreadDelivered:(id)arg1 until:(unsigned long long)arg2 ;
-(void)markThreadRead:(id)arg1 until:(unsigned long long)arg2 ;
@end

