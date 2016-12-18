/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPageablePickUpAttachmentNode.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/MNPhotoViewDelegate.h>

@class MNCenteringScrollView, UITapGestureRecognizer, MNPhotoViewNodeConfiguration, MNPhotoView, UIImageView, NSString;

@interface MNPhotoViewNode : FBPageablePickUpAttachmentNode <UIScrollViewDelegate, MNPhotoViewDelegate> {

	MNCenteringScrollView* _scrollView;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _photoViewSingleTapRecognizer;
	BOOL _singleTappedWhenZoomed;
	MNPhotoViewNodeConfiguration* _configuration;
	MNPhotoView* _photoView;
	UIImageView* _photoMaskView;

}

@property (nonatomic,readonly) MNPhotoView * photoView;                                //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) CGRect photoFrame; 
@property (nonatomic,retain) UIImageView * photoMaskView;                              //@synthesize photoMaskView=_photoMaskView - In the implementation block
@property (assign,nonatomic,__weak) id<MNPhotoViewNodeDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)willReuse;
-(void)willRecycle;
-(UIImageView *)photoMaskView;
-(void)openAnimated:(BOOL)arg1 ;
-(void)setPhotoMaskView:(UIImageView *)arg1 ;
-(void)setSupportedGestures:(unsigned long long)arg1 ;
-(void)maySettleAsActivePage;
-(void)didSettleAsInactivePage;
-(CGSize)pageableDimensionsForOrientation:(long long)arg1 ;
-(BOOL)shouldBeginPagingGesture:(id)arg1 inDirection:(long long)arg2 ;
-(id)initWithPhotoView:(id)arg1 configuration:(id)arg2 ;
-(BOOL)openAnimatedIfPossible:(BOOL)arg1 ;
-(void)_doubleTapped:(id)arg1 ;
-(void)photoViewWillDisplayImage:(id)arg1 ;
-(void)photoViewDidEndDisplayImage:(id)arg1 ;
-(BOOL)shouldBeginGesture:(id)arg1 ;
-(void)_layoutMaskView;
-(CGSize)_aspectFitSize;
-(void)_singleTapped;
-(void)_singleTapDefaultAction;
-(void)toggleZoomAtPoint:(CGPoint)arg1 ;
-(void)willOpen;
-(void)_animateMaskOut;
-(void)willLift;
-(void)didUnlift;
-(void)_logFullScreenPhotoView;
-(void)didClose;
-(void)mayClose;
-(void)willClose;
-(void)_animateMaskIn;
-(void)cleanUpAfterClosing;
-(CGRect)_closedPhotoFrame;
-(id)dropShadowCastingLayers;
-(CGSize)openedSizeForOrientation:(long long)arg1 ;
-(CGRect)closedFrameInView:(id)arg1 ;
-(void)setDelegate:(id<MNPhotoViewNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)_setMaskView:(id)arg1 ;
-(void)setGesturesEnabled:(BOOL)arg1 ;
-(void)layout;
-(BOOL)isZoomed;
-(void)didOpen;
-(void)_layoutScrollView;
-(MNPhotoView *)photoView;
-(CGRect)photoFrame;
-(CGRect)_zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(CGSize)_photoSize;
@end

