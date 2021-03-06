/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UIView, UIImage, FBGLFilter, FBCPUImageFilterState;

@interface FBFilterButton : UIButton {

	UIImageView* _roundedCornerOverlayView;
	UIView* _selectionBottomBar;
	UIImage* _thumbnailImage;
	FBGLFilter* _filter;
	FBCPUImageFilterState* _cpuFilterState;
	UIImageView* _selectionOverlay;

}

@property (nonatomic,retain) UIImageView * selectionOverlay;                      //@synthesize selectionOverlay=_selectionOverlay - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                            //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) FBGLFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) FBCPUImageFilterState * cpuFilterState;              //@synthesize cpuFilterState=_cpuFilterState - In the implementation block
-(FBCPUImageFilterState *)cpuFilterState;
-(void)setCpuFilterState:(FBCPUImageFilterState *)arg1 ;
-(UIImageView *)selectionOverlay;
-(void)setSelectionOverlay:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFilter:(FBGLFilter *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(double)_buttonSize;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(FBGLFilter *)filter;
@end

