/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString;

@interface FBInstantGamesListKeyParams : FBGraphQLInput {

	NSString* _threadId;
	NSString* _storyToken;
	NSString* _groupId;

}

@property (nonatomic,copy) NSString * threadId;                //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSString * storyToken;              //@synthesize storyToken=_storyToken - In the implementation block
@property (nonatomic,copy) NSString * groupId;                 //@synthesize groupId=_groupId - In the implementation block
-(NSString *)storyToken;
-(void)setStoryToken:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)groupId;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end

