/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoPlaybackEventListener.h>
#import <Messenger/CALayerDelegate.h>
#import <Messenger/FBVideoOverlayPluginEventListener.h>

@class NSMutableDictionary, VideoContainerView, FBVideoPluginEventListenerAnnouncer, FBVideoPlaybackController, UIView, NSString;

@interface FBVideoViewManager : NSObject <FBVideoPlaybackEventListener, CALayerDelegate, FBVideoOverlayPluginEventListener> {

	NSMutableDictionary* _plugins;
	VideoContainerView* _videoContainerView;
	FBVideoPluginEventListenerAnnouncer* _announcer;
	BOOL _hideAllPlugins;
	BOOL _isOpening;
	BOOL _showShadowWhenInline;
	BOOL _showRoundedBorder;
	FBVideoPlaybackController* _videoController;
	unsigned long long _videoPlayerSource;

}

@property (nonatomic,readonly) UIView * videoContainerView;                            //@synthesize videoContainerView=_videoContainerView - In the implementation block
@property (nonatomic,retain) FBVideoPlaybackController * videoController;              //@synthesize videoController=_videoController - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlayerSource;                     //@synthesize videoPlayerSource=_videoPlayerSource - In the implementation block
@property (assign,nonatomic) BOOL isOpening;                                           //@synthesize isOpening=_isOpening - In the implementation block
@property (assign,nonatomic) BOOL showShadowWhenInline;                                //@synthesize showShadowWhenInline=_showShadowWhenInline - In the implementation block
@property (assign,nonatomic) BOOL showRoundedBorder;                                   //@synthesize showRoundedBorder=_showRoundedBorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)videoFrameForController:(id)arg1 withContainerSize:(CGSize)arg2 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(UIView *)videoContainerView;
-(id)initWithVideoPlaybackController:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didChangeVideoPlaybackItem:(id)arg2 ;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoDidManuallyPause;
-(void)videoDidManuallyResume;
-(unsigned long long)videoPlayerSource;
-(void)setShowRoundedBorder:(BOOL)arg1 ;
-(BOOL)showRoundedBorder;
-(void)removePluginForKey:(id)arg1 ;
-(void)_updatePluginVisibility;
-(id)pluginForKey:(id)arg1 ;
-(void)addPlugin:(id)arg1 forKey:(id)arg2 ;
-(void)setVideoPlayerSource:(unsigned long long)arg1 shouldLog:(BOOL)arg2 ;
-(void)setVideoPlayerSource:(unsigned long long)arg1 shouldLog:(BOOL)arg2 debugReason:(unsigned long long)arg3 extra:(id)arg4 ;
-(void)_configVideoContainerView;
-(void)restoreVideoPlayerOutputCoordinationModeDuckedContext:(id)arg1 ;
-(void)restoreVideoPlayerSourceFromContext:(id)arg1 ;
-(void)restoreRespectHardwareMuteSwitchFromContext:(id)arg1 ;
-(void)restoreMuteStateFromContext:(id)arg1 ;
-(void)restoreVideoGravityFromContext:(id)arg1 ;
-(void)restoreBackgroundColor:(id)arg1 ;
-(void)setVideoPlayerSource:(unsigned long long)arg1 ;
-(unsigned long long)_currentPlayerSourceVisibilityOption;
-(void)bringPluginToFrontForKey:(id)arg1 ;
-(void)_updateAccessibilityIdentifierForState:(long long)arg1 ;
-(void)addOrReplacePlugin:(id)arg1 forKey:(id)arg2 ;
-(void)setAllPluginsHidden:(BOOL)arg1 ;
-(void)setVideoPlayerSourceWithoutLogging:(unsigned long long)arg1 ;
-(void)setVideoPlayerSource:(unsigned long long)arg1 debugReason:(unsigned long long)arg2 ;
-(void)setVideoPlayerSource:(unsigned long long)arg1 withExtra:(id)arg2 ;
-(void)setShowShadowWhenInline:(BOOL)arg1 ;
-(void)restoreContext:(id)arg1 ;
-(BOOL)isOpening;
-(void)setIsOpening:(BOOL)arg1 ;
-(BOOL)showShadowWhenInline;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
-(id)currentContext;
@end

