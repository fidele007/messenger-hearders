/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EAGLContext;

@interface FBSurface : NSObject {

	unsigned _depthRenderBuffer;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	BOOL _generatedTexture;
	atomic<bool> _layerRenderBufferStorageNeedsRefresh;
	EAGLContext* _glContext;
	CVOpenGLESTextureCacheRef _textureCache;
	CGSize _size;
	CVBufferRef _pixelBuffer;
	unsigned char _flipped;
	CVBufferRef _cvTexture;
	unsigned _texture;
	unsigned _textureTarget;
	CAEAGLLayer* _layer;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
@property (nonatomic,readonly) unsigned depthRenderBuffer; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned)depthRenderBuffer;
-(id)initWithIGTexture:(id)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(void)invalidateLayerRenderBufferStorage;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(void)dealloc;
-(id)UIImage;
-(id)initWithSize:(CGSize)arg1 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned)texture;
-(unsigned)textureTarget;
-(unsigned char)isFlipped;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

