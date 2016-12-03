/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, FBActivityPreviewTemplate, FBTaggableActivityEventObject, FBTypedNSArrayOfFBActivityIcon, FBMemPlaceFlowInfo;

@interface FBTaggableActivityComposition : FBValueObject <NSCopying, NSCoding> {

	BOOL _showAttachmentPreview;
	BOOL _hideAttachment;
	BOOL _shouldCreateProfileBadge;
	BOOL _hasCustomIcon;
	BOOL _isSelected;
	NSString* _graphQLID;
	NSString* _presentParticiple;
	NSString* _taggableActivityID;
	NSString* _objectID;
	NSString* _iconID;
	NSString* _freeformObjectName;
	NSString* _objectLabel;
	NSString* _objectSubtext;
	NSString* _suggestionMechanism;
	NSURL* _smallIconURL;
	NSURL* _largeIconURL;
	NSURL* _profilePictureURL;
	NSURL* _glyphURL;
	FBActivityPreviewTemplate* _previewTemplate;
	FBActivityPreviewTemplate* _previewTemplateWithUser;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsers;
	FBActivityPreviewTemplate* _previewTemplateWithUserAtPlace;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsersAtPlace;
	FBActivityPreviewTemplate* _previewTemplateAtPlace;
	FBTaggableActivityEventObject* _eventObject;
	FBTypedNSArrayOfFBActivityIcon* _allIcons;
	FBTypedNSArrayOfFBActivityIcon* _objectIcons;
	FBMemPlaceFlowInfo* _associatedPlacesInfo;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                                                             //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * presentParticiple;                                                     //@synthesize presentParticiple=_presentParticiple - In the implementation block
@property (nonatomic,copy,readonly) NSString * taggableActivityID;                                                    //@synthesize taggableActivityID=_taggableActivityID - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectID;                                                              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconID;                                                                //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,copy,readonly) NSString * freeformObjectName;                                                    //@synthesize freeformObjectName=_freeformObjectName - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectLabel;                                                           //@synthesize objectLabel=_objectLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectSubtext;                                                         //@synthesize objectSubtext=_objectSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionMechanism;                                                   //@synthesize suggestionMechanism=_suggestionMechanism - In the implementation block
@property (nonatomic,copy,readonly) NSURL * smallIconURL;                                                             //@synthesize smallIconURL=_smallIconURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * largeIconURL;                                                             //@synthesize largeIconURL=_largeIconURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;                                                        //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * glyphURL;                                                                 //@synthesize glyphURL=_glyphURL - In the implementation block
@property (nonatomic,readonly) BOOL showAttachmentPreview;                                                            //@synthesize showAttachmentPreview=_showAttachmentPreview - In the implementation block
@property (nonatomic,readonly) BOOL hideAttachment;                                                                   //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (nonatomic,readonly) BOOL shouldCreateProfileBadge;                                                         //@synthesize shouldCreateProfileBadge=_shouldCreateProfileBadge - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplate;                                      //@synthesize previewTemplate=_previewTemplate - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplateWithUser;                              //@synthesize previewTemplateWithUser=_previewTemplateWithUser - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplateWithMultipleUsers;                     //@synthesize previewTemplateWithMultipleUsers=_previewTemplateWithMultipleUsers - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplateWithUserAtPlace;                       //@synthesize previewTemplateWithUserAtPlace=_previewTemplateWithUserAtPlace - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplateWithMultipleUsersAtPlace;              //@synthesize previewTemplateWithMultipleUsersAtPlace=_previewTemplateWithMultipleUsersAtPlace - In the implementation block
@property (nonatomic,copy,readonly) FBActivityPreviewTemplate * previewTemplateAtPlace;                               //@synthesize previewTemplateAtPlace=_previewTemplateAtPlace - In the implementation block
@property (nonatomic,copy,readonly) FBTaggableActivityEventObject * eventObject;                                      //@synthesize eventObject=_eventObject - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfFBActivityIcon * allIcons;                                        //@synthesize allIcons=_allIcons - In the implementation block
@property (nonatomic,copy,readonly) FBTypedNSArrayOfFBActivityIcon * objectIcons;                                     //@synthesize objectIcons=_objectIcons - In the implementation block
@property (nonatomic,copy,readonly) FBMemPlaceFlowInfo * associatedPlacesInfo;                                        //@synthesize associatedPlacesInfo=_associatedPlacesInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomIcon;                                                                    //@synthesize hasCustomIcon=_hasCustomIcon - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                                                                       //@synthesize isSelected=_isSelected - In the implementation block
-(NSString *)graphQLID;
-(FBActivityPreviewTemplate *)previewTemplateWithMultipleUsers;
-(FBActivityPreviewTemplate *)previewTemplateWithUser;
-(NSString *)objectLabel;
-(NSURL *)smallIconURL;
-(NSURL *)profilePictureURL;
-(NSString *)taggableActivityID;
-(NSString *)freeformObjectName;
-(BOOL)hideAttachment;
-(BOOL)shouldCreateProfileBadge;
-(NSString *)suggestionMechanism;
-(FBActivityPreviewTemplate *)previewTemplateWithUserAtPlace;
-(FBActivityPreviewTemplate *)previewTemplateWithMultipleUsersAtPlace;
-(FBActivityPreviewTemplate *)previewTemplateAtPlace;
-(NSString *)presentParticiple;
-(FBMemPlaceFlowInfo *)associatedPlacesInfo;
-(id)initWithGraphQLID:(id)arg1 presentParticiple:(id)arg2 taggableActivityID:(id)arg3 objectID:(id)arg4 iconID:(id)arg5 freeformObjectName:(id)arg6 objectLabel:(id)arg7 objectSubtext:(id)arg8 suggestionMechanism:(id)arg9 smallIconURL:(id)arg10 largeIconURL:(id)arg11 profilePictureURL:(id)arg12 glyphURL:(id)arg13 showAttachmentPreview:(BOOL)arg14 hideAttachment:(BOOL)arg15 shouldCreateProfileBadge:(BOOL)arg16 previewTemplate:(id)arg17 previewTemplateWithUser:(id)arg18 previewTemplateWithMultipleUsers:(id)arg19 previewTemplateWithUserAtPlace:(id)arg20 previewTemplateWithMultipleUsersAtPlace:(id)arg21 previewTemplateAtPlace:(id)arg22 eventObject:(id)arg23 allIcons:(id)arg24 objectIcons:(id)arg25 associatedPlacesInfo:(id)arg26 hasCustomIcon:(BOOL)arg27 isSelected:(BOOL)arg28 ;
-(NSString *)objectSubtext;
-(NSURL *)glyphURL;
-(BOOL)showAttachmentPreview;
-(FBTaggableActivityEventObject *)eventObject;
-(FBTypedNSArrayOfFBActivityIcon *)allIcons;
-(FBTypedNSArrayOfFBActivityIcon *)objectIcons;
-(NSURL *)largeIconURL;
-(BOOL)hasCustomIcon;
-(BOOL)isSelected;
-(FBActivityPreviewTemplate *)previewTemplate;
-(NSString *)iconID;
-(NSString *)objectID;
@end
