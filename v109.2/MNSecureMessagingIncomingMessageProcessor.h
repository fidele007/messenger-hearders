/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingCryptoEngine, MNSecureMessagingPacketReceiverDelegate, MNSecureMessagingIncomingMessageListener, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingAddress, MNSecureThreadUpdater, MNSecureMessagingErrorHandler, MNSecureMessagingRemoteIdentityValidator, MNSecureMessagingSessionCryptoStateStore, MNSecureMessagingCryptoStateUpdater, MNUnprocessedSenderKeyCache, MNSecureMessagingParticipantListUpdateProcessor, NSObject;

@interface MNSecureMessagingIncomingMessageProcessor : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	id<MNSecureMessagingCryptoEngine> _cryptoEngine;
	id<MNSecureMessagingPacketReceiverDelegate> _dispatchDelegateForSelf;
	id<MNSecureMessagingIncomingMessageListener> _listener;
	MNSecureMessagingErrorHandler* _errorHandler;
	MNSecureMessagingRemoteIdentityValidator* _identityValidator;
	MNSecureMessagingSessionCryptoStateStore* _cryptoStateStore;
	MNSecureMessagingCryptoStateUpdater* _cryptoStateUpdater;
	MNUnprocessedSenderKeyCache* _unprocessedSenderKeyCache;
	MNSecureMessagingParticipantListUpdateProcessor* _participantListUpdater;
	BOOL _multiDeviceEnabled;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)_canDecryptPacket:(id)arg1 from:(id)arg2 threadWithKey:(id)arg3 ;
-(BOOL)_didAlreadyReceivePacket:(id)arg1 ;
-(BOOL)preProcessMessagePacket:(id)arg1 from:(id)arg2 threadWithKey:(id)arg3 ;
-(BOOL)_processMessagePacket:(id)arg1 from:(id)arg2 threadWithKey:(id)arg3 ;
-(BOOL)_processIdentityOfMessagePacket:(id)arg1 from:(id)arg2 threadWithKey:(id)arg3 ;
-(BOOL)processMessagePacket:(id)arg1 isReplay:(BOOL)arg2 ;
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 threadUpdater:(id)arg3 cryptoEngine:(id)arg4 listener:(id)arg5 errorHandler:(id)arg6 identityValidator:(id)arg7 cryptoStateStore:(id)arg8 cryptoStateUpdater:(id)arg9 unprocessedSenderKeyCache:(id)arg10 participantListUpdater:(id)arg11 multiDeviceEnabled:(BOOL)arg12 queue:(id)arg13 ;
@end

