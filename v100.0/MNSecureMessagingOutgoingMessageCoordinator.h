/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingRegisteredDeviceStatusChangeListening.h>
#import <Messenger/MNSecureMessagingThreadEstablishingDelegate.h>

@protocol MNSecureMessagingSendHandling, MNSecureMessagingSingleDeviceCryptoEngine, MNSecureMessageSendListening, MNSecureMessagingRegistrationStateReading, MNSecureMessagingSingleDeviceCryptoStateStoring, MNSecureMessagingThreadEstablishing, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingMessagingCollectionAddress, MNSecureMessagingPacketFactory, MNSecureThreadUpdater, MNSecureMessagingErrorHandler, MNSecureOutgoingMessageQueue, MNSecureMessageRetryStore, NSObject, NSString;

@interface MNSecureMessagingOutgoingMessageCoordinator : NSObject <MNSecureMessagingRegisteredDeviceStatusChangeListening, MNSecureMessagingThreadEstablishingDelegate> {

	MNSecureMessagingStore* _store;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	id<MNSecureMessagingSendHandling> _sendHandler;
	MNSecureMessagingPacketFactory* _factory;
	MNSecureThreadUpdater* _threadUpdater;
	id<MNSecureMessagingSingleDeviceCryptoEngine> _cryptoEngine;
	id<MNSecureMessageSendListening> _sendListener;
	MNSecureMessagingErrorHandler* _errorHandler;
	MNSecureOutgoingMessageQueue* _pendingMessageQueue;
	id<MNSecureMessagingRegistrationStateReading> _registrationStateReader;
	id<MNSecureMessagingSingleDeviceCryptoStateStoring> _cryptoStateStore;
	id<MNSecureMessagingThreadEstablishing> _threadEstablisher;
	MNSecureMessageRetryStore* _retryStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registeredDeviceStatusDidChangeTo:(long long)arg1 from:(long long)arg2 ;
-(void)didEstablishThreadWithThreadKey:(id)arg1 threadSummary:(id)arg2 cryptoState:(id)arg3 ;
-(void)didFailToEstablishThreadWithThreadKey:(id)arg1 error:(id)arg2 ;
-(BOOL)isResponseProcessingAvailable;
-(BOOL)_canSendMessageWithId:(id)arg1 threadKey:(id)arg2 ;
-(void)_encryptAndSendMessage:(id)arg1 forThreadSummary:(id)arg2 withCryptoState:(id)arg3 ;
-(void)_failQueuedMessagesForThreadWithKey:(id)arg1 error:(id)arg2 ;
-(long long)_sendStateBasedOnRetryForMessage:(id)arg1 ;
-(BOOL)_isSystemReady;
-(long long)_sendStateForMessage:(id)arg1 ;
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 sendHandler:(id)arg3 packetFactory:(id)arg4 threadUpdater:(id)arg5 cryptoEngine:(id)arg6 sendListener:(id)arg7 errorHandler:(id)arg8 pendingMessageQueue:(id)arg9 registrationStateReader:(id)arg10 cryptoStateStore:(id)arg11 threadEstablisher:(id)arg12 retryStore:(id)arg13 queue:(id)arg14 ;
-(void)sendMessage:(id)arg1 ;
@end

