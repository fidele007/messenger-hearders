/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableArray, NSMutableSet, EAGLContext;

@interface FBGLContext : NSObject {

	CVOpenGLESTextureCacheRef _textureCache;
	CVPixelBufferPoolRef _pixelBufferPoolBGRA;
	CVPixelBufferPoolRef _pixelBufferPoolYUV;
	CGSize _pixelBufferPoolSizeBGRA;
	CGSize _pixelBufferPoolSizeYUV;
	unsigned _squareVertexBuffer;
	NSMutableArray* _resources;
	NSMutableSet* _cachedSurfaces;
	EAGLContext* _openglContext;
	CVPixelBufferPoolRef _pixelBufferPool;
	CGSize _maxTextureSize;

}

@property (nonatomic,retain) EAGLContext * openglContext;                           //@synthesize openglContext=_openglContext - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef textureCache; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool;                //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
@property (nonatomic,readonly) unsigned squareVertexBuffer; 
@property (nonatomic,readonly) CGSize maxTextureSize;                               //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
+(id)currentContext;
-(CVPixelBufferPoolRef)pixelBufferPoolForPixelBufferOfPixelFormat:(unsigned long long)arg1 size:(CGSize)arg2 ;
-(CVOpenGLESTextureCacheRef)textureCache;
-(EAGLContext *)openglContext;
-(CGSize)maxTextureSize;
-(void)removeAllReusableSurfaces;
-(void)setOpenglContext:(EAGLContext *)arg1 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(void)pushReusableSurface:(id)arg1 ;
-(id)resourceForFilter:(id)arg1 ;
-(void)setResource:(id)arg1 forFilter:(id)arg2 ;
-(unsigned)squareVertexBuffer;
-(void)makeCurrent;
-(void)dealloc;
-(id)init;
-(void)flush;
-(CVPixelBufferPoolRef)pixelBufferPool;
@end

