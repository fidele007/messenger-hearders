/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FNFPlayerRenderer.h>

@class FNFGLProgram, NSString;

@interface FNFDefaultRenderer : NSObject <FNFPlayerRenderer> {

	FNFGLProgram* _glProgram;
	unsigned _vertexArrayObject;
	unsigned _vertexBuffer;
	int _uniforms[4];
	int _backingWidth;
	int _backingHeight;
	double _rotation;
	const float* _colorConversion;
	BOOL _supportOpenGLTextureRg;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_loadShaders;
-(BOOL)shouldRenderWhilePlaybackPaused;
-(BOOL)setupGLState;
-(BOOL)drawFrame:(BOOL)arg1 presentationRect:(CGSize)arg2 backingWidth:(int)arg3 backingHeight:(int)arg4 frameBuffer:(unsigned)arg5 videoGravity:(id)arg6 rotation:(double)arg7 layerBounds:(CGRect)arg8 transform:(CGAffineTransform)arg9 colorConversion:(const float*)arg10 ;
-(void)restoreGLState;
-(void)processPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)_updateVertexArrayWithPresentationRect:(CGSize)arg1 videoGravity:(id)arg2 layerBounds:(CGRect)arg3 transform:(CGAffineTransform)arg4 ;
-(void)invalidate;
-(BOOL)_setupBuffers;
@end

