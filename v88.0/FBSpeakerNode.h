/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class CALayer, CAShapeLayer, NSArray;

@interface FBSpeakerNode : ASDisplayNode {

	double _strikethroughState;
	double _soundWavesState;
	CALayer* _speakerSoundWavesLayer;
	CAShapeLayer* _speakerNegativeStrikethroughMaskShapeLayer;
	CAShapeLayer* _strikethroughShapeLayer;
	CAShapeLayer* _speakerShapeLayer;
	CALayer* _soundWavesLayer;
	NSArray* _soundWaveshapeLayers;
	CAShapeLayer* _soundWavesMaskShapeLayer;
	unsigned long long _soundWaves;

}
-(void)_staticInitialize;
-(void)setStrikethrough:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSoundWaves:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_layoutSpeakerStrikethrough;
-(void)_layoutSoundWaves;
-(void)_layoutsoundWaveShape:(id)arg1 withState:(double)arg2 ;
-(id)init;
-(void)layout;
-(void)didLoad;
@end
