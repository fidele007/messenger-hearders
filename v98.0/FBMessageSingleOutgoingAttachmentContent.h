/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMessageSingleAttachmentContentDedupable.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMessageSinglePhotoAttachmentContent, FBMessageVideoAttachmentContent, FBMessageSingleFileAttachmentContent, FBMessageAudioOutgoingAttachmentContent;

@interface FBMessageSingleOutgoingAttachmentContent : NSObject <FBMessageSingleAttachmentContentDedupable, NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMessageSinglePhotoAttachmentContent* _photo;
	FBMessageVideoAttachmentContent* _video;
	FBMessageSingleFileAttachmentContent* _file;
	FBMessageAudioOutgoingAttachmentContent* _audio;

}
+(id)video:(id)arg1 ;
+(id)audio:(id)arg1 ;
+(id)photo:(id)arg1 ;
+(id)file:(id)arg1 ;
-(id)dedupeKey;
-(void)matchPhoto:(/*^block*/id)arg1 video:(/*^block*/id)arg2 file:(/*^block*/id)arg3 audio:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
