/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBAssociatePostToFundraiserForStoryData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _charityId;
	NSString* _storyId;
	NSString* _source;
	NSString* _sessionId;
	NSString* _promoId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * charityId;                     //@synthesize charityId=_charityId - In the implementation block
@property (nonatomic,copy) NSString * storyId;                       //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * promoId;                       //@synthesize promoId=_promoId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setStoryId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)charityId;
-(void)setCharityId:(NSString *)arg1 ;
-(NSString *)storyId;
-(NSString *)promoId;
-(void)setPromoId:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
@end
