/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAudioRecorderDelegate.h>

@class FBAudioRecorder;

@interface FBAudioRenderer : NSObject <FBAudioRecorderDelegate> {

	void* _audio_hash_buffer;
	FBAudioRecorder* _audioRecorder;

}
-(void)processBufferWithoutReset:(id)arg1 ;
-(id)getRenderedBuffer;
-(void)saveToFile;
-(void)audioRecorder:(id)arg1 didRecordAudioBuffer:(id)arg2 ;
-(void)stopProcessing;
-(double)getAudioLevel;
-(int)getBlockCount;
-(double)getFormat;
-(void)dealloc;
-(id)init;
-(BOOL)startProcessing;
-(void)processBuffer:(id)arg1 ;
@end
