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

@interface FBCrowdsourcingCreateClaimData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _sessionId;
	NSString* _pageId;
	NSString* _fieldType;
	NSString* _knowledgeValue;
	NSString* _sentiment;
	NSString* _action;
	NSString* _endpoint;
	NSString* _entryPoint;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * fieldType;                     //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,copy) NSString * knowledgeValue;                //@synthesize knowledgeValue=_knowledgeValue - In the implementation block
@property (nonatomic,copy) NSString * sentiment;                     //@synthesize sentiment=_sentiment - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * entryPoint;                    //@synthesize entryPoint=_entryPoint - In the implementation block
-(void)setEntryPoint:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)knowledgeValue;
-(void)setKnowledgeValue:(NSString *)arg1 ;
-(NSString *)sentiment;
-(void)setSentiment:(NSString *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)endpoint;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSString *)entryPoint;
-(NSString *)fieldType;
-(void)setFieldType:(NSString *)arg1 ;
@end

