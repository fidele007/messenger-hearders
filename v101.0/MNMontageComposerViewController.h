/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNMediaFilterHintsListener.h>
#import <Messenger/MNMontageComposerViewDelegate.h>
#import <Messenger/MNMontageMediaPickerViewControllerDelegate.h>
#import <Messenger/MNMontageCameraViewControllerDelegate.h>
#import <Messenger/MNMontageCameraStateListener.h>
#import <Messenger/MNMontageComposerPreviewViewControllerDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMontageBroadcastHeaderViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNMontageArtPickerViewControllerDelegate.h>
#import <Messenger/FBCameraRollWriterDelegate.h>
#import <Messenger/MNMontageComposerOverlayViewControllerDelegate.h>
#import <Messenger/MNMontageComposerHudNavigationListener.h>
#import <Messenger/MNMontageComposerHudPreviewListener.h>
#import <Messenger/MNMontageComposerColorBackgroundViewDelegate.h>
#import <Messenger/MNMontageBroadcastSenderAttachmentGenerationListener.h>

@protocol MNMontageBroadcastSenderAttachmentGenerationListener, MNMontageBroadcastSendHandle, FBProvider, MNConfirmationViewPresenting, MNModalPresentation, MNMediaFilterDescribing, MNMontageComposerViewControllerDelegate, MNMontageComposerHudCoordinating;
@class FBLazyCreator, FBKeyboardObserver, FBUserSession, MNMontageBroadcastSender, MNImageUploadCandidateStore, MNSuggestedContactsRetrieverWithHoistedMontageContact, MNMontageAudienceNUXManager, FBMLoggedInUserInfoManager, FBMobileConfigContextManager, MNMontageComposerAnalyticsLogger, MNMontageComposerConfiguration, FBProvider, FBCameraRollWriter, MNMontageComposerState, MNMontageComposerEditingState, MNMontageCaptureInteractionController, MNMontageComposerDefaultState, MNMontageMediaPickerViewController, NSString;

@interface MNMontageComposerViewController : FBContainerViewController <MNMediaFilterHintsListener, MNMontageComposerViewDelegate, MNMontageMediaPickerViewControllerDelegate, MNMontageCameraViewControllerDelegate, MNMontageCameraStateListener, MNMontageComposerPreviewViewControllerDelegate, MNMultiPeoplePickerViewControllerDelegate, MNMontageBroadcastHeaderViewDelegate, FBKeyboardObserverDelegate, MNMontageArtPickerViewControllerDelegate, FBCameraRollWriterDelegate, MNMontageComposerOverlayViewControllerDelegate, MNMontageComposerHudNavigationListener, MNMontageComposerHudPreviewListener, MNMontageComposerColorBackgroundViewDelegate, MNMontageBroadcastSenderAttachmentGenerationListener> {

	FBLazyCreator* _cameraViewControllerCreator;
	FBLazyCreator* _peoplePickerViewControllerCreator;
	FBLazyCreator* _mediaPickerViewControllerCreator;
	FBLazyCreator* _overlayViewControllerCreator;
	FBLazyCreator* _previewViewControllerCreator;
	FBLazyCreator* _artPickerViewControllerCreator;
	FBLazyCreator* _colorBackgroundViewCreator;
	FBLazyCreator* _broadcastHeaderViewCreator;
	FBKeyboardObserver* _keyboardObserver;
	FBUserSession* _userSession;
	MNMontageBroadcastSender* _montageBroadcastSender;
	id<MNMontageBroadcastSenderAttachmentGenerationListener> _mainThreadAttachmentGenerationListener;
	id<MNMontageBroadcastSendHandle> _montageSendHandle;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	MNSuggestedContactsRetrieverWithHoistedMontageContact* _contactsRetriever;
	id<FBProvider> _montageAudienceNUXManagerProvider;
	MNMontageAudienceNUXManager* _montageAudienceNUXManager;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMobileConfigContextManager* _configManager;
	MNMontageComposerAnalyticsLogger* _analyticsLogger;
	id<MNConfirmationViewPresenting> _confirmationViewPresenter;
	MNMontageComposerConfiguration* _composerConfiguration;
	FBProvider* _contentUploadConfigurationProvider;
	id<FBProvider> _montageAudienceSettingsViewControllerProvider;
	id<MNModalPresentation> _modalPresenter;
	FBCameraRollWriter* _cameraRollWriter;
	BOOL _didLayoutSubviews;
	MNMontageComposerState* _state;
	MNMontageComposerEditingState* _editingState;
	BOOL _isCameraAuthorized;
	BOOL _isCameraReadyToRecord;
	MNMontageCaptureInteractionController* _defaultCaptureInteractionController;
	MNMontageComposerDefaultState* _composerDefaultState;
	id<MNMediaFilterDescribing> _currentMediaFilterDescriptor;
	id<MNMediaFilterDescribing> _currentMediaFilterDescriptorForPreviewContent;
	id<MNMontageComposerViewControllerDelegate> _delegate;
	long long _visibility;
	long long _entryPoint;
	id<MNMontageComposerHudCoordinating> _hudCoordinator;

}

@property (assign,nonatomic,__weak) id<MNMontageComposerViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long visibility;                                                          //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) long long entryPoint;                                                          //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) BOOL canBeDismissedWithGesture; 
@property (nonatomic,readonly) BOOL isCameraAuthorized; 
@property (nonatomic,readonly) BOOL isReadyToRecord; 
@property (nonatomic,readonly) id<MNMontageComposerHudCoordinating> hudCoordinator;                         //@synthesize hudCoordinator=_hudCoordinator - In the implementation block
@property (nonatomic,readonly) id attachmentGenerator; 
@property (nonatomic,readonly) MNMontageMediaPickerViewController * mediaPickerViewController; 
@property (nonatomic,copy,readonly) NSString * mediaSendSourcePrefix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setEntryPoint:(long long)arg1 ;
-(void)_addChildViewController:(id)arg1 viewInsertionBlock:(/*^block*/id)arg2 ;
-(void)_removeChildViewController:(id)arg1 viewRemovalBlock:(/*^block*/id)arg2 ;
-(id)composerView;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didTapSecondaryActionButtonForContact:(id)arg2 ;
-(void)showArtPickerFocusedOnSection:(id)arg1 withCompositionConfiguration:(id)arg2 ;
-(BOOL)canBeDismissedWithGesture;
-(BOOL)isReadyToRecord;
-(void)setCaptureInteractionControllerOverride:(id)arg1 ;
-(id)initWithCameraViewControllerProvider:(id)arg1 mediaPickerViewControllerProvider:(id)arg2 broadcastViewControllerProvider:(id)arg3 artPickerViewControllerProvider:(id)arg4 montageAudienceSettingsViewControllerProvider:(id)arg5 composerConfigurationProvider:(id)arg6 contentUploadConfigurationProvider:(id)arg7 contactsRetriever:(id)arg8 userSession:(id)arg9 montageBroadcastSender:(id)arg10 imageUploadCandidateStore:(id)arg11 montageAudienceNUXManagerProvider:(id)arg12 loggedInUserInfoManager:(id)arg13 configManager:(id)arg14 confirmationViewPresenter:(id)arg15 modalPresenter:(id)arg16 hudCoordinatorProvider:(id)arg17 emoticonTranslator:(id)arg18 ;
-(void)montageBroadcastSenderAttachmentGenerationDidBegin:(id)arg1 ;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didGeneratePreviewImage:(id)arg2 ;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didGenerateOutgoingAttachment:(id)arg2 ;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 didFailWithError:(id)arg2 ;
-(void)montageBroadcastSenderAttachmentGenerationDidCancel:(id)arg1 ;
-(void)montageBroadcastSenderAttachmentGeneration:(id)arg1 willSendToMontage:(BOOL)arg2 ;
-(void)setComposerDefaultStateOverride:(id)arg1 ;
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)didSetCameraState:(id)arg1 ;
-(/*^block*/id)_hudCreator;
-(id)attachmentGenerator;
-(id<MNMontageComposerHudCoordinating>)hudCoordinator;
-(void)setComposedContent_DO_NOT_USE:(id)arg1 ;
-(void)montageComposerHudDidTapBackgroundColor;
-(void)montageComposerHudDidTapSave;
-(void)montageComposerHudDidTapMute;
-(MNMontageMediaPickerViewController *)mediaPickerViewController;
-(BOOL)logSendEventWithCompositionSessionIdIfNecessary:(id)arg1 ;
-(NSString *)mediaSendSourcePrefix;
-(void)montageMediaPickerViewController:(id)arg1 didSelectImage:(id)arg2 withIdentifier:(id)arg3 creationDate:(id)arg4 ;
-(void)montageMediaPickerViewController:(id)arg1 didSelectVideo:(id)arg2 thumbnail:(id)arg3 withIdentifier:(id)arg4 ;
-(void)montageMediaPickerViewControllerDidChangeSelectionStyle:(id)arg1 ;
-(void)montageCameraViewController:(id)arg1 didCaptureImage:(id)arg2 ;
-(void)montageCameraViewController:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 size:(CGSize)arg4 ;
-(void)montageCameraViewControllerDidBecomeReady:(id)arg1 ;
-(CGRect)montageComposerViewRectForPreviewInBroadcastView:(id)arg1 ;
-(CGRect)montageComposerViewRectForSourceContent:(id)arg1 ;
-(id)_createCameraViewControllerFromProvider:(id)arg1 ;
-(BOOL)_isMediaPickerEnabled;
-(BOOL)_shouldEnableScrolling;
-(void)_setDefaultState;
-(void)_updateComposerViewCameraOverlayOption;
-(long long)_currentCreationState;
-(void)_didComposeContent:(id)arg1 ;
-(void)_updateCameraViewController;
-(/*^block*/id)_attachmentGenerator;
-(BOOL)_isArtPickerEnabled;
-(void)setEditingState:(id)arg1 ;
-(id)_analyticExtrasWithCompositionSessionId:(id)arg1 ;
-(void)_animateToDefaultStateIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateToDefaultStateFromCreationStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_transitionBetweenPickerAndPreviewFrom:(double)arg1 to:(double)arg2 finalState:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_resetContent;
-(void)_resetPeoplePicker;
-(void)_resetContactsRetriever;
-(void)_resetMediaPicker;
-(void)_resetArtPickerWithClearingContent:(BOOL)arg1 ;
-(void)_resetEditingState;
-(void)_resetPreviewContent;
-(void)_updatePreviewContent:(id)arg1 ;
-(void)_updateContentAspectRatio;
-(void)_updateContentCreationDate:(id)arg1 ;
-(BOOL)_shouldPreselectMontageContact;
-(void)_transitionBetweenPreviewAndBroadcastFrom:(double)arg1 to:(double)arg2 finalState:(id)arg3 ;
-(void)_dismissArtPickerIfItIsShowing;
-(void)_updateHudCoordinatorEditingStateOnMainThread;
-(void)_updateHudCoordinatorEditingState;
-(void)_updateVideoRecordingTooltipEnabledState;
-(void)_updateViewControllersVisibility;
-(void)_updateViewControllersState;
-(void)_updateBroadcastHeaderViewVisibility;
-(void)_updateViewControllersWithOptions:(long long)arg1 ;
-(void)_updateViewControllerCreator:(id)arg1 viewKeyPath:(id)arg2 toVisible:(BOOL)arg3 ;
-(void)_updateHudWithController:(id)arg1 viewKeyPath:(id)arg2 toVisible:(BOOL)arg3 ;
-(void)_updateViewCreator:(id)arg1 viewKeyPath:(id)arg2 toVisible:(BOOL)arg3 ;
-(void)_updateArtPickerCameraFiltersEligibilityIfNecessary;
-(BOOL)isCameraAuthorized;
-(void)_updateHudCoordinatorOverlayContent:(BOOL)arg1 ;
-(void)_beginBroadcastToContacts:(id)arg1 ;
-(void)_dismissMontageAudienceSettings;
-(id)_extraClientTags;
-(void)_didDismissUserInitiated:(BOOL)arg1 withContentPostedToContacts:(id)arg2 ;
-(void)_transitionBackFromPreview;
-(id)_activeHudControllerWithEditControls;
-(void)_showSaveConfirmation;
-(void)_showSaveErrorDialog:(unsigned long long)arg1 ;
-(id)_allHudControllerWithEditControls;
-(void)_unselectCurrentFilterWithAnnouncer:(id)arg1 ;
-(void)_didSelectBackInBroadcast;
-(void)_addTextIfNeeded;
-(void)_showAttachmentGenerationErrorAlert;
-(id)composerViewIfViewLoaded;
-(void)mediaFilterDescriptor:(id)arg1 needsFaceDetectionHint:(BOOL)arg2 ;
-(void)montageComposerPreviewViewControllerDidTapEmptySpace:(id)arg1 ;
-(id)montageComposerPreviewViewControllerHintText:(id)arg1 ;
-(void)montageBroadcastHeaderViewDidTap:(id)arg1 ;
-(void)montageBroadcastHeaderViewDidSelectBack:(id)arg1 ;
-(void)montageBroadcastHeaderViewDidSelectSearch:(id)arg1 ;
-(void)montageArtPickerViewController:(id)arg1 didSelectStickerItem:(id)arg2 ;
-(void)montageArtPickerViewController:(id)arg1 didSelectComposition:(id)arg2 ;
-(void)montageArtPickerViewController:(id)arg1 didSelectFilterDescriptor:(id)arg2 ;
-(void)montageArtPickerViewController:(id)arg1 didUnselectCompositionWithId:(id)arg2 ;
-(void)montageArtPickerViewController:(id)arg1 didUnselectFilterDescriptorWithId:(id)arg2 ;
-(void)montageArtPickerViewControllerDidDismiss:(id)arg1 ;
-(double)montageArtPickerViewControllerBottomPaddingForCollapsedState;
-(double)montageArtPickerViewControllerTopPaddingForArtPickerContent;
-(id)mediaFilterAssetManagerProviderForMontageArtPickerViewController:(id)arg1 ;
-(void)cameraRollWriterDidSaveImage:(id)arg1 ;
-(void)cameraRollWriterDidSaveImageData:(id)arg1 ;
-(void)cameraRollWriterDidSaveVideo:(id)arg1 ;
-(void)cameraRollWriter:(id)arg1 didFailToWriteImageWithError:(id)arg2 ;
-(void)cameraRollWriter:(id)arg1 didFailToWriteImageDataWithError:(id)arg2 ;
-(void)cameraRollWriter:(id)arg1 didFailToWriteVideoWithError:(id)arg2 ;
-(void)montageComposerOverlayViewController:(id)arg1 didSetEditingState:(id)arg2 ;
-(void)montageComposerOverlayViewControllerDidDismissArtPicker:(id)arg1 ;
-(BOOL)montageComposerOverlayViewController:(id)arg1 contentDoesIntersectWithDeleteButton:(CGRect)arg2 ;
-(void)montageComposerOverlayViewController:(id)arg1 hasContent:(BOOL)arg2 ;
-(void)montageComposerOverlayViewController:(id)arg1 didEndEditingText:(id)arg2 isPromptText:(BOOL)arg3 ;
-(void)montageComposerColorBackgroundViewDidTapEmptySpace:(id)arg1 ;
-(void)setDelegate:(id<MNMontageComposerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageComposerViewControllerDelegate>)delegate;
-(void)setState:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(void)reset;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateState;
-(void)dismiss;
-(void)setVisibility:(long long)arg1 ;
-(long long)entryPoint;
-(long long)visibility;
@end
