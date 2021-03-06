/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBEventContext, NSNumber, NSArray;

@interface FBEventPurchaseTicketsAsyncData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	FBEventContext* _context;
	NSString* _customerName;
	NSString* _customerEmail;
	NSString* _credentialId;
	NSNumber* _sessionId;
	NSArray* _tiers;
	NSArray* _tracking;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * customerName;                  //@synthesize customerName=_customerName - In the implementation block
@property (nonatomic,copy) NSString * customerEmail;                 //@synthesize customerEmail=_customerEmail - In the implementation block
@property (nonatomic,copy) NSString * credentialId;                  //@synthesize credentialId=_credentialId - In the implementation block
@property (nonatomic,copy) NSNumber * sessionId;                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSArray * tiers;                          //@synthesize tiers=_tiers - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                       //@synthesize tracking=_tracking - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)credentialId;
-(void)setCredentialId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)customerName;
-(void)setCustomerName:(NSString *)arg1 ;
-(NSString *)customerEmail;
-(void)setCustomerEmail:(NSString *)arg1 ;
-(NSArray *)tiers;
-(void)setTiers:(NSArray *)arg1 ;
-(FBEventContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSNumber *)sessionId;
-(void)setSessionId:(NSNumber *)arg1 ;
-(NSArray *)tracking;
@end

