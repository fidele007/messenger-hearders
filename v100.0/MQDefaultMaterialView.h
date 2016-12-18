/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MQMaterialViewBase.h>

@class MQEventHandler;

@interface MQDefaultMaterialView : MQMaterialViewBase {

	MQEventHandler* _onDiffuseTextureChangeHandler;
	MQEventHandler* _onDiffuseChangeHandler;
	MQEventHandler* _onReflectiveTextureChangeHandler;
	MQEventHandler* _onReflectiveChangeHandler;
	MQEventHandler* _onMultiplyTextureChangeHandler;
	MQEventHandler* _onMultiplyChangeHandler;
	MQEventHandler* _onBlendModeChangeHandler;

}

@property (assign,nonatomic,__weak) id<MQDefaultMaterialModelProtocol> model; 
-(void)onDiffuseChange:(id)arg1 ;
-(void)onDiffuseTextureChange:(id)arg1 ;
-(void)onReflectiveChange:(id)arg1 ;
-(void)onReflectiveTextureChange:(id)arg1 ;
-(void)onMultiplyChange:(id)arg1 ;
-(void)onMultiplyTextureChange:(id)arg1 ;
-(void)onBlendModeChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(UIImage*)getContentsFromTexture:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end

