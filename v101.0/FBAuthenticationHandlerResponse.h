/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAccessToken, NSString, NSArray, FBUserStorageServerKey;

@interface FBAuthenticationHandlerResponse : NSObject {

	FBAccessToken* _accessToken;
	NSString* _loggedInUserFBID;
	NSString* _machineID;
	NSArray* _httpCookies;
	NSString* _actingFBID;
	FBAccessToken* _actingAccessToken;
	NSString* _identifier;
	FBUserStorageServerKey* _storageServerKey;

}

@property (nonatomic,retain) FBAccessToken * accessToken;                          //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * loggedInUserFBID;                            //@synthesize loggedInUserFBID=_loggedInUserFBID - In the implementation block
@property (nonatomic,copy) NSString * machineID;                                   //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSArray * httpCookies;                                  //@synthesize httpCookies=_httpCookies - In the implementation block
@property (nonatomic,copy) NSString * actingFBID;                                  //@synthesize actingFBID=_actingFBID - In the implementation block
@property (nonatomic,retain) FBAccessToken * actingAccessToken;                    //@synthesize actingAccessToken=_actingAccessToken - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBUserStorageServerKey * storageServerKey;              //@synthesize storageServerKey=_storageServerKey - In the implementation block
+(id)authenticationHandlerForResponse:(id)arg1 error:(id*)arg2 ;
-(NSString *)loggedInUserFBID;
-(NSArray *)httpCookies;
-(FBUserStorageServerKey *)storageServerKey;
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(NSString *)actingFBID;
-(FBAccessToken *)actingAccessToken;
-(void)setLoggedInUserFBID:(NSString *)arg1 ;
-(void)setStorageServerKey:(FBUserStorageServerKey *)arg1 ;
-(void)setHttpCookies:(NSArray *)arg1 ;
-(void)setActingFBID:(NSString *)arg1 ;
-(void)setActingAccessToken:(FBAccessToken *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setAccessToken:(FBAccessToken *)arg1 ;
-(FBAccessToken *)accessToken;
@end

