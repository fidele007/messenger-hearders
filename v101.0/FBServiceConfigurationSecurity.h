/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServiceConfigurationSecuring.h>

@class NSString;

@interface FBServiceConfigurationSecurity : NSObject <FBServiceConfigurationSecuring> {

	BOOL _disableAccessTokenAuthentication;
	NSString* _accessTokenOverride_DEPRECATED;
	NSString* _actorFBID;

}

@property (nonatomic,copy,readonly) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
@property (nonatomic,readonly) BOOL disableAccessTokenAuthentication;                       //@synthesize disableAccessTokenAuthentication=_disableAccessTokenAuthentication - In the implementation block
@property (nonatomic,copy,readonly) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActorFBID:(NSString *)arg1 ;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(NSString *)actorFBID;
-(void)setDisableAccessTokenAuthentication;
-(id)initWithAccessTokenOverride:(id)arg1 ;
-(BOOL)disableAccessTokenAuthentication;
-(NSString *)description;
@end

