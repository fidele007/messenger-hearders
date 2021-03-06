/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthenticationMethodHandler.h>
#import <Messenger/FBAuthenticationTokenMethodHandling.h>

@protocol FBNetworkDispatch, FBHttpRequestToken;
@class NSString, UIApplication, FBKeychainItem;

@interface FBAuthenticationKeychainHandler : FBAuthenticationMethodHandler <FBAuthenticationTokenMethodHandling> {

	UIApplication* _application;
	id<FBNetworkDispatch> _requesterConfiguration;
	FBKeychainItem* _mainAppSessionKeychain;
	id<FBHttpRequestToken> _token;
	NSString* _authToken;

}

@property (nonatomic,copy,readonly) NSString * userName; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * userID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)performAuthentication;
-(id)initWithApplication:(id)arg1 requesterConfiguration:(id)arg2 ;
-(void)submitKeychainApproval;
-(NSString *)userName;
-(void)cancel;
-(id)init;
-(void)invalidate;
-(NSString *)authToken;
-(NSString *)userID;
-(NSString *)fullName;
@end

