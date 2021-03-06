/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBARAudioServiceBase.h>
#import <Messenger/FBAudioSessionManagerClient.h>
#import <Messenger/FBSystemAudioSessionManagerListener.h>

@class FBAudioPreviewPlayerCoordinator, FBAudioRenderCoordinator, NSString;

@interface FBARAudioService : FBARAudioServiceBase <FBAudioSessionManagerClient, FBSystemAudioSessionManagerListener> {

	shared_ptr<fb::arengineservices::AudioServiceImpl>* _engineService;
	FBAudioPreviewPlayerCoordinator* _audioPlayerCoordinator;
	FBAudioRenderCoordinator* _audioRenderCoordinator;
	BOOL _isMusicalEffect;
	BOOL _microphoneDisabled;
	BOOL _previewDisabled;
	BOOL _echoCancellationEnabled;
	BOOL _recordStarted;
	BOOL _audioSessionIsConfiguring;
	BOOL _audioSessionActivated;

}

@property (assign) BOOL recordStarted;                                                 //@synthesize recordStarted=_recordStarted - In the implementation block
@property (assign) BOOL audioSessionIsConfiguring;                                     //@synthesize audioSessionIsConfiguring=_audioSessionIsConfiguring - In the implementation block
@property (assign) BOOL audioSessionActivated;                                         //@synthesize audioSessionActivated=_audioSessionActivated - In the implementation block
@property (assign,nonatomic) BOOL microphoneDisabled;                                  //@synthesize microphoneDisabled=_microphoneDisabled - In the implementation block
@property (assign,nonatomic) BOOL previewDisabled;                                     //@synthesize previewDisabled=_previewDisabled - In the implementation block
@property (assign,nonatomic) BOOL echoCancellationEnabled;                             //@synthesize echoCancellationEnabled=_echoCancellationEnabled - In the implementation block
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
@property (nonatomic,readonly) BOOL disableOverrideOutputPort; 
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(unsigned long long)audioSessionMode;
-(BOOL)echoCancellationEnabled;
-(void)setEchoCancellationEnabled:(BOOL)arg1 ;
-(void)setMicrophoneDisabled:(BOOL)arg1 ;
-(void)setPreviewDisabled:(BOOL)arg1 ;
-(void)processMicrophoneAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)audioRecordingStarted;
-(void)audioRecordingStopped;
-(shared_ptr<msqrd::services::IAudioService>*)engineService;
-(BOOL)audioSessionActivated;
-(void)_playAudioSource:(id)arg1 audioFileName:(id)arg2 volume:(float)arg3 isAmbient:(BOOL)arg4 isTriggerd:(BOOL)arg5 ;
-(void)_setupAudioSessionIfNecessary:(/*^block*/id)arg1 ;
-(id)_audioAssetPathForAudioFile:(id)arg1 ;
-(void)setupAudioProcessors:(const vector<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > >, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > > > >*)arg1 ;
-(void)setMicrophoneVolume:(float)arg1 ;
-(void)setAudioSessionActivated:(BOOL)arg1 ;
-(void)setAudioSessionIsConfiguring:(BOOL)arg1 ;
-(void)setRecordStarted:(BOOL)arg1 ;
-(BOOL)_shouldMuteAudio;
-(BOOL)audioSessionIsConfiguring;
-(BOOL)recordStarted;
-(void)playAudioSource:(const AudioSourceConfig*)arg1 ;
-(void)stopAudioSource:(const AudioSourceConfig*)arg1 ;
-(void)addAudioForRendering:(const AudioSourceConfig*)arg1 ;
-(void)removeAudioForRendering:(const AudioSourceConfig*)arg1 ;
-(BOOL)microphoneDisabled;
-(BOOL)previewDisabled;
-(id)init;
-(void)reset;
-(void)beginInterruption;
@end

