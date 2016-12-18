/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPlainPhotoViewModel, FBMessageOutgoingAttribution;

@interface MNInboxSharableContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _link_linkId;
	MNPlainPhotoViewModel* _gif_photoViewModel;
	FBMessageOutgoingAttribution* _gif_outgoingAttribution;
	NSString* _video_videoId;

}
+(id)gifWithPhotoViewModel:(id)arg1 outgoingAttribution:(id)arg2 ;
+(id)videoWithVideoId:(id)arg1 ;
+(id)linkWithLinkId:(id)arg1 ;
-(void)matchLink:(/*^block*/id)arg1 gif:(/*^block*/id)arg2 video:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

