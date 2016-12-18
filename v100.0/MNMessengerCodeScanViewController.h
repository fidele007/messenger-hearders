/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNMessengerCodeScanErrorPresenter.h>
#import <Messenger/MNMessengerCodeScanViewDelegate.h>
#import <Messenger/MNProfilePicturePreviewDataSourceDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation, MNMessengerCodeScanViewControllerDelegate;
@class MNMessengerCodeScanView, MNCameraCaptureViewController, FBCaptureManager, FBMLoggedInUserInfoManager, NSString, MNSoundController, FBAnalytics, MNPermissionsViewController, MNMessengerCodeManager, MNMessengerCodeScanErrorManager, UIImage, NSArray, FBTimer, NSDate;

@interface MNMessengerCodeScanViewController : UIViewController <MNMessengerCodeScanErrorPresenter, MNMessengerCodeScanViewDelegate, MNProfilePicturePreviewDataSourceDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, FBClassProvidable> {

	MNMessengerCodeScanView* _scanView;
	MNCameraCaptureViewController* _cameraCaptureViewController;
	FBCaptureManager* _captureManager;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	id<MNModalPresentation> _modalPresenter;
	NSString* _applicationName;
	MNSoundController* _soundController;
	FBAnalytics* _analytics;
	MNPermissionsViewController* _permissionsViewController;
	BOOL _showsPreviewViews;
	MNMessengerCodeManager* _messengerCodeManager;
	MNMessengerCodeScanErrorManager* _errorManager;
	BOOL _isProcessing;
	BOOL _shouldProcessInRealTime;
	UIImage* _lastProcessingImage;
	NSArray* _lastDebugImages;
	FBTimer* _loadingIndicatorTimer;
	FBTimer* _helperTextTimer;
	int _framesProcessedInSession;
	int _failedFramesInDetection;
	int _failedFramesInDecoding;
	int _failedFramesInHashRequest;
	NSDate* _scanSessionStart;
	BOOL _enableRealTimeScan;
	id<MNMessengerCodeScanViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessengerCodeScanViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnableRealTimeScan,nonatomic) BOOL enableRealTimeScan;                        //@synthesize enableRealTimeScan=_enableRealTimeScan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)profilePicturePreviewViewDataSource:(id)arg1 didCapturePreview:(id)arg2 ;
-(void)_handleCameraFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)_enableRealtimeScanning;
-(id)initWithDirectoryPathForVideoStorage:(id)arg1 orientationTracker:(id)arg2 messengerCodeManager:(id)arg3 loggedInUserInfoManager:(id)arg4 modalPresenter:(id)arg5 applicationName:(id)arg6 soundController:(id)arg7 analytics:(id)arg8 ;
-(BOOL)_shouldEnableBugReporting;
-(void)_updateCameraPermissionsViewControllerVisibility;
-(void)_startRealtimeScanSession;
-(void)_disableLoadingIndicator;
-(void)_requestBugReportPermission;
-(void)_presentImagePicker;
-(void)_showLoadingIndicator;
-(void)_presentCodeNotFoundErrorWithIsPhotoCaptured:(BOOL)arg1 ;
-(void)_processImage:(id)arg1 imagePickedFromLibrary:(BOOL)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_disableRealtimeScanning;
-(void)_updateHelperText:(id)arg1 ;
-(BOOL)_shouldGenerateDebugImages;
-(void)_didDetectAndDecodeWithDebugImages:(id)arg1 ;
-(void)_processFrameDidSucceedWithUserId:(id)arg1 imagePickedFromLibrary:(BOOL)arg2 isPage:(BOOL)arg3 ;
-(void)_processFrameDidFailWithError:(id)arg1 debugImages:(id)arg2 ;
-(BOOL)_shouldShowDebugImages;
-(void)_scheduleShowLoadingIndicator;
-(void)_playScanCompleteSoundEffect;
-(void)_generateBugReportWithImages:(id)arg1 ;
-(void)_playScanStartSoundEffect;
-(void)presentMessengerCodeScanError;
-(void)messengerCodeScanViewDidTapCaptureButton:(id)arg1 ;
-(void)messengerCodeScanViewDidTapBugReportButton:(id)arg1 ;
-(void)messengerCodeScanViewDidTapChooseFromLibraryButton:(id)arg1 ;
-(BOOL)isEnableRealTimeScan;
-(id)scanSessionAnalyticsExtras;
-(void)setEnableRealTimeScan:(BOOL)arg1 ;
-(void)resetScanSessionAnalytics;
-(void)setDelegate:(id<MNMessengerCodeScanViewControllerDelegate>)arg1 ;
-(id<MNMessengerCodeScanViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

