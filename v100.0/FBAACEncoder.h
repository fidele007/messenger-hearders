/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoStreamingErrorProcessor.h>

@protocol OS_dispatch_queue;
@class NSObject, FBAACPacketizer, NSString;

@interface FBAACEncoder : NSObject <FBVideoStreamingErrorProcessor> {

	FBAudioStreamingConfig _config;
	OpaqueAudioConverterRef _audioConverter;
	vector<unsigned char, std::__1::allocator<unsigned char> > _aacBuffer;
	char* _pcmBuffer;
	unsigned long long _pcmBufferSize;
	vector<unsigned char, std::__1::allocator<unsigned char> > _pcmBufferCopy;
	unsigned _maxOutputPacketSize;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	BOOL _needSendConfig;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	FBAACPacketizer* _packetizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)encodeAudioImpl:(opaqueCMSampleBufferRef)arg1 ;
-(id)configureAudioConverterWithSampleBufferWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription*)arg2 ;
-(id)getAudioClassDescriptionWithType:(unsigned)arg1 fromManufacturer:(unsigned)arg2 outClassDescription:(AudioClassDescription*)arg3 ;
-(id)configureAudioConverterWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithAudioConfig:(FBAudioStreamingConfig)arg1 packetizer:(id)arg2 encodingQueue:(id)arg3 ;
-(int)inInputDataProc:(OpaqueAudioConverterRef)arg1 ioNumberDataPackets:(unsigned*)arg2 ioData:(AudioBufferList*)arg3 ;
-(void)encodeAudio:(opaqueCMSampleBufferRef)arg1 ;
-(void)processError:(id)arg1 ;
-(void)droppedPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg1 withReason:(id)arg2 ;
-(void)dealloc;
-(void)flush;
@end

