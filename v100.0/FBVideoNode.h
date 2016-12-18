/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBVideoPlaybackEventListener.h>
#import <Messenger/FBAudioSessionClientProvider.h>
#import <Messenger/FBVideoAudioSessionManagerDelegate.h>
#import <Messenger/FBPlayerItemBuilder.h>
#import <Messenger/FBMultiresolutionImageNodeDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBVideoPlaybackLoggingDataProvider, FBVideoNodeDelegate, FB360VideoModelviewPerspectiveProvider;
@class FBVideoPlaybackItem, FBMultiresolutionImageNode, FBVideoPlaybackController, ASDisplayNode, NSTimer, NSMapTable, FBUserSession, FB360VideoEngagementLogger, FB360VideoCamera, NSString;

@interface FBVideoNode : ASDisplayNode <FBVideoPlaybackEventListener, FBAudioSessionClientProvider, FBVideoAudioSessionManagerDelegate, FBPlayerItemBuilder, FBMultiresolutionImageNodeDelegate, UIGestureRecognizerDelegate> {

	FBVideoPlaybackItem* _videoPlaybackItem;
	FBMultiresolutionImageNode* _posterFrameNode;
	FBVideoPlaybackController* _secondaryPlaybackController;
	ASDisplayNode* _mainVideoOutputNode;
	ASDisplayNode* _secondaryVideoOutputNode;
	double _crossFadeProgress;
	long long _compositionLoopCount;
	NSTimer* _stallTimer;
	BOOL _needsVideoGravityRefresh;
	BOOL _playing;
	BOOL _playingBeforeInterruption;
	id<FBVideoPlaybackLoggingDataProvider> _videoLoggingDataProvider;
	struct {
		unsigned didDisplayPreviewImage;
		unsigned didUpdatePlaybackTime;
		unsigned didUpdateLoadedDuration;
		unsigned didPlayToEnd;
		unsigned didUpdateStallState;
		unsigned didUpdatePausedState;
		unsigned didStartPlayback;
		unsigned willUpdateVolume;
	}  _delegateFlags;
	NSMapTable* _wrapperNodeForPluginTable;
	BOOL _isStalled;
	BOOL _hasAudioTrack;
	BOOL _hd;
	BOOL _mutedAudioIndicatorEnabled;
	BOOL _fnfEnabled;
	id<FBVideoNodeDelegate> _delegate;
	id<FB360VideoModelviewPerspectiveProvider> _modelviewPerspectiveProvider;
	double _currentRotation;
	double _volume;
	long long _loopingStyle;
	double _loadedDuration;
	FBVideoPlaybackController* _mainPlaybackController;
	FBUserSession* _session;

}

@property (assign,nonatomic) BOOL isStalled;                                                                              //@synthesize isStalled=_isStalled - In the implementation block
@property (nonatomic,readonly) FBVideoPlaybackController * mainPlaybackController;                                        //@synthesize mainPlaybackController=_mainPlaybackController - In the implementation block
@property (nonatomic,readonly) BOOL fnfEnabled;                                                                           //@synthesize fnfEnabled=_fnfEnabled - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBVideoPlaybackItem * videoPlaybackItem;                                                   //@synthesize videoPlaybackItem=_videoPlaybackItem - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoNodeDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FB360VideoModelviewPerspectiveProvider> modelviewPerspectiveProvider;              //@synthesize modelviewPerspectiveProvider=_modelviewPerspectiveProvider - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProvider> videoLoggingDataProvider;                           //@synthesize videoLoggingDataProvider=_videoLoggingDataProvider - In the implementation block
@property (nonatomic,readonly) FB360VideoEngagementLogger * videoEngagementLogger; 
@property (assign,nonatomic) double currentRotation;                                                                      //@synthesize currentRotation=_currentRotation - In the implementation block
@property (nonatomic,readonly) BOOL trackingPans; 
@property (nonatomic,readonly) BOOL hasAudioTrack;                                                                        //@synthesize hasAudioTrack=_hasAudioTrack - In the implementation block
@property (assign,nonatomic) double volume;                                                                               //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) FB360VideoCamera * camera; 
@property (nonatomic,readonly) long long loopingStyle;                                                                    //@synthesize loopingStyle=_loopingStyle - In the implementation block
@property (nonatomic,readonly) BOOL hd;                                                                                   //@synthesize hd=_hd - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double loadedDuration;                                                                     //@synthesize loadedDuration=_loadedDuration - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (assign,getter=mutedAudioIndicatorIsEnabled,nonatomic) BOOL mutedAudioIndicatorEnabled;                         //@synthesize mutedAudioIndicatorEnabled=_mutedAudioIndicatorEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadDataForVideo:(id)arg1 definition:(long long)arg2 session:(id)arg3 ;
-(void)_staticInitialize;
-(BOOL)fnfEnabled;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(FBVideoPlaybackItem *)videoPlaybackItem;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(id)initWithVideoEntity:(id)arg1 hd:(BOOL)arg2 loopingStyle:(long long)arg3 videoLoggingDataProvider:(id)arg4 session:(id)arg5 ;
-(void)setModelviewPerspectiveProvider:(id<FB360VideoModelviewPerspectiveProvider>)arg1 ;
-(id<FBVideoPlaybackLoggingDataProvider>)videoLoggingDataProvider;
-(FB360VideoEngagementLogger *)videoEngagementLogger;
-(void)fadeAudioInWithDuration:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeAudioOutWithDuration:(float)arg1 completion:(/*^block*/id)arg2 ;
-(double)currentRotation;
-(BOOL)hasAudioTrack;
-(void)setCurrentRotation:(double)arg1 ;
-(void)setMutedAudioIndicatorEnabled:(BOOL)arg1 ;
-(BOOL)trackingPans;
-(FBVideoPlaybackController *)mainPlaybackController;
-(void)audioSessionManagerDidBeginInterruption:(id)arg1 ;
-(void)audioSessionManager:(id)arg1 didEndInterruption:(BOOL)arg2 ;
-(id)initWithVideoPlaybackItem:(id)arg1 placeholderNode:(id)arg2 hd:(BOOL)arg3 loopingStyle:(long long)arg4 hasAudioTrack:(BOOL)arg5 videoLoggingDataProvider:(id)arg6 session:(id)arg7 ;
-(void)_didDisplayPreviewImage;
-(void)prepareForInterruption;
-(void)resumeFromInterruption;
-(id)_playbackControllerWithPlaybackItem:(id)arg1 loggingProvider:(id)arg2 ;
-(void)setMainPlaybackController:(FBVideoPlaybackController *)arg1 ;
-(id)_videoOutputNodeWithPlaybackController:(id)arg1 ;
-(void)_didUpdateCurrentPlaybackItem;
-(void)_animatePosterFrameAlphaTo:(double)arg1 duration:(double)arg2 ;
-(void)_instantiateVideoPlaybackControllersIfNeeded;
-(BOOL)_playbackItemsAreInitialized;
-(BOOL)_isCrossfading;
-(void)_crossFadeVideoPlayers;
-(void)_stopStallTimer;
-(void)_stopCrossFade;
-(void)_hidePosterFrame;
-(void)_refreshVideoGravityForPlaybackController:(id)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
-(void)_startStallTimer;
-(void)_stallTimerDidFire:(id)arg1 ;
-(void)_showPosterFrame;
-(void)_updateCrossFadeProgress:(double)arg1 ;
-(void)_resetVideoPlaybackController:(id)arg1 ;
-(BOOL)_wants360;
-(void)_didSetMainPlaybackController:(id)arg1 ;
-(id)audioSessionClientForVideoPlaybackController:(id)arg1 ;
-(id)playerItemForAsset:(id)arg1 ;
-(void)removePlugin:(id)arg1 ;
-(CGRect)_mainVideoFrame;
-(id<FB360VideoModelviewPerspectiveProvider>)modelviewPerspectiveProvider;
-(long long)loopingStyle;
-(BOOL)hd;
-(double)loadedDuration;
-(BOOL)mutedAudioIndicatorIsEnabled;
-(void)addPlugin:(id)arg1 ;
-(void)setDelegate:(id<FBVideoNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoNodeDelegate>)delegate;
-(double)duration;
-(void)invalidate;
-(void)layout;
-(void)pause;
-(void)seekToTime:(double)arg1 ;
-(FBUserSession *)session;
-(double)currentTime;
-(BOOL)isStalled;
-(void)play;
-(FB360VideoCamera *)camera;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(double)volume;
@end

