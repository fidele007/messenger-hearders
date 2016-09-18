/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStringWithRedactedDescription, MNPhotoViewModel, MNVideoAttachmentViewModel, FBMSticker;

@interface MNThreadMontageThumbnailContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBStringWithRedactedDescription* _text_text;
	MNPhotoViewModel* _photo_photo;
	MNVideoAttachmentViewModel* _video_video;
	FBMSticker* _sticker_sticker;

}
+(id)stickerWithSticker:(id)arg1 ;
+(id)photoWithPhoto:(id)arg1 ;
+(id)textWithText:(id)arg1 ;
+(id)videoWithVideo:(id)arg1 ;
+(id)unknown;
-(void)matchText:(/*^block*/id)arg1 photo:(/*^block*/id)arg2 video:(/*^block*/id)arg3 sticker:(/*^block*/id)arg4 unknown:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

