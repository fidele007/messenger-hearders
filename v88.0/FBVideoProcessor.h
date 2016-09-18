/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaProcessor.h>

@class FBVideoProcessorConfig, FBFilterContext, FBFilterGroup, NSMutableArray, FBGLContext, FBFilter, NSString;

@interface FBVideoProcessor : NSObject <FBMediaProcessor> {

	FBVideoProcessorConfig* _videoProcessorConfig;
	FBFilterContext* _filterContext;
	FBFilterGroup* _filterGroup;
	NSMutableArray* _filterCoordinators;
	FBGLContext* _openGLContext;
	FBFilterGroup* _copyFilterGroup;
	CVPixelBufferPoolRef _pixelBufferPool;
	CGSize _pixelBufferSize;
	CGSize _configureCacheInputSize;
	CGSize _configureCacheOutputSize;
	FBFilter* _configureCacheFilter;
	BOOL _needsConfigure;
	mutex _lock;
	BOOL _canUseOpenGL;

}

@property (nonatomic,readonly) FBGLContext * openGLContext;                  //@synthesize openGLContext=_openGLContext - In the implementation block
@property (nonatomic,readonly) FBFilterContext * filterContext;              //@synthesize filterContext=_filterContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 ;
-(FBFilterContext *)filterContext;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)insertFilterWithConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(void)setContentTransform:(GLKMatrix4)arg1 ;
-(void)render:(CVBufferRef)arg1 toSurface:(id)arg2 ;
-(void)render:(CVBufferRef)arg1 toSurfaces:(id)arg2 ;
-(void)_applyVideoProcessorConfig:(id)arg1 ;
-(void)_handleBackgroundNotification:(id)arg1 ;
-(void)_handleForegroundNotification:(id)arg1 ;
-(void)_insertFilterConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSize:(CGSize)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPoolForPixelBufferOfSize:(CGSize)arg1 ;
-(void)_render:(CVBufferRef)arg1 toSurface:(id)arg2 ;
-(GLKMatrix4)_computeTextureTransformForInputSize:(CGSize)arg1 cropRectangle:(CGRect)arg2 ;
-(void)_configureImageFilter:(id)arg1 forInputSize:(CGSize)arg2 outputSize:(CGSize)arg3 ;
-(void)_renderSurface:(id)arg1 toSurface:(id)arg2 usingFilter:(id)arg3 ;
-(void)_render:(CVBufferRef)arg1 toSurfaces:(id)arg2 ;
-(void)dealloc;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)setCropRectangle:(CGRect)arg1 ;
-(unsigned long long)filtersCount;
-(FBGLContext *)openGLContext;
@end

