/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol OS_dispatch_semaphore, FBVideoPlayerDelegate, OS_dispatch_queue;
@class NSObject, FBVideoProcessor, FBVideoProcessorConfig, FBVideoProcessorFilterConfig, AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString;

@interface FBVideoPlayer : NSObject <AVPlayerItemOutputPullDelegate> {

	NSObject*<OS_dispatch_semaphore> _perpareForDisplay;
	/*^block*/id _displayCallback;
	id _displayLinkTarget;
	FBVideoProcessor* _videoProcessor;
	FBVideoProcessorConfig* _videoProcessorConfig;
	FBVideoProcessorFilterConfig* _filterConfig;
	BOOL _looping;
	BOOL _seeking;
	AVAsset* _asset;
	id<FBVideoPlayerDelegate> _delegate;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	AVPlayerItemVideoOutput* _videoOutput;
	CADisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _videoOutputQueue;
	SCD_Struct_FB20 _startTime;
	SCD_Struct_FB20 _seekTime;

}

@property (nonatomic,retain) AVPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItemVideoOutput * videoOutput;                      //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoOutputQueue;              //@synthesize videoOutputQueue=_videoOutputQueue - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                              //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB20 seekTime;                                   //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) double progress; 
@property (assign,nonatomic) SCD_Struct_FB20 startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB20 endTime; 
@property (nonatomic,readonly) SCD_Struct_FB20 currentTime; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isLooping,nonatomic) BOOL looping;                              //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoPlayerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_enableFiltersModeWithFilter:(id)arg1 ;
-(void)updateFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(void)itemDidFinishPlaying;
-(NSObject*<OS_dispatch_queue>)videoOutputQueue;
-(void)displayLinkCallback:(id)arg1 ;
-(void)loadBufferAtItemTime:(SCD_Struct_FB20)arg1 ;
-(void)playFromTime:(SCD_Struct_FB20)arg1 ;
-(void)performDisplayCallback;
-(void)playFromStart;
-(id)initWithAsset:(id)arg1 filterConfig:(id)arg2 disableFilterConfig:(BOOL)arg3 ;
-(void)prepareToPlayWithCallback:(/*^block*/id)arg1 ;
-(void)setVideoOutputQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<FBVideoPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoPlayerDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_FB20)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(double)progress;
-(AVAsset *)asset;
-(SCD_Struct_FB20)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(SCD_Struct_FB20)endTime;
-(void)setEndTime:(SCD_Struct_FB20)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_FB20)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)isSeeking;
-(void)setLooping:(BOOL)arg1 ;
-(SCD_Struct_FB20)currentTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(SCD_Struct_FB20)seekTime;
-(AVPlayer *)player;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setSeekTime:(SCD_Struct_FB20)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVideoOutput:(AVPlayerItemVideoOutput *)arg1 ;
-(AVPlayerItemVideoOutput *)videoOutput;
-(BOOL)isLooping;
@end

