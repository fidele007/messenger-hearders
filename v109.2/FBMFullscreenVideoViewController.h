/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol FBMFullscreenVideoViewControllerDelegate;
@class MPMoviePlayerController, FBMVideoPlaybackEventListenerAnnouncer, FBFullScreenVideoActionOverlayView, NSTimer, NSDateFormatter, UITapGestureRecognizer, NSURL, NSString;

@interface FBMFullscreenVideoViewController : UIViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate, FBAudioSessionManagerClient> {

	MPMoviePlayerController* _moviePlayerController;
	FBMVideoPlaybackEventListenerAnnouncer* _videoPlaybackEventAnnouncer;
	double _lastDisplayedTimeInSeconds;
	FBFullScreenVideoActionOverlayView* _fullscreenVideoActionOverlayView;
	double lastDisplayedTimeInSeconds;
	BOOL _isBeingScrubbed;
	BOOL _playingBeforeScrubbed;
	NSTimer* _playbackTimer;
	NSDateFormatter* _dateFormatter;
	NSTimer* _hideControlsTimer;
	UITapGestureRecognizer* _fullScreenTapGesture;
	NSURL* _contentUrl;
	double _suspendedPlaybackTime;
	unsigned long long _requestedTime;
	double _lastStartTimePosition;
	BOOL _showsDoneButton;
	id<FBMFullscreenVideoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMFullscreenVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL showsDoneButton;                                                    //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)addVideoPlaybackEventListener:(id)arg1 ;
-(BOOL)fb_hidesTabBar;
-(void)_initializeMoviePlayerIfNecessary;
-(void)_didTapScreen:(id)arg1 ;
-(void)_cleanupActionOverlayView;
-(void)_addViewsToHierarchyIfNecessary;
-(void)_addNotifications;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupActionOverlayView;
-(void)_animateOverlayIn;
-(void)_handleMPMoviePlayerPlaybackDidFinish:(id)arg1 ;
-(void)_handleMPMoviePlayerPlaybackStateDidChange:(id)arg1 ;
-(void)_movieDurationAvailable:(id)arg1 ;
-(void)_loadStateChanged:(id)arg1 ;
-(void)_updateDateFormatForDuration;
-(void)_handleTapOnPlayPauseButton:(id)arg1 ;
-(void)_videoScrubberChanged:(id)arg1 ;
-(void)_updateTimeLabelsForPosition:(double)arg1 ;
-(void)_updateUIForPause;
-(void)_prepareToPlay;
-(void)_updateUIForPlaying;
-(void)_scheduleTimeElapsedTimer;
-(void)_playWithTimer;
-(void)_animateOverlayOut;
-(void)_videoScrubberStartScrub;
-(void)_dismissVideoPlayer;
-(BOOL)_isVideoDonePlaying;
-(id)initWithContentURL:(id)arg1 showsDoneButton:(BOOL)arg2 ;
-(void)removeVideoPlaybackEventListener:(id)arg1 ;
-(void)_videoScrubberTouchDown:(id)arg1 ;
-(void)_videoScrubberTouchComplete:(id)arg1 ;
-(void)setDelegate:(id<FBMFullscreenVideoViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMFullscreenVideoViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_doneButtonPressed;
-(void)beginInterruption;
-(BOOL)showsDoneButton;
-(void)_updateTime:(id)arg1 ;
-(void)_removeNotifications;
-(void)_play;
@end

