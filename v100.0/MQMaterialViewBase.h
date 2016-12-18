/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDocumentViewBase.h>

@class MQEventHandler, SCNMaterial;

@interface MQMaterialViewBase : MQDocumentViewBase {

	MQEventHandler* _onChangeHandler;
	BOOL _generateVideoUVs;
	id _model;
	SCNMaterial* _material;

}

@property (assign,nonatomic,__weak) id model;                     //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) SCNMaterial * material;              //@synthesize material=_material - In the implementation block
@property (assign,nonatomic) BOOL generateVideoUVs;               //@synthesize generateVideoUVs=_generateVideoUVs - In the implementation block
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(BOOL)isTexturePVR:(id)arg1 ;
-(BOOL)generateVideoUVs;
-(void)setGenerateVideoUVs:(BOOL)arg1 ;
-(id)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(void)setMaterial:(SCNMaterial *)arg1 ;
-(SCNMaterial *)material;
@end
