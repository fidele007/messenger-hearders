/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBActorSubscribeData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _subscribeeId;
	NSString* _subscribeLocation;

}

@property (nonatomic,copy) NSString * clientMutationId;               //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                        //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * subscribeeId;                   //@synthesize subscribeeId=_subscribeeId - In the implementation block
@property (nonatomic,copy) NSString * subscribeLocation;              //@synthesize subscribeLocation=_subscribeLocation - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setSubscribeeId:(NSString *)arg1 ;
-(void)setSubscribeLocation:(NSString *)arg1 ;
-(NSString *)subscribeeId;
-(NSString *)subscribeLocation;
@end

