/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingCryptoStateLoaderListening.h>

@protocol MNAuthenticationManager, MNSecureMessageSendListening, MNSecureMessagingStartupStateMachineListener, MNSecureThreadMessageReceivedListening, MNSecureMessagingSendHandlingDelegate, OS_dispatch_queue, MNSecureMessagingMasterKeyProviding, MNSecureMessagingBadgeCounterListening, MNSecureMessagingPacketReceiverDelegate, MNSecureMessagingSendHandling, MNSecureMessagingRegistrationStateUpdating, MNSecureMessagingCryptoStateSaving, MNSecureMessagingRegistrationStateReading, MNSecureMessagingCryptoKeychainStoreReading, MNGlobalMuteStatusReading, FBClock;
@class FBUserSession, FBOmnistore, MNSecureMessagingStoredProcedureRunner, FBAnalytics, MNBadgeCountUpdateService, MNSecureMessagingSendListeningEventRouter, MNUnprotectedCustomBlobStore, MNSecureMessageSendRetrier, NSObject, MNSecureMessagingBadgeCounter, MNSecureMessagingPacketFactory, MNSecureMessagingReceiptSender, MNSecureMessagingPacketReceiver, MNSecureMessagingStore, MNSecureMessagingSessionCryptoStateStore, MNBouncedMessageTracker, MNSecureMessagingSingleDeviceCryptoEngineCImpl, MNSecureMessagingMultiDeviceCryptoEngineCImpl, MNSecureMessagingPreKeyBundleGenerator, MNSecureMessagingRemoteIdentityValidator, MNSecureMessagingIncomingMessageListenerAnnouncer, MNSecureThreadCacheInvalidatingAnnouncementInterceptor, MNSecureMessagingRegistrationRunner, MNSecureMessagingDeviceStatusUpdateStoredProcedureRunnerListeningAnnouncer, FBMigrationRunner, MNLocalNotificationController, FBMobileConfigContextManager, NSString;

@interface MNSecureMessagingStartupStateMachine : NSObject <MNSecureMessagingCryptoStateLoaderListening> {

	FBUserSession* _session;
	FBOmnistore* _omnistore;
	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	FBAnalytics* _analytics;
	MNBadgeCountUpdateService* _badgeCountService;
	id<MNAuthenticationManager> _authManager;
	id<MNSecureMessageSendListening> _sendListener;
	MNSecureMessagingSendListeningEventRouter* _sendListeningEventRouter;
	id<MNSecureMessagingStartupStateMachineListener> _startupListener;
	id<MNSecureThreadMessageReceivedListening> _receivedMessageListener;
	id<MNSecureMessagingSendHandlingDelegate> _sendHandlingDelegate;
	MNUnprotectedCustomBlobStore* _unprotecedBlobStore;
	MNSecureMessageSendRetrier* _sendRetrier;
	NSObject*<OS_dispatch_queue> _storeQueue;
	MNSecureMessagingBadgeCounter* _badgeCounter;
	MNSecureMessagingPacketFactory* _packetFactory;
	MNSecureMessagingReceiptSender* _receiptSender;
	MNSecureMessagingPacketReceiver* _packetReceiver;
	MNSecureMessagingStore* _messagingStore;
	MNSecureMessagingSessionCryptoStateStore* _cryptoStateStore;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	MNSecureMessagingSingleDeviceCryptoEngineCImpl* _messagingCryptoEngine;
	MNSecureMessagingSingleDeviceCryptoEngineCImpl* _externalCryptoEngine;
	MNSecureMessagingMultiDeviceCryptoEngineCImpl* _multiCryptoEngine;
	id<MNSecureMessagingMasterKeyProviding> _masterKeyProvider;
	MNSecureMessagingPreKeyBundleGenerator* _preKeyBundleGenerator;
	MNSecureMessagingRemoteIdentityValidator* _identityValidator;
	MNSecureMessagingIncomingMessageListenerAnnouncer* _messageAnnouncer;
	MNSecureThreadCacheInvalidatingAnnouncementInterceptor* _cacheAnnouncementCoordinator;
	id<MNSecureMessagingBadgeCounterListening> _notificationPosterBadgeCountListenerDispatched;
	id<MNSecureMessagingPacketReceiverDelegate> _messagingPacketReceiverDelegateDispatched;
	id<MNSecureMessagingSendHandling> _sendHandler;
	id<MNSecureMessagingRegistrationStateUpdating> _registrationStateUpdater;
	id<MNSecureMessagingCryptoStateSaving> _cryptoStateSaver;
	id<MNSecureMessagingRegistrationStateReading> _registrationStateReader;
	id<MNSecureMessagingCryptoKeychainStoreReading> _keychainReading;
	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	MNSecureMessagingRegistrationRunner* _registrationRunner;
	MNSecureMessagingDeviceStatusUpdateStoredProcedureRunnerListeningAnnouncer* _statusUpdateProcedureAnnouncer;
	FBMigrationRunner* _migrationRunner;
	MNLocalNotificationController* _localNotificationController;
	id<FBClock> _clock;
	FBMobileConfigContextManager* _mobileConfigManager;
	long long _startupState;

}

@property (assign) long long startupState;                          //@synthesize startupState=_startupState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFailToLoadRegisteredCryptoStateWithReason:(long long)arg1 existingCryptoState:(id)arg2 shouldRegisterNow:(BOOL)arg3 ;
-(void)didLoadRegisteredDeviceInfo:(id)arg1 ;
-(void)didLoadAllCryptoState:(id)arg1 ;
-(void)didUnloadCryptoState;
-(void)didDeleteMessagingStoreWithReason:(long long)arg1 error:(id)arg2 ;
-(id)initWithSession:(id)arg1 omnistore:(id)arg2 storedProcedureRunner:(id)arg3 badgeCountService:(id)arg4 localNotificationController:(id)arg5 clock:(id)arg6 authManager:(id)arg7 sendListener:(id)arg8 messageStore:(id)arg9 cryptoStateStore:(id)arg10 storeQueue:(id)arg11 cacheAnnouncementCoordinator:(id)arg12 registrationRunner:(id)arg13 registrationStateUpdater:(id)arg14 receivedMessageListener:(id)arg15 startupListener:(id)arg16 cryptoStateSaver:(id)arg17 registrationStateReader:(id)arg18 keychainReading:(id)arg19 globalMuteStatusReader:(id)arg20 analytics:(id)arg21 unprotectedBlobStore:(id)arg22 masterKeyProvider:(id)arg23 migrationRunner:(id)arg24 mobileConfigManager:(id)arg25 ;
-(long long)startupState;
-(id)_localAddressFromPublicKey:(id)arg1 ;
-(void)setStartupState:(long long)arg1 ;
-(void)_runMigrationsAndCompleteStartup;
-(void)_completeStartup;
-(void)_logMigrationError:(id)arg1 ;
@end

