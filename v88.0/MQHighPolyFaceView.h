/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectView.h>

@class MQEventHandler, MQHighPolyFaceNode, SCNMaterial, MQHighPolyFaceModel;

@interface MQHighPolyFaceView : MQSceneObjectView {

	MQEventHandler* onMaterialChangeHandler;
	MQHighPolyFaceNode* faceNode;
	SCNMaterial* faceMaterial;
	MQHighPolyFaceModel* _model;

}

@property (nonatomic,retain) MQHighPolyFaceModel * model;              //@synthesize model=_model - In the implementation block
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)drawFaces:(id)arg1 ;
-(void)destroyScene;
-(void)onMaterialChange:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(void)updateFaceNode:(id)arg1 ;
-(MQHighPolyFaceModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(MQHighPolyFaceModel *)arg1 ;
@end

