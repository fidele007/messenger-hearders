/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCaptureManagerListener.h>

@protocol FBCameraComponentModelManager, FBCameraGenericEvent;
@class FBCaptureManager, NSString;

@interface FBCameraSwitchCameraEventHandler : NSObject <FBCaptureManagerListener> {

	FBCaptureManager* _captureManager;
	id<FBCameraComponentModelManager> _modelManager;
	id<FBCameraGenericEvent> _switchCameraEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureManagerCapturedImage:(id)arg1 metadata:(id)arg2 cameraPosition:(long long)arg3 orientation:(long long)arg4 ;
-(void)captureManagerCapturedVideo:(id)arg1 thumbnail:(id)arg2 cameraPosition:(long long)arg3 ;
-(void)captureManagerDidFailToCaptureImage;
-(void)captureManagerDidFailToCaptureVideo;
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

