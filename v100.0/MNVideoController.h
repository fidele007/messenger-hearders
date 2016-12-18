/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAudioSessionManagerClient.h>
#import <Messenger/MNVideoControllerProtocol.h>

@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue, MNVideoControllerDelegate;
@class NSObject, MNVideoRestorePlaybackState, NSURL, AVPlayer, AVPlayerItem, NSString;

@interface MNVideoController : NSObject <FBAudioSessionManagerClient, MNVideoControllerProtocol> {

	BOOL _shouldPlayVideoWhenForegrounded;
	id<AVAssetResourceLoaderDelegate> _resourceLoaderDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	MNVideoRestorePlaybackState* _restorePlaybackState;
	BOOL _muted;
	BOOL _shouldLoopPlayback;
	BOOL _shouldPlayWhenAssetsAreLoaded;
	BOOL _shouldStopOtherVideosWhenPlayed;
	BOOL _finishedPlaying;
	long long _playState;
	NSURL* _contentURL;
	id<MNVideoControllerDelegate> _delegate;
	AVPlayer* _player;
	double _lastStartTimePosition;
	AVPlayerItem* _playerItem;
	double _duration;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL finishedPlaying;                                       //@synthesize finishedPlaying=_finishedPlaying - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long playState;                                        //@synthesize playState=_playState - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                                         //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic,__weak) id<MNVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLoopPlayback;                                    //@synthesize shouldLoopPlayback=_shouldLoopPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayWhenAssetsAreLoaded;                         //@synthesize shouldPlayWhenAssetsAreLoaded=_shouldPlayWhenAssetsAreLoaded - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 currentPlaybackTime; 
@property (nonatomic,readonly) double lastStartTimePosition;                             //@synthesize lastStartTimePosition=_lastStartTimePosition - In the implementation block
@property (assign,nonatomic) BOOL shouldStopOtherVideosWhenPlayed;                       //@synthesize shouldStopOtherVideosWhenPlayed=_shouldStopOtherVideosWhenPlayed - In the implementation block
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
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                  //@synthesize muted=_muted - In the implementation block
-(id)initWithResourceLoaderDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setShouldPlayWhenAssetsAreLoaded:(BOOL)arg1 ;
-(void)setShouldLoopPlayback:(BOOL)arg1 ;
-(BOOL)hasLoadedResources;
-(BOOL)isLoadingResources;
-(double)lastStartTimePosition;
-(void)loadAssetResourcesAndPlay;
-(BOOL)shouldLoopPlayback;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)setShouldStopOtherVideosWhenPlayed:(BOOL)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_addControllerObservers;
-(void)_removePlayerItemObservers;
-(void)_removeControllerObservers;
-(void)_prepareToPlayAsset:(id)arg1 withKeys:(id)arg2 ;
-(void)_addPlayerItemObservers;
-(void)_updatePlayerMuteState;
-(void)_playerDidStartPlaying:(id)arg1 ;
-(void)_selfieVideoDidStartRecording:(id)arg1 ;
-(void)_handleRestorePlayback;
-(void)_stopWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldStopOtherVideosWhenPlayed;
-(void)setFinishedPlaying:(BOOL)arg1 ;
-(void)_playWithoutSeeking;
-(BOOL)shouldPlayWhenAssetsAreLoaded;
-(void)setDelegate:(id<MNVideoControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNVideoControllerDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)_reset;
-(void)stop;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)pause;
-(BOOL)finishedPlaying;
-(void)beginInterruption;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setPlayState:(long long)arg1 ;
-(AVPlayerItem *)playerItem;
-(long long)playState;
-(AVPlayer *)player;
-(SCD_Struct_FB25)currentPlaybackTime;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)itemDidFinishPlaying:(id)arg1 ;
-(void)_play;
-(void)_removePlayerObservers;
-(void)_addPlayerObservers;
@end

