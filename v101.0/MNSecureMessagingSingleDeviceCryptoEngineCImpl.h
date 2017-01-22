/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNSecureMessagingSingleDeviceCryptoEngine.h>
#import <Messenger/MNSecureMessagingCryptoStateUpdateListening.h>

@protocol MNSecureMessagingRemoteIdentityValidating, MNSecureMessagingPreKeyStoring, OS_dispatch_queue;
@class NSDictionary, MNSecureMessagingGlobalCryptoState, NSObject, MNSecureMessagingSessionCryptoStateCache, NSString;

@interface MNSecureMessagingSingleDeviceCryptoEngineCImpl : NSObject <MNSecureMessagingSingleDeviceCryptoEngine, MNSecureMessagingCryptoStateUpdateListening> {

	id<MNSecureMessagingRemoteIdentityValidating> _identityValidator;
	id<MNSecureMessagingPreKeyStoring> _preKeyStore;
	NSDictionary* _signedPreKeyDictionary;
	MNSecureMessagingGlobalCryptoState* _globalState;
	NSObject*<OS_dispatch_queue> _queue;
	axolotl_contextRef _libraryContext;
	axolotl_store_contextRef _storeContext;
	MNSecureMessagingSessionCryptoStateCache* _cryptoStateCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAllCryptoStateAvailable;
-(id)encryptMessage:(id)arg1 to:(id)arg2 withState:(id)arg3 persistStateBlock:(/*^block*/id)arg4 ;
-(id)decryptMessageBlob:(id)arg1 from:(id)arg2 withState:(id)arg3 isPreKeyMessage:(BOOL)arg4 persistStateAndPayloadBlock:(/*^block*/id)arg5 ;
-(id)processPreKeyLookupResult:(id)arg1 cryptoState:(id)arg2 from:(id)arg3 persistStateBlock:(/*^block*/id)arg4 ;
-(void)_setupAxolotlStoreContextForDecryptingEstablishedSessions;
-(id)_decryptPreKeyMessageBlob:(id)arg1 withState:(id)arg2 senderId:(id)arg3 deviceId:(id)arg4 persistStateAndPayloadBlock:(/*^block*/id)arg5 ;
-(id)_decryptMessageBlob:(id)arg1 from:(id)arg2 withState:(id)arg3 persistStateAndPayloadBlock:(/*^block*/id)arg4 ;
-(void)_setupFullAxolotlStoreContext;
-(void)_setupAxolotlLibraryContextIfNecessary;
-(id)initWithIdentityValidator:(id)arg1 preKeyStore:(id)arg2 queue:(id)arg3 ;
-(void)didUpdateCryptoState:(id)arg1 ;
-(void)didLoadCryptoState:(id)arg1 ;
-(void)unloadCryptoState;
-(void)dealloc;
@end
