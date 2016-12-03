/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingCryptoStateUpdateListening.h>

@protocol MNSecureMessagingPreKeyStoring;
@class MNSecureMessagingGlobalCryptoState, NSString;

@interface MNSecureMessagingPreKeyBundleGenerator : NSObject <MNSecureMessagingCryptoStateUpdateListening> {

	id<MNSecureMessagingPreKeyStoring> _preKeyStore;
	MNSecureMessagingGlobalCryptoState* _globalState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generatePreKeyBundle;
-(BOOL)hasGlobalCryptoState;
-(void)didUpdateCryptoState:(id)arg1 ;
-(void)didLoadCryptoState:(id)arg1 ;
-(void)unloadCryptoState;
-(id)initWithPreKeyStore:(id)arg1 ;
@end
