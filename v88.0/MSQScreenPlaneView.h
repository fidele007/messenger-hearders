/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

@property (nonatomic,retain) MSQScreenPlaneModel * model;              //@synthesize model=_model - In the implementation block
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)onEnterFrame:(double)arg1 ;
-(void)destroyScene;
-(id)initWithScreenPlaneModel:(id)arg1 ;
-(void)onMaterialChange:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)onTransformChange:(id)arg1 ;
-(MSQScreenPlaneModel *)model;
-(void)setModel:(MSQScreenPlaneModel *)arg1 ;
-(void)destroy;
@end

