/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationOAuthHandlerDelegate.h>

@protocol FBNetworkDispatch, FBAuthenticationManagerDelegate;
@class FBAuthPerfLogger, FBAuthenticationAccessTokenValidator, FBAuthenticationKeychainHandler, FBAuthenticationLinkedAccountHandler, FBAuthenticationNonceHandler, FBAuthenticationOAuthHandler, FBAuthenticationPageIDPasswordHandler, FBAuthenticationSSOHandler, FBAuthenticationUsernamePasswordHandler, FBAuthenticationWorkUsernamePasswordHandler, NSString;

@interface FBAuthenticationManager : NSObject <FBAuthenticationOAuthHandlerDelegate> {

	id<FBNetworkDispatch> _requesterConfiguration;
	FBAuthPerfLogger* _perfLogger;
	FBAuthenticationAccessTokenValidator* _accessTokenValidator;
	id<FBAuthenticationManagerDelegate> _delegate;
	unsigned long long _method;
	FBAuthenticationKeychainHandler* _keychainHandler;
	FBAuthenticationLinkedAccountHandler* _linkedAccountHandler;
	FBAuthenticationNonceHandler* _nonceHandler;
	FBAuthenticationOAuthHandler* _oauthHandler;
	FBAuthenticationPageIDPasswordHandler* _pageIDPasswordHandler;
	FBAuthenticationSSOHandler* _ssoHandler;
	FBAuthenticationUsernamePasswordHandler* _usernamePasswordHandler;
	FBAuthenticationWorkUsernamePasswordHandler* _workUsernamePasswordHandler;

}

@property (nonatomic,retain) FBAuthenticationKeychainHandler * keychainHandler;                                      //@synthesize keychainHandler=_keychainHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationLinkedAccountHandler * linkedAccountHandler;                            //@synthesize linkedAccountHandler=_linkedAccountHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationNonceHandler * nonceHandler;                                            //@synthesize nonceHandler=_nonceHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationOAuthHandler * oauthHandler;                                            //@synthesize oauthHandler=_oauthHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationPageIDPasswordHandler * pageIDPasswordHandler;                          //@synthesize pageIDPasswordHandler=_pageIDPasswordHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationSSOHandler * ssoHandler;                                                //@synthesize ssoHandler=_ssoHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationUsernamePasswordHandler * usernamePasswordHandler;                      //@synthesize usernamePasswordHandler=_usernamePasswordHandler - In the implementation block
@property (nonatomic,retain) FBAuthenticationWorkUsernamePasswordHandler * workUsernamePasswordHandler;              //@synthesize workUsernamePasswordHandler=_workUsernamePasswordHandler - In the implementation block
@property (assign,nonatomic) unsigned long long method;                                                              //@synthesize method=_method - In the implementation block
@property (assign,nonatomic,__weak) id<FBAuthenticationManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * authToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)submitUsername:(id)arg1 nonce:(id)arg2 nonceType:(long long)arg3 extraAuthLoginFields:(id)arg4 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(void)submitUsername:(id)arg1 credential:(id)arg2 credentialType:(long long)arg3 ;
-(void)submitLinkedAccountIdentifier:(id)arg1 linkType:(long long)arg2 accessToken:(id)arg3 ;
-(FBAuthenticationSSOHandler *)ssoHandler;
-(FBAuthenticationKeychainHandler *)keychainHandler;
-(FBAuthenticationUsernamePasswordHandler *)usernamePasswordHandler;
-(FBAuthenticationLinkedAccountHandler *)linkedAccountHandler;
-(FBAuthenticationOAuthHandler *)oauthHandler;
-(void)skipKeychainOrSSOAuthenticationMethod;
-(FBAuthenticationNonceHandler *)nonceHandler;
-(FBAuthenticationWorkUsernamePasswordHandler *)workUsernamePasswordHandler;
-(FBAuthenticationPageIDPasswordHandler *)pageIDPasswordHandler;
-(void)submitKeychainOrSSOApproval;
-(void)submitPageID:(id)arg1 credential:(id)arg2 ;
-(void)submitOAuthAuthentication;
-(void)logoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fallBackToUsernameAndPassword;
-(void)usePageLogin;
-(void)useUsernamePasswordLogin;
-(void)_processAuthMethod:(unsigned long long)arg1 ;
-(void)setKeychainHandler:(FBAuthenticationKeychainHandler *)arg1 ;
-(void)setLinkedAccountHandler:(FBAuthenticationLinkedAccountHandler *)arg1 ;
-(void)setNonceHandler:(FBAuthenticationNonceHandler *)arg1 ;
-(void)setOauthHandler:(FBAuthenticationOAuthHandler *)arg1 ;
-(void)setPageIDPasswordHandler:(FBAuthenticationPageIDPasswordHandler *)arg1 ;
-(void)setSsoHandler:(FBAuthenticationSSOHandler *)arg1 ;
-(void)setUsernamePasswordHandler:(FBAuthenticationUsernamePasswordHandler *)arg1 ;
-(void)setWorkUsernamePasswordHandler:(FBAuthenticationWorkUsernamePasswordHandler *)arg1 ;
-(void)authenticationHandler:(id)arg1 didChangeState:(long long)arg2 ;
-(void)performAuthentication;
-(void)submitWorkUsername:(id)arg1 credential:(id)arg2 ;
-(NSString *)userName;
-(void)setDelegate:(id<FBAuthenticationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<FBAuthenticationManagerDelegate>)delegate;
-(unsigned long long)method;
-(void)willEnterForeground:(id)arg1 ;
-(NSString *)authToken;
-(NSString *)fullName;
-(void)setMethod:(unsigned long long)arg1 ;
@end

