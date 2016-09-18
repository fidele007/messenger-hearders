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

@interface FBProfileIntroCardSetData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _bio;
	NSString* _publishBioFeedStory;
	NSArray* _photoIds;
	NSArray* _photoIdsToRemove;

}

@property (nonatomic,copy) NSString * clientMutationId;                 //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                          //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * bio;                              //@synthesize bio=_bio - In the implementation block
@property (nonatomic,copy) NSString * publishBioFeedStory;              //@synthesize publishBioFeedStory=_publishBioFeedStory - In the implementation block
@property (nonatomic,copy) NSArray * photoIds;                          //@synthesize photoIds=_photoIds - In the implementation block
@property (nonatomic,copy) NSArray * photoIdsToRemove;                  //@synthesize photoIdsToRemove=_photoIdsToRemove - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)photoIds;
-(void)setPhotoIds:(NSArray *)arg1 ;
-(NSString *)publishBioFeedStory;
-(void)setPublishBioFeedStory:(NSString *)arg1 ;
-(NSArray *)photoIdsToRemove;
-(void)setPhotoIdsToRemove:(NSArray *)arg1 ;
-(void)setBio:(NSString *)arg1 ;
-(NSString *)bio;
@end

