/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/SCNSceneRendererDelegate.h>

@class EAGLContext, SCNRenderer, MQDrawQuad, SCNScene, SCNNode, NSString;

@interface MQDisplaceRenderer : NSObject <SCNSceneRendererDelegate> {

	EAGLContext* _context;
	SCNRenderer* _renderer;
	MQDrawQuad* _hBlur;
	MQDrawQuad* _vBlur;
	SCNScene* _scene;
	unsigned _framebuffer;
	unsigned _texture0;
	int _width;
	int _height;
	int _prevFBO;
	int _prevViewport[4];
	unsigned _outputTexture;
	MQVector2 _size;
	SCNNode* _container;
	SCNNode* _cameraNode;

}

@property (readonly) MQVector2 size;                                //@synthesize size=_size - In the implementation block
@property (readonly) SCNNode * container;                           //@synthesize container=_container - In the implementation block
@property (readonly) SCNNode * cameraNode;                          //@synthesize cameraNode=_cameraNode - In the implementation block
@property (readonly) unsigned outputTexture;                        //@synthesize outputTexture=_outputTexture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createBlurQuad:(BOOL)arg1 ;
-(void)setupWithView:(id)arg1 size:(MQVector2)arg2 ;
-(void)freeGLResources;
-(void)initGLResources;
-(MQVector2)size;
-(void)dealloc;
-(id)init;
-(SCNNode *)container;
-(void)renderAtTime:(double)arg1 ;
-(SCNNode *)cameraNode;
-(void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(unsigned)outputTexture;
@end

