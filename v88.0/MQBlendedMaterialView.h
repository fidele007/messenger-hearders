/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQMaterialViewBase.h>

@class MQEventHandler, MQTextureViewBase, MQBlendedMaterialModel;

@interface MQBlendedMaterialView : MQMaterialViewBase {

	MQEventHandler* _onBlendModeChangeHandler;
	MQEventHandler* _onGLKTextureChangeHandler;
	MQEventHandler* _onDiffuseTextureChangeHandler;
	MQTextureViewBase* currentTexture;

}

@property (nonatomic,retain) MQBlendedMaterialModel * model; 
-(void)initScene;
-(void)drawFace:(id)arg1 ;
-(void)destroyScene;
-(void)onGLKTextureChange:(id)arg1 ;
-(void)onTextureChange:(id)arg1 ;
-(void)onBlendModeChange:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end
