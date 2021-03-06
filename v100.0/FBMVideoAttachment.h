/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAttachment.h>

@class MNPlainPhotoSource;

@interface FBMVideoAttachment : FBMAttachment {

	long long _videoType;
	double _duration;
	MNPlainPhotoSource* _thumbnailPhotoSource;

}

@property (assign,nonatomic) long long videoType;                                  //@synthesize videoType=_videoType - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) MNPlainPhotoSource * thumbnailPhotoSource;              //@synthesize thumbnailPhotoSource=_thumbnailPhotoSource - In the implementation block
-(MNPlainPhotoSource *)thumbnailPhotoSource;
-(void)setVideoType:(long long)arg1 ;
-(void)setThumbnailPhotoSource:(MNPlainPhotoSource *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)videoType;
@end

