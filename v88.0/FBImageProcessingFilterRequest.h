/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingOpenGLRequest.h>

@class NSArray, UIImage, FBAnalytics, FBCPUImageFilterState, FBFilteredUIImageMetadata, NSDictionary;

@interface FBImageProcessingFilterRequest : FBImageProcessingOpenGLRequest {

	NSArray* _filters;
	UIImage* _srcImage;
	FBAnalytics* _analytics;
	FBCPUImageFilterState* _cpuFilterState;
	FBFilteredUIImageMetadata* _cpuFilterMetadata;
	UIImage* _photoOverlayLayer;
	UIImage* _doodlesLayer;
	UIImage* _image;
	NSDictionary* _derivedContext;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSDictionary * derivedContext;              //@synthesize derivedContext=_derivedContext - In the implementation block
-(BOOL)canExecuteInBackground;
-(id)initWithImage:(id)arg1 gpuFilters:(id)arg2 cpuFilterState:(id)arg3 cpuFilterMetadata:(id)arg4 photoOverlayLayer:(id)arg5 doodlesLayer:(id)arg6 derivedContext:(id)arg7 completionBlock:(/*^block*/id)arg8 cancelBlock:(/*^block*/id)arg9 analytics:(id)arg10 ;
-(NSDictionary *)derivedContext;
-(void)setDerivedContext:(NSDictionary *)arg1 ;
-(id)initWithImage:(id)arg1 gpuFilters:(id)arg2 cpuFilterState:(id)arg3 cpuFilterMetadata:(id)arg4 photoOverlayLayer:(id)arg5 doodlesLayer:(id)arg6 derivedContext:(id)arg7 completionBlock:(/*^block*/id)arg8 cancelBlock:(/*^block*/id)arg9 ;
-(id)initWithImage:(id)arg1 gpuFilters:(id)arg2 derivedContext:(id)arg3 completionBlock:(/*^block*/id)arg4 cancelBlock:(/*^block*/id)arg5 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)executeWithContext:(id)arg1 ;
@end

