/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBARAudioServiceOutputDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBARAudioServiceBase : NSObject {

	id<FBARAudioServiceOutputDelegate> _outputDelegate;
	NSString* _currentEffectAssetsPath;

}

@property (assign,nonatomic,__weak) id<FBARAudioServiceOutputDelegate> outputDelegate;              //@synthesize outputDelegate=_outputDelegate - In the implementation block
@property (copy) NSString * currentEffectAssetsPath;                                                //@synthesize currentEffectAssetsPath=_currentEffectAssetsPath - In the implementation block
-(void)setOutputDelegate:(id<FBARAudioServiceOutputDelegate>)arg1 ;
-(void)setCurrentEffectAssetsPath:(NSString *)arg1 ;
-(void)processMicrophoneAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)audioRecordingStarted;
-(void)audioRecordingStopped;
-(id<FBARAudioServiceOutputDelegate>)outputDelegate;
-(id)constructProcessorConfigurations:(const vector<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > >, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > > > >*)arg1 ;
-(void)setupAudioProcessors:(const vector<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > >, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, double, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > > > > > > >*)arg1 ;
-(void)setMicrophoneVolume:(float)arg1 ;
-(NSString *)currentEffectAssetsPath;
-(void)playAudioSource:(const AudioSourceConfig*)arg1 ;
-(void)stopAudioSource:(const AudioSourceConfig*)arg1 ;
-(void)addAudioForRendering:(const AudioSourceConfig*)arg1 ;
-(void)removeAudioForRendering:(const AudioSourceConfig*)arg1 ;
-(void)removeAudioProcessors;
-(void)reset;
@end

