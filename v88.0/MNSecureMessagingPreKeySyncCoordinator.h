/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingPreKeySyncCoordinating.h>

@protocol MNSecureMessagingPreKeyGenerating, MNSecureMessagingPreKeyStoring, MNSecureMessagingCryptoKeychainStoreReading, MNSecureMessagingCryptoStateSaving, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingStoredProcedureRunner, MNSecureMessagingMessagingCollectionAddress, NSObject, NSString;

@interface MNSecureMessagingPreKeySyncCoordinator : NSObject <MNSecureMessagingPreKeySyncCoordinating> {

	id<MNSecureMessagingPreKeyGenerating> _preKeyGenerator;
	id<MNSecureMessagingPreKeyStoring> _preKeyStore;
	MNSecureMessagingStore* _diskStore;
	id<MNSecureMessagingCryptoKeychainStoreReading> _cryptoStateStoreReader;
	id<MNSecureMessagingCryptoStateSaving> _cryptoStateSaver;
	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loadCryptoState;
-(void)_continueSyncProcessByWritingKeyRecords:(id)arg1 latestPreKeyIdPreviouslyAssigned:(int)arg2 globalCryptoStateLoaded:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_savePreKeysToDisk:(id)arg1 withLatestId:(int)arg2 ;
-(BOOL)_saveNewCryptoState:(id)arg1 ;
-(void)_uploadPreKeysToServer:(id)arg1 withNewSignedPreKey:(id)arg2 ;
-(void)generateAndSyncNewBatchOfPreKeysWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPreKeyGenerator:(id)arg1 preKeyStore:(id)arg2 diskStore:(id)arg3 cryptoStateStoreReader:(id)arg4 cryptoStateSaver:(id)arg5 storedProcedureRunner:(id)arg6 localAddress:(id)arg7 queue:(id)arg8 ;
@end

