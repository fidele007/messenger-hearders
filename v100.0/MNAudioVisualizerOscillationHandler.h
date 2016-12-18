/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNAudioVolumeHandling.h>

@protocol MNAudioVolumeHandling;
@class MNMultiBarAudioVisualizerView;

@interface MNAudioVisualizerOscillationHandler : NSObject <MNAudioVolumeHandling> {

	id<MNAudioVolumeHandling> _nextHandler;
	MNMultiBarAudioVisualizerView* _visualizer;
	unsigned long long _sampleNumber;
	unsigned long long _oscilateEverySampleSize;
	double _oscillationFrequency;
	double _oscillationCenterPivot;
	double _silentVolumeCap;
	double _silentWaveMaxHeight;
	unsigned long long _silentWaveOffset;
	double _silentWaveEaseInMultiplier;
	vector<double, std::__1::allocator<double> >* _silentWave;

}
-(void)handleVolume:(float)arg1 ;
-(id)initWithMultiBarAudioVisualizerView:(id)arg1 oscilateEverySampleSize:(unsigned long long)arg2 silentVolumeCap:(double)arg3 silentWaveMaxHeight:(double)arg4 ;
-(id)setNextHandler:(id)arg1 ;
-(void)_updateSilentWaveWithOffset:(unsigned long long)arg1 multiplier:(double)arg2 count:(unsigned long long)arg3 volume:(float)arg4 ;
-(void)_updateOscilationPropertiesWithBarsCount:(unsigned long long)arg1 ;
@end

