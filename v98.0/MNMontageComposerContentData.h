/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, AVURLAsset;

@interface MNMontageComposerContentData : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIImage* _image_image;
	AVURLAsset* _video_videoAsset;
	UIImage* _video_thumbnail;

}
+(id)videoWithVideoAsset:(id)arg1 thumbnail:(id)arg2 ;
+(id)imageWithImage:(id)arg1 ;
-(void)matchImage:(/*^block*/id)arg1 video:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

