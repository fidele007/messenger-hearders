/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableArray, NSMutableSet, EAGLContext;

@interface IGContext : NSObject {

	CVOpenGLESTextureCacheRef _textureCache;
	unsigned _squareVertexBuffer;
	NSMutableArray* _resources;
	NSMutableSet* _surfacesToFlush;
	NSMutableSet* _cachedSurfaces;
	EAGLContext* _openglContext;
	CGSize _maxTextureSize;

}

@property (nonatomic,retain) EAGLContext * openglContext;                           //@synthesize openglContext=_openglContext - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef textureCache; 
@property (nonatomic,readonly) unsigned squareVertexBuffer; 
@property (nonatomic,readonly) CGSize maxTextureSize;                               //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
+(CGSize)allowedSizeMatchingAspectOf:(CGSize)arg1 ;
+(id)currentContext;
-(CVOpenGLESTextureCacheRef)textureCache;
-(EAGLContext *)openglContext;
-(unsigned)squareVertexBuffer;
-(void)makeCurrent;
-(void)setResource:(id)arg1 forFilter:(id)arg2 ;
-(id)resourceForFilter:(id)arg1 ;
-(void)pushReusableSurface:(id)arg1 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(void)removeAllReusableSurfaces;
-(void)setOpenglContext:(EAGLContext *)arg1 ;
-(CGSize)maxTextureSize;
-(void)addSurfaceToFlush:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

