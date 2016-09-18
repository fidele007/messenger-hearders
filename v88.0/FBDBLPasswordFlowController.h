/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandlerDelegate.h>
#import <Messenger/FBDBLPasswordAuthenticating.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBDBLPasswordFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBLoginErrorStateManager, FBAuthenticationUsernamePasswordHandler, NSString;

@interface FBDBLPasswordFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBDBLPasswordAuthenticating, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	id<FBDBLPasswordFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	FBLoginErrorStateManager* _errorStateManager;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;
	FBAuthenticationUsernamePasswordHandler* _authHandler;

}

@property (nonatomic,retain) FBAuthenticationUsernamePasswordHandler * authHandler;              //@synthesize authHandler=_authHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;                  //@synthesize authDelegate=_authDelegate - In the implementation block
-(id<FBAuthControllingDelegate>)authDelegate;
-(id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(void)setAuthHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)submitPassword:(id)arg1 fromViewController:(id)arg2 ;
-(void)cancelLoginRequestFromViewController:(id)arg1 ;
-(void)userRegistrationFromViewController:(id)arg1 ;
-(void)forgotPasswordFromViewController:(id)arg1 recoveryURL:(id)arg2 ;
-(FBAuthenticationUsernamePasswordHandler *)authHandler;
-(void)authenticate;
@end

