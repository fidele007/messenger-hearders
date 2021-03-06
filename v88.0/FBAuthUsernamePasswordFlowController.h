/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(void)setAuthHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)cancelLoginRequestFromViewController:(id)arg1 ;
-(void)forgotPasswordFromViewController:(id)arg1 recoveryURL:(id)arg2 ;
-(FBAuthenticationUsernamePasswordHandler *)authHandler;
-(id)initWithUIProvider:(id)arg1 uiPresenter:(id)arg2 requesterConfiguration:(id)arg3 ;
-(void)userRegistrationFromViewController:(id)arg1 withIdentifier:(id)arg2 ;
-(void)submitUsernamePasswordViewController:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)authenticate;
@end

