/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBResendContactpointCodeData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _country;
	NSString* _contactPoint;
	NSString* _source;
	NSString* _promoType;
	NSString* _qpId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * country;                       //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * contactPoint;                  //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * promoType;                     //@synthesize promoType=_promoType - In the implementation block
@property (nonatomic,copy) NSString * qpId;                          //@synthesize qpId=_qpId - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)promoType;
-(void)setPromoType:(NSString *)arg1 ;
-(NSString *)qpId;
-(void)setQpId:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)contactPoint;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setContactPoint:(NSString *)arg1 ;
@end

