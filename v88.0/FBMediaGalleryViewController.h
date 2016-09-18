/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewInfiniteDataSource.h>
#import <Messenger/FBCropViewControllerDelegate.h>
#import <Messenger/SPPhotoViewDelegate.h>
#import <Messenger/FBFilterBarControllerDelegate.h>
#import <Messenger/FBMediaGalleryTopBarDelegate.h>
#import <Messenger/FBComposerPhotoOverlayViewControllerDelegate.h>
#import <Messenger/FBComposerCropViewControllerDelegate.h>
#import <Messenger/FBMediaGalleryBannerTapHandlerProtocol.h>
#import <Messenger/FBClonePhotoViewProviderDelegate.h>
#import <Messenger/FBDisplayableMediaTransitionManagerDelegate.h>
#import <Messenger/FBComposerDoodlesViewControllerDelegate.h>
#import <Messenger/FBMediaPickerMediaAssetListener.h>
#import <Messenger/FBMediaViewControllerProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBMediaGalleryToolProtocol, FBMediaGalleryViewControllerDelegate, FBMediaDataSourceProtocol;
@class FBMediaPickerSession, FBMediaImageManager, FBComposerCropViewController, FBComposerDoodlesViewController, UIViewController, NSString, FBScenePath, UIImage, UIView, FBNumericalScenePathContext, FBMediaGallerySecondaryBar, FBComposerStickersViewController, FBComposerTextOnPhotosViewController, FBFadeInToViewTransitioningDelegate, FBDisplayableMediaTransitionManager, FBMediaGalleryTopBar, FBMediaGalleryBottomBar, FBPhotoAsset, FBMediaGalleryView, FBFilterBarController, FBCropViewController, SPPhotoView, FBPagingView;

@interface FBMediaGalleryViewController : UIViewController <FBPagingViewDelegate, FBPagingViewInfiniteDataSource, FBCropViewControllerDelegate, SPPhotoViewDelegate, FBFilterBarControllerDelegate, FBMediaGalleryTopBarDelegate, FBComposerPhotoOverlayViewControllerDelegate, FBComposerCropViewControllerDelegate, FBMediaGalleryBannerTapHandlerProtocol, FBClonePhotoViewProviderDelegate, FBDisplayableMediaTransitionManagerDelegate, FBComposerDoodlesViewControllerDelegate, FBMediaPickerMediaAssetListener, FBMediaViewControllerProtocol> {

	FBMediaPickerSession* _session;
	BOOL _presentedFromCamera;
	BOOL _needToShowTapToTag;
	FBMediaImageManager* _mediaImageManager;
	FBComposerCropViewController* _composerCropViewController;
	FBComposerDoodlesViewController* _doodlesViewController;
	BOOL _faceRecognitionEnabled;
	BOOL _preventPhotoPagingWhileAnimating;
	BOOL _allowPaging;
	BOOL _aToolIsPresenting;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	/*^block*/id _blockToExecuteAfterCurrentToolsDismissal;
	NSString* _currentAssetIDForLoggingEntrance;
	FBScenePath* _currentScenePath;
	NSString* _currentTitle;
	unsigned long long _currentToolType;
	UIViewController*<FBMediaGalleryToolProtocol> _currentToolViewController;
	BOOL _disableAutoRotate;
	unsigned long long _initialTool;
	UIImage* _imageForInitialTool;
	BOOL _navigatingBack;
	BOOL _pagingDisabled;
	UIView* _privacyMessageView;
	FBNumericalScenePathContext* _scenePathContext;
	FBMediaGallerySecondaryBar* _secondaryBar;
	BOOL _showTaggingMode;
	FBComposerStickersViewController* _stickersViewController;
	FBComposerTextOnPhotosViewController* _textOnPhotosViewController;
	double _timeStampOfEnteringGallery;
	FBFadeInToViewTransitioningDelegate* _transitioningDelegate;
	FBDisplayableMediaTransitionManager* _transitionManager;
	BOOL _photoAssetDoesNotNeedRecycle;
	NSString* _focusedFaceBoxID;
	id<FBMediaGalleryViewControllerDelegate> _delegate;
	FBMediaGalleryTopBar* _galleryTopBar;
	BOOL _showAll;
	BOOL _filterMode;
	BOOL _willPresent;
	long long _currentPhotoIndex;
	FBMediaGalleryBottomBar* _bottomBar;
	unsigned long long _presentationSource;
	unsigned long long _taggingMode;
	FBPhotoAsset* _currentPhotoAsset;
	FBMediaGalleryView* _galleryView;
	FBFilterBarController* _filterBarController;
	FBCropViewController* _cropViewController;
	id<FBMediaDataSourceProtocol> _currentDataSource;
	unsigned long long _swipeCount;

}

@property (assign,nonatomic) BOOL showAll;                                                 //@synthesize showAll=_showAll - In the implementation block
@property (assign,nonatomic) BOOL filterMode;                                              //@synthesize filterMode=_filterMode - In the implementation block
@property (assign,nonatomic) BOOL willPresent;                                             //@synthesize willPresent=_willPresent - In the implementation block
@property (assign,nonatomic) long long currentPhotoIndex;                                  //@synthesize currentPhotoIndex=_currentPhotoIndex - In the implementation block
@property (assign,nonatomic) unsigned long long taggingMode;                               //@synthesize taggingMode=_taggingMode - In the implementation block
@property (nonatomic,retain) FBPhotoAsset * currentPhotoAsset;                             //@synthesize currentPhotoAsset=_currentPhotoAsset - In the implementation block
@property (nonatomic,retain) FBMediaGalleryView * galleryView;                             //@synthesize galleryView=_galleryView - In the implementation block
@property (nonatomic,readonly) SPPhotoView * currentPhotoView; 
@property (nonatomic,readonly) FBPagingView * pagingView; 
@property (nonatomic,retain) FBFilterBarController * filterBarController;                  //@synthesize filterBarController=_filterBarController - In the implementation block
@property (nonatomic,retain) FBCropViewController * cropViewController;                    //@synthesize cropViewController=_cropViewController - In the implementation block
@property (nonatomic,retain) id<FBMediaDataSourceProtocol> currentDataSource;              //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long swipeCount;                                //@synthesize swipeCount=_swipeCount - In the implementation block
@property (nonatomic,readonly) FBMediaGalleryBottomBar * bottomBar;                        //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,readonly) BOOL presentedFromCamera;                                   //@synthesize presentedFromCamera=_presentedFromCamera - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationSource;                      //@synthesize presentationSource=_presentationSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaPickerGalleryReturnReasonStringForReason:(unsigned long long)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingView:(id)arg1 disposeViewData:(id)arg2 ;
-(void)pagingViewDidEndScrollingAnimation:(id)arg1 ;
-(void)pagingViewDidChangePageIndex:(id)arg1 ;
-(void)willPresentMediaAtDataSourceIndex:(unsigned long long)arg1 fromCamera:(BOOL)arg2 showAll:(BOOL)arg3 allowPaging:(BOOL)arg4 showTaggingMode:(BOOL)arg5 source:(unsigned long long)arg6 forDataSource:(id)arg7 photoAssetDoesNotNeedRecycle:(BOOL)arg8 ;
-(BOOL)hasMultiSelectSupport;
-(unsigned long long)presentationAssetType;
-(void)setTransitionView:(id)arg1 ;
-(id)pagingView:(id)arg1 previousViewForView:(id)arg2 ;
-(id)pagingView:(id)arg1 nextViewForView:(id)arg2 ;
-(void)cropViewControllerDidConfirmCrop:(id)arg1 ;
-(void)cropViewControllerDidCancelCrop:(id)arg1 ;
-(id)clonePhotoViewProvider:(id)arg1 cloneViewForMedia:(id)arg2 ;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)transitionManager:(id)arg1 didDismissWithMediaViewProviderInfo:(id)arg2 ;
-(void)transitionManager:(id)arg1 willDismissWithMediaViewProviderInfo:(id)arg2 ;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2 ;
-(void)transitionManager:(id)arg1 didPresentWithMediaViewProviderInfo:(id)arg2 ;
-(void)photoViewDidStartTagging:(id)arg1 ;
-(void)photoViewDidFinishTagging:(id)arg1 ;
-(id)initWithSession:(id)arg1 initialTool:(unsigned long long)arg2 focusedFaceBoxID:(id)arg3 delegate:(id)arg4 ;
-(void)setImageForInitialTool:(id)arg1 ;
-(void)didTapBanner;
-(void)_logEvent:(id)arg1 info:(id)arg2 ;
-(void)composerCropViewControllerDidFinishAnimatingToCropping:(id)arg1 ;
-(void)composerCropViewControllerDidCancelCrop:(id)arg1 ;
-(void)composerCropViewControllerDidConfirmCrop:(id)arg1 didHitNavBarDone:(BOOL)arg2 ;
-(void)galleryTopBarDidTapBackButton:(id)arg1 ;
-(void)galleryTopBarDidTapSelectButton:(id)arg1 ;
-(void)_updateCurrentToolTypeAndTitleWithToolType:(unsigned long long)arg1 ;
-(void)_updateTopBarForPhoto;
-(void)_updateGalleryViewLayoutGuide;
-(id)buttonsArray:(unsigned long long)arg1 ;
-(CGRect)_secondaryBarFrame;
-(void)_updateUIForPhotoAsset:(id)arg1 ;
-(void)_setDefaultBackgroundColor;
-(void)_dismissChildToolViewController:(id)arg1 ;
-(void)bottomBarDidTapCropButton:(id)arg1 ;
-(void)bottomBarDidTapFilterButton:(id)arg1 ;
-(void)bottomBarDidTapTagButton:(id)arg1 ;
-(void)bottomBarDidTapCreativeToolsButton:(id)arg1 toolType:(unsigned long long)arg2 ;
-(void)_setDoneButtonEnabled:(BOOL)arg1 ;
-(SPPhotoView *)currentPhotoView;
-(void)resetAutoTagging;
-(void)_setFilterMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_filterBarFrame;
-(void)_updateFilterBarThumbnailIfNeededForPhotoAsset:(id)arg1 filterMode:(BOOL)arg2 ;
-(void)_updateTagDecoratorWithFilterMode:(BOOL)arg1 ;
-(void)setWillPresent:(BOOL)arg1 ;
-(void)_setTaggingModeIfLowEndDevice;
-(void)_setUpInitialTool;
-(void)_jumpToPhotoAtPhotoIndex:(unsigned long long)arg1 ;
-(FBPhotoAsset *)currentPhotoAsset;
-(void)_updateEditButtonsEnabledIfNeededWithPhotoAsset:(id)arg1 ;
-(void)setTaggingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setTagAsInitialTool;
-(void)_pushInitialTool;
-(void)_finishedAnimatingToMediaGalleryWithFaceboxIDToFocusOn:(id)arg1 ;
-(CGRect)_bannerFrame;
-(CGRect)_privacyMessageFrame;
-(long long)_photoIndexFrom:(long long)arg1 searchForward:(BOOL)arg2 includingUnpagedPhotosDuringAnimation:(BOOL)arg3 ;
-(id)_pageForPhotoIndex:(unsigned long long)arg1 ;
-(void)setCurrentPhotoAsset:(FBPhotoAsset *)arg1 ;
-(void)_logMediaGalleryEntrance;
-(long long)currentPhotoIndex;
-(void)setCurrentPhotoIndex:(long long)arg1 ;
-(void)photoAssetPreparerCancelForPhotoAsset:(id)arg1 ;
-(void)recyclePhotoAsset:(id)arg1 ;
-(void)_setTagsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setFaceboxesHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_navigateBackFromFrame:(CGRect)arg1 ;
-(void)_logTapOfButtonWithAsset:(id)arg1 toolType:(unsigned long long)arg2 ;
-(BOOL)_imageIsNotReadyToBeChanged;
-(/*^block*/id)_getCompletionForToolType:(unsigned long long)arg1 ;
-(void)_dismissCurrentToolIfNecessaryForTool:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_tagAnywherePressed:(id)arg1 ;
-(void)_updateSecondaryBarWithCurrentToolType:(unsigned long long)arg1 ;
-(void)_navigateBack;
-(CGRect)_fullScreenMediaFrameForCurrentPhotoView;
-(void)_returnAnimated:(BOOL)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 ;
-(void)_dismissTaggingAndDisableTopBarWithCompletion:(/*^block*/id)arg1 ;
-(void)_logTimeInMediaGallery;
-(void)_didTapDoneButton;
-(void)_toggleSelectionInAllMode:(BOOL)arg1 needToGotoComposer:(BOOL)arg2 ;
-(void)_returnAnimated:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)_didConfirmComposition;
-(void)_didConfirmCompositionWithCurrentPhotoAssetShown:(id)arg1 ;
-(BOOL)_shouldResetToNormalFilterWithSelectedFilter:(id)arg1 isSameFilterSelectedTwice:(BOOL)arg2 ;
-(BOOL)_isNormalCPUFilterState:(id)arg1 ;
-(BOOL)_shouldResetToNormalFilterWithSelectedCPUFilterState:(id)arg1 isSameFilterSelectedTwice:(BOOL)arg2 ;
-(void)_applyFilterAndOverlaysToCurrentAssetWithCPUFilterState:(id)arg1 preview:(id)arg2 ;
-(void)_applyCrop:(id)arg1 ;
-(void)_cancelCrop;
-(void)setTaggingMode:(unsigned long long)arg1 ;
-(unsigned long long)taggingMode;
-(void)_loadCropScreenWithImage:(id)arg1 withPreviousCropInfo:(id)arg2 ;
-(void)_loadStickerScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2 isInitialTool:(BOOL)arg3 ;
-(void)_setUpCropToolAsInitialTool;
-(void)_setUpStickerToolAsInitialTool;
-(void)_updateSecondaryBarForTag;
-(void)_emptySecondaryBar;
-(BOOL)_hasSquarePhoto;
-(void)_navigateToCropViewController;
-(void)_selectPhotoAndNavigateBack;
-(unsigned long long)_pageCountIncludingUnpagedPhotosDuringAnimation:(BOOL)arg1 ;
-(BOOL)_adjustCurrentPhotoIndex;
-(FBFilterBarController *)filterBarController;
-(void)_setBackButtonHidden:(BOOL)arg1 ;
-(void)_updateTopBarTitleValue:(unsigned long long)arg1 ;
-(void)_updateUIForLuxApplied:(BOOL)arg1 ;
-(BOOL)_isPresentingAndWillReloadAfterPresenting;
-(void)_resetImageViewZoomAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissTaggingToolAnimated:(BOOL)arg1 ;
-(void)_informCurrentToolToDismissWithToolPressed:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_tagButtonWasPressedAndOptimisticallySelected:(BOOL)arg1 ;
-(void)_filterButtonWasPressed;
-(void)_navigateToStickersViewController;
-(void)_navigateToTextViewController;
-(void)_navigateToDoodleViewController;
-(void)_prepareForNavigatingToATool:(unsigned long long)arg1 ;
-(void)_loadTextScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2 ;
-(void)_loadDoodleScreenWithBaseImage:(id)arg1 currentPhotoAsset:(id)arg2 ;
-(id)_titleForTool:(unsigned long long)arg1 ;
-(id)_topBarConfigurationForTool:(unsigned long long)arg1 ;
-(void)_embedChildToolViewController:(id)arg1 ;
-(id)_currentImageViewBeingShown;
-(CGRect)_currentImageViewFrameBeingShown;
-(int)_cropBehavior;
-(void)_setToolButtonsAndTopButtonsEnabled:(BOOL)arg1 ;
-(void)_updateTitleWithCurrentTool;
-(void)_setTopBarTitle:(id)arg1 ;
-(void)_dismissCropView;
-(void)setCropViewController:(FBCropViewController *)arg1 ;
-(id)_getOrMakePhotoAssetAtPhotoIndex:(unsigned long long)arg1 ;
-(UIEdgeInsets)_pageEdgeInsets;
-(CGRect)_galleryFrameWithLayoutGuide:(id)arg1 ;
-(void)_dismissPhotoOverlayController:(id)arg1 ;
-(void)_applyPhotoOverlayAttachmentsLayer:(id)arg1 photoOverlayAttachmentsInformation:(id)arg2 imageWithPhotoOverlayApplied:(id)arg3 ;
-(void)_dismissCropViewControllerCompletion:(/*^block*/id)arg1 ;
-(void)_dismissDoodlesViewController;
-(void)photoViewTagsVisibleDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)photoViewFaceboxesHiddenDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)photoViewDidToggleLivePhoto:(id)arg1 livePhotoEnabled:(BOOL)arg2 ;
-(void)photoViewDidZoom:(id)arg1 scrollView:(id)arg2 frameBeforeBounce:(CGRect)arg3 ;
-(id)photoAssetPreparerForPhotoAsset:(id)arg1 ;
-(void)didChooseTime;
-(BOOL)isProfilePictureMode;
-(void)didTapCropButton:(id)arg1 ;
-(void)didTapFilterButton:(id)arg1 ;
-(void)didTapTagButton:(id)arg1 ;
-(void)didTapStickerButton:(id)arg1 ;
-(void)didTapDoodleButton:(id)arg1 ;
-(void)didTapTextButton:(id)arg1 ;
-(void)_enableTaggingToolAnimated:(BOOL)arg1 ;
-(CGPoint)_luxNuxFocalPoint;
-(void)viewControllerNeedsNavigationUpdate;
-(BOOL)presentedFromCamera;
-(BOOL)willPresent;
-(void)setFilterBarController:(FBFilterBarController *)arg1 ;
-(FBCropViewController *)cropViewController;
-(unsigned long long)swipeCount;
-(void)setSwipeCount:(unsigned long long)arg1 ;
-(void)didSelectFilter:(id)arg1 withPreview:(id)arg2 ;
-(void)didSelectCPUFilterState:(id)arg1 withPreview:(id)arg2 ;
-(id<FBMediaDataSourceProtocol>)currentDataSource;
-(void)_datasourceDidChangeAssets:(id)arg1 ;
-(void)setCurrentDataSource:(id<FBMediaDataSourceProtocol>)arg1 ;
-(void)updatedMediaAsset:(id)arg1 ;
-(void)composerDoodlesViewControllerDidHitDone:(id)arg1 didHitNavBarDone:(BOOL)arg2 didAddDoodles:(BOOL)arg3 imageWithDoodlesApplied:(id)arg4 ;
-(void)composerDoodlesViewControllerDidHitCancel:(id)arg1 ;
-(void)composerPhotoOverlayAttachmentsViewControllerDidHitDone:(id)arg1 didHitNavBarDone:(BOOL)arg2 didChangePhotoOverlay:(BOOL)arg3 imageWithPhotoOverlayApplied:(id)arg4 ;
-(void)composerPhotoOverlayAttachmentsViewControllerDidHitCancel:(id)arg1 ;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)showAll;
-(CGRect)_topBarFrame;
-(void)setGalleryView:(FBMediaGalleryView *)arg1 ;
-(FBMediaGalleryView *)galleryView;
-(CGRect)_bottomBarFrame;
-(void)setShowAll:(BOOL)arg1 ;
-(BOOL)filterMode;
-(void)setFilterMode:(BOOL)arg1 ;
-(unsigned long long)presentationSource;
-(FBPagingView *)pagingView;
-(FBMediaGalleryBottomBar *)bottomBar;
-(id)topBar;
@end
