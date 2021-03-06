/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBHttpRequestToken, FBAuthenticationUserInfoResolverDelegate;
@class FBKeychainItemController, NSString;

@interface FBAuthenticationUserInfoResolver : NSObject <FBNetworkerRequestDelegate> {

	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBHttpRequestToken> _token;
	FBKeychainItemController* _persistentKeychain;
	id<FBAuthenticationUserInfoResolverDelegate> _delegate;
	NSString* _loginIdentifier;
	NSString* _authToken;
	NSString* _userID;
	NSString* _username;
	NSString* _firstName;
	NSString* _fullName;

}

@property (nonatomic,copy) NSString * userID;                                                           //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * username;                                                         //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;                                                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                                         //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic,__weak) id<FBAuthenticationUserInfoResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * loginIdentifier;                                         //@synthesize loginIdentifier=_loginIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * authToken;                                               //@synthesize authToken=_authToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithLoginIdentifier:(id)arg1 authToken:(id)arg2 requesterConfiguration:(id)arg3 persistentKeychain:(id)arg4 ;
-(void)_fetchAndStoreUserInfoFromKeychain:(id)arg1 ;
-(id)fetchSSOInfoCacheOnly;
-(void)_fetchUserInfoFromGraphAPI;
-(id)_fetchFullNameFromKeychain:(id)arg1 ;
-(void)_recordNamesToKeychain:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 userID:(id)arg4 ;
-(id)initWithLoginIdentifier:(id)arg1 authToken:(id)arg2 requesterConfiguration:(id)arg3 ;
-(void)fetchSSOInfo;
-(void)fetchFullName;
-(NSString *)loginIdentifier;
-(void)setDelegate:(id<FBAuthenticationUserInfoResolverDelegate>)arg1 ;
-(id<FBAuthenticationUserInfoResolverDelegate>)delegate;
-(NSString *)authToken;
-(void)setFullName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)fullName;
@end

