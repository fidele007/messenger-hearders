/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MQEffectBase.h>
#import <Messenger/MQHeadGestureControllerProtocol.h>

@class MQSound, SCNScene, SCNNode, SCNMaterial, NSString;

@interface MQAstronautEffect : MQEffectBase <MQHeadGestureControllerProtocol> {

	MQSound* _openSound;
	MQSound* _closeSound;
	SCNScene* _scene;
	SCNNode* _container;
	SCNNode* _zerkalo;
	BOOL _opened;
	float _lightAlpha;
	float _alphaMultiplyer;
	float _alphaCurrent;
	SCNNode* _light;
	SCNNode* _light2;
	SCNMaterial* _lightMaterial;
	SCNNode* _leftEyeNode;
	SCNNode* _rightEyeNode;
	BOOL _firstFrame;
	SCNVector3 _zeroPos;
	float _lastHeadRotation;
	BOOL _timerBlock;
	SCNNode* _framePlane;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)openHelmForDurationRate:(float)arg1 ;
-(void)closeHelmForDurationRate:(float)arg1 ;
-(void)clearBlock;
-(void)processMovementForDirection:(unsigned long long)arg1 velocity:(float)arg2 ;
-(void)disableInteractive;
-(void)headDidStartMoving:(unsigned long long)arg1 velocity:(float)arg2 ;
-(void)headMovingWithDirection:(unsigned long long)arg1 velocity:(float)arg2 ;
-(void)headDidStopMoving:(unsigned long long)arg1 ;
-(id)init;
@end

