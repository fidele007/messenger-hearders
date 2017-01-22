/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBKeychainItemController;

@interface FBMessengerAccountSwitchingPolicyBridge : NSObject {

	unsigned long long _isMessengerAccountSwitchingEnabled;
	FBKeychainItemController* _keychainController;

}

@property (assign,nonatomic) BOOL isMessengerAccountSwitchingEnabled; 
-(void)setIsMessengerAccountSwitchingEnabled:(BOOL)arg1 ;
-(BOOL)isMessengerAccountSwitchingEnabled;
-(id)initWithKeychainItemController:(id)arg1 ;
-(void)_loadKeychainItem;
-(void)_didSaveKeychainItemWithIsMessengerAccountSwitchingEnabled:(BOOL)arg1 ;
-(void)_didFailWithError:(id)arg1 withShouldUnsetIsMessengerAccountSwitchingEnabled:(BOOL)arg2 ;
-(void)_didLoadKeychainItem:(id)arg1 ;
-(id)init;
@end
