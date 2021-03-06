/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBComposerEntryPointAnalyticsContext, NSDictionary, FBPublishingAnalyticsPayload, FBComposerVideoTaggingAnalyticsPayload;

@interface FBComposerAnalyticsPayload : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	NSString* _sourceType;
	NSString* _contentOrigin;
	FBComposerEntryPointAnalyticsContext* _entryPointAnalyticsContext;
	NSString* _composerEntryPicker;
	NSDictionary* _extraDataToIncludeInInitEvent;
	NSDictionary* _extraDataToIncludeInPostEvent;
	NSDictionary* _extraDataToIncludeInCancelEvent;
	FBPublishingAnalyticsPayload* _publishingAnalyticsPayload;
	FBComposerVideoTaggingAnalyticsPayload* _videoTaggingAnalyticsPayload;

}

@property (nonatomic,copy,readonly) NSString * sourceType;                                                              //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentOrigin;                                                           //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEntryPointAnalyticsContext * entryPointAnalyticsContext;                  //@synthesize entryPointAnalyticsContext=_entryPointAnalyticsContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerEntryPicker;                                                     //@synthesize composerEntryPicker=_composerEntryPicker - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInInitEvent;                                       //@synthesize extraDataToIncludeInInitEvent=_extraDataToIncludeInInitEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPostEvent;                                       //@synthesize extraDataToIncludeInPostEvent=_extraDataToIncludeInPostEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInCancelEvent;                                     //@synthesize extraDataToIncludeInCancelEvent=_extraDataToIncludeInCancelEvent - In the implementation block
@property (nonatomic,copy,readonly) FBPublishingAnalyticsPayload * publishingAnalyticsPayload;                          //@synthesize publishingAnalyticsPayload=_publishingAnalyticsPayload - In the implementation block
@property (nonatomic,copy,readonly) FBComposerVideoTaggingAnalyticsPayload * videoTaggingAnalyticsPayload;              //@synthesize videoTaggingAnalyticsPayload=_videoTaggingAnalyticsPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSourceType:(id)arg1 contentOrigin:(id)arg2 entryPointAnalyticsContext:(id)arg3 composerEntryPicker:(id)arg4 extraDataToIncludeInInitEvent:(id)arg5 extraDataToIncludeInPostEvent:(id)arg6 extraDataToIncludeInCancelEvent:(id)arg7 publishingAnalyticsPayload:(id)arg8 videoTaggingAnalyticsPayload:(id)arg9 ;
-(NSString *)contentOrigin;
-(FBComposerEntryPointAnalyticsContext *)entryPointAnalyticsContext;
-(NSString *)composerEntryPicker;
-(NSDictionary *)extraDataToIncludeInInitEvent;
-(NSDictionary *)extraDataToIncludeInPostEvent;
-(NSDictionary *)extraDataToIncludeInCancelEvent;
-(FBPublishingAnalyticsPayload *)publishingAnalyticsPayload;
-(FBComposerVideoTaggingAnalyticsPayload *)videoTaggingAnalyticsPayload;
-(NSString *)sourceType;
-(id)shallowCopy;
@end

