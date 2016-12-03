/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOpenGLFilter.h>
#import <Messenger/FBOverlayFilter.h>

@class FBTexture, FBSurface, UIImage, NSURL;

@interface FBImageOverlayFilter : FBOpenGLFilter <FBOverlayFilter> {

	unsigned _imageVBO;
	BOOL _needsConfigure;
	FBTexture* _imageOverlayTexture;
	FBSurface* _imageOverlaySurface;
	BOOL _textureLoaded;
	BOOL _shouldRender;
	CGSize _destinationSize;
	CGSize _sourceSize;
	/*^block*/id _drawRectBlock;
	UIImage* _image;
	NSURL* _imageUrl;
	CGSize _outputSize;
	CGPoint _location;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (nonatomic,copy) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageUrl;                            //@synthesize imageUrl=_imageUrl - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                       //@synthesize outputSize=_outputSize - In the implementation block
@property (nonatomic,readonly) CGPoint location;                        //@synthesize location=_location - In the implementation block
-(NSURL *)imageUrl;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setImageUrl:(NSURL *)arg1 ;
-(unsigned long long)inputPixelFormat;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)processCommand:(id)arg1 ;
-(void)_configureProgram:(id)arg1 ;
-(id)initWithOutputSize:(CGSize)arg1 ;
-(id)initWithImageUrl:(id)arg1 image:(id)arg2 location:(CGPoint)arg3 outputSize:(CGSize)arg4 ;
-(void)setDrawRectBlock:(/*^block*/id)arg1 ;
-(_GLKMatrix4)_computeTranslationMatrixForLocation:(CGPoint)arg1 videoSize:(CGSize)arg2 ;
-(unsigned)vertexBuffer;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIImage *)image;
-(CGPoint)location;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
-(CGSize)outputSize;
-(void)_setLocation:(CGPoint)arg1 ;
@end
