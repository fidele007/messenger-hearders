/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNA360MediaBlockController.h>
#import <Messenger/FB360VideoPlayerNodeDelegate.h>
#import <Messenger/FBNativeArticleVideoScrubberDelegate.h>
#import <Messenger/FBDeviceOrientationSensorDelegate.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol FBVideoPlaybackLoggingDataProvider, FBVideoEntityProtocol;
@class FBUserSession, FBRichStoryBlockDisplayContext, FB360MediaContainerNode, FB360VideoPlayerNode, FB360VideoControlsOverlayNode, NSTimer, FBTimer, FB360VideoOverlayController, FBDeviceOrientationSensor, NSString;

@interface FB360VideoBlockController : FBNA360MediaBlockController <FB360VideoPlayerNodeDelegate, FBNativeArticleVideoScrubberDelegate, FBDeviceOrientationSensorDelegate, FBAudioSessionManagerClient> {

	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	id<FBVideoPlaybackLoggingDataProvider> _videoLoggingDataProvider;
	id<FBVideoEntityProtocol> _videoEntity;
	long long _loopingStyle;
	BOOL _autoplayEnabled;
	BOOL _hd;
	FB360MediaContainerNode* _containerNode;
	FB360VideoPlayerNode* _videoPlayer;
	FB360VideoControlsOverlayNode* _videoControls;
	BOOL _shouldResumePlayingAfterScrubbing;
	NSTimer* _controlsFadeTimer;
	FBTimer* _gyroDisplayTimer;
	FBTimer* _significantMovementTimer;
	BOOL _shouldShowMovementNux;
	FB360VideoOverlayController* _overlayController;
	BOOL _shouldOverrideMuteSwitch;
	FBDeviceOrientationSensor* _deviceOrientationSensor;

}

@property (nonatomic,readonly) FBDeviceOrientationSensor * deviceOrientationSensor;              //@synthesize deviceOrientationSensor=_deviceOrientationSensor - In the implementation block
@property (assign,nonatomic) BOOL shouldOverrideMuteSwitch;                                      //@synthesize shouldOverrideMuteSwitch=_shouldOverrideMuteSwitch - In the implementation block
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
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)_didTapCloseButton:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)didEnterWorkingRange;
-(void)didExitWorkingRange;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(BOOL)wantsCentermostFocus;
-(void)didEnterPreloadViewport;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(void)_didTapHeadingIndicator:(id)arg1 ;
-(id)blockRenderable;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(FBDeviceOrientationSensor *)deviceOrientationSensor;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 videoLoggingDataProvider:(id)arg5 ;
-(BOOL)_shouldEnableAutoplayVideoForPresentationAttributes:(id)arg1 ;
-(long long)_loopingStyleFromPresentationAttributes:(id)arg1 ;
-(void)_stopControlsFadeTimer;
-(void)_startControlsFadeTimer;
-(void)_didTapPlayPauseButton:(id)arg1 ;
-(void)setShouldOverrideMuteSwitch:(BOOL)arg1 ;
-(void)_controlsFadeTimerDidFire:(id)arg1 ;
-(void)_hideMovementNux;
-(void)_gyroDisplayTimerDidFire;
-(void)_significantMovementTimerDidFire;
-(void)videoScrubberDidBeginScrubbing:(id)arg1 ;
-(void)videoScrubberDidFinishScrubbing:(id)arg1 ;
-(void)videoScrubber:(id)arg1 didScrubToPlaybackTime:(double)arg2 ;
-(BOOL)shouldOverrideMuteSwitch;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadedDuration:(double)arg2 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateStallState:(BOOL)arg2 ;
-(void)videoPlayerDidStartPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 wasTappedAtPoint:(CGPoint)arg2 ;
-(void)videoPlayerDidRenderFrame:(id)arg1 ;
-(void)videoPlayerViewDidMoveSignificantly:(id)arg1 ;
-(void)videoPlayerViewDidMoveWithDrag:(id)arg1 ;
-(void)videoPlayerDidUpdateZoomLevelWithPinch:(id)arg1 ;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(void)cleanup;
-(void)beginInterruption;
-(void)deviceOrientationDidChange:(long long)arg1 ;
@end

