/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAccountAuthenticating.h>

@protocol MNAccountAuthenticatingDataSource;
@class MNAccountAuthenticationContext, NSArray, NSString;

@interface MNAccountAuthenticator : NSObject <MNAccountAuthenticating> {

	MNAccountAuthenticationContext* _authenticationContext;
	/*^block*/id _isUnavailableForAccountBlock;
	/*^block*/id _didAuthenticateBlock;
	/*^block*/id _didFailWithErrorBlock;
	/*^block*/id _didCancelBlock;
	NSArray* _authenticators;
	long long _currentAuthenticatorIndex;
	BOOL _isAuthenticating;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
-(id)analyticsTag;
-(void)_authenticatWithNextAuthenticatorIfPossible;
-(void)_completeWithIsUnavailableForAccount;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(BOOL)mayContinueAuthenticationOnFailure;
-(void)_completeWithDidAuthenticateWithFacebookCredentials:(id)arg1 httpsCookies:(id)arg2 userStorageServerKey:(id)arg3 ;
-(void)_completeWithDidFailWithError:(id)arg1 ;
-(void)_completeWithDidCancel;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(void)_clearRetainedBlocks;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(id)initWithAuthenticators:(id)arg1 ;
@end
