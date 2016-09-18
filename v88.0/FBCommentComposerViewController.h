/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCommentComposerBannerDelegate.h>
#import <Messenger/FBCommentComposerKeyboardShortcutsControllerDelegate.h>
#import <Messenger/FBCommentComposerViewDelegate.h>
#import <Messenger/FBGrowingComposerViewDelegate.h>
#import <Messenger/FBGrowingComposerViewListener.h>
#import <Messenger/FBCommentComposerMentionControllerDelegate.h>
#import <Messenger/FBCommentComposerStickerControllerDelegate.h>
#import <Messenger/FBMultiMediaAttachmentsViewDelegate.h>
#import <Messenger/FBCommentsModelControllerListener.h>
#import <Messenger/FBFloatingViewManagerLayoutProvider.h>
#import <Messenger/FBCommentComposerMediaControllerDelegate.h>
#import <Messenger/FBComponentScrollEventListener.h>

@protocol FBFeedbackTargetProtocol, FBAvatarProtocol, FBCommentComposerBannerProviding, NSObject, FBCommentComposerViewControllerDelegate;
@class FBUserSession, FBMemFeedback, FBCommentsModelController, FBCommentComposerAnalyticsInfo, FBConsistentLookasideCacheObservationHandle, FBMemModelObject, NSSet, FBCommentComposerContainerView, FBCommentComposerPrivateCommentController, FBCommentComposerMentionController, FBCommentComposerHashtagController, FBCommentComposerMediaController, FBCommentComposerStickerController, FBCommentComposerKeyboardShortcutsController, FBFeedbackAnalytics, NSString, FBTypingNotificationManager, UIColor, FBNuxController, FBFloatingViewManager, FBTimer, FBCommentComposerReplyBannerView, FBMemTextWithEntities;

@interface FBCommentComposerViewController : UIViewController <FBCommentComposerBannerDelegate, FBCommentComposerKeyboardShortcutsControllerDelegate, FBCommentComposerViewDelegate, FBGrowingComposerViewDelegate, FBGrowingComposerViewListener, FBCommentComposerMentionControllerDelegate, FBCommentComposerStickerControllerDelegate, FBMultiMediaAttachmentsViewDelegate, FBCommentsModelControllerListener, FBFloatingViewManagerLayoutProvider, FBCommentComposerMediaControllerDelegate, FBComponentScrollEventListener> {

	FBUserSession* _session;
	id<FBFeedbackTargetProtocol> _feedbackTarget;
	FBMemFeedback* _feedback;
	FBCommentsModelController* _commentsController;
	FBCommentComposerAnalyticsInfo* _analyticsInfo;
	FBConsistentLookasideCacheObservationHandle* _clcObservationHandle;
	unsigned long long _theme;
	FBMemModelObject*<FBAvatarProtocol> _author;
	NSSet* _mainThreadCommenters;
	FBCommentComposerContainerView* _composerContainerView;
	id<FBCommentComposerBannerProviding> _bannerControllerProvider;
	id<NSObject> _bannerController;
	FBCommentComposerPrivateCommentController* _privateCommentController;
	FBCommentComposerMentionController* _mentionController;
	FBCommentComposerHashtagController* _hashtagController;
	FBCommentComposerMediaController* _mediaController;
	FBCommentComposerStickerController* _stickerController;
	BOOL _stickerSearchEnabled;
	FBCommentComposerKeyboardShortcutsController* _keybordShortcutsController;
	FBFeedbackAnalytics* _feedbackAnalytics;
	NSString* _composerTapSource;
	FBTypingNotificationManager* _typingNotificationManager;
	BOOL _shouldStopSendingTypingActive;
	BOOL _shouldDockComposerAfterLastComment;
	UIColor* _mentionsBackgroundColor;
	BOOL _shouldShowActorNameInPlaceholder;
	BOOL _shouldComposerClipToBounds;
	BOOL _useFloatingViewMentionsPicker;
	FBNuxController* _videoCommentNuxController;
	FBFloatingViewManager* _floatingViewManager;
	BOOL saveDraftWhileTyping;
	FBTimer* _saveWhileTypingTimer;
	NSString* _chosenStickerFBID;
	BOOL _userDidTypeComment;
	FBCommentComposerReplyBannerView* _replyBannerView;
	BOOL _hasRestoredCommentFromDraft;
	BOOL _activatesCommentComposerOnViewWillAppear;
	BOOL _composerHidden;
	id<FBCommentComposerViewControllerDelegate> _delegate;
	FBMemTextWithEntities* _commentComposerTextOnViewWillAppear;
	unsigned long long _unpublishedCommentCharacterCount;

}

@property (nonatomic,retain) id<FBFeedbackTargetProtocol> feedbackTarget;                              //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentComposerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBCommentsModelController * commentsController;                           //@synthesize commentsController=_commentsController - In the implementation block
@property (nonatomic,retain) FBMemTextWithEntities * commentComposerTextOnViewWillAppear;              //@synthesize commentComposerTextOnViewWillAppear=_commentComposerTextOnViewWillAppear - In the implementation block
@property (assign,nonatomic) BOOL activatesCommentComposerOnViewWillAppear;                            //@synthesize activatesCommentComposerOnViewWillAppear=_activatesCommentComposerOnViewWillAppear - In the implementation block
@property (assign,getter=isComposerHidden,nonatomic) BOOL composerHidden;                              //@synthesize composerHidden=_composerHidden - In the implementation block
@property (assign,nonatomic) unsigned long long unpublishedCommentCharacterCount;                      //@synthesize unpublishedCommentCharacterCount=_unpublishedCommentCharacterCount - In the implementation block
@property (nonatomic,retain) FBCommentComposerMediaController * mediaController;                       //@synthesize mediaController=_mediaController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationCoordinator;
-(void)multiPhotoAttachment:(id)arg1 removePhotoTapAtIndex:(unsigned long long)arg2 ;
-(id)_trackingCodes;
-(void)modelController:(id)arg1 didPostComment:(id)arg2 ;
-(void)didPressEnterKeyWithComposerView:(id)arg1 ;
-(void)showStickerPack:(id)arg1 ;
-(void)commentComposerStickerControllerWillActivateComposer:(id)arg1 ;
-(void)commentComposerStickerControllerDidDismissComposer:(id)arg1 ;
-(void)_observeFeedback;
-(void)_restoreUnpublishedCommentText;
-(void)activateCommentComposer;
-(void)_cacheUnpublishedCommentText;
-(void)_stopSaveWhileTypingTimer;
-(id)_composerTextWithEntities;
-(void)_resetComposerViewIncludingText:(BOOL)arg1 clearCommentDraft:(BOOL)arg2 dismissComposer:(BOOL)arg3 ;
-(void)_setComposerText:(id)arg1 ;
-(void)_hideReplyBanner;
-(void)_updateWithFeedback:(id)arg1 ;
-(id)privateCommentController;
-(void)_updateComposerPlaceholderAndButton;
-(void)_updateComposerContainerViewHiddenAnimated:(BOOL)arg1 ;
-(void)setComposerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isComposerHidden;
-(void)dismissFloatingMentionsPicker;
-(void)_applyUnpublishedCommentTextFromFeedback:(id)arg1 ;
-(void)_didTapBanner:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapDismissBanner:(id)arg1 forComment:(id)arg2 ;
-(unsigned long long)unpublishedCommentCharacterCount;
-(BOOL)_hasContentToSubmit;
-(id)_publishAnalyticsPayloadWithComposition:(id)arg1 ;
-(id)stickerController;
-(void)attachStickerToCommentComposerView:(id)arg1 withStickerWithFBID:(id)arg2 ;
-(void)publishStickerCommentWithFBID:(id)arg1 ;
-(void)_setupTooltipNuxesIfNeeded;
-(void)_startSaveWhileTypingTimer;
-(void)_closeTooltipNuxes;
-(id)_registerTooltip:(id)arg1 withNuxID:(id)arg2 triggerID:(id)arg3 ;
-(void)resetComposerViewIncludingText;
-(id)mentionDecoratorListenerAnnouncer;
-(id)commentComposerAttributedText;
-(id)growingComposerViewListenerAnnouncer;
-(BOOL)growingComposerViewShouldEnableSendButton:(id)arg1 ;
-(BOOL)growingComposerView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)growingComposerViewShouldBeginEditing:(id)arg1 ;
-(void)growingComposerViewDidChange:(id)arg1 ;
-(void)growingComposerViewDidBeginEditing:(id)arg1 ;
-(void)growingComposerViewDidEndEditing:(id)arg1 ;
-(void)commentComposerMentionControllerDidHideMentionPicker:(id)arg1 ;
-(void)commentComposerMentionControllerDidShowMentionPicker:(id)arg1 ;
-(FBFloatingViewManagerRelativeRect)floatingViewManagerReferenceRect:(id)arg1 ;
-(FBFloatingViewManagerRelativeRect)floatingViewManagerInitialRect:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 analyticsInfo:(id)arg3 author:(id)arg4 feedbackTarget:(id)arg5 commentsModelController:(id)arg6 mentionController:(id)arg7 hashtagController:(id)arg8 stickerSearchEnabled:(BOOL)arg9 feedbackAnalytics:(id)arg10 shouldShowActorNameInPlaceholder:(BOOL)arg11 mentionsBackgroundColor:(id)arg12 bannerControllerProvider:(id)arg13 mainThreadCommenters:(id)arg14 ;
-(void)setCommentsController:(FBCommentsModelController *)arg1 ;
-(void)setFeedbackTarget:(id)arg1 dismissComposer:(BOOL)arg2 preserveComposerText:(BOOL)arg3 ;
-(void)setComposerHidden:(BOOL)arg1 ;
-(BOOL)isComposerActive;
-(void)showReplyBannerForComment:(id)arg1 ;
-(BOOL)isReplyBannerActive;
-(FBCommentsModelController *)commentsController;
-(FBMemTextWithEntities *)commentComposerTextOnViewWillAppear;
-(void)setCommentComposerTextOnViewWillAppear:(FBMemTextWithEntities *)arg1 ;
-(BOOL)activatesCommentComposerOnViewWillAppear;
-(void)setActivatesCommentComposerOnViewWillAppear:(BOOL)arg1 ;
-(void)setUnpublishedCommentCharacterCount:(unsigned long long)arg1 ;
-(FBCommentComposerMediaController *)mediaController;
-(void)setMediaController:(FBCommentComposerMediaController *)arg1 ;
-(void)setFeedbackTarget:(id<FBFeedbackTargetProtocol>)arg1 ;
-(id<FBFeedbackTargetProtocol>)feedbackTarget;
-(void)commentComposerMediaControllerWillPresentMediaPicker:(id)arg1 ;
-(void)dismissCommentComposer;
-(void)commentComposerView:(id)arg1 didPasteImage:(id)arg2 ;
-(void)commentComposerViewDidDismissCommentComposer:(id)arg1 ;
-(void)commentComposerView:(id)arg1 presentFullScreenWithStickerTray:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)commentComposerView:(id)arg1 dismissFullScreenStickerTrayWithCompletion:(/*^block*/id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(void)commentComposerView:(id)arg1 didSelectStickerWithFBID:(id)arg2 ;
-(void)commentComposerView:(id)arg1 didSelectStickerStoreWithFBID:(unsigned long long)arg2 fromView:(id)arg3 ;
-(void)commentComposerViewNeedsResize:(id)arg1 ;
-(void)commentComposerViewDidTapAttachPhotoButton:(id)arg1 ;
-(void)commentComposerViewDidTapStickerComposerButton:(id)arg1 ;
-(void)commentComposerViewDidTapPrivateCommentComposerButton:(id)arg1 ;
-(void)commentComposerViewDidTapSendButton:(id)arg1 ;
-(BOOL)commentComposerCanSelectMentions:(id)arg1 ;
-(void)commentComposerView:(id)arg1 didPressKey:(long long)arg2 ;
-(void)setDelegate:(id<FBCommentComposerViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(id<FBCommentComposerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
