/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(BOOL)startWithFileURL:(id)arg1 ;
-(void)setDelegate:(id<MNAudioQueueRecorderDelegate>)arg1 ;
-(id<MNAudioQueueRecorderDelegate>)delegate;
-(void)stop;
-(double)currentTime;
-(float)averagePower;
-(BOOL)isRecording;
-(id)initWithSampleRate:(int)arg1 ;
@end

