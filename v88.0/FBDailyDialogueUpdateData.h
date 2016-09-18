/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBDailyDialogueUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _productName;
	NSString* _mutationType;
	NSString* _lightweightUnitType;
	NSString* _lightweightUnitId;
	NSString* _lightweightExtra;

}

@property (nonatomic,copy) NSString * clientMutationId;                 //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                          //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * productName;                      //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * mutationType;                     //@synthesize mutationType=_mutationType - In the implementation block
@property (nonatomic,copy) NSString * lightweightUnitType;              //@synthesize lightweightUnitType=_lightweightUnitType - In the implementation block
@property (nonatomic,copy) NSString * lightweightUnitId;                //@synthesize lightweightUnitId=_lightweightUnitId - In the implementation block
@property (nonatomic,copy) NSString * lightweightExtra;                 //@synthesize lightweightExtra=_lightweightExtra - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)mutationType;
-(void)setMutationType:(NSString *)arg1 ;
-(NSString *)lightweightUnitType;
-(void)setLightweightUnitType:(NSString *)arg1 ;
-(NSString *)lightweightUnitId;
-(void)setLightweightUnitId:(NSString *)arg1 ;
-(NSString *)lightweightExtra;
-(void)setLightweightExtra:(NSString *)arg1 ;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
@end

