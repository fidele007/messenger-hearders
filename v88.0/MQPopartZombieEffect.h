/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MQEffectBase.h>

@class SCNScene, SCNNode, MQHighPolyFaceNode, SCNMaterial, NSMutableArray;

@interface MQPopartZombieEffect : MQEffectBase {

	SCNScene* scene;
	SCNNode* container;
	SCNNode* liquidGreen;
	SCNNode* liquidFoam;
	float liquidFoamOffset;
	float liquidGreenOffset;
	SCNMatrix4 liquidGreenTranslation;
	SCNMatrix4 liquidFoamTranslation;
	float _backgroundAverage;
	MQHighPolyFaceNode* face;
	SCNMaterial* _faceMaterial;
	NSMutableArray* _bones;
	SCNNode* popContainer;
	SCNVector3 _lastPosition;
	SCNVector3 _lastHeadRotation;
	BOOL _firstFrame;

}
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(id)customVideoMaterials;
-(id)init;
@end

