/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, FBPrivacyData, NSArray;

@interface FBSaveListCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _name;
	NSString* _descriptionText;
	FBPrivacyData* _privacy;
	NSArray* _savableIds;
	NSString* _feedUnitId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBPrivacyData * privacy;                  //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy) NSArray * savableIds;                     //@synthesize savableIds=_savableIds - In the implementation block
@property (nonatomic,copy) NSString * feedUnitId;                    //@synthesize feedUnitId=_feedUnitId - In the implementation block
-(void)setPrivacy:(FBPrivacyData *)arg1 ;
-(FBPrivacyData *)privacy;
-(NSArray *)savableIds;
-(void)setSavableIds:(NSArray *)arg1 ;
-(NSString *)feedUnitId;
-(void)setFeedUnitId:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

