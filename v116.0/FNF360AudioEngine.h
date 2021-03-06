/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FNFPlayerAudioEngine.h>

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
	BOOL _enableFocusLeveldB;
	float _offFocusLevel;
	float _offFocusLeveldB;
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
-(id)initWithAudioChannelConfiguration:(id)arg1 enableFocus:(BOOL)arg2 enableFocusLeveldB:(BOOL)arg3 offFocusLevel:(float)arg4 offFocusLeveldB:(float)arg5 focusWidthDegrees:(float)arg6 ;
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
-(void)setBufferUnderrunCount:(unsigned long long)arg1 ;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(void)enableLevelMeteringWithCallback:(/*^block*/id)arg1 ;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5 ;
-(void)playWithStartTime:(SCD_Struct_FB180)arg1 ;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(void)sendCurrentAudioLevelToCallback;
-(void)removeLevelMetering;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)_startTimer;
-(void)pause;
-(SCD_Struct_FB180)getCurrentTime;
-(void)prepareToPlay;
@end

