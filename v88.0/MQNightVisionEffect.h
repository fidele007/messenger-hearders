/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEffectBase.h>

@class SCNScene, SCNNode, SCNMaterial;

@interface MQNightVisionEffect : MQEffectBase {

	float _backgroundAverage;
	SCNScene* _scene;
	SCNNode* _container;
	SCNNode* _head;
	SCNNode* _armature;
	SCNMaterial* _material;
	SCNNode* _light;
	float _lightAlphaTarget;
	float _lightAlpha;
	SCNNode* _light2;
	float _light2AlphaTarget;
	float _light2Alpha;
	float _alphaMultiplyer;
	float _alphaCurrent;
	SCNNode* _leftEyeNode;
	SCNNode* _rightEyeNode;
	BOOL _opened;
	BOOL _firstFrame;
	float _lastHeadRotation;
	BOOL _timerBlock;
	SCNNode* _nvPlane;
	SCNMaterial* _nvMaterial;
	SCNNode* _fgPlane;
	SCNMaterial* _fgMaterial;

}
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)openHelmForDurationRate:(float)arg1 ;
-(void)closeHelmForDurationRate:(float)arg1 ;
-(void)clearBlock;
-(void)disableInteractive;
-(void)alignForeground:(id)arg1 ;
-(id)customVideoMaterials;
-(void)createLensFlare:(id)arg1 ;
-(id)createForeground:(id)arg1 blend:(id)arg2 order:(int)arg3 ;
-(void)bindVideoMaterial:(id)arg1 width:(float)arg2 height:(float)arg3 ;
-(id)init;
@end

