/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPhotoViewNodeDelegate.h>
#import <Messenger/FBModalFullscreenControllerDelegate.h>
#import <Messenger/FBModalFullscreenControllerDataSource.h>
#import <Messenger/MNMediaViewerTransitionContextProviding.h>
#import <Messenger/MNMediaViewerViewControllerDelegate.h>
#import <Messenger/MNMediaViewerViewControllerDataSource.h>
#import <Messenger/MNMediaViewerTransitionListener.h>
#import <Messenger/MNThreadSharedPhotosDataSourceDelegate.h>
#import <Messenger/MNThreadPhotosOverlayViewControllerDelegate.h>
#import <Messenger/MNThreadPhotoViewNodeTouchForwardingViewDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/MNThreadSharedPhotoDataSourceConfiguring.h>

@protocol MNPhotoViewImageDownloadControlling, FBProvider, MNThreadPhotoViewNodeControllerDelegate;
@class FBLazyCreator, MNNavigationCoordinator, MNPhotoNodeActionHandler, MNPhotoViewNodeReusePool, FBMobileConfigContextManager, MNThreadPhotosOverlayViewController, MNPhotoOverlayViewModel, UIView, FBOpenableAttachmentNode, MNThreadViewModel, MNMessagesViewThreadConfiguration, NSMutableDictionary, NSMutableSet, MNThreadSharedPhotosDataSource, MNPhotoViewNodeConfiguration, MNThreadPhotoViewNodeTouchForwardingView, MNSharedPhotosConfiguration, FBProvider, NSString;

@interface MNThreadPhotoViewNodeController : NSObject <MNPhotoViewNodeDelegate, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource, MNMediaViewerTransitionContextProviding, MNMediaViewerViewControllerDelegate, MNMediaViewerViewControllerDataSource, MNMediaViewerTransitionListener, MNThreadSharedPhotosDataSourceDelegate, MNThreadPhotosOverlayViewControllerDelegate, MNThreadPhotoViewNodeTouchForwardingViewDelegate, MNThreadViewModelConfigurable, MNThreadSharedPhotoDataSourceConfiguring> {

	FBLazyCreator* _modalFullscreenControllerCreator;
	FBLazyCreator* _openedAttachmentNodeFrameObserverCreator;
	id<MNPhotoViewImageDownloadControlling> _photoViewImageDownloadController;
	MNNavigationCoordinator* _navigationCoordinator;
	MNPhotoNodeActionHandler* _photoActionHandler;
	MNPhotoViewNodeReusePool* _photoViewNodeReusePool;
	FBMobileConfigContextManager* _configManager;
	MNThreadPhotosOverlayViewController* _photoOverlayViewController;
	MNPhotoOverlayViewModel* _photoOverlayViewModel;
	UIView* _touchBlockingUnderlayView;
	FBOpenableAttachmentNode* _openedAttachmentNode;
	MNThreadViewModel* _threadViewModel;
	MNMessagesViewThreadConfiguration* _threadConfiguration;
	NSMutableDictionary* _photoViewNodeByPhotoViewModelKey;
	NSMutableSet* _internalPhotoViewNodes;
	MNThreadSharedPhotosDataSource* _dataSource;
	id<FBProvider> _photoOverlayViewControllerProvider;
	MNPhotoViewNodeConfiguration* _photoViewNodeConfiguration;
	MNThreadPhotoViewNodeTouchForwardingView* _forwardView;
	MNSharedPhotosConfiguration* _sharedPhotosConfiguration;
	FBProvider* _mediaViewerViewControllerProvider;
	BOOL _mediaViewerPresented;
	id<MNThreadPhotoViewNodeControllerDelegate> _delegate;
	long long _modalPresentationState;

}

@property (assign,nonatomic,__weak) id<MNThreadPhotoViewNodeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long modalPresentationState;                                       //@synthesize modalPresentationState=_modalPresentationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)handleIntent:(id)arg1 ;
-(id)modalPresentationStackManager;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(void)_recyclePhotoViewNode:(id)arg1 ;
-(void)attachmentNodeDidUnlift:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2 ;
-(void)attachmentNodeDidOpen:(id)arg1 ;
-(void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2 ;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(void)modalFullscreenController:(id)arg1 willMoveToNode:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didMoveToNode:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didAddNodeToPagingRange:(id)arg2 ;
-(void)modalFullscreenController:(id)arg1 didRemoveNodeFromPagingRange:(id)arg2 ;
-(id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2 ;
-(id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2 ;
-(void)_openedAttachmentNodeFrameDidChange;
-(unsigned long long)_supportedPhotoGesturesForOpeningNode;
-(unsigned long long)_supportedPhotoGesturesForOpenNode;
-(unsigned long long)_supportedPhotoGesturesForClosingNode;
-(void)_prepareNodeToClose:(id)arg1 ;
-(unsigned long long)_supportedPhotoGesturesForClosedNode;
-(void)_prepareNodeToDisplayInFullscreen:(id)arg1 ;
-(BOOL)photoViewNodeShouldPerformDefaultSingleTapActionInOpenedState:(id)arg1 ;
-(BOOL)photoViewNodeShouldOpenInMediaViewer:(id)arg1 ;
-(BOOL)photoViewNodeMediaViewerIsInUse:(id)arg1 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapContextualActionButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapAlbumViewButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didSelectPhotoAtIndexPath:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapBackBarButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 willShowPhotoControls:(BOOL)arg2 withDuration:(double)arg3 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapPreviousButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapNextButton:(id)arg2 ;
-(void)threadPhotosOverlayViewController:(id)arg1 didTapCloseButton:(id)arg2 ;
-(id)photoOverlayInfoViewControllerConfigurationForThreadPhotosOverlayViewController:(id)arg1 ;
-(id)photoViewNodeMask:(id)arg1 ;
-(CGRect)photoViewNodeCloseFrame:(id)arg1 ;
-(id)photoViewNodePresentationView:(id)arg1 ;
-(id)photoViewNodeHostView:(id)arg1 ;
-(void)photoViewNodeWillDisplayImage:(id)arg1 ;
-(void)photoViewNodeDidEndDisplayImage:(id)arg1 ;
-(void)photoViewNodeDidSingleTapInOpenedState:(id)arg1 ;
-(void)photoViewNodeWillOpenInMediaViewer:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)threadPhotoViewNodeTouchForwardingView:(id)arg1 pointInside:(CGPoint)arg2 withEvent:(id)arg3 ;
-(BOOL)mediaViewerViewControllerShouldEnablePhotoEditing:(id)arg1 ;
-(void)mediaViewerViewControllerDidSelectDismiss:(id)arg1 ;
-(id)mediaViewerViewController:(id)arg1 messageForPhotoViewModel:(id)arg2 ;
-(id)mediaViewerViewController:(id)arg1 closeMaskForPhotoViewModel:(id)arg2 ;
-(void)mediaViewerViewController:(id)arg1 didCommitSendingWithAttachment:(id)arg2 ;
-(id)mediaViewerViewControllerThreadName:(id)arg1 ;
-(id)mediaViewerViewController:(id)arg1 photoViewModelBeforePhotoViewModel:(id)arg2 ;
-(id)mediaViewerViewController:(id)arg1 photoViewModelAfterPhotoViewModel:(id)arg2 ;
-(void)threadPhotoDataSource:(id)arg1 updatedPhotoViewModels:(id)arg2 deletedPhotoViewModelKeys:(id)arg3 ;
-(id)transitionContextForPhotoViewModel:(id)arg1 ;
-(void)populatePhotoViewModelFromMessageRows:(id)arg1 ;
-(void)configureWithThreadViewModel:(id)arg1 threadConfiguration:(id)arg2 ;
-(long long)modalPresentationState;
-(void)_setOpenedAttachmentNode:(id)arg1 ;
-(void)grantThreadSharedPhotosDataSourceToConfigurable:(id)arg1 ;
-(void)trackPhotoViewNode:(id)arg1 ;
-(void)untrackPhotoViewNode:(id)arg1 ;
-(void)updatePhotoViewNodeTrackInfo:(id)arg1 ;
-(void)transitionToSize:(CGSize)arg1 ;
-(void)_untrackAndRecycleAllInternalPhotoViewNodesExcept:(id)arg1 ;
-(id)_photoViewNodePresentationViewController:(id)arg1 ;
-(void)_setModalPresentationState:(long long)arg1 ;
-(id)_photoViewNodeForPhotoViewModel:(id)arg1 ;
-(id)newNodeForViewModel:(id)arg1 ;
-(void)_setupPhotoViewNode:(id)arg1 forPhotoViewModel:(id)arg2 ;
-(void)_didCommitSendingWithAttachment:(id)arg1 ;
-(void)mediaViewerTransitionStateDidUpdate:(long long)arg1 ;
-(id)initWithPhotoViewImageDownloadController:(id)arg1 navigationCoordinator:(id)arg2 dataSource:(id)arg3 photoActionHandler:(id)arg4 photoViewNodeReusePool:(id)arg5 photoOverlayViewModel:(id)arg6 photoOverlayViewControllerProvider:(id)arg7 configManager:(id)arg8 photoViewNodeConfiguration:(id)arg9 underlayViewOpacity:(double)arg10 sharedPhotosConfiguration:(id)arg11 mediaViewerViewControllerProvider:(id)arg12 ;
-(void)setDelegate:(id<MNThreadPhotoViewNodeControllerDelegate>)arg1 ;
-(id<MNThreadPhotoViewNodeControllerDelegate>)delegate;
@end

