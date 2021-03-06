/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectView.h>

@class MQEventHandler, SCNNode, SCNMaterial, MSQScreenPlaneModel;

@interface MSQScreenPlaneView : MQSceneObjectView {

	MQEventHandler* onChangeHandler;
	MQEventHandler* onMaterialChangeHandler;
	SCNNode* planeNode;
	SCNMaterial* planeMaterial;
	MSQScreenPlaneModel* _model;

}

@property (assign,nonatomic,__weak) MSQScreenPlaneModel * model;              //@synthesize model=_model - In the implementation block
-(id)initWithScreenPlaneModel:(id)arg1 ;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)destroyScene;
-(void)initScene;
-(void)onEnterFrame:(double)arg1 ;
-(void)onChange:(id)arg1 ;
-(void)onMaterialChange:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(void)onTransformChange:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)setUpAndAddPlane;
-(void)removePlane;
-(MSQScreenPlaneModel *)model;
-(void)setModel:(MSQScreenPlaneModel *)arg1 ;
-(void)destroy;
@end

