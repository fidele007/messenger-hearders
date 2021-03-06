/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAudioCorePlayerDataSource.h>

@class FBAudioCorePlayer, NSString;

@interface FBAudioPreviewPlayer : NSObject <FBAudioCorePlayerDataSource> {

	FBAudioCorePlayer* _player;
	shared_ptr<facebook::audiofiltercore::AudioInputMixer<short> >* _mixer;
	shared_ptr<facebook::audiofiltercore::VolumeLevelAudioTransform<short> >* _volumeTransform;
	BOOL _playing;
	float _volume;

}

@property (getter=isPlaying,nonatomic,readonly) BOOL playing;              //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float volume;                                 //@synthesize volume=_volume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readSamples:(short*)arg1 sampleCount:(unsigned long long)arg2 ;
-(void)addAudioInput:(shared_ptr<facebook::audiofiltercore::AudioInput<short> >*)arg1 ;
-(void)removeAudioInput:(shared_ptr<facebook::audiofiltercore::AudioInput<short> >*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(void)play;
-(void)_setupPlayer;
@end

