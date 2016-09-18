/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoPlaybackEventListener.h>
#import <Messenger/FBTVCastingPlaybackEventListener.h>

@protocol FBTVCastingPlaybackControlling;
@class FBVideoScrubber, UILabel, UIView, FBVideoPlaybackController, NSString;

@interface FBVideoPlaybackScrubberController : NSObject <FBVideoPlaybackEventListener, FBTVCastingPlaybackEventListener> {

	FBVideoScrubber* _scrubber;
	BOOL _isBeingScrubbed;
	BOOL _playAfterScrub;
	UILabel* _remainingTimeLabel;
	UILabel* _elapsedTimeLabel;
	UIView* _view;
	double _lastDisplayedTime;
	FBVideoPlaybackController* _playbackController;
	id<FBTVCastingPlaybackControlling> _tvPlaybackController;

}

@property (nonatomic,readonly) UIView * view;                       //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)_videoScrubberTouchDown:(id)arg1 ;
-(void)_videoScrubberChanged:(id)arg1 ;
-(void)_videoScrubberTouchComplete:(id)arg1 ;
-(void)_prepareForScrubbing;
-(void)tvVideoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)tvVideoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)configureForPlaybackController:(id)arg1 ;
-(void)configureForTVCastingPlaybackController:(id)arg1 ;
-(void)_layoutView;
-(id)init;
-(UIView *)view;
-(void)_setVideoDuration:(double)arg1 ;
-(void)_setCurrentTime:(double)arg1 ;
-(void)_updateTimeLabels;
@end

