/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerPhotoAttachment, FBComposerVideoAttachment, FBCompositionLinkShare, NSArray, FBComposerVideoHighlightAttachment, FBNearbyPlace, FBComposerStickerAttachment, FBComposerStorylineAttachment, FBComposerGametimeAttachment, FBComposerGoodwillVideoAttachment, FBComposerActivityAttachment, FBComposer360PhotoAttachment;

@interface FBComposerAttachment : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBComposerPhotoAttachment* _photoAttachment_attachment;
	FBComposerVideoAttachment* _videoAttachment_attachment;
	FBComposerPhotoAttachment* _openGraphAttachment;
	FBCompositionLinkShare* _sharedLinkAttachment_sharedLink;
	NSArray* _sharedLinkAttachment_shareTrackingCodes;
	BOOL _sharedLinkAttachment_reshareOriginalPost;
	FBComposerVideoHighlightAttachment* _videoHighlightAttachment_videoHighlightAttachment;
	FBNearbyPlace* _placeAttachment_nearbyPlace;
	FBComposerStickerAttachment* _stickerAttachment_stickerAttachment;
	FBComposerStorylineAttachment* _storylineAttachment_storylineAttachment;
	FBComposerGametimeAttachment* _gametimeAttachment_gametimeAttachment;
	FBComposerGoodwillVideoAttachment* _goodwillVideoAttachment_goodwillVideoAttachment;
	FBComposerActivityAttachment* _activityAttachment_activityAttachment;
	FBComposer360PhotoAttachment* _threeSixtyPhotoAttachment_threeSixtyPhotoAttachment;

}
+(id)activityAttachmentWithActivityAttachment:(id)arg1 ;
+(id)gametimeAttachmentWithGametimeAttachment:(id)arg1 ;
+(id)goodwillVideoAttachmentWithGoodwillVideoAttachment:(id)arg1 ;
+(id)openGraphAttachment:(id)arg1 ;
+(id)photoAttachmentWithAttachment:(id)arg1 ;
+(id)placeAttachmentWithNearbyPlace:(id)arg1 ;
+(id)sharedLinkAttachmentWithSharedLink:(id)arg1 shareTrackingCodes:(id)arg2 reshareOriginalPost:(BOOL)arg3 ;
+(id)stickerAttachmentWithStickerAttachment:(id)arg1 ;
+(id)storylineAttachmentWithStorylineAttachment:(id)arg1 ;
+(id)threeSixtyPhotoAttachmentWithThreeSixtyPhotoAttachment:(id)arg1 ;
+(id)videoAttachmentWithAttachment:(id)arg1 ;
+(id)videoHighlightAttachmentWithVideoHighlightAttachment:(id)arg1 ;
-(void)matchPhotoAttachment:(/*^block*/id)arg1 videoAttachment:(/*^block*/id)arg2 openGraphAttachment:(/*^block*/id)arg3 sharedLinkAttachment:(/*^block*/id)arg4 videoHighlightAttachment:(/*^block*/id)arg5 placeAttachment:(/*^block*/id)arg6 stickerAttachment:(/*^block*/id)arg7 storylineAttachment:(/*^block*/id)arg8 gametimeAttachment:(/*^block*/id)arg9 goodwillVideoAttachment:(/*^block*/id)arg10 activityAttachment:(/*^block*/id)arg11 threeSixtyPhotoAttachment:(/*^block*/id)arg12 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

