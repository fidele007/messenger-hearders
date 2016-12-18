/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureManagerListener.h>

@protocol FBCameraCaptureEvent, FBCaptureCameraControllerFBCaptureSessionController, FBCameraComponentModelManager, FBCameraComponentCaptureDelegate;
@class UIImage, FBCameraFlashListenerAnnouncer, NSString;

@interface FBCameraCaptureEventHandler : NSObject <FBCaptureManagerListener> {

	id<FBCameraCaptureEvent> _captureEvent;
	id<FBCaptureCameraController><FBCaptureSessionController> _captureManager;
	UIImage* _capturedImage;
	FBCameraFlashListenerAnnouncer* _flashAnnouncer;
	id<FBCameraComponentModelManager> _modelManager;
	BOOL _readyForPhotoCaptureEvent;
	BOOL _isUsingCaptureCoordinator;
	id<FBCameraComponentCaptureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCameraComponentCaptureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleCapturedImage:(id)arg1 metadata:(id)arg2 cameraPosition:(long long)arg3 orientation:(long long)arg4 ;
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(void)_captureImage;
-(void)_startVideoRecording;
-(id)initWithCaptureEvent:(id)arg1 flashAnnouncer:(id)arg2 captureManager:(id)arg3 modelManager:(id)arg4 ;
-(void)_handleCaptureEvent:(id)arg1 ;
-(void)_stopVideoRecording;
-(void)_startVideoRecordingCountingDown;
-(void)_handlePhotoCaptureWithImage:(id)arg1 orientation:(long long)arg2 ;
-(void)_startedRecording;
-(void)_handleVideoCaptureWithAsset:(id)arg1 cameraPosition:(long long)arg2 ;
-(void)setDelegate:(id<FBCameraComponentCaptureDelegate>)arg1 ;
-(id<FBCameraComponentCaptureDelegate>)delegate;
@end

