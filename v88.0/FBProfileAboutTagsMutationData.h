/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBProfileAboutTagsMutationData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _addIds;
	NSArray* _removeIds;
	NSString* _referrerType;
	NSString* _referrerId;
	NSString* _entityCardPosition;

}

@property (nonatomic,copy) NSString * clientMutationId;                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * addIds;                           //@synthesize addIds=_addIds - In the implementation block
@property (nonatomic,copy) NSArray * removeIds;                        //@synthesize removeIds=_removeIds - In the implementation block
@property (nonatomic,copy) NSString * referrerType;                    //@synthesize referrerType=_referrerType - In the implementation block
@property (nonatomic,copy) NSString * referrerId;                      //@synthesize referrerId=_referrerId - In the implementation block
@property (nonatomic,copy) NSString * entityCardPosition;              //@synthesize entityCardPosition=_entityCardPosition - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)referrerType;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)addIds;
-(void)setAddIds:(NSArray *)arg1 ;
-(NSArray *)removeIds;
-(void)setRemoveIds:(NSArray *)arg1 ;
-(void)setReferrerType:(NSString *)arg1 ;
-(NSString *)referrerId;
-(void)setReferrerId:(NSString *)arg1 ;
-(NSString *)entityCardPosition;
-(void)setEntityCardPosition:(NSString *)arg1 ;
@end

