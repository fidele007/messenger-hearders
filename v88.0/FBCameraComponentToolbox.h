/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCameraToolboxMutating.h>
#import <Messenger/FBCameraToolboxInternal.h>

@protocol FBCameraCaptureButtonAppearanceProvider, FBCameraCaptureEvent, FBCameraGenericEvent, FBCameraPanFramesEvent, FBCameraGestureRecognizerEvent, FBCameraGenericBoolEvent, FBVideoCreativeToolsApplier;
@class FBCaptureManager, FBCameraFlashListenerAnnouncer, UIView, FBUserSession, FBCameraViewFinderListenerAnnouncer, FBVideoCreativeToolsPreviewOverlayView, NSString;

@interface FBCameraComponentToolbox : NSObject <FBCameraToolboxMutating, FBCameraToolboxInternal> {

	id<FBCameraCaptureButtonAppearanceProvider> _appearanceProvider;
	id<FBCameraCaptureEvent> _captureEvent;
	FBCaptureManager* _captureManager;
	id<FBCameraGenericEvent> _closeEvent;
	id<FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
	id<FBCameraGenericEvent> _captureStateChangedToVideoEvent;
	id<FBCameraGenericEvent> _deviceOrientationChangedEvent;
	id<FBCameraGenericEvent> _flashAnimationCompletedEvent;
	id<FBCameraPanFramesEvent> _panFramesEvent;
	FBCameraFlashListenerAnnouncer* _flashAnnouncer;
	id<FBCameraGenericEvent> _flashPickerToggleEvent;
	id<FBCameraGestureRecognizerEvent> _pinchEvent;
	UIView* _previewView;
	id<FBCameraGenericEvent> _previewWillAppearEvent;
	id<FBCameraGenericEvent> _previewWillDisappearEvent;
	id<FBCameraGenericBoolEvent> _captureButtonDisabledEvent;
	FBUserSession* _session;
	id<FBCameraGenericEvent> _switchCameraEvent;
	FBCameraViewFinderListenerAnnouncer* _viewFinderAnnouncer;
	id<FBCameraGestureRecognizerEvent> _viewFinderDoubleTapEvent;
	id<FBCameraGestureRecognizerEvent> _viewFinderTapEvent;
	id<FBVideoCreativeToolsApplier> _filterHandler;
	FBVideoCreativeToolsPreviewOverlayView* _creativeToolsOverlayView;
	id<FBCameraGenericEvent> _lowLightModeEvent;

}

@property (nonatomic,retain) FBCaptureManager * captureManager;                                                //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) id<FBVideoCreativeToolsApplier> filterHandler;                                    //@synthesize filterHandler=_filterHandler - In the implementation block
@property (nonatomic,readonly) id<FBCameraCaptureButtonAppearanceProvider> appearanceProvider;                 //@synthesize appearanceProvider=_appearanceProvider - In the implementation block
@property (nonatomic,readonly) id<FBCameraCaptureEvent> captureEvent;                                          //@synthesize captureEvent=_captureEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> closeEvent;                                            //@synthesize closeEvent=_closeEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> captureStateChangedToPhotoEvent;                       //@synthesize captureStateChangedToPhotoEvent=_captureStateChangedToPhotoEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> captureStateChangedToVideoEvent;                       //@synthesize captureStateChangedToVideoEvent=_captureStateChangedToVideoEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> deviceOrientationChangedEvent;                         //@synthesize deviceOrientationChangedEvent=_deviceOrientationChangedEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> flashAnimationCompletedEvent;                          //@synthesize flashAnimationCompletedEvent=_flashAnimationCompletedEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraPanFramesEvent> panFramesEvent;                                      //@synthesize panFramesEvent=_panFramesEvent - In the implementation block
@property (nonatomic,readonly) FBCameraFlashListenerAnnouncer * flashAnnouncer;                                //@synthesize flashAnnouncer=_flashAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> flashPickerToggleEvent;                                //@synthesize flashPickerToggleEvent=_flashPickerToggleEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> pinchEvent;                                  //@synthesize pinchEvent=_pinchEvent - In the implementation block
@property (nonatomic,readonly) UIView * previewView;                                                           //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> previewWillAppearEvent;                                //@synthesize previewWillAppearEvent=_previewWillAppearEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> previewWillDisappearEvent;                             //@synthesize previewWillDisappearEvent=_previewWillDisappearEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericBoolEvent> captureButtonDisabledEvent;                        //@synthesize captureButtonDisabledEvent=_captureButtonDisabledEvent - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> switchCameraEvent;                                     //@synthesize switchCameraEvent=_switchCameraEvent - In the implementation block
@property (nonatomic,readonly) FBCameraViewFinderListenerAnnouncer * viewFinderAnnouncer;                      //@synthesize viewFinderAnnouncer=_viewFinderAnnouncer - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderDoubleTapEvent;                    //@synthesize viewFinderDoubleTapEvent=_viewFinderDoubleTapEvent - In the implementation block
@property (nonatomic,readonly) id<FBCameraGestureRecognizerEvent> viewFinderTapEvent;                          //@synthesize viewFinderTapEvent=_viewFinderTapEvent - In the implementation block
@property (nonatomic,readonly) FBVideoCreativeToolsPreviewOverlayView * creativeToolsOverlayView;              //@synthesize creativeToolsOverlayView=_creativeToolsOverlayView - In the implementation block
@property (nonatomic,readonly) id<FBCameraGenericEvent> lowLightModeEvent;                                     //@synthesize lowLightModeEvent=_lowLightModeEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBCaptureManager *)captureManager;
-(void)setCaptureManager:(FBCaptureManager *)arg1 ;
-(id<FBVideoCreativeToolsApplier>)filterHandler;
-(id<FBCameraCaptureEvent>)captureEvent;
-(FBCameraFlashListenerAnnouncer *)flashAnnouncer;
-(id<FBCameraGenericEvent>)captureStateChangedToPhotoEvent;
-(id<FBCameraGenericEvent>)captureStateChangedToVideoEvent;
-(id<FBCameraGenericEvent>)closeEvent;
-(id<FBCameraGenericEvent>)switchCameraEvent;
-(id<FBCameraGenericEvent>)flashPickerToggleEvent;
-(id<FBCameraGestureRecognizerEvent>)pinchEvent;
-(id<FBCameraGestureRecognizerEvent>)viewFinderTapEvent;
-(id<FBCameraCaptureButtonAppearanceProvider>)appearanceProvider;
-(id<FBCameraGenericEvent>)lowLightModeEvent;
-(void)setFilterHandler:(id<FBVideoCreativeToolsApplier>)arg1 ;
-(FBVideoCreativeToolsPreviewOverlayView *)creativeToolsOverlayView;
-(FBCameraViewFinderListenerAnnouncer *)viewFinderAnnouncer;
-(id<FBCameraGenericEvent>)previewWillAppearEvent;
-(id<FBCameraGenericEvent>)previewWillDisappearEvent;
-(id<FBCameraGestureRecognizerEvent>)viewFinderDoubleTapEvent;
-(id)initWithAppearanceProvider:(id)arg1 captureEvent:(id)arg2 captureManager:(id)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 closeEvent:(id)arg6 deviceOrientationChangedEvent:(id)arg7 flashAnimationCompletedEvent:(id)arg8 panFramesEvent:(id)arg9 flashAnnouncer:(id)arg10 flashPickerToggleEvent:(id)arg11 pinchEvent:(id)arg12 previewView:(id)arg13 previewWillAppearEvent:(id)arg14 previewWillDisappearEvent:(id)arg15 captureButtonDisabledEvent:(id)arg16 session:(id)arg17 switchCameraEvent:(id)arg18 viewFinderAnnouncer:(id)arg19 viewFinderDoubleTapEvent:(id)arg20 viewFinderTapEvent:(id)arg21 filterHandler:(id)arg22 creativeToolsOverlayView:(id)arg23 lowLightModeEvent:(id)arg24 ;
-(id<FBCameraGenericEvent>)deviceOrientationChangedEvent;
-(id<FBCameraGenericEvent>)flashAnimationCompletedEvent;
-(id<FBCameraPanFramesEvent>)panFramesEvent;
-(id<FBCameraGenericBoolEvent>)captureButtonDisabledEvent;
-(FBUserSession *)session;
-(UIView *)previewView;
@end
