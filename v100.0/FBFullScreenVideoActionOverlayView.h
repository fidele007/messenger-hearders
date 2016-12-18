/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBDismissalDoneButton, FBVideoScrubber, UILabel, UIButton, FBGradientView, UIApplication, UIView;

@interface FBFullScreenVideoActionOverlayView : UIView {

	FBDismissalDoneButton* _doneButton;
	FBVideoScrubber* _videoScrubber;
	UILabel* _remainingTimeLabel;
	UILabel* _elapsedTimeLabel;
	UIButton* _playPauseButton;
	FBGradientView* _playbackControlShadow;
	long long _overlayStyleToShow;
	UIApplication* _application;
	BOOL _showHDButton;
	BOOL _showGradientShadowUnderPlaybackControls;
	BOOL _shouldShowScrubberTopStyle;
	UIButton* _hdButton;
	UIButton* _reportButton;
	UIView* _playbackControls;
	double _bottomOffset;
	double _scrubberHeight;
	double _doneButtonOffset;
	double _controlBarYOffSet;
	CGRect _videoFrame;

}

@property (nonatomic,readonly) FBDismissalDoneButton * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) FBVideoScrubber * videoScrubber;                         //@synthesize videoScrubber=_videoScrubber - In the implementation block
@property (nonatomic,readonly) UILabel * remainingTimeLabel;                            //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * elapsedTimeLabel;                              //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                              //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * hdButton;                                     //@synthesize hdButton=_hdButton - In the implementation block
@property (nonatomic,readonly) UIButton * reportButton;                                 //@synthesize reportButton=_reportButton - In the implementation block
@property (nonatomic,retain) UIView * playbackControls;                                 //@synthesize playbackControls=_playbackControls - In the implementation block
@property (assign,nonatomic) BOOL showHDButton;                                         //@synthesize showHDButton=_showHDButton - In the implementation block
@property (assign,nonatomic) BOOL showGradientShadowUnderPlaybackControls;              //@synthesize showGradientShadowUnderPlaybackControls=_showGradientShadowUnderPlaybackControls - In the implementation block
@property (assign,nonatomic) double bottomOffset;                                       //@synthesize bottomOffset=_bottomOffset - In the implementation block
@property (assign,nonatomic) double scrubberHeight;                                     //@synthesize scrubberHeight=_scrubberHeight - In the implementation block
@property (assign,nonatomic) double doneButtonOffset;                                   //@synthesize doneButtonOffset=_doneButtonOffset - In the implementation block
@property (assign,nonatomic) BOOL shouldShowScrubberTopStyle;                           //@synthesize shouldShowScrubberTopStyle=_shouldShowScrubberTopStyle - In the implementation block
@property (assign,nonatomic) CGRect videoFrame;                                         //@synthesize videoFrame=_videoFrame - In the implementation block
@property (assign,nonatomic) double controlBarYOffSet;                                  //@synthesize controlBarYOffSet=_controlBarYOffSet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 usingOverlayStyle:(long long)arg2 ;
-(void)_videoScrubberTouchDown:(id)arg1 ;
-(void)_videoScrubberTouchComplete:(id)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(UIView *)playbackControls;
-(void)_layoutDoneButton;
-(void)_layoutPlaybackControlsForWilde;
-(double)bottomOffset;
-(void)setPlayPauseButtonSelected:(BOOL)arg1 ;
-(void)showPlaybackControls:(BOOL)arg1 ;
-(void)setShowHDButton:(BOOL)arg1 ;
-(void)setShowGradientShadowUnderPlaybackControls:(BOOL)arg1 ;
-(void)setBottomOffset:(double)arg1 ;
-(UIButton *)hdButton;
-(void)setPlaybackControls:(UIView *)arg1 ;
-(BOOL)showHDButton;
-(BOOL)showGradientShadowUnderPlaybackControls;
-(double)scrubberHeight;
-(void)setScrubberHeight:(double)arg1 ;
-(id)_getReportButton;
-(void)_layoutPlaybackControlsExisting;
-(void)_layoutPlaybackControlsForMessenger;
-(void)_layoutPlaybackControlsForMoments;
-(UIButton *)reportButton;
-(double)doneButtonOffset;
-(void)setDoneButtonOffset:(double)arg1 ;
-(BOOL)shouldShowScrubberTopStyle;
-(void)setShouldShowScrubberTopStyle:(BOOL)arg1 ;
-(double)controlBarYOffSet;
-(void)setControlBarYOffSet:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(FBDismissalDoneButton *)doneButton;
-(FBVideoScrubber *)videoScrubber;
-(UILabel *)elapsedTimeLabel;
-(UILabel *)remainingTimeLabel;
-(UIButton *)playPauseButton;
@end

