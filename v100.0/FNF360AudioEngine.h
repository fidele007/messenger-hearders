/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerAudioEngine.h>

@protocol FNFTimer;
@class NSString;

@interface FNF360AudioEngine : NSObject <FNFPlayerAudioEngine> {

	AudioEngine* _engine;
	SpatDecoderQueue* _engineQueue;
	int _channelMap;
	unsigned long long _numberOfChannels;
	OpusMSDecoderRef _opusDecoder;
	vector<short, std::__1::allocator<short> >* _pcmBuffer;
	unsigned long long _startingSamplesPerChannel;
	unsigned _samplesPerChannelInPcmBuffer;
	unsigned _adjustmentSilenceSamples;
	unsigned _skipSamplesPerChannel;
	BOOL _shouldSkip;
	BOOL _endOfStream;
	AQBufferState* _audioQueueBuffer[3];
	int _fillingQueueIndex;
	int _decodingQueueIndex;
	BOOL _hasNoMoreFramesToEnqueue;
	/*^block*/id _putDataCallback;
	/*^block*/id _errorCallback;
	unsigned _preSkip;
	id<FNFTimer> _timer;
	BOOL _requestedToChangeVolume;
	float _requestedVolume;
	float _requestedRampTime;
	BOOL _enableFocus;
	float _offFocusLevel;
	float _focusWidthDegrees;
	unsigned long long _bufferUnderrunCount;

}

@property (assign) unsigned long long bufferUnderrunCount;              //@synthesize bufferUnderrunCount=_bufferUnderrunCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidAudioChannelConfiguration:(id)arg1 ;
+(int)_channelMapWithAudioChannelConfiguration:(id)arg1 ;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(id)initWithAudioChannelConfiguration:(id)arg1 enableFocus:(BOOL)arg2 offFocusLevel:(float)arg3 focusWidthDegrees:(float)arg4 ;
-(void)setListenerRotationWithMatrix:(float)arg1 ;
-(unsigned long long)bufferUnderrunCount;
-(void)audioSessionInterruptionBegan;
-(void)audioSessionInterruptionEnded;
-(void)_destroyOpusDecoder;
-(BOOL)_enqueuePCM;
-(void)_fillQueue;
-(void)_decodeOpus;
-(void)_handleError:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)_resetAQBufferState:(AQBufferState*)arg1 ;
-(void)_allocateAudioQueueBuffer:(AQBufferState*)arg1 asbd:(AudioStreamBasicDescription)arg2 ;
-(BOOL)_initializeEngine;
-(void)_resetQueue;
-(void)_timerCallback;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5 ;
-(void)playWithStartTime:(SCD_Struct_FB25)arg1 ;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)enableLevelMeteringWithCallback:(/*^block*/id)arg1 ;
-(void)sendCurrentAudioLevelToCallback;
-(void)removeLevelMetering;
-(void)setBufferUnderrunCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)_startTimer;
-(void)pause;
-(SCD_Struct_FB25)getCurrentTime;
-(void)prepareToPlay;
@end
