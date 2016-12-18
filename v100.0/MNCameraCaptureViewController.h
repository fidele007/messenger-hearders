/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCaptureManagerListener.h>
#import <Messenger/MNProfilePicturePreviewDataSource.h>

@protocol MNProfilePicturePreviewDataSourceDelegate;
@class UIImage, FBCaptureManager, MNCameraPreviewLayerWrapperView, UITapGestureRecognizer, FBCameraFocusIndicator, NSString;

@interface MNCameraCaptureViewController : UIViewController <FBCaptureManagerListener, MNProfilePicturePreviewDataSource> {

	FBCaptureManager* _captureManager;
	MNCameraPreviewLayerWrapperView* _cameraPreviewWrapperView;
	UITapGestureRecognizer* _tapGesture;
	FBCameraFocusIndicator* _focusIndicator;
	BOOL _enableTouchFocus;
	id<MNProfilePicturePreviewDataSourceDelegate> _delegate;
	UIImage* _previewImage;
	CGRect _cropRect;

}

@property (assign,nonatomic) BOOL enableTouchFocus;                                                      //@synthesize enableTouchFocus=_enableTouchFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNProfilePicturePreviewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                          //@synthesize cropRect=_cropRect - In the implementation block
-(void)_didTap:(id)arg1 ;
-(void)_initCameraCaptureViewIfNecessary;
-(void)capturePreview;
-(void)_transformPreviewLayerForStatusBarOrientation;
-(void)_handleCapturedImage:(id)arg1 metadata:(id)arg2 cameraPosition:(long long)arg3 orientation:(long long)arg4 ;
-(double)_interfaceOrientationAngle:(long long)arg1 ;
-(void)_initializeFocusIndicatorIfNeeded;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(void)togglePreviewMode;
-(id)initWithCaptureManager:(id)arg1 ;
-(BOOL)enableTouchFocus;
-(void)setEnableTouchFocus:(BOOL)arg1 ;
-(void)setDelegate:(id<MNProfilePicturePreviewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<MNProfilePicturePreviewDataSourceDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGRect)cropRect;
-(void)tearDown;
-(UIImage *)previewImage;
@end

