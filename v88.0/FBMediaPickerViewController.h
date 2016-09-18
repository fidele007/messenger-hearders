/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBNavigationItemManagerDelegate.h>
#import <Messenger/FBMediaPickerLibraryControllerDelegate.h>
#import <Messenger/FBMediaGalleryViewControllerDelegate.h>
#import <Messenger/FBMediaPickerVideoPlayerViewControllerDelegate.h>
#import <Messenger/FBMediaSourceChooserDelegate.h>
#import <Messenger/FBMediaSourceChooserLabelDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBCropViewControllerDelegate.h>
#import <Messenger/FBCameraComponentCaptureDelegate.h>
#import <Messenger/FBNuxBannerControllerDelegate.h>

@protocol FBClonePhotoView, FBNuxBannerViewController, FBMediaPickerViewControllerDelegate, FBAssetsLoggingControllerProtocol;
@class FBMediaPickerSession, FBImageProcessingRequestContextHandle, FBNavigationItemManager, FBScenePath, FBCropViewController, FBNumericalScenePathContext, FBMediaSourceChooserLabel, FBMediaSourceChooser, FBMediaPickerLibraryController, FBMediaImageManager, FBPhotoAsset, UIView, UILabel, FBCameraDisplayer, UIViewController, FBMediaGalleryViewController, FBSemiTransparentOverlayPresentingView, FBMediaPickerVideoPlayerViewController, SPAccessPhotoPermissionPromptView, FBPopoverController, NSString;

@interface FBMediaPickerViewController : UIViewController <FBPresentableViewController, FBNavigationItemManagerDelegate, FBMediaPickerLibraryControllerDelegate, FBMediaGalleryViewControllerDelegate, FBMediaPickerVideoPlayerViewControllerDelegate, FBMediaSourceChooserDelegate, FBMediaSourceChooserLabelDelegate, FBPopoverControllerDelegate, FBCropViewControllerDelegate, FBCameraComponentCaptureDelegate, FBNuxBannerControllerDelegate> {

	FBMediaPickerSession* _session;
	FBImageProcessingRequestContextHandle* _handle;
	BOOL _hasViewAppeared;
	FBNavigationItemManager* _navigationItemManager;
	FBScenePath* _scenePath;
	FBCropViewController* _cropViewController;
	FBNumericalScenePathContext* _scenePathContext;
	FBMediaSourceChooserLabel* _sourceChooserLabel;
	FBMediaSourceChooser* _sourceChooser;
	FBMediaPickerLibraryController* _libraryController;
	FBMediaImageManager* _mediaImageManager;
	FBPhotoAsset* _currentPhotoAsset;
	BOOL _currentlyLoadingImageForMediaGallery;
	UIView*<FBClonePhotoView> _currentGalleryViewTransitionFromView;
	CGSize _currentTransitionFromViewImageSize;
	UILabel* _multiPhotoIndicatorBottomLabel;
	UIView* _multiPhotoIndicatorBottomLabelContainerView;
	FBCameraDisplayer* _cameraDisplayer;
	UIViewController*<FBNuxBannerViewController> _ctaQuickPromotionBannerVC;
	FBMediaGalleryViewController* _galleryViewController;
	BOOL _photoAssetDoesNotNeedRecycle;
	unsigned long long _dataSourceShownDefault;
	FBSemiTransparentOverlayPresentingView* _overlayPresentingView;
	BOOL _allowUnselectMediaAttachments;
	unsigned long long _mediaFilter;
	id<FBMediaPickerViewControllerDelegate> _delegate;
	id<FBAssetsLoggingControllerProtocol> _assetLoggingController;
	FBMediaPickerVideoPlayerViewController* _videoPlayerViewController;
	SPAccessPhotoPermissionPromptView* _photoPermissionView;
	FBPopoverController* _sourceChooserPopover;

}

@property (nonatomic,retain) FBMediaPickerVideoPlayerViewController * videoPlayerViewController;               //@synthesize videoPlayerViewController=_videoPlayerViewController - In the implementation block
@property (nonatomic,retain) SPAccessPhotoPermissionPromptView * photoPermissionView;                          //@synthesize photoPermissionView=_photoPermissionView - In the implementation block
@property (nonatomic,retain) FBPopoverController * sourceChooserPopover;                                       //@synthesize sourceChooserPopover=_sourceChooserPopover - In the implementation block
@property (assign,nonatomic) unsigned long long mediaFilter;                                                   //@synthesize mediaFilter=_mediaFilter - In the implementation block
@property (assign,nonatomic) BOOL allowUnselectMediaAttachments;                                               //@synthesize allowUnselectMediaAttachments=_allowUnselectMediaAttachments - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaPickerViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBAssetsLoggingControllerProtocol> assetLoggingController;              //@synthesize assetLoggingController=_assetLoggingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(id)analyticsModule;
-(void)_logEvent:(id)arg1 ;
-(void)didTapCancelButton;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_updateNavigationItems;
-(void)_didTapCameraButton;
-(void)setMediaFilter:(unsigned long long)arg1 ;
-(unsigned long long)mediaFilter;
-(BOOL)fb_showNavBarSearchField;
-(void)cropViewControllerDidConfirmCrop:(id)arg1 ;
-(void)cropViewControllerDidCancelCrop:(id)arg1 ;
-(unsigned long long)preferredPresentationOptions;
-(void)resetComposition;
-(void)logAttachmentActivityWithExtraData:(id)arg1 published:(BOOL)arg2 ;
-(void)mediaGalleryDidReturn:(id)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 animated:(BOOL)arg4 ;
-(void)mediaGalleryDidConfirmComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGallery:(id)arg1 didToggleSelection:(id)arg2 wasSelected:(BOOL)arg3 ;
-(id)initWithMediaPickerSession:(id)arg1 dataSourceType:(unsigned long long)arg2 dataSource:(id)arg3 ;
-(void)willBePresentedWithSourceType:(long long)arg1 showTaggingMode:(BOOL)arg2 animateFromView:(id)arg3 allowPaging:(BOOL)arg4 photoAssetDoesNotNeedRecycle:(BOOL)arg5 ;
-(void)didCaptureImage:(id)arg1 ;
-(void)didCaptureVideo:(id)arg1 thumbnail:(id)arg2 cameraPosition:(long long)arg3 ;
-(void)_logEvent:(id)arg1 info:(id)arg2 ;
-(void)sourceChooserLabel:(id)arg1 didTapFromView:(id)arg2 ;
-(void)resetAutoTagging;
-(void)_didTapDoneButton;
-(void)_didConfirmComposition;
-(void)libraryControllerDidTapCameraInGrid:(id)arg1 ;
-(void)libraryController:(id)arg1 needsToPresentMediaAtGridIndex:(unsigned long long)arg2 ;
-(void)libraryController:(id)arg1 didToggleCheckmarkForThumbnailView:(id)arg2 atGridIndex:(unsigned long long)arg3 wasSelected:(BOOL)arg4 quality:(unsigned long long)arg5 ;
-(BOOL)libraryController:(id)arg1 shouldAllowSelecting:(id)arg2 withNewSelectedAsset:(id)arg3 ;
-(void)libraryController:(id)arg1 needsToPresentWarningWithMessage:(id)arg2 ;
-(void)libraryController:(id)arg1 needsToPresentAlertWithTitle:(id)arg2 message:(id)arg3 ;
-(void)libraryController:(id)arg1 didScroll:(id)arg2 ;
-(void)libraryController:(id)arg1 scrollViewDidEndDecelerating:(id)arg2 ;
-(id)currentDataSource;
-(BOOL)libraryControllerShouldShowNux:(id)arg1 ;
-(void)libraryController:(id)arg1 didSelectMagicStoryCollection:(id)arg2 ;
-(void)setCurrentDataSource:(id)arg1 ;
-(void)_updateMultiPhotoIndicatorBottomLabel;
-(void)_updateGridForCameraRollAcessStatus;
-(void)_updateSourceChooser;
-(void)_setQuickPromotionBannerVC:(id)arg1 ;
-(void)_photoPermissionViewDidTapAuthorize:(id)arg1 ;
-(void)_photoPermissionViewDidTapLinkToSettings:(id)arg1 ;
-(void)_presentMediaAtGridIndex:(unsigned long long)arg1 ;
-(void)_didToggleCheckmarkForThumbnailView:(id)arg1 atIndex:(unsigned long long)arg2 wasSelected:(BOOL)arg3 quality:(unsigned long long)arg4 ;
-(id)galleryViewController;
-(unsigned long long)_gridIndexForGalleryIndex:(unsigned long long)arg1 galleryShowingAll:(BOOL)arg2 ;
-(void)_dismissGalleryAnimated:(BOOL)arg1 withReason:(unsigned long long)arg2 atGridIndex:(unsigned long long)arg3 ;
-(void)_didConfirmCompositionWithSelectedPhotosFromSource:(long long)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)didToggleSelection:(id)arg1 fromSource:(long long)arg2 wasSelected:(BOOL)arg3 ;
-(unsigned long long)_gridIndexForDataSourceIndex:(unsigned long long)arg1 ;
-(FBMediaPickerVideoPlayerViewController *)videoPlayerViewController;
-(void)_animateFromMediaViewFromFrameOutsideGridForGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 ;
-(void)_didTapComposeButton;
-(void)didTapComposeButton;
-(void)didTapTitleView;
-(void)_updateStatusBarForPresentingViewController:(id)arg1 ;
-(void)_navigateToCrop:(unsigned long long)arg1 fromCamera:(BOOL)arg2 ;
-(void)_prepareCameraOutputForComposition:(BOOL)arg1 ;
-(void)_handleCapturedAttachment:(BOOL)arg1 ;
-(unsigned long long)_galleryIndexForGridIndex:(unsigned long long)arg1 ;
-(void)_navigationToViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_logForTools;
-(void)_showCropAfterSelection;
-(void)_navigateToMultiPhotoCreationTool:(unsigned long long)arg1 ;
-(void)_profilePictureSelectionAction;
-(void)_defaultAfterSelection;
-(void)_showCamera;
-(void)_animateToGalleryViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_animateToVideoViewFromThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)_toggleSelectionAtGridIndex:(unsigned long long)arg1 wasSelected:(BOOL)arg2 quality:(unsigned long long)arg3 ;
-(id)_getPreparerForFacerecRequest:(unsigned long long)arg1 ;
-(id)_getVideoAssetPreparerForGridIndex:(unsigned long long)arg1 ;
-(CGSize)_prepareAnimationImageViewForGridIndex:(unsigned long long)arg1 ;
-(void)_presentMediaGalleryWithInitialToolThatRequiresImagePreparation:(unsigned long long)arg1 ;
-(void)_animateToMediaViewFromGridIndex:(unsigned long long)arg1 forViewController:(id)arg2 ;
-(CGRect)_fullScreenMediaFrameWithImageSize:(CGSize)arg1 photoLayoutGuide:(BOOL)arg2 ;
-(void)_navigateFromCameraToVideoPlayer;
-(void)_handleCapturedAttachmentWithoutPreview;
-(void)_navigateFromCameraToCropView;
-(void)_navigateFromCameraToGallery;
-(void)_hideStatusBar;
-(void)_showStatusBar;
-(void)_updateStatusBarColor;
-(CGSize)_sourceChooserSize;
-(CGPoint)_sourceChooserPopoverAnchorPoint;
-(SPAccessPhotoPermissionPromptView *)photoPermissionView;
-(void)_mediaPickerDidSelectMediaAssetAttachmentsFromSource:(long long)arg1 currentPhotoAssetShown:(id)arg2 ;
-(FBPopoverController *)sourceChooserPopover;
-(void)_mergePhotoAssetEditsFromPhotoAttachment:(id)arg1 ;
-(void)_mergeVideoAssetEditsFromVideoAttachment:(id)arg1 ;
-(void)addMediaAttachments:(id)arg1 ;
-(void)_mediaPickerDidSelectMediaAssetAttachmentsFromSource:(long long)arg1 ;
-(void)didTapLeftBarButton;
-(void)didTapRightBarButton;
-(void)videoPlayerDidReturn:(id)arg1 withDataSourceIndex:(unsigned long long)arg2 ;
-(void)videoPlayer:(id)arg1 didConfirmCompositionWithVideoAsset:(id)arg2 withDataSourceIndex:(unsigned long long)arg3 quality:(unsigned long long)arg4 ;
-(void)sourceChooser:(id)arg1 didSelectDataSource:(id)arg2 ;
-(void)sourceChooserNumberOfRowsDidChange:(id)arg1 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)scrollToFirstSelectedAttachment;
-(void)mergeEditsForMediaAttachments:(id)arg1 ;
-(id)thumbnailForAssetID:(id)arg1 ;
-(void)commitSelectedMediaAttachments:(long long)arg1 ;
-(void)removePhotoTagsEdge:(id)arg1 forAssetID:(id)arg2 source:(id)arg3 ;
-(id)applyCropInfo:(id)arg1 toPhotoAssetID:(id)arg2 ;
-(id)applyPhotoOverlayAttachmentsLayer:(id)arg1 photoOverlayAttachmentsInformation:(id)arg2 imageWithPhotoOverlayApplied:(id)arg3 toPhotoAssetID:(id)arg4 ;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(BOOL)allowUnselectMediaAttachments;
-(id<FBAssetsLoggingControllerProtocol>)assetLoggingController;
-(void)setAssetLoggingController:(id<FBAssetsLoggingControllerProtocol>)arg1 ;
-(void)setVideoPlayerViewController:(FBMediaPickerVideoPlayerViewController *)arg1 ;
-(void)setPhotoPermissionView:(SPAccessPhotoPermissionPromptView *)arg1 ;
-(void)setSourceChooserPopover:(FBPopoverController *)arg1 ;
-(void)selectMediaAttachments:(id)arg1 ;
-(void)setAllowUnselectMediaAttachments:(BOOL)arg1 ;
-(id)selectedMediaAttachments;
-(void)setDelegate:(id<FBMediaPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMediaPickerViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)accessibilityPerformEscape;
-(void)_didCancel;
-(void)_setStatusBarStyle:(long long)arg1 ;
-(void)_restoreStatusBar;
@end

