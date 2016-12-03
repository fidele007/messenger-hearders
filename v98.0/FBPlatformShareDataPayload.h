/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSDictionary, FBComposerAppAttribution, NSArray, FBNearbyPlace, FBComposerHighlightedText, FBCompositionLinkShare, FBMultiPickerVideoAttachment;

@interface FBPlatformShareDataPayload : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _action_type;
	NSMutableDictionary* _action_parameters;
	NSDictionary* _action_actionPropertyToCreatedObjectType;
	FBComposerAppAttribution* _appAttribution;
	NSArray* _openGraphMedia_attachmentsForUpload;
	NSArray* _openGraphMedia_attachmentsForDisplay;
	NSArray* _imageAttachments;
	FBNearbyPlace* _place_place;
	BOOL _place_isUserSelected;
	NSString* _ref;
	FBComposerHighlightedText* _robotext;
	FBCompositionLinkShare* _sharedLink;
	NSArray* _taggedUsers;
	FBMultiPickerVideoAttachment* _videoAttachment;

}
+(id)ref:(id)arg1 ;
+(id)actionWithType:(id)arg1 parameters:(id)arg2 actionPropertyToCreatedObjectType:(id)arg3 ;
+(id)openGraphMediaWithAttachmentsForUpload:(id)arg1 attachmentsForDisplay:(id)arg2 ;
+(id)taggedUsers:(id)arg1 ;
+(id)placeWithPlace:(id)arg1 isUserSelected:(BOOL)arg2 ;
+(id)robotext:(id)arg1 ;
+(id)appAttribution:(id)arg1 ;
+(id)imageAttachments:(id)arg1 ;
+(id)videoAttachment:(id)arg1 ;
+(id)sharedLink:(id)arg1 ;
-(void)matchAction:(/*^block*/id)arg1 appAttribution:(/*^block*/id)arg2 openGraphMedia:(/*^block*/id)arg3 imageAttachments:(/*^block*/id)arg4 place:(/*^block*/id)arg5 ref:(/*^block*/id)arg6 robotext:(/*^block*/id)arg7 sharedLink:(/*^block*/id)arg8 taggedUsers:(/*^block*/id)arg9 videoAttachment:(/*^block*/id)arg10 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
