/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMontageOverlayViewDelegate.h>
#import <Messenger/MNComposeViewControllerDelegate.h>
#import <Messenger/MNComposeViewControllerListener.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNMediaPreviewActionSheetPresenterDelegate.h>
#import <Messenger/MNMontageMessageControllerDelegate.h>
#import <Messenger/MNSaveAttachmentListener.h>
#import <Messenger/MNForwardFlowControllerDelegate.h>
#import <Messenger/MNForwardFlowPresenter.h>
#import <Messenger/MNMontageSeenStateDetailsViewControllerDelegate.h>

@protocol FBStickerResourceManager, MNMontageMessageController, FBCancelable, MNMontageViewControllerDelegate;
@class MNMontageViewControllerInjector, FBDateFormatter, FBKeyboardObserver, MNMediaPreviewActionSheetPresenter, MNMontageMuteController, MNComposeViewController, MNMontageOverlayView, UIView, MNTouchBeganGestureRecognizer, MNMontageViewModelThreadKey, NSString, NSNumber, MNMontageViewModel, MNMontageViewMessageCursor, UIPanGestureRecognizer, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIAlertController, MNMontageSeenStateDetailsViewController, MNForwardFlowController, MNMontageViewAnalyticsLogger;

@interface MNMontageViewController : FBContainerViewController <FBClassInjectable, MNMontageOverlayViewDelegate, MNComposeViewControllerDelegate, MNComposeViewControllerListener, FBKeyboardObserverDelegate, UIGestureRecognizerDelegate, MNMediaPreviewActionSheetPresenterDelegate, MNMontageMessageControllerDelegate, MNSaveAttachmentListener, MNForwardFlowControllerDelegate, MNForwardFlowPresenter, MNMontageSeenStateDetailsViewControllerDelegate> {

	MNMontageViewControllerInjector* _injector;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBDateFormatter* _dateFormatter;
	FBKeyboardObserver* _keyboardObserver;
	MNMediaPreviewActionSheetPresenter* _actionSheetPresenter;
	MNMontageMuteController* _montageMuteController;
	id<MNMontageMessageController> _montageMessageController;
	id<MNMontageMessageController> _nextMontageMessageController;
	MNComposeViewController* _composeViewController;
	MNMontageOverlayView* _montageOverlayView;
	UIView* _montageComposerShadowView;
	UIView* _montageMessageViewContainer;
	MNTouchBeganGestureRecognizer* _dismissalRecognizer;
	unsigned long long _appearanceState;
	MNMontageViewModelThreadKey* _montageThreadKey;
	NSString* _messageId;
	NSString* _entryPoint;
	NSNumber* _montageViewModelSubscriptionId;
	MNMontageViewModel* _montageViewModel;
	MNMontageViewMessageCursor* _currentMontageMessageCursor;
	unsigned long long _montageViewModelRequestedTime;
	UIPanGestureRecognizer* _gestureRecognizer;
	UILongPressGestureRecognizer* _pressGestureRecognizer;
	UISwipeGestureRecognizer* _swipeRightGestureRecognizer;
	UISwipeGestureRecognizer* _swipeLeftGestureRecognizer;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanLeftGestureRecognizer;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanRightGestureRecognizer;
	BOOL _shouldDismiss;
	BOOL _animatingToDismiss;
	UIAlertController* _overflowAlertController;
	MNMontageSeenStateDetailsViewController* _seenStateDetailsViewController;
	MNForwardFlowController* _activeForwardFlowController;
	BOOL _initialized;
	MNMontageViewAnalyticsLogger* _analyticsLogger;
	BOOL _isPlaying;
	double _pressStartTime;
	CGPoint _pressStartLocation;
	id<FBCancelable> _currentSendProgressSubscription;
	id<MNMontageViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMontageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNMontageViewModelThreadKey * montageThreadKey;                 //@synthesize montageThreadKey=_montageThreadKey - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapEditWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapCancelWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didTapOpenApp:(id)arg2 ;
-(void)actionSheetPresenter:(id)arg1 didPresentWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)didTransitionToExtension:(id)arg1 ;
-(void)attachmentDidSave:(unsigned long long)arg1 ;
-(void)attachmentSaveDidFailWithError:(id)arg1 attachmentType:(unsigned long long)arg2 ;
-(void)_presentActionSheetWithContent:(id)arg1 delay:(double)arg2 ;
-(void)composeViewControllerNeedResize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composeViewControllerCanPresentExtension:(id)arg1 ;
-(id)composeViewControllerDidBeginSending:(id)arg1 ;
-(id)composeViewController:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7 ;
-(void)composeViewControllerDidCancelSending:(id)arg1 ;
-(BOOL)composeViewControllerShouldResetDuringSend:(id)arg1 ;
-(void)composeViewControllerDidAttemptSendWhenDisabled:(id)arg1 ;
-(BOOL)composeViewControllerCanSelectContent:(id)arg1 ;
-(void)composeViewControllerWillSelectContent:(id)arg1 ;
-(void)composeViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composeViewController:(id)arg1 didPasteContent:(id)arg2 ;
-(void)composeViewControllerNuxVisibilityDidChange:(id)arg1 ;
-(void)composeViewController:(id)arg1 didChangeComposerControlExtensionModeEnabledWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)composeViewController:(id)arg1 didPressControlExtensionIconWithControlExtension:(id)arg2 ;
-(void)composeViewControllerDidChangeText:(id)arg1 ;
-(void)composeViewController:(id)arg1 didChangeSearchMode:(long long)arg2 toSearchMode:(long long)arg3 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(BOOL)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfos:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessage:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
-(MNMontageViewModelThreadKey *)montageThreadKey;
-(void)_updateSeenHeads;
-(void)montageMessageControllerDidFail:(id)arg1 withError:(id)arg2 ;
-(void)montageMessageControllerDidStart:(id)arg1 ;
-(void)montageMessageControllerDidResume:(id)arg1 ;
-(void)montageMessageController:(id)arg1 didManuallyUpdateProgress:(double)arg2 ;
-(void)montageMessageControllerDidManuallyFinish:(id)arg1 ;
-(void)montageMessageControllerDidStall:(id)arg1 ;
-(void)montageOverlayViewDidFocusComposer:(id)arg1 ;
-(void)montageOverlayViewDidTapSeenHeads:(id)arg1 ;
-(void)montageOverlayView:(id)arg1 didTapOverflowMenuButton:(id)arg2 ;
-(void)montageOverlayViewProgressIndicatorDidFinish:(id)arg1 ;
-(void)montageOverlayViewDidTapSendState:(id)arg1 ;
-(void)_didDismissComposeViewController;
-(void)didPress:(id)arg1 ;
-(void)didSwipeRight:(id)arg1 ;
-(void)didSwipeLeft:(id)arg1 ;
-(void)didScreenEdgePanLeft:(id)arg1 ;
-(void)didScreenEdgePanRight:(id)arg1 ;
-(void)didPan:(id)arg1 ;
-(void)_updateGestureRecognizersEnabledState;
-(void)_updateIfVisibleAndMontageViewModelLoaded;
-(void)configureWithMontageViewModel:(id)arg1 ;
-(void)_dismissMontage:(id)arg1 ;
-(void)_displayMontageMessageWithCursor:(id)arg1 exitAction:(id)arg2 ;
-(void)_updateMessageCursors;
-(void)_updateComposeViewController;
-(void)_updateMontageOverlayView;
-(void)_updateMessageTimestamp;
-(void)_updateOverlayScrim;
-(void)_updateProgressIndicator;
-(void)_updateSendState;
-(void)_tearDownComposeViewControllerIfNeeded;
-(void)_resetMontageOverlayView;
-(void)_stopCurrentMessageController;
-(id)_currentMessage;
-(unsigned long long)_requestedTimeForCurrentMessage;
-(void)_finishCleanup;
-(void)tearDownMontageViewModel;
-(void)_pageToNextMontageMessage:(id)arg1 ;
-(void)_presentSeenStateModalForMessage:(id)arg1 ;
-(void)_presentOverflowMenuForMessage:(id)arg1 fromView:(id)arg2 ;
-(id)_userIdToUserMapWithOnlyMontageAuthor;
-(id)_sendMessageToSendTarget:(id)arg1 text:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 ;
-(void)pausePaginationTimer;
-(void)resumePaginationTimer;
-(void)_hideContentLoadingIndicator;
-(void)_markRead;
-(void)_startPaginationTimerWithDuration:(double)arg1 ;
-(void)_showContentLoadingIndicator;
-(void)_updateNextMontageMessageController;
-(void)_downloadCurrentMessage;
-(id)_subsequentMontageMessageCursors;
-(void)_cleanupAndDismissWithCompletion:(/*^block*/id)arg1 canPlayMoreMontages:(BOOL)arg2 exitAction:(id)arg3 ;
-(void)_handleProfileImageLoad:(id)arg1 forUserId:(id)arg2 ;
-(void)_resetSendState;
-(void)_updateSendProgress:(double)arg1 ;
-(void)_updateSeenHeadImage:(id)arg1 forView:(id)arg2 ;
-(void)_updateProfileImage:(id)arg1 forUserId:(id)arg2 ;
-(void)_setupComposeViewControllerIfNeeded;
-(void)_updateComposeViewControllerForViewModel;
-(id)_composingContextForCurrentViewModel;
-(void)_deleteMessage:(id)arg1 ;
-(void)_resetOverflowMenu;
-(BOOL)_messageCanBeSavedToCameraRoll:(id)arg1 ;
-(void)_saveMessageToCameraRoll:(id)arg1 ;
-(BOOL)_messageCanBeForwarded:(id)arg1 ;
-(void)_forwardMessage:(id)arg1 ;
-(void)_resetOverflowMenuWithoutResumingTimer;
-(void)_deleteMessageWithMessageId:(id)arg1 threadKey:(id)arg2 ;
-(void)_deleteMessageWithOfflineThreadingId:(id)arg1 ;
-(void)_deleteMessageWithOfflineThreadingId:(id)arg1 pendingThreadId:(id)arg2 ;
-(void)_animateViewToFrame:(CGRect)arg1 speed:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_attemptPageToPreviousMontageMessage;
-(void)_handleScreenEdgePanGesture:(id)arg1 direction:(BOOL)arg2 ;
-(BOOL)montageSeenStateDetailsViewControllerCanRemoveAudience:(id)arg1 ;
-(void)montageSeenStateDetailsViewController:(id)arg1 didTapToRemoveAudienceWithFbId:(id)arg2 ;
-(void)setMontageMuteController:(id)arg1 ;
-(void)setMontageThreadKey:(id)arg1 messageId:(id)arg2 entryPoint:(id)arg3 ;
-(void)composeViewController:(id)arg1 didPresentPickerForExtension:(id)arg2 ;
-(BOOL)composeViewController:(id)arg1 canPresentPickerForExtension:(id)arg2 ;
-(void)setDelegate:(id<MNMontageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setIsPlaying:(BOOL)arg1 ;
@end
