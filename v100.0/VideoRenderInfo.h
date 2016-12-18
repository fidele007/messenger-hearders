/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoRenderInfo <RTCVideoSnapshotSource>
@property (assign,nonatomic,__weak) id<VideoRenderInfoDelegate> renderInfoDelegate; 
@property (nonatomic,readonly) CGSize videoSize; 
@property (nonatomic,readonly) double timeIntervalSinceLastFrame; 
@property (nonatomic,readonly) BOOL hasVideoStarted; 
@property (assign,nonatomic) unsigned long long videoScaleType; 
@property (nonatomic,readonly) BOOL shouldResizeView; 
@required
-(void)setRenderInfoDelegate:(id)arg1;
-(void)setVideoScaleType:(unsigned long long)arg1;
-(BOOL)shouldResizeView;
-(void)videoStreamRestarted;
-(BOOL)hasVideoStarted;
-(double)timeIntervalSinceLastFrame;
-(unsigned long long)videoScaleType;
-(id<VideoRenderInfoDelegate>)renderInfoDelegate;
-(CGSize)videoSize;

@end

