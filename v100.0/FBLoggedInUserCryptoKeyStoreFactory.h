/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMigration, FBMigrationRunner, FBLoggedInUserCryptoKeyStore;

@interface FBLoggedInUserCryptoKeyStoreFactory : NSObject {

	FBMigration* _keychainMigration;
	FBMigrationRunner* _migrationRunner;
	FBLoggedInUserCryptoKeyStore* _store;

}
-(void)loadKeyStoreWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)initWithKeychainMigration:(id)arg1 migrationRunner:(id)arg2 store:(id)arg3 ;
@end

