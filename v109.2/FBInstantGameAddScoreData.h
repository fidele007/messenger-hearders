/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBInstantGameAddScoreData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _gameId;
	NSNumber* _score;
	NSString* _threadId;
	NSString* _storyId;
	NSString* _groupId;
	NSString* _sendAdmin;
	NSString* _sessionId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * gameId;                        //@synthesize gameId=_gameId - In the implementation block
@property (nonatomic,copy) NSNumber * score;                         //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * threadId;                      //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSString * storyId;                       //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,copy) NSString * sendAdmin;                     //@synthesize sendAdmin=_sendAdmin - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                     //@synthesize sessionId=_sessionId - In the implementation block
-(void)setGameId:(NSString *)arg1 ;
-(NSString *)storyId;
-(void)setStoryId:(NSString *)arg1 ;
-(NSString *)sendAdmin;
-(void)setSendAdmin:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(NSString *)gameId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)setScore:(NSNumber *)arg1 ;
-(NSNumber *)score;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end

