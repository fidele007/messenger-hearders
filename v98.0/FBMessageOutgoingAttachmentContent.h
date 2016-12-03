/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMessageAudioOutgoingAttachmentContent, FBMessageStickerOutgoingAttachmentContent, NSArray, FBMessageVideoAttachmentContent, FBMessageOutgoingXMAContent;

@interface FBMessageOutgoingAttachmentContent : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMessageAudioOutgoingAttachmentContent* _audio;
	FBMessageStickerOutgoingAttachmentContent* _sticker;
	NSArray* _photos;
	FBMessageVideoAttachmentContent* _video;
	NSArray* _files;
	FBMessageOutgoingXMAContent* _xma;

}
+(id)photos:(id)arg1 ;
+(id)sticker:(id)arg1 ;
+(id)video:(id)arg1 ;
+(id)xma:(id)arg1 ;
+(id)audio:(id)arg1 ;
+(id)files:(id)arg1 ;
-(void)matchAudio:(/*^block*/id)arg1 sticker:(/*^block*/id)arg2 photos:(/*^block*/id)arg3 video:(/*^block*/id)arg4 files:(/*^block*/id)arg5 xma:(/*^block*/id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
