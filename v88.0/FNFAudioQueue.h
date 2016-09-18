/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerAudioEngine.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FNFAudioQueue : NSObject <FNFPlayerAudioEngine> {

	OpaqueAudioQueueRef _audioQueue;
	/*^block*/id _putDataCallback;
	/*^block*/id _errorCallback;
	AudioStreamBasicDescription _asbd;
	unsigned _sampleFrameSize;
	AQBufferParameters _bufferParams;
	AudioTimeStamp _zeroTimestamp;
	OpaqueAudioQueueTimelineRef _timeline;
	unsigned long long _state;
	BOOL _hasNoMoreFramesToEnqueue;
	AQBufferState* _audioQueueBuffer[3];
	int _activeBufferIndex;
	unsigned long long _framesEnqueued;
	unsigned long long _buffersReturned;
	unsigned long long _enqueueDataCalls;
	NSObject*<OS_dispatch_queue> _internalQueue;
	float _pendingVolume;
	float _pendingVolumeRampTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(AQBufferParameters)_calculateBufferSizeAndPacketCountWithAsbd:(AudioStreamBasicDescription)arg1 frameSize:(unsigned)arg2 ;
-(void)setVolume:(float)arg1 rampTime:(float)arg2 ;
-(void)setAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 extraParameters:(id)arg2 putDataCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 sampleFrameSize:(unsigned)arg5 ;
-(void)playWithStartTime:(SCD_Struct_FB20)arg1 ;
-(void)stopLoadingData;
-(void)resumeEnqueuingData;
-(BOOL)_createAudioQueue;
-(void)_readDataIntoBuffer;
-(void)_stopAudio;
-(void)_removeAudioQueue;
-(void)audioQueueIsRunningCallback:(OpaqueAudioQueueRef)arg1 ;
-(void)audioQueueErrorCallback:(OpaqueAudioQueueRef)arg1 ;
-(void)audioQueueOutputCallback:(OpaqueAudioQueueRef)arg1 inBuffer:(AudioQueueBuffer*)arg2 ;
-(int)_queueState;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)reset;
-(void)stop;
-(void)pause;
-(int)_startQueue;
-(SCD_Struct_FB20)getCurrentTime;
-(void)prepareToPlay;
@end

