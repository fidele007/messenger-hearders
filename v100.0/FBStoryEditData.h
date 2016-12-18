/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBPostTextFormatMetadata, FBStoryLoggingData, FBTextWithEntitiesInputMessage;

@interface FBStoryEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _idempotenceToken;
	NSString* _explicitPlaceId;
	NSString* _implicitPlaceId;
	NSArray* _withTagsIds;
	NSArray* _implicitWithTagsIds;
	NSString* _sponsorId;
	NSString* _placeAttachmentSetting;
	NSArray* _inlineActivities;
	FBPostTextFormatMetadata* _textFormatMetadata;
	FBStoryLoggingData* _logging;
	NSString* _textFormatPresetId;
	FBTextWithEntitiesInputMessage* _message;
	NSString* _storyId;
	NSString* _stickerId;
	NSArray* _editablePostFeatureCapabilities;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSString * clientMutationId;                                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * idempotenceToken;                                //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * explicitPlaceId;                                 //@synthesize explicitPlaceId=_explicitPlaceId - In the implementation block
@property (nonatomic,copy) NSString * implicitPlaceId;                                 //@synthesize implicitPlaceId=_implicitPlaceId - In the implementation block
@property (nonatomic,copy) NSArray * withTagsIds;                                      //@synthesize withTagsIds=_withTagsIds - In the implementation block
@property (nonatomic,copy) NSArray * implicitWithTagsIds;                              //@synthesize implicitWithTagsIds=_implicitWithTagsIds - In the implementation block
@property (nonatomic,copy) NSString * sponsorId;                                       //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,copy) NSString * placeAttachmentSetting;                          //@synthesize placeAttachmentSetting=_placeAttachmentSetting - In the implementation block
@property (nonatomic,copy) NSArray * inlineActivities;                                 //@synthesize inlineActivities=_inlineActivities - In the implementation block
@property (nonatomic,copy) FBPostTextFormatMetadata * textFormatMetadata;              //@synthesize textFormatMetadata=_textFormatMetadata - In the implementation block
@property (nonatomic,copy) FBStoryLoggingData * logging;                               //@synthesize logging=_logging - In the implementation block
@property (nonatomic,copy) NSString * textFormatPresetId;                              //@synthesize textFormatPresetId=_textFormatPresetId - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInputMessage * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * storyId;                                         //@synthesize storyId=_storyId - In the implementation block
@property (nonatomic,copy) NSString * stickerId;                                       //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy) NSArray * editablePostFeatureCapabilities;                  //@synthesize editablePostFeatureCapabilities=_editablePostFeatureCapabilities - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                                      //@synthesize attachments=_attachments - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)stickerId;
-(void)setStickerId:(NSString *)arg1 ;
-(NSString *)sponsorId;
-(void)setTextFormatMetadata:(FBPostTextFormatMetadata *)arg1 ;
-(FBPostTextFormatMetadata *)textFormatMetadata;
-(NSString *)actorId;
-(NSArray *)inlineActivities;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)storyId;
-(void)setStoryId:(NSString *)arg1 ;
-(NSString *)idempotenceToken;
-(NSString *)explicitPlaceId;
-(void)setExplicitPlaceId:(NSString *)arg1 ;
-(NSString *)implicitPlaceId;
-(void)setImplicitPlaceId:(NSString *)arg1 ;
-(NSArray *)withTagsIds;
-(void)setWithTagsIds:(NSArray *)arg1 ;
-(NSArray *)implicitWithTagsIds;
-(void)setImplicitWithTagsIds:(NSArray *)arg1 ;
-(void)setSponsorId:(NSString *)arg1 ;
-(NSString *)placeAttachmentSetting;
-(void)setPlaceAttachmentSetting:(NSString *)arg1 ;
-(void)setInlineActivities:(NSArray *)arg1 ;
-(FBStoryLoggingData *)logging;
-(NSString *)textFormatPresetId;
-(void)setTextFormatPresetId:(NSString *)arg1 ;
-(NSArray *)editablePostFeatureCapabilities;
-(void)setEditablePostFeatureCapabilities:(NSArray *)arg1 ;
-(FBTextWithEntitiesInputMessage *)message;
-(void)setMessage:(FBTextWithEntitiesInputMessage *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setLogging:(FBStoryLoggingData *)arg1 ;
@end

