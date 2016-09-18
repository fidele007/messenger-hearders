/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)_updateTimeLabelsForPosition:(double)arg1 ;
-(void)_videoScrubberTouchDown:(id)arg1 ;
-(void)_videoScrubberChanged:(id)arg1 ;
-(void)_videoScrubberTouchComplete:(id)arg1 ;
-(void)removeVideoPlaybackEventListener:(id)arg1 ;
-(void)addVideoPlaybackEventListener:(id)arg1 ;
-(void)_addNotifications;
-(void)_initializeMoviePlayerIfNecessary;
-(void)_didTapScreen:(id)arg1 ;
-(void)_cleanupActionOverlayView;
-(void)_addViewsToHierarchyIfNecessary;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupActionOverlayView;
-(void)_animateOverlayIn;
-(void)_handleMPMoviePlayerPlaybackDidFinish:(id)arg1 ;
-(void)_handleMPMoviePlayerPlaybackStateDidChange:(id)arg1 ;
-(void)_movieDurationAvailable:(id)arg1 ;
-(void)_loadStateChanged:(id)arg1 ;
-(void)_updateDateFormatForDuration;
-(void)_handleTapOnPlayPauseButton:(id)arg1 ;
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
-(BOOL)fb_hidesTabBar;
-(void)setDelegate:(id<FBMFullscreenVideoViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMFullscreenVideoViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_doneButtonPressed;
-(void)beginInterruption;
-(void)_updateTime:(id)arg1 ;
-(BOOL)showsDoneButton;
-(void)_play;
-(void)_removeNotifications;
@end

