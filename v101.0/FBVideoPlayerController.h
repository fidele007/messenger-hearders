/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CALayerDelegate.h>

@protocol FBVideoPlayerControllerDelegate;
@class FBKVOController, AVURLAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, FBVideoPlayerContentView, AVAssetImageGenerator, UIView, NSString;

@interface FBVideoPlayerController : NSObject <CALayerDelegate> {

	FBKVOController* _KVOController;
	AVURLAsset* _asset;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	AVPlayerLayer* _playerLayer;
	BOOL _loadingComponents[4];
	BOOL _preparedToPlay;
	id _timeObserver;
	FBVideoPlayerContentView* _view;
	AVAssetImageGenerator* _imageGenerator;
	BOOL _muted;
	id<FBVideoPlayerControllerDelegate> _delegate;
	double _volume;
	double _seekTolerance;

}

@property (assign,nonatomic,__weak) id<FBVideoPlayerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL preparedToPlay;                                            //@synthesize preparedToPlay=_preparedToPlay - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                       //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                                                    //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double seekTolerance;                                             //@synthesize seekTolerance=_seekTolerance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_playerItemStatusDidChange:(id)arg1 ;
-(void)_updateLoadingComponent:(unsigned long long)arg1 ready:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)_shouldLoadAssetTracks;
-(void)_applyMute;
-(BOOL)preparedToPlay;
-(void)_assetFinishedLoad;
-(void)_playerStatusDidChange:(id)arg1 ;
-(void)_playerLayerReadyForDisplayDidChange:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 resourceLoaderDelegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)didBeginScrubbing;
-(void)didScrubToPlaybackTime:(double)arg1 ;
-(void)didFinishScrubbing;
-(void)snapshotAtTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(double)seekTolerance;
-(void)setSeekTolerance:(double)arg1 ;
-(void)setDelegate:(id<FBVideoPlayerControllerDelegate>)arg1 ;
-(id<FBVideoPlayerControllerDelegate>)delegate;
-(UIView *)view;
-(void)reset;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)pause;
-(void)prepareToPlay;
-(BOOL)muted;
-(void)_playerItemDidReachEnd:(id)arg1 ;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolume:(double)arg1 ;
-(double)volume;
@end

