/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBotComposerViewControllerDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNBotComposerLocationPickerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/FBScrollKeyboardControllerListener.h>

@protocol FBProvider, MNBotComposerCoordinatorDelegate;
@class FBUserSession, MNThreadViewModel, NSArray, MNBotComposerViewModel, MNMessageSendNotEligibleAlertController, MNMessageSendService, FBKeyboardObserver, MNBotComposerUserInvalidatorManager, MNBusinessCTAFactory, MNBotComposerLocationPickerCoordinator, MNBotComposerViewController, NSString;

@interface MNBotComposerCoordinator : NSObject <MNBotComposerViewControllerDelegate, FBKeyboardObserverDelegate, MNBotComposerLocationPickerDelegate, FBClassProvidable, MNThreadViewModelConfigurable, FBScrollKeyboardControllerListener> {

	FBUserSession* _session;
	MNThreadViewModel* _threadViewModel;
	NSArray* _quickReplies;
	MNBotComposerViewModel* _composerViewModel;
	MNMessageSendNotEligibleAlertController* _messageSendNotEligibleAlertController;
	MNMessageSendService* _sendService;
	FBKeyboardObserver* _keyboardObserver;
	MNBotComposerUserInvalidatorManager* _userInvalidatorManager;
	MNBusinessCTAFactory* _ctaFactory;
	BOOL _isBeginDragNearTheEnd;
	double _startDraggingPositionY;
	double _quickRepliesProgressBeforeDragging;
	id<FBProvider> _locationPickerCoordinatorProvider;
	MNBotComposerLocationPickerCoordinator* _locationPickerCoordinator;
	unsigned long long _lastSelectedIndex;
	id _currentHandler;
	id<FBProvider> _stickerHandlerProvider;
	id<FBProvider> _rideHandlerProvider;
	id<FBProvider> _paymentHandlerProvider;
	id<FBProvider> _reminderHandlerProvider;
	id<FBProvider> _pollHandlerProvider;
	id<FBProvider> _openAppHandlerProvider;
	BOOL _shouldShowBotComposer;
	id<MNBotComposerCoordinatorDelegate> _delegate;
	MNBotComposerViewController* _botComposerViewController;

}

@property (assign,nonatomic,__weak) id<MNBotComposerCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBotComposer;                                           //@synthesize shouldShowBotComposer=_shouldShowBotComposer - In the implementation block
@property (nonatomic,readonly) MNBotComposerViewController * botComposerViewController;              //@synthesize botComposerViewController=_botComposerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(BOOL)shouldShowBotComposer;
-(MNBotComposerViewController *)botComposerViewController;
-(BOOL)canShowBotComposer;
-(void)showBotComposerWithEvent:(unsigned long long)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 referenceView:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 referenceView:(id)arg2 ;
-(void)didBeginScrollingAway;
-(void)didBeginScrollingIn;
-(void)didFinishScrollingAway:(BOOL)arg1 ;
-(void)didFinishScrollingIn:(BOOL)arg1 ;
-(void)_handleSticker:(unsigned long long)arg1 forThreadKey:(id)arg2 ;
-(void)_handleRideWithProviderName:(id)arg1 destinationAddress:(id)arg2 destinationLocation:(id)arg3 forThreadKey:(id)arg4 ;
-(void)_handlePaymentWithAmountInCents:(id)arg1 currencyCode:(id)arg2 paymentType:(unsigned long long)arg3 forThreadKey:(id)arg4 otherUsers:(id)arg5 themeColor:(id)arg6 ;
-(void)_handleReminderWithDate:(id)arg1 ;
-(void)_handlePollWithOptions:(id)arg1 questionText:(id)arg2 allUsers:(id)arg3 tintColor:(id)arg4 forThreadKey:(id)arg5 ;
-(void)_handleScheduleCallWithDate:(id)arg1 ;
-(void)botComposerLocationPickerCoordinator:(id)arg1 didSendWithAttachmentData:(id)arg2 ;
-(id)initWithBotComposerControllerProvider:(id)arg1 session:(id)arg2 messageSendNotEligibleAlertController:(id)arg3 sendService:(id)arg4 userInvalidator:(id)arg5 ctaFactory:(id)arg6 locationPickerCoordinatorProvider:(id)arg7 rideServiceProviderListPresenterProvider:(id)arg8 quickReplyPaymentHandlerProvider:(id)arg9 eventsReminderActionHandlerProvider:(id)arg10 quickReplyPollHandlerProvider:(id)arg11 quickReplyOpenAppHandlerProvider:(id)arg12 ;
-(void)_updateQuickRepliesOnScrollViewUpdate:(id)arg1 ;
-(void)_logQuickRepliesArePresented;
-(BOOL)_shouldAnimateQuickReply;
-(BOOL)_isQuickRepliesUpdated:(id)arg1 ;
-(void)_updateQuickRepliesOnThreadViewModelChanged;
-(void)_logMenuIconPresentedIfNeededForUser:(id)arg1 ;
-(void)botComposerViewControllerDidTapComposer:(id)arg1 ;
-(void)botComposerViewControllerDidUpdateHeight:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)botComposerViewControllerDidSelectQuickReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)botComposerViewControllerShouldBlockMessageSend:(id)arg1 ;
-(void)botComposerViewControllerShowNotEligibleAlert:(id)arg1 ;
-(void)setDelegate:(id<MNBotComposerCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<MNBotComposerCoordinatorDelegate>)delegate;
@end
