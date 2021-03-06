/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoPlaybackEventListener.h>

@class NSString;

@interface FBVideoAudioFadeController : NSObject <FBVideoPlaybackEventListener> {

	long long _duration;
	double _startPlaybackTime;
	double _currentPlaybackTime;
	BOOL _isStalled;
	BOOL _useScreenBasedFading;
	BOOL _useGradualFading;
	float _videoOnScreenPercent;
	unsigned long long _audioNormalizationVolume;
	long long _maxVolume;

}

@property (assign,nonatomic) float videoOnScreenPercent;                               //@synthesize videoOnScreenPercent=_videoOnScreenPercent - In the implementation block
@property (assign,nonatomic) BOOL useScreenBasedFading;                                //@synthesize useScreenBasedFading=_useScreenBasedFading - In the implementation block
@property (assign,nonatomic) unsigned long long audioNormalizationVolume;              //@synthesize audioNormalizationVolume=_audioNormalizationVolume - In the implementation block
@property (assign,nonatomic) BOOL useGradualFading;                                    //@synthesize useGradualFading=_useGradualFading - In the implementation block
@property (assign,nonatomic) long long maxVolume;                                      //@synthesize maxVolume=_maxVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)audioNormalizationVolume;
-(BOOL)useGradualFading;
-(BOOL)useScreenBasedFading;
-(void)setAudioNormalizationVolume:(unsigned long long)arg1 ;
-(void)setUseScreenBasedFading:(BOOL)arg1 ;
-(void)setUseGradualFading:(BOOL)arg1 ;
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidRequestPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(float)_refreshedVolume:(double)arg1 meanLinearVolume:(long long)arg2 ;
-(void)setVideoOnScreenPercent:(float)arg1 ;
-(float)videoOnScreenPercent;
-(id)initWithDuration:(long long)arg1 ;
-(void)setMaxVolume:(long long)arg1 ;
-(long long)maxVolume;
@end

