/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFilterContextDelegate.h>
#import <Messenger/FBMediaProcessor.h>

@class FBVideoProcessorConfig, FBFilterContext, FBFilterGroup, NSMutableArray, FBGLContext, FBFilter, NSMutableDictionary, NSMutableSet, NSString;

@interface FBVideoProcessor : NSObject <FBFilterContextDelegate, FBMediaProcessor> {

	FBVideoProcessorConfig* _videoProcessorConfig;
	FBFilterContext* _filterContext;
	FBFilterGroup* _filterGroup;
	NSMutableArray* _filterCoordinators;
	FBGLContext* _openGLContext;
	FBFilterGroup* _copyFilterGroup;
	CGSize _configureCacheInputSize;
	CGSize _configureCacheOutputSize;
	FBFilter* _configureCacheFilter;
	NSMutableDictionary* _filtersBeingReordered;
	NSMutableSet* _filterNamesBeingReordered;
	mutex _lock;
	BOOL _canUseOpenGL;

}

@property (nonatomic,readonly) FBGLContext * openGLContext;                  //@synthesize openGLContext=_openGLContext - In the implementation block
@property (nonatomic,readonly) FBFilterContext * filterContext;              //@synthesize filterContext=_filterContext - In the implementation block
@property (nonatomic,readonly) BOOL modifiesInput; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)modifiesInput;
-(id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 ;
-(FBFilterContext *)filterContext;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)insertFilterWithConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(void)setContentTransform:(GLKMatrix4)arg1 ;
-(void)render:(CVBufferRef)arg1 toSurface:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(void)prepareToReorderFilterWithName:(id)arg1 ;
-(void)render:(CVBufferRef)arg1 toSurfaces:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 withPixelBufferAdaptor:(id)arg2 ;
-(void)filterContext:(id)arg1 didReceiveNotification:(id)arg2 ;
-(void)_applyVideoProcessorConfig:(id)arg1 ;
-(void)_handleBackgroundNotification:(id)arg1 ;
-(void)_handleForegroundNotification:(id)arg1 ;
-(void)_configureFilterGroup;
-(void)_insertFilterConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBufferPool:(CVPixelBufferPoolRef)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSize:(CGSize)arg2 ;
-(void)_render:(CVBufferRef)arg1 toSurface:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(void)_renderSurface:(id)arg1 toSurface:(id)arg2 usingFilter:(id)arg3 time:(SCD_Struct_FB25)arg4 ;
-(void)_render:(CVBufferRef)arg1 toSurfaces:(id)arg2 time:(SCD_Struct_FB25)arg3 ;
-(id)sourcePixelBufferAttributesForAVAssetWriterInputPixelBufferAdaptor;
-(void)dealloc;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)setCropRectangle:(CGRect)arg1 ;
-(unsigned long long)filtersCount;
-(FBGLContext *)openGLContext;
@end

