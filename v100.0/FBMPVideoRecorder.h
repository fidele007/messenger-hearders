/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPPermissiveOutput.h>

@protocol FBMPConsumerPort;
@class NSURL, FBMPVideoClipRecorder, FBMPBaseConsumerPort, NSString;

@interface FBMPVideoRecorder : NSObject <FBMPPermissiveOutput> {

	NSURL* _directoryPathForVideoStorage;
	atomic<FBVideoRecorderState> _state;
	mutex _recorderConfigLock;
	FBMPVideoRecorderConfiguration _recorderConfig;
	CGSize _bufferSize;
	FBMPVideoClipRecorder* _clipRecorder;
	FBMPBaseConsumerPort* _videoConsumerPort;
	id<FBMPConsumerPort> _audioConsumerPort;

}

@property (nonatomic,readonly) id<FBMPConsumerPort> audioConsumerPort;              //@synthesize audioConsumerPort=_audioConsumerPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDirectoryPathForVideoStorage:(id)arg1 ;
-(id<FBMPConsumerPort>)audioConsumerPort;
-(BOOL)startRecordingWithConfiguration:(FBMPVideoRecorderConfiguration)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelRecording;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)consumerPorts;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_initializeClipRecorderAndStartRecording;
-(void)_startClipRecordingForConfiguration:(FBMPVideoRecorderConfiguration)arg1 ;
-(void)_stopRecordingWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(void)_resetState;
-(void)cancelRecording;
@end

