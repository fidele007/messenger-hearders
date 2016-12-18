/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingOpenGLRequest.h>

@class NSArray, UIImage, FBCPUImageFilterState, FBFilteredUIImageMetadata;

@interface FBImageProcessingFilterPreviewsRequest : FBImageProcessingOpenGLRequest {

	NSArray* _filters;
	UIImage* _srcImage;
	BOOL _applyLux;
	unsigned long long _imagesProcessedCount;
	FBCPUImageFilterState* _cpuFilterState;
	FBFilteredUIImageMetadata* _cpuFilterMetadata;
	UIImage* _stickersLayer;
	UIImage* _doodlesLayer;
	UIImage* _image;
	long long _index;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
-(BOOL)canExecuteInBackground;
-(BOOL)_applyFilters:(id)arg1 cpuFilterState:(id)arg2 withFilterer:(id)arg3 withDerivedContext:(id)arg4 ;
-(id)initWithImage:(id)arg1 filters:(id)arg2 applyLux:(BOOL)arg3 cpuFilterState:(id)arg4 cpuFilterMetadata:(id)arg5 stickersLayer:(id)arg6 doodlesLayer:(id)arg7 perImageCompletionBlock:(/*^block*/id)arg8 cancelBlock:(/*^block*/id)arg9 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end
