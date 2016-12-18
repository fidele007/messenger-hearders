/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPlaceQuestionSubmitAnswerData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _surface;
	NSString* _placeQuestionId;
	NSString* _placeQuestionValue;
	NSString* _placeQuestionAnswerValue;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * surface;                               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionId;                       //@synthesize placeQuestionId=_placeQuestionId - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionValue;                    //@synthesize placeQuestionValue=_placeQuestionValue - In the implementation block
@property (nonatomic,copy) NSString * placeQuestionAnswerValue;              //@synthesize placeQuestionAnswerValue=_placeQuestionAnswerValue - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setSurface:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)placeQuestionId;
-(void)setPlaceQuestionId:(NSString *)arg1 ;
-(NSString *)placeQuestionValue;
-(void)setPlaceQuestionValue:(NSString *)arg1 ;
-(NSString *)placeQuestionAnswerValue;
-(void)setPlaceQuestionAnswerValue:(NSString *)arg1 ;
-(NSString *)surface;
@end
