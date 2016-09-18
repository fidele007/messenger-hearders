/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoPlaybackController;


@protocol FBVideoPluginView <FBVideoPlaybackEventListener,FBVideoPluginEventListener>
@property (assign,nonatomic) CGRect videoFrame; 
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
@required
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1;
-(unsigned long long)visibilityOptions;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(id)arg1;

@end

