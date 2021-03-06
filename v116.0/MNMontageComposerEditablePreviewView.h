/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/MNMontageComposerPreviewCropToolViewDelegate.h>
#import <Messenger/MNMontageComposerEditablePreviewEditingBottomBarDelegate.h>
#import <Messenger/MNMontageComposerEditablePreviewCropControlViewDelegate.h>

@protocol MNMontageComposerEditablePreviewViewDelegate;
@class UIView, MNCenteringScrollView, MNMontageComposerContent, UIImageView, MNMontageComposerEditablePreviewEditingBottomBar, MNMontageComposerEditablePreviewCropControlView, MNMontageComposerPreviewCropToolView, MNMontageZoomSlider, FBTimer, MNMontageComposerEditablePreviewState, NSString;

@interface MNMontageComposerEditablePreviewView : UIView <UIScrollViewDelegate, MNMontageComposerPreviewCropToolViewDelegate, MNMontageComposerEditablePreviewEditingBottomBarDelegate, MNMontageComposerEditablePreviewCropControlViewDelegate> {

	BOOL _croppingEnabled;
	UIView* _compositeView;
	MNCenteringScrollView* _scrollView;
	MNMontageComposerContent* _uneditedContent;
	UIView* _editingView;
	UIImageView* _snapshotView;
	MNMontageComposerEditablePreviewEditingBottomBar* _editingBottomBar;
	MNMontageComposerEditablePreviewCropControlView* _cropControlView;
	MNMontageComposerPreviewCropToolView* _cropToolView;
	CGRect _confirmedCropRect;
	CGRect _currentCropRect;
	double _aspectRatio;
	MNMontageZoomSlider* _zoomSlider;
	FBTimer* _zoomSliderAutoHideTimer;
	id<MNMontageComposerEditablePreviewViewDelegate> _delegate;
	MNMontageComposerEditablePreviewState* _editablePreviewState;

}

@property (assign,nonatomic,__weak) id<MNMontageComposerEditablePreviewViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) MNMontageComposerEditablePreviewState * editablePreviewState;              //@synthesize editablePreviewState=_editablePreviewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initScrollViewWithContentView:(id)arg1 ;
-(void)_didChangeZoomSlider;
-(void)_updateScrollViewMaximumZoomScale;
-(void)_setConfirmedCropRect:(CGRect)arg1 ;
-(void)_setEditablePreviewState:(id)arg1 animated:(BOOL)arg2 ;
-(void)resetZoomAnimated:(BOOL)arg1 ;
-(double)_maximumZoomScaleWithDefaultMaximumZoomScale:(double)arg1 ;
-(void)_setZoomSliderHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canPerformTapGestureActionsAtPoint:(CGPoint)arg1 ;
-(void)_setCurrentCropRect:(CGRect)arg1 ;
-(void)setEditablePreviewState:(MNMontageComposerEditablePreviewState *)arg1 ;
-(void)_setUpZoomSliderAutoHide;
-(void)_didConfirmWithCropRect:(CGRect)arg1 ;
-(void)_setCurrentCropRectAndUnlockAspectRatio:(CGRect)arg1 ;
-(void)_setAspectRatio:(double)arg1 ;
-(void)_presentAspectRatioOptionsWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(void)_hideZoomSliderIfPossibleOrRestartAutoHide;
-(BOOL)_isCropRectCropped:(CGRect)arg1 ;
-(void)_didSelectAspectRatio:(double)arg1 ;
-(void)montageComposerPreviewCropToolViewCropRectWillBeginChanging:(id)arg1 ;
-(void)montageComposerPreviewCropToolViewCropRectDidChange:(id)arg1 ;
-(void)montageComposerPreviewCropToolViewCropRectDidFinishChanging:(id)arg1 ;
-(void)montageComposerEditablePreviewEditingBottomBarDidTapCancel:(id)arg1 ;
-(void)montageComposerEditablePreviewEditingBottomBarDidTapReset:(id)arg1 ;
-(void)montageComposerEditablePreviewEditingBottomBarDidTapConfirm:(id)arg1 ;
-(void)montageComposerEditablePreviewCropControlView:(id)arg1 didTapAspectRatioButton:(id)arg2 ;
-(CGAffineTransform)_transformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(id)initWithCompositeView:(id)arg1 zoomingEnabled:(BOOL)arg2 croppingEnabled:(BOOL)arg3 ;
-(void)enterViewModeAnimated:(BOOL)arg1 ;
-(void)enterCropMode;
-(MNMontageComposerEditablePreviewState *)editablePreviewState;
-(BOOL)canPerformSingleTapActionAtPoint:(CGPoint)arg1 ;
-(void)toggleZoomSliderVisibility;
-(BOOL)canPerformDoubleTapActionAtPoint:(CGPoint)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageComposerEditablePreviewViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<MNMontageComposerEditablePreviewViewDelegate>)delegate;
-(id)scrollView;
-(void)zoomAtPoint:(CGPoint)arg1 ;
-(void)setContent:(id)arg1 ;
-(CGRect)_zoomRectForScale:(double)arg1 withCenter:(CGPoint)arg2 ;
@end

