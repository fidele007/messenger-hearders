/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBInstantGameLeaderboardArgs : FBGraphQLInput {

	NSString* _threadId;
	NSString* _storyToken;
	NSString* _groupId;
	NSString* _gameId;

}

@property (nonatomic,copy) NSString * threadId;                //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSString * storyToken;              //@synthesize storyToken=_storyToken - In the implementation block
@property (nonatomic,copy) NSString * groupId;                 //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,copy) NSString * gameId;                  //@synthesize gameId=_gameId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)gameId;
-(void)setGameId:(NSString *)arg1 ;
-(NSString *)storyToken;
-(void)setStoryToken:(NSString *)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end
