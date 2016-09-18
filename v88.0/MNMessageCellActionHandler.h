/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPhotoViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <Messenger/MNPlatformAppActionHandlerDelegate.h>
#import <Messenger/MNSaveAttachmentListener.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/MNMessageCollectionViewCellDelegate.h>
#import <Messenger/MNAdminMessageCollectionViewCellDelegate.h>
#import <Messenger/MNFoldableAdminMessageCollectionViewCellDelegate.h>
#import <Messenger/MNMessageCellLinkHandling.h>

@protocol FBProvider, MNSaveAttachmentControlling, MNMessageCellActionHandlerDelegate, MNStickerAnimationStrategy;
@class MNIntentHandler, FBMobileConfigContextManager, MNNavigationCoordinator, MNForwardMessageHandler, MNSaveMessageHandler, FBCurrentCountryManager, MNAppMessageAttachmentUtils, FBUserSession, UIAlertController, MNShareMessageHandler, FBMAttachmentURLRequestFactory, MNPlatformAppActionHandler, MNMessageDetectedDataHandlingManager, FBMSendEventLogger, MNThreadSummaryUpdateRunningService, FBLazyCreator, FBMLoggedInUserInfoManager, MNEventsReminderActionHandler, MNSaveMessageOutboundClickCoordinator, MNMessageCellActionHandlerConfiguration, MNShareActivityControllerConfiguration, MNGameListPresenter, UIViewController, LPPhoneNumber, NSString, NSDictionary, NSURL, MNAppMessage, MNThreadViewModel;

@interface MNMessageCellActionHandler : NSObject <MNPhotoViewControllerDelegate, CNContactViewControllerDelegate, MNPlatformAppActionHandlerDelegate, MNSaveAttachmentListener, UIPopoverPresentationControllerDelegate, FBClassProvidable, MNThreadViewModelConfigurable, MNMessageCollectionViewCellDelegate, MNAdminMessageCollectionViewCellDelegate, MNFoldableAdminMessageCollectionViewCellDelegate, MNMessageCellLinkHandling> {

	MNIntentHandler* _intentHandler;
	FBMobileConfigContextManager* _configManager;
	MNNavigationCoordinator* _navigationCoordinator;
	MNForwardMessageHandler* _forwardMessageHandler;
	MNSaveMessageHandler* _saveMessageHandler;
	FBCurrentCountryManager* _countryManager;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	FBUserSession* _session;
	UIAlertController* _presentedAlertController;
	id<FBProvider> _photoViewControllerProvider;
	id<MNSaveAttachmentControlling> _saveAttachmentController;
	MNShareMessageHandler* _shareMessageHandler;
	FBMAttachmentURLRequestFactory* _attachmentURLRequestFactory;
	MNPlatformAppActionHandler* _platformAppActionHandler;
	id<FBProvider> _platformAppActionHandlerProvider;
	MNMessageDetectedDataHandlingManager* _detectedDataHandlingManager;
	FBMSendEventLogger* _sendEventLogger;
	MNThreadSummaryUpdateRunningService* _threadSummaryUpdateService;
	FBLazyCreator* _rideServicePresenter;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNEventsReminderActionHandler* _eventsReminderActionHandler;
	MNSaveMessageOutboundClickCoordinator* _saveMessageOutboundClickCoordinator;
	MNMessageCellActionHandlerConfiguration* _messageCellActionHandlerConfiguration;
	MNShareActivityControllerConfiguration* _activityControllerConfiguration;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	MNGameListPresenter* _gamePresenter;
	id<MNMessageCellActionHandlerDelegate> _delegate;
	UIViewController* _parentViewController;
	id<MNStickerAnimationStrategy> _stickerAnimationStrategy;
	LPPhoneNumber* _selectedPhoneNumber;
	NSString* _selectedAddress;
	NSDictionary* _selectedAddressComponents;
	NSString* _selectedShareHref;
	NSURL* _selectedShareDeepLinkURL;
	MNAppMessage* _selectedDeleteMessage;
	UIViewController* _personViewController;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,retain) LPPhoneNumber * selectedPhoneNumber;                                  //@synthesize selectedPhoneNumber=_selectedPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * selectedAddress;                                             //@synthesize selectedAddress=_selectedAddress - In the implementation block
@property (nonatomic,copy) NSDictionary * selectedAddressComponents;                               //@synthesize selectedAddressComponents=_selectedAddressComponents - In the implementation block
@property (nonatomic,copy) NSString * selectedShareHref;                                           //@synthesize selectedShareHref=_selectedShareHref - In the implementation block
@property (nonatomic,copy) NSURL * selectedShareDeepLinkURL;                                       //@synthesize selectedShareDeepLinkURL=_selectedShareDeepLinkURL - In the implementation block
@property (nonatomic,retain) MNAppMessage * selectedDeleteMessage;                                 //@synthesize selectedDeleteMessage=_selectedDeleteMessage - In the implementation block
@property (nonatomic,retain) UIViewController * personViewController;                              //@synthesize personViewController=_personViewController - In the implementation block
@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                                  //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageCellActionHandlerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                       //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) id<MNStickerAnimationStrategy> stickerAnimationStrategy;              //@synthesize stickerAnimationStrategy=_stickerAnimationStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)messageCell:(id)arg1 didSelectMessage:(id)arg2 ;
-(void)messageCellDidTapAttribution:(id)arg1 ;
-(void)setSelectedPhoneNumber:(LPPhoneNumber *)arg1 ;
-(void)setSelectedAddress:(NSString *)arg1 ;
-(void)setSelectedAddressComponents:(NSDictionary *)arg1 ;
-(void)setSelectedShareHref:(NSString *)arg1 ;
-(void)setSelectedShareDeepLinkURL:(NSURL *)arg1 ;
-(void)setSelectedDeleteMessage:(MNAppMessage *)arg1 ;
-(void)_showAlertController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 ;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)_didSelectAppAction:(id)arg1 withDeepLinkURL:(id)arg2 ;
-(void)_showAlertController:(id)arg1 fromMessageCellView:(id)arg2 ;
-(void)_showOpenActionSheetForShareHref:(id)arg1 withDeepLinkURL:(id)arg2 withAttribution:(id)arg3 fromMessageCell:(id)arg4 ;
-(LPPhoneNumber *)selectedPhoneNumber;
-(void)_didSelectCallAction;
-(void)_didSelectAddPhoneToContactsAction;
-(void)_didSelectCopyPhoneAction;
-(BOOL)_isRideServiceLyftEnabled;
-(BOOL)_isRideServiceUberEnabled;
-(void)_didSelectOpenInMapsAction;
-(void)_didSelectOpenInGoogleMapsAction;
-(void)_didSelectAddAddressToContactsAction;
-(void)_didSelectCopyAddressAction;
-(void)_didSelectRequestRideActionWithProviderName:(id)arg1 ;
-(id)_addressActionSheetItems;
-(void)_performAddressAction:(long long)arg1 ;
-(void)_didSelectInternalToolCommand:(id)arg1 ;
-(void)_handleDetectedDataNoActionResultWithError:(id)arg1 isCanceled:(BOOL)arg2 ;
-(void)_showWaitingOnNetworkAlertView;
-(id)_messageTypeAnalyticsExtrasFromMessage:(id)arg1 ;
-(void)_showDeleteActionSheetForMessage:(id)arg1 messageCell:(id)arg2 ;
-(id)_eventForForwardButton:(unsigned long long)arg1 ;
-(void)_openThreadWithSyncedThreadKey:(id)arg1 ;
-(void)_didSelectPhotoIndex:(unsigned long long)arg1 fromPhotoViewModels:(id)arg2 shouldShowShareButton:(BOOL)arg3 ;
-(void)_forwardPhotoViewModel:(id)arg1 ;
-(void)_presentContactCreationDialogWithPhoneNumber:(id)arg1 addressComponents:(id)arg2 ;
-(void)_didSelectInstall:(id)arg1 withHandler:(id)arg2 ;
-(MNAppMessage *)selectedDeleteMessage;
-(void)_cancelContactCreationPressed;
-(void)setPersonViewController:(UIViewController *)arg1 ;
-(void)_dismissContactCreationDialog;
-(void)_deleteMessage;
-(void)dismissPhotoViewController:(id)arg1 ;
-(void)photoViewController:(id)arg1 didSelectForwardWithPhotoViewModel:(id)arg2 ;
-(void)platformAppActionHandler:(id)arg1 didSelectReplyWithExtensionIdentifier:(id)arg2 ;
-(void)attachmentDidSave:(unsigned long long)arg1 ;
-(void)attachmentSaveDidFailWithError:(id)arg1 attachmentType:(unsigned long long)arg2 ;
-(void)messageCell:(id)arg1 didSelectMenuForWebURL:(id)arg2 sourceRect:(CGRect)arg3 ;
-(BOOL)messageCell:(id)arg1 canSaveMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectSaveMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 willDisplayPhotoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 didEndDisplayPhotoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 didUpdatePhotoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 mayOpenVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 willOpenVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 didOpenVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 mayCloseVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 willCloseVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 didCloseVideoViewNode:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectShareText:(id)arg2 withDeepLinkURL:(id)arg3 withAttribution:(id)arg4 ;
-(void)messageCellView:(id)arg1 didSelectURL:(id)arg2 ;
-(void)messageCellView:(id)arg1 didSelectDate:(id)arg2 forDateString:(id)arg3 ;
-(void)messageCellView:(id)arg1 didSelectPhoneNumber:(id)arg2 ;
-(void)messageCellView:(id)arg1 didSelectAddress:(id)arg2 withComponents:(id)arg3 ;
-(void)messageCell:(id)arg1 didSelectWaitingForNetwork:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 canDeleteMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectDeleteMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectRetryMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectCancelMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectReportMessage:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 canForwardMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didShowContextMenuForMessage:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 shouldShowForwardButtonOfType:(unsigned long long)arg2 message:(id)arg3 ;
-(void)messageCell:(id)arg1 didSelectForwardButtonType:(unsigned long long)arg2 message:(id)arg3 ;
-(BOOL)messageCell:(id)arg1 shouldShowShareButtonOfType:(unsigned long long)arg2 message:(id)arg3 ;
-(void)messageCell:(id)arg1 didSelectShareMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didDisplayError:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 shouldAutoPlayAudio:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 shouldShowSaveButtonForMessage:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectSaveLinkForMessage:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 shouldAnimateSticker:(id)arg2 ;
-(BOOL)messageCell:(id)arg1 canViewPackForSticker:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectViewPackForSticker:(id)arg2 ;
-(void)messageCell:(id)arg1 didSelectFileAttachment:(id)arg2 ;
-(id)modalPresentationStackManagerForMessageCell:(id)arg1 ;
-(void)messageCell:(id)arg1 didResizeContentView:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didSelectPhotoWithMessage:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didSelectGroupAddPhotoButton:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didSelectThemeColor:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didSelectEmoji:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didSelectNickname:(id)arg2 participantId:(id)arg3 ;
-(void)adminMessageCell:(id)arg1 didSelectEditNicknameForParticipantId:(id)arg2 ;
-(void)adminMessageCell:(id)arg1 didToggleBotSuggestionWithId:(id)arg2 isSelected:(BOOL)arg3 ;
-(void)adminMessageCell:(id)arg1 didSelectShowComposerExtensionIdentifier:(id)arg2 ;
-(void)foldableAdminMessageCell:(id)arg1 didUpdateViewState:(long long)arg2 messageKey:(id)arg3 ;
-(BOOL)messageCellView:(id)arg1 canSelectDetectedData:(id)arg2 ;
-(void)messageCellView:(id)arg1 didSelectDetectedData:(id)arg2 ;
-(void)cancelAllActions;
-(void)extensibleMessageView:(id)arg1 didResizeContentView:(id)arg2 ;
-(id<MNStickerAnimationStrategy>)stickerAnimationStrategy;
-(void)setStickerAnimationStrategy:(id<MNStickerAnimationStrategy>)arg1 ;
-(NSString *)selectedAddress;
-(NSDictionary *)selectedAddressComponents;
-(NSString *)selectedShareHref;
-(NSURL *)selectedShareDeepLinkURL;
-(UIViewController *)personViewController;
-(void)setDelegate:(id<MNMessageCellActionHandlerDelegate>)arg1 ;
-(id<MNMessageCellActionHandlerDelegate>)delegate;
-(UIViewController *)parentViewController;
-(void)_didSelectURL:(id)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end

