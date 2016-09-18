/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPlayerDelegate.h>

@protocol FBVideoEditingPlaybackViewDelegate, FBVideoFilterViewsUpdateProtocol;
@class IGSurface, FBVideoProcessorFilterConfig, AVAsset, IGImageFilter, IGSurfaceView, UIImage, FBVideoPlayer, IGRenderer, NSString;

@interface FBVideoEditingPlaybackView : UIView <FBVideoPlayerDelegate> {

	IGSurface* _stabilizedFrame;
	GLKMatrix4 _playbackTransform;
	BOOL _squareCrop;
	FBVideoProcessorFilterConfig* _filterConfig;
	BOOL _disableFilterConfig;
	BOOL _playing;
	AVAsset* _asset;
	double _progress;
	IGImageFilter* _filter;
	IGSurfaceView* _thumbnailView;
	UIImage* _thumbnailImage;
	id<FBVideoEditingPlaybackViewDelegate> _delegate;
	id<FBVideoFilterViewsUpdateProtocol> _filterDelegate;
	FBVideoPlayer* _videoPlayer;
	IGRenderer* _renderer;
	IGSurfaceView* _filteredView;
	CGRect _cropRect;

}

@property (nonatomic,retain) FBVideoPlayer * videoPlayer;                                             //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                                   //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurfaceView * filteredView;                                            //@synthesize filteredView=_filteredView - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                           //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) double progress;                                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) IGImageFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) IGSurfaceView * thumbnailView;                                           //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                                //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoEditingPlaybackViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoFilterViewsUpdateProtocol> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (assign,getter=isLooping,nonatomic) BOOL looping; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) SCD_Struct_FB20 startTime; 
@property (assign,nonatomic) SCD_Struct_FB20 endTime; 
@property (nonatomic,readonly) SCD_Struct_FB20 currentTime; 
@property (assign,nonatomic) CGRect cropRect;                                                         //@synthesize cropRect=_cropRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)videoTrackTransform;
-(id)initWithAsset:(id)arg1 size:(CGSize)arg2 squareCrop:(BOOL)arg3 filterConfig:(id)arg4 disableFilterConfig:(BOOL)arg5 ;
-(void)updatePlayerFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(void)makeKey;
-(void)reloadPlayerAsset;
-(IGSurfaceView *)filteredView;
-(id<FBVideoFilterViewsUpdateProtocol>)filterDelegate;
-(void)setFilteredView:(IGSurfaceView *)arg1 ;
-(void)playFromTime:(SCD_Struct_FB20)arg1 ;
-(void)videoPlayerDidFinishPlaying;
-(void)videoPlayerDidLoadFilteredBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)videoPlayerDidLoadPixelBuffer:(CVBufferRef)arg1 withTime:(SCD_Struct_FB20)arg2 ;
-(void)playFromStart;
-(void)prepareToPlayWithCallback:(/*^block*/id)arg1 ;
-(void)setFilterDelegate:(id<FBVideoFilterViewsUpdateProtocol>)arg1 ;
-(void)setDelegate:(id<FBVideoEditingPlaybackViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBVideoEditingPlaybackViewDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_FB20)arg1 ;
-(void)stop;
-(void)setFilter:(IGImageFilter *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setThumbnailView:(IGSurfaceView *)arg1 ;
-(IGSurfaceView *)thumbnailView;
-(double)progress;
-(AVAsset *)asset;
-(SCD_Struct_FB20)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(CGSize)preferredSize;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(SCD_Struct_FB20)endTime;
-(void)setEndTime:(SCD_Struct_FB20)arg1 ;
-(void)seekToTime:(SCD_Struct_FB20)arg1 ;
-(IGRenderer *)renderer;
-(void)setLooping:(BOOL)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(SCD_Struct_FB20)currentTime;
-(FBVideoPlayer *)videoPlayer;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setVideoPlayer:(FBVideoPlayer *)arg1 ;
-(IGImageFilter *)filter;
-(BOOL)isPlaying;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)updateTransform;
-(BOOL)isLooping;
@end

