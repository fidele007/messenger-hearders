/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureCoordinatorBase.h>
#import <Messenger/FBCaptureCameraController.h>
#import <Messenger/FBCaptureSessionController.h>
#import <Messenger/FBCapturePerformanceTrackerController.h>

@protocol FBCCLogger, FBOrientationTracking;
@class FBCaptureManager, FBFramePerformanceTracker, FBMPPreview, FBMPVideoRecorder;

@interface FBCaptureCoordinator : FBCaptureCoordinatorBase <FBCaptureCameraController, FBCaptureSessionController, FBCapturePerformanceTrackerController> {

	FBCaptureManager* _captureManager;
	id<FBCCLogger> _logger;
	FBFramePerformanceTracker* _framePerformanceTracker;
	long long _framerateCap;
	FBMPPreview* _capturePreview;
	FBMPVideoRecorder* _videoRecorder;
	id<FBOrientationTracking> _orientationTracker;
	BOOL _rotatePhotoBeforeProcessing;

}
-(void)addCaptureManagerListener:(id)arg1 ;
-(id)capturePreview;
-(void)performCameraAction:(id)arg1 ;
-(id)initWithCaptureManager:(id)arg1 orientationTracker:(id)arg2 framePerformanceTracker:(id)arg3 filterFactory:(id)arg4 logger:(id)arg5 directoryPathForVideoStorage:(id)arg6 rotatePhotoBeforeProcessing:(BOOL)arg7 ;
-(id)framePerformanceResultDisplayer;
-(BOOL)doesCurrentDeviceSupportSessionPreset:(id)arg1 ;
-(void)cancelRecordingIfAny;
-(void)stopRecordingWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(double)maxZoomFactor;
-(void)captureImageWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)startRecordingWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canZoomToZoomFactor:(double)arg1 ;
-(void)removeCaptureManagerListener:(id)arg1 ;
-(BOOL)doesCurrentDeviceSupportTorchMode:(long long)arg1 ;
-(void)_restartFramePerformanceTracking;
-(void)filterTopologyDidChange;
-(id)_performanceLoggingParameters;
-(void)_capturedImage:(id)arg1 cameraPosition:(long long)arg2 orientation:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_capturePhotoPerfParamsWithEffect:(BOOL)arg1 image:(id)arg2 ;
-(void)_captureFilteredImage:(id)arg1 cameraPosition:(long long)arg2 orientation:(long long)arg3 imageInput:(id)arg4 rotatePhotoBeforeProcessing:(BOOL)arg5 degrees:(float)arg6 completion:(/*^block*/id)arg7 ;
-(void)_connectLocalImageInput:(id)arg1 ;
-(void)_disconnectLocalImageInput:(id)arg1 ;
-(void)_setupRecordingWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_audioCaptureWasDetermined;
-(void)_startRecordingWithCompletion:(/*^block*/id)arg1 ;
-(void)_didFinishStartRecordingVideoWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelRecording;
-(void)_stopRecordingWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_handleVideoRecordingCompletionWithAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsCaptureSessionPreset:(id)arg1 cameraPosition:(long long)arg2 ;
-(void)setFramerateCap:(long long)arg1 ;
-(id)currentDevice;
-(void)dealloc;
-(BOOL)isRunning;
-(id)sessionID;
-(void)startSession;
-(void)stopSession;
-(id)preview;
@end

