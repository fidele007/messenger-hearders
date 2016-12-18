/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>
#import <Messenger/FB360PhotoRendererProtocol.h>

@class GLKSkyboxEffect, GLKView, GLKTextureInfo, FB360ViewParams, NSString;

@interface FB360PhotoSkyboxRenderer : NSObject <GLKViewDelegate, FB360PhotoRendererProtocol> {

	GLKSkyboxEffect* _skyboxEffect;
	GLKView* _glView;
	GLKTextureInfo* _texture;
	FB360ViewParams* _viewParams;

}

@property (nonatomic,retain) GLKView * glView;                            //@synthesize glView=_glView - In the implementation block
@property (nonatomic,retain) GLKTextureInfo * texture;                    //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) FB360ViewParams * viewParams;              //@synthesize viewParams=_viewParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GLKView *)glView;
-(void)setGlView:(GLKView *)arg1 ;
-(id)initWithViewParams:(id)arg1 ;
-(FB360ViewParams *)viewParams;
-(void)updateEffectFromViewParams:(id)arg1 ;
-(void)dealloc;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(GLKTextureInfo *)texture;
-(void)setTexture:(GLKTextureInfo *)arg1 ;
@end
