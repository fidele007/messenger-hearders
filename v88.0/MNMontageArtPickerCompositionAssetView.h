/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UILabel, FBMemMessengerMontageTextAsset, FBMStickerView, FBMemMessengerMontageImageAsset, UIImageView;

@interface MNMontageArtPickerCompositionAssetView : NSObject <NSCopying> {

	unsigned long long _subtype;
	UILabel* _text_textLabel;
	FBMemMessengerMontageTextAsset* _text_textAsset;
	FBMStickerView* _sticker_stickerView;
	FBMemMessengerMontageImageAsset* _sticker_imageAsset;
	UIImageView* _image_imageView;
	FBMemMessengerMontageImageAsset* _image_imageAsset;

}
+(id)imageWithImageView:(id)arg1 imageAsset:(id)arg2 ;
+(id)stickerWithStickerView:(id)arg1 imageAsset:(id)arg2 ;
+(id)textWithTextLabel:(id)arg1 textAsset:(id)arg2 ;
-(void)matchText:(/*^block*/id)arg1 sticker:(/*^block*/id)arg2 image:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

