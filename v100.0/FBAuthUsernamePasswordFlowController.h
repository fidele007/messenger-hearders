/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandlerDelegate.h>
#import <Messenger/FBAuthUsernamePasswordAuthenticating.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBAuthUsernamePasswordFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBLoginErrorStateManager, NSString, FBAuthenticationUsernamePasswordHandler;

@interface FBAuthUsernamePasswordFlowController : NSObject <FBAuthenticationMethodHandlerDelegate, FBAuthUsernamePasswordAuthenticating, FBAuthControlling> {

	id<FBAuthUsernamePasswordFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBLoginErrorStateManager* _errorStateManager;
	NSString* _mostRecentIdentifier;
	id<FBAuthControllingDelegate> _authDelegate;
	FBAuthenticationUsernamePasswordHandler* _authHandler;

}

@property (nonatomic,retain) FBAuthenticationUsernamePasswordHandler * authHandler;              //@synthesize authHandler=_authHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;                  //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)setAuthHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)submitUsernamePasswordViewController:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)cancelLoginRequestFromViewController:(id)arg1 ;
-(void)userRegistrationFromViewController:(id)arg1 withIdentifier:(id)arg2 ;
-(void)forgotPasswordFromViewController:(id)arg1 recoveryURL:(id)arg2 ;
-(id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3 ;
-(FBAuthenticationUsernamePasswordHandler *)authHandler;
-(void)authenticate;
@end
