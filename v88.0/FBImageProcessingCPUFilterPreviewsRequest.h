/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingConcurrentRequest.h>

@class NSArray, FBFilteredUIImageMetadata, UIImage, NSString;

@interface FBImageProcessingCPUFilterPreviewsRequest : FBImageProcessingConcurrentRequest {

	NSArray* _cpuFilterStates;
	FBFilteredUIImageMetadata* _cpuFilterMetadata;
	UIImage* _stickersLayer;
	UIImage* _doodlesLayer;
	UIImage* _srcImage;
	UIImage* _image;
	NSString* _cpuFilterName;

}

@property (nonatomic,retain) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * cpuFilterName;              //@synthesize cpuFilterName=_cpuFilterName - In the implementation block
-(NSString *)cpuFilterName;
-(void)setCpuFilterName:(NSString *)arg1 ;
-(id)initWithImage:(id)arg1 cpuFilterStates:(id)arg2 cpuFilterMetadata:(id)arg3 stickersLayer:(id)arg4 doodlesLayer:(id)arg5 perImageCompletionBlock:(/*^block*/id)arg6 cancelBlock:(/*^block*/id)arg7 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)clear;
-(void)executeWithContext:(id)arg1 ;
@end

