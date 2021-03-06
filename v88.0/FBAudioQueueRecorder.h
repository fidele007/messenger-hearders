/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNAudioQueueRecorder.h>

@protocol MNAudioQueueRecorderDelegate;
@class NSString;

@interface FBAudioQueueRecorder : NSObject <MNAudioQueueRecorder> {

	unique_ptr<facebook::speech::AudioQueueRecorder, std::__1::default_delete<facebook::speech::AudioQueueRecorder> >* _recorder;
	int _sampleRate;
	id<MNAudioQueueRecorderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAudioQueueRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSampleRate:(int)arg1 ;
-(BOOL)startWithFileURL:(id)arg1 ;
-(void)setDelegate:(id<MNAudioQueueRecorderDelegate>)arg1 ;
-(id<MNAudioQueueRecorderDelegate>)delegate;
-(void)stop;
-(float)averagePower;
-(double)currentTime;
-(BOOL)isRecording;
@end

