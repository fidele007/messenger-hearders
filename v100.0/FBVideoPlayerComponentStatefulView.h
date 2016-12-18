/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBVideoPlayerContainerFBVideoPresentingDelegate;
@class FBVideoViewManager, UIView, FBVideoPlaybackController;

@interface FBVideoPlayerComponentStatefulView : UIView {

	BOOL _relinquishable;
	FBVideoViewManager* _viewManager;
	UIView* _currentVideoView;
	id<FBVideoPlayerContainer><FBVideoPresentingDelegate> _displayController;
	/*^block*/id _relinquishableChangedHandler;
	unsigned long long _videoPlayerOptions;

}

@property (nonatomic,retain) FBVideoViewManager * viewManager;                                                            //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,readonly) FBVideoPlaybackController * videoController; 
@property (nonatomic,retain) UIView * currentVideoView;                                                                   //@synthesize currentVideoView=_currentVideoView - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoPlayerContainer><FBVideoPresentingDelegate> displayController;              //@synthesize displayController=_displayController - In the implementation block
@property (getter=isRelinquishable,nonatomic,readonly) BOOL relinquishable;                                               //@synthesize relinquishable=_relinquishable - In the implementation block
@property (nonatomic,copy) id relinquishableChangedHandler;                                                               //@synthesize relinquishableChangedHandler=_relinquishableChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlayerOptions;                                                       //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
-(void)addVideoContainerViewFromViewManager;
-(id)relinquishableChangedHandler;
-(BOOL)isConfiguredForVideoID:(id)arg1 playerOptions:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)setViewManager:(FBVideoViewManager *)arg1 ;
-(void)setViewManagerWithoutAddVideoContainerView:(id)arg1 ;
-(FBVideoViewManager *)viewManager;
-(void)setCurrentVideoView:(UIView *)arg1 ;
-(BOOL)isRelinquishable;
-(void)setRelinquishableChangedHandler:(id)arg1 ;
-(unsigned long long)videoPlayerOptions;
-(void)setVideoPlayerOptions:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(UIView *)currentVideoView;
-(void)setDisplayController:(id<FBVideoPlayerContainer><FBVideoPresentingDelegate>)arg1 ;
-(id<FBVideoPlayerContainer><FBVideoPresentingDelegate>)displayController;
@end

