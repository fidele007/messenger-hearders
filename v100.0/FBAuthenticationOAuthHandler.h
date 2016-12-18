/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandler.h>
#import <Messenger/FBAuthenticationTokenMethodHandling.h>

@protocol FBNetworkDispatch;
@class FBNetworkerRequest, NSString;

@interface FBAuthenticationOAuthHandler : FBAuthenticationMethodHandler <FBAuthenticationTokenMethodHandling> {

	FBNetworkerRequest* _networkerRequest;
	NSString* _authToken;
	id<FBNetworkDispatch> _requesterConfiguration;

}

@property (nonatomic,retain) id<FBNetworkDispatch> requesterConfiguration;                          //@synthesize requesterConfiguration=_requesterConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<FBAuthenticationOAuthHandlerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authToken;                                           //@synthesize authToken=_authToken - In the implementation block
+(BOOL)canHandleOAuthResponse:(id)arg1 ;
+(BOOL)handleOAuthResponse:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)performAuthentication;
-(id<FBNetworkDispatch>)requesterConfiguration;
-(void)setRequesterConfiguration:(id<FBNetworkDispatch>)arg1 ;
-(id)userName;
-(id)userFullName;
-(void)submit;
-(void)cancel;
-(void)setDelegate:(id<FBAuthenticationOAuthHandlerDelegate>)arg1 ;
-(id)init;
-(NSString *)authToken;
@end

