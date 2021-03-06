/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber;

@interface FBProfileIntroCardPhotosSetData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _photoIds;
	NSString* _publishFeedStory;
	NSArray* _collageLayout;
	NSString* _discoverySessionReferrerType;
	NSString* _referrerId;
	NSNumber* _entityCardPosition;

}

@property (nonatomic,copy) NSString * clientMutationId;                          //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                   //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * photoIds;                                   //@synthesize photoIds=_photoIds - In the implementation block
@property (nonatomic,copy) NSString * publishFeedStory;                          //@synthesize publishFeedStory=_publishFeedStory - In the implementation block
@property (nonatomic,copy) NSArray * collageLayout;                              //@synthesize collageLayout=_collageLayout - In the implementation block
@property (nonatomic,copy) NSString * discoverySessionReferrerType;              //@synthesize discoverySessionReferrerType=_discoverySessionReferrerType - In the implementation block
@property (nonatomic,copy) NSString * referrerId;                                //@synthesize referrerId=_referrerId - In the implementation block
@property (nonatomic,copy) NSNumber * entityCardPosition;                        //@synthesize entityCardPosition=_entityCardPosition - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)photoIds;
-(void)setPhotoIds:(NSArray *)arg1 ;
-(NSString *)referrerId;
-(void)setReferrerId:(NSString *)arg1 ;
-(NSNumber *)entityCardPosition;
-(void)setEntityCardPosition:(NSNumber *)arg1 ;
-(NSString *)publishFeedStory;
-(void)setPublishFeedStory:(NSString *)arg1 ;
-(NSArray *)collageLayout;
-(void)setCollageLayout:(NSArray *)arg1 ;
-(NSString *)discoverySessionReferrerType;
-(void)setDiscoverySessionReferrerType:(NSString *)arg1 ;
@end

