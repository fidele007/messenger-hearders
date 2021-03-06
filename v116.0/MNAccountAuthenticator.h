/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
	NSString* _analyticsModule;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
-(void)_authenticatWithNextAuthenticatorIfPossible;
-(id)initWithAuthenticators:(id)arg1 analyticsModule:(id)arg2 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(id)analyticsTag;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(void)_completeWithDidAuthenticateWithFacebookCredentials:(id)arg1 httpsCookies:(id)arg2 userStorageServerKey:(id)arg3 ;
-(void)_completeWithDidFailWithError:(id)arg1 ;
-(void)_completeWithIsUnavailableForAccount;
-(void)_clearRetainedBlocks;
-(void)_completeWithDidCancel;
@end

