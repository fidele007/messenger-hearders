/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingMasterKeyProviding.h>

@protocol MNSecureMessagingCryptoStateSaving, MNSecureMessagingMasterKeyProviding, OS_dispatch_queue;
@class FBLoggedInUserCryptoEngine, NSObject;

@interface MNSecureMessagingEncryptedMasterKeyProvider : NSObject <MNSecureMessagingMasterKeyProviding> {

	FBLoggedInUserCryptoEngine* _loggedInUserCryptoEngine;
	id<MNSecureMessagingCryptoStateSaving> _cryptoStateSaving;
	BOOL _shouldCreateEncryptedMasterKey;
	id<MNSecureMessagingMasterKeyProviding> _fallbackProvider;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)tryLoadMasterKeyFromCryptoState:(id)arg1 ;
-(id)generateMasterKey;
-(id)_decryptProtectedMasterKey:(id)arg1 forState:(id)arg2 ;
-(id)_updateUnprotectedMasterKey:(id)arg1 ofCryptoState:(id)arg2 ;
-(id)initWithLoggedInUserCryptoEngine:(id)arg1 cryptoStateSaving:(id)arg2 shouldCreateEncryptedMasterKey:(BOOL)arg3 fallbackProvider:(id)arg4 queue:(id)arg5 ;
@end
