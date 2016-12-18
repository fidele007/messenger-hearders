/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNAccountAuthenticating.h>

@protocol MNAccountAuthenticatingDataSource;
@class FBAuthenticationDeviceBasedLoginHandler, MNAccountSettings, MNAccountStore, NSString;

@interface MNAccountNonceBasedAuthenticator : NSObject <FBClassProvidable, MNAccountAuthenticating> {

	FBAuthenticationDeviceBasedLoginHandler* _authenticationDeviceBasedLoginHandler;
	MNAccountSettings* _accountSettings;
	MNAccountStore* _accountStore;
	BOOL _isAuthenticating;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAuthenticationDeviceBasedLoginHandler:(id)arg1 accountSettings:(id)arg2 accountStore:(id)arg3 ;
-(void)_authenticateAccountWithFBID:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 ;
-(void)_authenticateAccountWithFBID:(id)arg1 withDeviceBasedAccountCredential:(id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(id)analyticsTag;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
@end

