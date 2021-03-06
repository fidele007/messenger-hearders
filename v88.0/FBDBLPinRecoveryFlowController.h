/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDBLPinRecoveryAuthenticating.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBDBLPinRecoveryFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBAuthenticationHandlerResponse, NSString;

@interface FBDBLPinRecoveryFlowController : NSObject <FBDBLPinRecoveryAuthenticating, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	FBAuthenticationHandlerResponse* _authResponse;
	id<FBDBLPinRecoveryFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id)initWithUserInfo:(id)arg1 authenticationResponse:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 requesterConfiguration:(id)arg5 ;
-(void)_setPin:(id)arg1 ;
-(void)_saveAccountFromResponse:(id)arg1 userID:(id)arg2 ;
-(void)_setPinFailedShouldHavePin:(BOOL)arg1 ;
-(void)setPin:(id)arg1 fromViewController:(id)arg2 ;
-(void)removePinFromViewController:(id)arg1 ;
-(void)authenticate;
@end

