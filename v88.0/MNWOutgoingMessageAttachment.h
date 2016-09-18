/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNWLocationAttachment, MNWOutgoingAudioAttachment;

@interface MNWOutgoingMessageAttachment : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _sticker_stickerFbId;
	MNWLocationAttachment* _location_locationAttachment;
	MNWOutgoingAudioAttachment* _audio_audioAttachment;

}
+(id)audioWithAudioAttachment:(id)arg1 ;
+(id)locationWithLocationAttachment:(id)arg1 ;
+(id)stickerWithStickerFbId:(id)arg1 ;
-(void)matchSticker:(/*^block*/id)arg1 location:(/*^block*/id)arg2 audio:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

