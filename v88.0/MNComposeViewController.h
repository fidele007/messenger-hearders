/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBMGrowingTextViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBModallyPresentableItem.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/MNComposerActionViewDelegate.h>
#import <Messenger/MNComposerBarDelegate.h>
#import <Messenger/MNComposerControlExtensionProvidingDelegate.h>
#import <Messenger/MNComposerControlExtensionStateListener.h>
#import <Messenger/MNComposerExtensionEditDelegate.h>
#import <Messenger/MNComposerExtensionPresenter.h>
#import <Messenger/MNComposerExtensionProviderListener.h>
#import <Messenger/MNComposerExtensionSendDelegate.h>
#import <Messenger/MNComposerExtensionTrayPresentationStrategyDelegate.h>
#import <Messenger/MNComposerKeyboardExtensionDelegate.h>
#import <Messenger/MNComposerOverflowExtensionDelegate.h>
#import <Messenger/MNComposerPreviewViewControllerDelegate.h>
#import <Messenger/MNComposerSearchBarDelegate.h>
#import <Messenger/MNComposerTabControllerDelegate.h>
#import <Messenger/MNComposerTextParserListening.h>
#import <Messenger/MNHawtLikeNuxControllerDelegate.h>
#import <Messenger/MNLikeComposingListener.h>
#import <Messenger/MNLikeStickerControllerDelegate.h>
#import <Messenger/MNMentionTypeaheadViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBKeyboardPresenting.h>

@protocol MNComposerLayoutStrategy, MNComposerContaining, FBTextInputView, MNComposerExtensionPresentationStrategy, MNComposerExtensionProviding, MNComposerControlExtensionIconActionHandling, MNComposerControlExtensionProviding, MNComposerExtension, MNComposerControlExtension, MNComposeViewControllerDelegate, MNTypingStateListener, MNComposerExtensionOverflowStrategy, MNComposingContext;
@class MNMessageSendExperienceTracker, MNComposerTabController, FBKeyboardResettingTracker, FBKeyboardObserver, UIView, MNComposeView, MNTabBar, MNInputWrapperView, FBPopoverController, MNComposerKeyboardExtension, FBInteractionLagTracker, MNComposeViewControllerListenerAnnouncer, MNLikeStickerController, MNLikeSoundController, MNSoundController, NSDate, FBEmoticonTranslator, FBViewStateDebouncer, MNHawtLikeNuxController, MNComposerExtensionOrderProvider, MNComposerExtensionOrder, MNComposerOverflowExtension, MNComposerControlExtensionBannerView, MNPhotoImageUploadResultCacher, MNMentionTypeaheadViewController, MNComposerPreviewController, MNComposerTextParser, MNComposerTriggersLogger, MNComposerKeyboardFrameDebouncer, MNComposerDynamicExperimentContext, IosMessengerAvoidKeyboardResetExperimentContext, NSString, UIColor, MNComposerLayoutConfiguration, MNComposerLayoutContext, UIViewController;

@interface MNComposeViewController : FBContainerViewController <FBMGrowingTextViewDelegate, FBKeyboardObserverDelegate, FBModallyPresentableItem, FBPopoverControllerDelegate, MNComposerActionViewDelegate, MNComposerBarDelegate, MNComposerControlExtensionProvidingDelegate, MNComposerControlExtensionStateListener, MNComposerExtensionEditDelegate, MNComposerExtensionPresenter, MNComposerExtensionProviderListener, MNComposerExtensionSendDelegate, MNComposerExtensionTrayPresentationStrategyDelegate, MNComposerKeyboardExtensionDelegate, MNComposerOverflowExtensionDelegate, MNComposerPreviewViewControllerDelegate, MNComposerSearchBarDelegate, MNComposerTabControllerDelegate, MNComposerTextParserListening, MNHawtLikeNuxControllerDelegate, MNLikeComposingListener, MNLikeStickerControllerDelegate, MNMentionTypeaheadViewControllerDelegate, FBClassProvidable, FBKeyboardPresenting> {

	MNMessageSendExperienceTracker* _messageSendExperienceTracker;
	MNComposerTabController* _composerTabController;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	FBKeyboardObserver* _keyboardObserver;
	id<MNComposerLayoutStrategy> _layoutStrategy;
	UIView*<MNComposerContaining> _containerView;
	MNComposeView* _composeView;
	MNTabBar* _composerTabBar;
	UIView* _composerControlsView;
	MNInputWrapperView* _inputWrapperView;
	FBPopoverController* _popoverController;
	MNComposerKeyboardExtension* _keyboardExtension;
	FBInteractionLagTracker* _typingLagTracker;
	BOOL _typingLagTrackingEnabled;
	MNComposeViewControllerListenerAnnouncer* _announcer;
	MNLikeStickerController* _likeStickerController;
	MNLikeSoundController* _likeSoundController;
	MNSoundController* _soundController;
	unsigned long long _keyboardUpdateCounter;
	NSDate* _lastKeyTypedTime;
	KeyboardConfiguration _lastKeyboardConfiguration;
	FBEmoticonTranslator* _emoticonTranslator;
	FBViewStateDebouncer* _sendAndLikeButtonVisibilityDebouncer;
	MNHawtLikeNuxController* _hawtLikeNuxController;
	UIView*<FBTextInputView> _currentTextInputView;
	id<MNComposerExtensionPresentationStrategy> _currentPresentationStrategy;
	id<MNComposerExtensionProviding> _defaultExtensionProvider;
	id<MNComposerExtensionProviding> _extensionProvider;
	MNComposerExtensionOrderProvider* _extensionOrderProvider;
	MNComposerExtensionOrder* _extensionOrder;
	MNComposerOverflowExtension* _overflowExtension;
	id<MNComposerControlExtensionIconActionHandling> _composerControlExtensionIconActionHandler;
	id<MNComposerControlExtensionProviding> _defaultComposerControlExtensionProvider;
	id<MNComposerControlExtensionProviding> _composerControlExtensionProvider;
	MNComposerControlExtensionBannerView* _composerControlExtensionBannerView;
	MNPhotoImageUploadResultCacher* _imageUploadResultCacher;
	MNMentionTypeaheadViewController* _mentionTypeaheadViewController;
	MNComposerPreviewController* _previewController;
	MNComposerTextParser* _composerTextParser;
	NSRange _selectedRange;
	MNComposerTriggersLogger* _triggersLogger;
	BOOL _shouldLogTypingWhileInSearchMode;
	MNComposerKeyboardFrameDebouncer* _keyboardFrameDebouncer;
	BOOL _isInContentSearchMode;
	MNComposerDynamicExperimentContext* _composerDynamicExperiment;
	IosMessengerAvoidKeyboardResetExperimentContext* _avoidKeyboardExperiment;
	BOOL _textInputHasExplicitFocus;
	BOOL _shouldResignFirstResponder;
	BOOL _disableComposing;
	BOOL _disableSending;
	BOOL _canSendLike;
	BOOL _transitioningToNewSize;
	BOOL _needsApplyExtension;
	BOOL _readyForKeyboardPresentation;
	id<MNComposerExtension> _currentComposerExtension;
	id<MNComposerControlExtension> _composerControlExtension;
	NSString* _customLikeEmoji;
	UIColor* _themeColor;
	id<MNComposeViewControllerDelegate> _delegate;
	id<MNTypingStateListener> _typingStateListener;
	NSString* _placeholderTextOverride;
	MNComposerLayoutConfiguration* _layoutConfiguration;
	MNComposerLayoutContext* _layoutContext;
	id<MNComposerExtensionOverflowStrategy> _extensionOverflowStrategy;
	unsigned long long _appearanceState;
	id<MNComposingContext> _composingContext;
	CGRect _keyboardFrame;

}

@property (nonatomic,copy) MNComposerLayoutConfiguration * layoutConfiguration;                              //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (assign,nonatomic) BOOL transitioningToNewSize;                                                    //@synthesize transitioningToNewSize=_transitioningToNewSize - In the implementation block
@property (assign,nonatomic) BOOL needsApplyExtension;                                                       //@synthesize needsApplyExtension=_needsApplyExtension - In the implementation block
@property (assign,nonatomic) BOOL readyForKeyboardPresentation;                                              //@synthesize readyForKeyboardPresentation=_readyForKeyboardPresentation - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                           //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,copy) MNComposerLayoutContext * layoutContext;                                          //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,retain) id<MNComposerExtensionOverflowStrategy> extensionOverflowStrategy;              //@synthesize extensionOverflowStrategy=_extensionOverflowStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceState;                                             //@synthesize appearanceState=_appearanceState - In the implementation block
@property (nonatomic,copy) id<MNComposingContext> composingContext;                                          //@synthesize composingContext=_composingContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerExtensionIdentifier; 
@property (nonatomic,readonly) id<MNComposerExtension> currentComposerExtension;                             //@synthesize currentComposerExtension=_currentComposerExtension - In the implementation block
@property (nonatomic,readonly) id<MNComposerControlExtension> composerControlExtension;                      //@synthesize composerControlExtension=_composerControlExtension - In the implementation block
@property (assign,nonatomic) BOOL shouldResignFirstResponder;                                                //@synthesize shouldResignFirstResponder=_shouldResignFirstResponder - In the implementation block
@property (assign,nonatomic) BOOL disableComposing;                                                          //@synthesize disableComposing=_disableComposing - In the implementation block
@property (assign,nonatomic) BOOL disableSending;                                                            //@synthesize disableSending=_disableSending - In the implementation block
@property (assign,nonatomic) BOOL canSendLike;                                                               //@synthesize canSendLike=_canSendLike - In the implementation block
@property (nonatomic,copy) NSString * customLikeEmoji;                                                       //@synthesize customLikeEmoji=_customLikeEmoji - In the implementation block
@property (nonatomic,copy) UIColor * themeColor;                                                             //@synthesize themeColor=_themeColor - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposeViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MNTypingStateListener> typingStateListener;                                  //@synthesize typingStateListener=_typingStateListener - In the implementation block
@property (nonatomic,readonly) BOOL isNuxVisible; 
@property (nonatomic,copy) NSString * placeholderTextOverride;                                               //@synthesize placeholderTextOverride=_placeholderTextOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * modalPresentationView; 
@property (nonatomic,readonly) UIViewController * modalPresentationViewController; 
@property (nonatomic,readonly) UIView*<FBTextInputView> textInputView; 
@property (assign,nonatomic) BOOL showsKeyboard; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setThemeColor:(UIColor *)arg1 ;
-(void)setAppearanceState:(unsigned long long)arg1 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)composerControlExtensionSettingStateDidChange:(id)arg1 ;
-(void)didUpdateAvailableExtensions;
-(id<MNComposerExtension>)currentComposerExtension;
-(id)_availableExtensions;
-(id)composingContextForComposerExtension:(id)arg1 ;
-(void)composerExtensionEligibilityDidChange:(id)arg1 ;
-(void)composerExtension:(id)arg1 didDismissVC:(id)arg2 ;
-(id)composerExtensionDidBeginSending:(id)arg1 ;
-(void)composerExtensionWillLeaveApp:(id)arg1 ;
-(UIColor *)themeColor;
-(id)composerExtension:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7 ;
-(void)composerExtensionDidCancelSending:(id)arg1 ;
-(BOOL)composerExtensionCanSelectContent:(id)arg1 ;
-(void)composerExtensionWillSelectContent:(id)arg1 ;
-(void)composerExtension:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composerExtensionDidSendRequest:(id)arg1 ;
-(void)setTypingStateListener:(id<MNTypingStateListener>)arg1 ;
-(id<MNComposerControlExtension>)composerControlExtension;
-(void)setPlaceholderTextOverride:(NSString *)arg1 ;
-(NSString *)composerExtensionIdentifier;
-(void)setDisableComposing:(BOOL)arg1 ;
-(BOOL)isNuxVisible;
-(BOOL)disableComposing;
-(BOOL)shouldIgnoreKeyboardFrameChange;
-(BOOL)isTextInputViewInitialized;
-(void)updateLayoutWithContext:(id)arg1 ;
-(void)setCustomLikeEmoji:(NSString *)arg1 ;
-(void)updateWithComposingContext:(id)arg1 ;
-(BOOL)isInputViewPresented;
-(void)setComposerExtensionTarget:(id)arg1 ;
-(void)setCanSendLike:(BOOL)arg1 ;
-(void)setUpWithComposingContext:(id)arg1 overrideExtensionProvider:(id)arg2 overrideControlExtensionProvider:(id)arg3 ;
-(BOOL)isPresentingTrayFullScreen;
-(void)didBeginComposingLikeStickerWithType:(unsigned long long)arg1 maxDuration:(double)arg2 emoji:(id)arg3 ;
-(void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1 ;
-(void)didEndComposingLikeStickerWithType:(unsigned long long)arg1 emoji:(id)arg2 sender:(id)arg3 ;
-(void)addLikeComposingListener:(id)arg1 ;
-(void)mn_viewWillLayoutSubviewsDuringAppearing;
-(BOOL)_isSearching;
-(BOOL)_isSearchBarVisible;
-(void)_initComposeContainerView;
-(id)_trimmedText;
-(BOOL)growingTextViewShouldBeginEditing:(id)arg1 ;
-(BOOL)growingTextViewShouldEndEditing:(id)arg1 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(BOOL)growingTextView:(id)arg1 shouldChangeHeight:(double)arg2 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 ;
-(BOOL)growingTextViewShouldReturn:(id)arg1 ;
-(BOOL)growingTextViewShouldHandlePaste:(id)arg1 ;
-(BOOL)growingTextView:(id)arg1 didPaste:(id)arg2 ;
-(void)composerActionViewDidPressSend:(id)arg1 ;
-(void)setDisableSending:(BOOL)arg1 ;
-(BOOL)disableSending;
-(id)tabViewForExtensionWithIdentifier:(id)arg1 includesOverflownTabs:(BOOL)arg2 ;
-(NSString *)customLikeEmoji;
-(void)composerExtension:(id)arg1 willPresentVC:(id)arg2 ;
-(void)composerExtensionNeedsTearDown:(id)arg1 ;
-(void)composerExtensionDidSendAttachmentsWithKeyboardExpected:(id)arg1 ;
-(UIView *)modalPresentationView;
-(UIViewController *)modalPresentationViewController;
-(void)composerExtensionDidCloseContentSearch:(id)arg1 ;
-(void)composerExtension:(id)arg1 didOpenContentSearchWithResultTypes:(id)arg2 appIds:(id)arg3 defaultQuery:(id)arg4 ;
-(void)composerExtension:(id)arg1 didSearchForQuery:(id)arg2 ;
-(void)composerBar:(id)arg1 didTapButtonWithType:(long long)arg2 ;
-(void)composerOverflowExtensionDidDisplayExtensionList:(id)arg1 ;
-(void)composerOverflowExtension:(id)arg1 didSelectExtension:(id)arg2 ;
-(void)composerOverflowExtensionDidBecomeActive:(id)arg1 ;
-(void)presentPopover:(id)arg1 ;
-(void)dismissPopover:(id)arg1 ;
-(BOOL)isPopoverPresented:(id)arg1 ;
-(BOOL)requiresTextEditingForPopover:(id)arg1 ;
-(void)presentPopup:(id)arg1 ;
-(void)dismissPopup:(id)arg1 ;
-(BOOL)isPopupPresented:(id)arg1 ;
-(BOOL)requiresTextEditingForPopup:(id)arg1 ;
-(void)presentTray:(id)arg1 ;
-(void)dismissTray:(id)arg1 ;
-(BOOL)isTrayPresented:(id)arg1 ;
-(BOOL)requiresTextEditingForTray:(id)arg1 ;
-(void)composerExtensionTrayPresentationStrategyWillPresentKeyboard:(id)arg1 withKeyboardPresentationBlock:(/*^block*/id)arg2 ;
-(void)composerExtensionTrayPresentationStrategyWillDismissKeyboard:(id)arg1 withKeyboardDismissalBlock:(/*^block*/id)arg2 withInputViewToModalHostStackBlock:(/*^block*/id)arg3 ;
-(void)composerPreviewViewController:(id)arg1 didUpdateVisibilityWithViewController:(id)arg2 ;
-(void)composerPreviewViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)composerPreviewViewController:(id)arg1 didLoadNumberOfContents:(unsigned long long)arg2 elapsedTime:(double)arg3 ;
-(void)composerPreviewViewController:(id)arg1 didLoadContentAppID:(id)arg2 numberOfBytes:(unsigned long long)arg3 elapsedTime:(double)arg4 ;
-(void)composerPreviewViewController:(id)arg1 didLoadFirstPageWithElapsedTime:(double)arg2 ;
-(void)didParseStickerTriggerQuery:(id)arg1 ;
-(void)didParseHashtagQuery:(id)arg1 ;
-(void)didParseEmptyQuery;
-(void)didParseMentionTriggerQuery:(id)arg1 ;
-(void)composerExtension:(id)arg1 didInsertStringAtCurrentCursor:(id)arg2 ;
-(void)composerExtensionDidDeleteCharacterBeforeCursor:(id)arg1 ;
-(void)composerExtensionDidUpdateTabBarItem:(id)arg1 ;
-(void)composerKeyboardExtensionNeedsReset:(id)arg1 ;
-(void)_updateSendAndLikeButtonVisibility;
-(id)initWithLikeStickerController:(id)arg1 likeSoundController:(id)arg2 composerTabController:(id)arg3 soundController:(id)arg4 keyboardResettingTracker:(id)arg5 hawtLikeNuxControllerProvider:(id)arg6 keyboardExtension:(id)arg7 overflowExtension:(id)arg8 defaultExtensionProvider:(id)arg9 extensionOrderProvider:(id)arg10 defaultControlExtensionProvider:(id)arg11 announcer:(id)arg12 emoticonTranslator:(id)arg13 imageUploadResultCacher:(id)arg14 composerPreviewController:(id)arg15 textParser:(id)arg16 mentionTypeaheadViewController:(id)arg17 messageSendExperienceTracker:(id)arg18 composerDynamicExperiment:(id)arg19 avoidKeyboardResetExperiment:(id)arg20 ;
-(id)_composerExtensionWithIdentifier:(id)arg1 ;
-(void)_updateEligibleExtensionsWithAvailableExtensions:(id)arg1 ;
-(void)_setUpDelegatesForComposerExtensions:(id)arg1 ;
-(void)_updateComposerTabBarItems;
-(void)_updateLayoutConfiguration;
-(void)_updateExtensionOrder:(id)arg1 ;
-(void)_updateEligibleExtensionsIfNeeded;
-(void)_prepareTextViewDelayed;
-(void)_initComposeView;
-(void)_initComposerTabBar;
-(void)_updateComposerControlsView;
-(void)_textViewDidReceiveFocus;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)_startViewObservation;
-(void)_updateComposeViewIfNeeded;
-(void)_setNeedsApplyComposerExtension;
-(void)setReadyForKeyboardPresentation:(BOOL)arg1 ;
-(void)_positionPopoverController;
-(void)_stopViewObservation;
-(void)_updateMaxNumberOfLinesForOrientation:(long long)arg1 ;
-(void)_updateSendAndLikeButton;
-(void)setTransitioningToNewSize:(BOOL)arg1 ;
-(void)_cancelTextViewPreparation;
-(void)_prepareTextView;
-(void)_updateComposeViewAttributedText;
-(void)_updateTextInputContextIdentifier;
-(void)_setExtensionProvider:(id)arg1 ;
-(void)_setControlExtensionProvider:(id)arg1 ;
-(void)_initExtensionOverflowStrategyIfNeeded;
-(void)_loadComposerExtensionOrder;
-(void)setComposingContext:(id<MNComposingContext>)arg1 ;
-(BOOL)_setComposerExtension:(id)arg1 withInitiator:(id)arg2 options:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)_enableSendAndLikeButton;
-(void)setSendAndLikeButtonEnabled:(BOOL)arg1 ;
-(void)_setSearchMode:(long long)arg1 ;
-(void)_setText:(id)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(void)_textDidChangeShouldNotifyDelegate:(BOOL)arg1 ;
-(BOOL)_hasNonEmptyText;
-(void)_updateSendAndLikeButtonTintColor;
-(void)_updateExtensionTintColor;
-(void)_presentInputView:(id)arg1 ;
-(void)setShouldResignFirstResponder:(BOOL)arg1 ;
-(void)_beginUpdatingKeyboard;
-(void)_endUpdatingKeyboard;
-(void)_initInputContainerViewIfNeeded;
-(void)_updateAssistantItemsWithInputView:(id)arg1 ;
-(void)_matchComposerTrayHeightIfNeeded;
-(BOOL)_canMatchTrayHeight;
-(void)_matchComposerTrayHeightWithLastKeyboardConfiguration;
-(void)_setComposerTrayHeight:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_analyticsExtrasWith:(id)arg1 ;
-(void)_setTextInputHasExplicitFocus:(BOOL)arg1 ;
-(void)_forceReapplyComposerExtension;
-(void)_presentComposerControlExtensionBannerView;
-(void)_dismissComposerControlExtensionBannerView;
-(id)_applicableComposerExtensionFor:(id)arg1 userInitiated:(BOOL)arg2 ;
-(BOOL)_setCurrentComposerExtensionAndNotifyDelegateIfChanged:(id)arg1 withInitiator:(id)arg2 options:(id)arg3 ;
-(void)_applyCurrentComposerExtensionIfPossible;
-(BOOL)_canApplyComposerExtension;
-(void)_applyCurrentComposerExtension;
-(void)_logSelectionForComposerExtension:(id)arg1 selectedFromMoreTab:(BOOL)arg2 ;
-(void)_updateComposerTabBarSelection;
-(BOOL)_isComposerExtensionVisibleInTabBar:(id)arg1 ;
-(BOOL)_canPresentComposerExtension:(id)arg1 ;
-(void)_updateComposeViewPlaceholder;
-(void)_updateSearchBarPlaceholder;
-(void)_transitionFromPresentationStrategy:(id)arg1 toPresentationStrategy:(id)arg2 ;
-(void)_updateComposerState;
-(void)_dismissInputView;
-(BOOL)_isKeyboardPresented;
-(BOOL)_isDefaultInputViewPresented;
-(void)_dismissKeyboardInTrayIfNecessary;
-(BOOL)_isTrayPresentedAsCustomInput:(id)arg1 ;
-(BOOL)_isTrayPresentedInModalHostStack:(id)arg1 ;
-(void)_updateComposerBarMode;
-(void)_moveTrayViewFromInputViewToModalHostStack;
-(void)_updateModalPresentationView;
-(BOOL)_shouldAnimateKeyboardDismissal;
-(void)_dismissFullScreenTrayComposerAnimated:(BOOL)arg1 withKeyboardDismissalBlock:(/*^block*/id)arg2 withInputViewToModalHostStackBlock:(/*^block*/id)arg3 ;
-(void)_moveTrayViewFromModalHostStackToInputView;
-(CGRect)_modalPresentatationBounds;
-(void)_moveTrayViewWithBlock:(/*^block*/id)arg1 ;
-(void)_updateSendAndLikeButtonEnabledState;
-(void)_updateComposerSearchBar;
-(BOOL)_isComposeViewVisible;
-(void)_updateSendAndLikeButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateHawtLikeNux;
-(void)_updateComposeViewPreview;
-(NSString *)placeholderTextOverride;
-(id)_getCurrentComposerExtension;
-(void)_updateInputFocusGestureRecognizer;
-(void)_updateTypingLagTracker;
-(void)_updateComposerTabBarTapTarget;
-(void)_updateTextViewCaretVisibility;
-(void)_updateContentSearchMode;
-(void)setLayoutConfiguration:(MNComposerLayoutConfiguration *)arg1 ;
-(void)_applyComposerLayoutConfiguration;
-(void)_updateComposeViewContentEdgeInsets;
-(void)_updateSearchBar;
-(void)_showKeyboardIfOverflowExtensionEmpty;
-(id)_allExtensionsIncludingKeyboardAndOverflow;
-(void)_composerActionViewDidPressSend;
-(void)_performActionForPrimaryExtensionWithType:(long long)arg1 ;
-(BOOL)_performSelectionForComposerExtension:(id)arg1 selectedFromMoreTab:(BOOL)arg2 ;
-(void)_checkWillPresentVCAndResignFirstResponder:(id)arg1 ;
-(void)_setupContentSearchMode;
-(void)_setupSearchBarIfNeeded;
-(void)_tearDownContentSearchMode;
-(BOOL)_textViewShouldBeginEditing;
-(void)_textViewDidBeginEditing;
-(BOOL)_textViewShouldEndEditing;
-(void)_textViewDidEndEditing;
-(id)_didCommitSendingWithText:(id)arg1 attachment:(id)arg2 attribution:(id)arg3 clientTags:(id)arg4 extensibleMessageData:(id)arg5 sendingContextToken:(id)arg6 ;
-(BOOL)_isUpdatingKeyboard;
-(void)_updateCurrentComposerExtension;
-(BOOL)_isKeyboardExtensionActiveWithSystemKeyboard;
-(void)_startTypingLagTrackerIfNeeded;
-(void)_stopTypingLagTrackerIfNeeded;
-(id)typingLagTracker;
-(void)_updateViewsForSearchMode;
-(void)_updateComposerPreviewView;
-(void)_resetKeyboard;
-(void)_resetComposeViewText;
-(void)_sendTextMessage;
-(void)_temporarilyDisableLikeSendUserInteraction;
-(id)_trimmedHashtagText;
-(void)_addChildViewController:(id)arg1 presentPreview:(id)arg2 ;
-(void)_dismissChildViewContrller:(id)arg1 withView:(id)arg2 ;
-(void)_removeChildViewControllerFromParent:(id)arg1 ;
-(void)_didPressSend;
-(void)_hardwareKeyboardDidPressSend;
-(void)_hardwareKeyboardNewline;
-(void)_updateModalPresentationViewSize;
-(void)_updateModalPresentationViewInsetsWithKeyboardFrame:(CGRect)arg1 ;
-(void)_copyMessageTextForContentSearchIfNecessary;
-(void)composerControlExtensionIconDidPress:(id)arg1 ;
-(void)composerControlExtensionStateDidChange:(id)arg1 source:(id)arg2 loggingBlock:(/*^block*/id)arg3 ;
-(BOOL)composerExtensionShouldBeginEditing:(id)arg1 ;
-(void)composerExtensionDidBeginEditing:(id)arg1 ;
-(BOOL)composerExtensionShouldEndEditing:(id)arg1 ;
-(void)composerExtensionDidEndEditing:(id)arg1 ;
-(void)presentKeyboard:(id)arg1 ;
-(void)dismissKeyboard:(id)arg1 ;
-(BOOL)isKeyboardPresented:(id)arg1 ;
-(BOOL)requiresTextEditingForKeyboard:(id)arg1 ;
-(void)composerPreviewViewControllerNeedsResize:(id)arg1 ;
-(void)composerTabController:(id)arg1 didSelectTabAtIndex:(long long)arg2 ;
-(BOOL)composerTabController:(id)arg1 shouldSelectTabAtIndex:(long long)arg2 ;
-(void)composerTabControllerDidSetTabBarItems:(id)arg1 ;
-(void)composerTabControllerDidChangeTabWidth:(id)arg1 ;
-(BOOL)hawtLikeNuxControllerCanPresentNux:(id)arg1 ;
-(void)hawtLikeNuxControllerWillShowNux:(id)arg1 ;
-(void)hawtLikeNuxControllerDidHideNux:(id)arg1 ;
-(BOOL)likeStickerControllerShouldDisableHawtLikes:(id)arg1 ;
-(void)mentionTypeaheadViewController:(id)arg1 didUpdateVisibilityForText:(id)arg2 ;
-(void)mentionTypeaheadViewController:(id)arg1 didUpdateViewContentForText:(id)arg2 ;
-(void)mentionTypeaheadViewController:(id)arg1 didSelectTypeaheadText:(id)arg2 ;
-(id)mentionTypeaheadViewControllerComposingContext:(id)arg1 ;
-(void)_showKeyboard;
-(void)composerRecentsExtensionDidSelectGetApps:(id)arg1 ;
-(void)didParseTrendingQuery;
-(BOOL)shouldResignFirstResponder;
-(BOOL)canSendLike;
-(id<MNTypingStateListener>)typingStateListener;
-(MNComposerLayoutConfiguration *)layoutConfiguration;
-(BOOL)transitioningToNewSize;
-(BOOL)needsApplyExtension;
-(void)setNeedsApplyExtension:(BOOL)arg1 ;
-(BOOL)readyForKeyboardPresentation;
-(id<MNComposerExtensionOverflowStrategy>)extensionOverflowStrategy;
-(void)setExtensionOverflowStrategy:(id<MNComposerExtensionOverflowStrategy>)arg1 ;
-(id<MNComposingContext>)composingContext;
-(void)setDelegate:(id<MNComposeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNComposeViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(id)keyCommands;
-(void)loadView;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView*<FBTextInputView>)textInputView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)hasContent;
-(BOOL)showsKeyboard;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)setShowsKeyboard:(BOOL)arg1 ;
-(MNComposerLayoutContext *)layoutContext;
-(void)setLayoutContext:(MNComposerLayoutContext *)arg1 ;
-(unsigned long long)appearanceState;
-(void)tearDown;
-(CGRect)keyboardFrame;
-(void)addListener:(id)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

