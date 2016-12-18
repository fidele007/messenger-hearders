/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageCameraViewDelegate;
@class UIView, MNMontageCameraLivePreviewView, UITapGestureRecognizer, UIPinchGestureRecognizer, FBCameraFocusIndicator, MNMontageCameraHintsHudView, CALayer;

@interface MNMontageCameraView : UIView {

	UIView* _flashView;
	MNMontageCameraLivePreviewView* _cameraLivePreviewView;
	UIView* _performanceMonitorView;
	UITapGestureRecognizer* _tapGesture;
	UITapGestureRecognizer* _doubleTapGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	FBCameraFocusIndicator* _focusIndicator;
	id<MNMontageCameraViewDelegate> _delegate;
	MNMontageCameraHintsHudView* _hintsHudView;

}

@property (assign,nonatomic,__weak) CALayer * livePreviewLayer; 
@property (assign,nonatomic,__weak) id<MNMontageCameraViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNMontageCameraHintsHudView * hintsHudView;                 //@synthesize hintsHudView=_hintsHudView - In the implementation block
-(void)_didTap:(id)arg1 ;
-(void)setPreviewLayerRotationAngle:(double)arg1 ;
-(void)_initializeFocusIndicatorIfNeeded;
-(void)setLivePreviewLayer:(CALayer *)arg1 ;
-(void)setRotationOverlayViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CALayer *)livePreviewLayer;
-(void)_didDoubleTap:(id)arg1 ;
-(void)_didPinch:(id)arg1 ;
-(void)setPerformanceMonitorView:(id)arg1 ;
-(MNMontageCameraHintsHudView *)hintsHudView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageCameraViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMontageCameraViewDelegate>)delegate;
-(void)flash;
@end

