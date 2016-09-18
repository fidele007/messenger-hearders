/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EAGLContext;

@interface IGSurface : NSObject {

	unsigned _texture;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	BOOL _generatedTexture;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _cvTexture;
	EAGLContext* _glContext;
	CAEAGLLayer* _layer;
	CGSize _size;
	BOOL _layerRenderBufferStorageNeedsRefresh;
	unsigned char _flipped;
	unsigned _textureTarget;
	CVBufferRef _pixelBuffer;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithIGTexture:(id)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned)texture;
-(unsigned)textureTarget;
-(unsigned char)isFlipped;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

