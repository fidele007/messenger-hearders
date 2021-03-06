/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureManagerListener.h>

@protocol FBCaptureCameraController, FBCameraComponentModelManager, FBCameraGenericEvent;
@class NSString;

@interface FBCameraSwitchCameraEventHandler : NSObject <FBCaptureManagerListener> {

	id<FBCaptureCameraController> _captureManager;
	id<FBCameraComponentModelManager> _modelManager;
	id<FBCameraGenericEvent> _switchCameraEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureManagerPreviewDidLoad:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingAudioSession;
-(void)captureManagerDidFailToLoadAudioSessionWithError:(id)arg1 ;
-(void)captureManagerHasFinishedLoadingCaptureSession;
-(void)captureManagerHasEndedCaptureSession;
-(void)captureManagerUpdatedPreviousCaptureDevice:(id)arg1 toCurrentCaptureDevice:(id)arg2 ;
-(id)initWithCaptureManager:(id)arg1 modelManager:(id)arg2 switchCameraEvent:(id)arg3 gestureSwitchCameraEvent:(id)arg4 ;
-(void)_cameraSwitchButtonDidTap;
-(void)_cameraGestureRecognized:(id)arg1 ;
-(void)_switchCameraDevicePosition;
@end

