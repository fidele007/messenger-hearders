/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPluginView.h>

@class UILabel, UIImageView, FBVideoPlaybackController, NSString;

@interface FBVideoPlayerSlideshowMusicPlugin : UIView <FBVideoPluginView> {

	UILabel* _musicInfoLabel;
	UIImageView* _musicIcon;
	CGRect _iconFrame;
	CGRect _infoFrame;
	FBVideoPlaybackController* _videoController;
	CGRect _videoFrame;

}

@property (assign,nonatomic) CGRect videoFrame;                                               //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(FBVideoPlaybackController *)videoController;
-(id)initWithFrame:(CGRect)arg1 song:(id)arg2 ;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)_startMusicAttributionAnimation;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)startAnimation;
@end

