/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsPeerToPeerCardFlowControllerDelegate.h>
#import <Messenger/MNPaymentsActivityDetailsLoaderDelegate.h>

@protocol MNPaymentsActivityDataModel, MNNavigationPluginService, FBPaymentsConnectionStatusProviding, MNPaymentsTransferReceiptExtraInfoViewFactory, MNPaymentsView;
@class NSString, FBMUser, FBMemPeerToPeerPaymentMethod, MNPaymentsPeerToPeerStatusModelForReceipt, FBUserSession, FBPaymentsPeerToPeerFetchController, FBPaymentsPeerToPeerContactsService, MNPaymentsMessengerPaymentCoordinator, FBPaymentsPINController, FBPaymentsPasscodeWorkflowController, FBPaymentsPeerToPeerTransferStatusModelContainer, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPeerToPeerRiskVerificationController, FBPaymentsTouchIDController, FBPaymentsPeerToPeerCardFlowController, MNPaymentsFlowSessionController, MNPaymentsExtensibleFlowMap, FBGraphQLService, MNPaymentsTransferReceiptDataFetcher, MNPaymentsPeerToPeerRequestActionHandler, MNCDNProfileImageDownloader, MNPaymentsActorsHeaderView, MNPaymentsActorsHeaderViewModel, FBPaymentsPeerToPeerTransferReceiptBodyView, FBPaymentsPeerToPeerTransferReceiptBodyViewModel, MNPaymentsTransferReceiptPaymentIdView, MNPaymentsTransferReceiptPaymentIdViewModel, UIView, MNPaymentsTransferReceiptView, UILongPressGestureRecognizer, FBPaymentsPasscodeWorkflowLogger, FBPaymentsCardViewControllerLogger, MNPaymentsDefaultCardManager;

@interface FBPaymentsPeerToPeerTransferReceiptViewController : UIViewController <FBPaymentsNavigationDelegate, FBPaymentsUpdateListener, FBPaymentsPeerToPeerCardFlowControllerDelegate, MNPaymentsActivityDetailsLoaderDelegate> {

	NSString* _currentUserFBID;
	NSString* _transferFBID;
	id<MNPaymentsActivityDataModel> _activityDataModel;
	FBMUser* _sender;
	FBMUser* _receiver;
	FBMemPeerToPeerPaymentMethod* _paymentMethod;
	BOOL _shouldMaskPaymentMethod;
	id _extensionContent;
	MNPaymentsPeerToPeerStatusModelForReceipt* _statusModel;
	FBUserSession* _session;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	MNPaymentsMessengerPaymentCoordinator* _transferCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	FBPaymentsPeerToPeerTransferStatusModelContainer* _transferStatusModelContainer;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPeerToPeerRiskVerificationController* _riskVerificationController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	MNPaymentsFlowSessionController* _flowSessionController;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	id<MNNavigationPluginService> _navigationService;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	FBGraphQLService* _graphQLService;
	id<MNPaymentsTransferReceiptExtraInfoViewFactory> _extraInfoViewFactory;
	MNPaymentsTransferReceiptDataFetcher* _dataFetcher;
	MNPaymentsPeerToPeerRequestActionHandler* _requestActionHandler;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNPaymentsActorsHeaderView* _headerView;
	MNPaymentsActorsHeaderViewModel* _headerViewModel;
	FBPaymentsPeerToPeerTransferReceiptBodyView* _bodyView;
	FBPaymentsPeerToPeerTransferReceiptBodyViewModel* _bodyViewModel;
	MNPaymentsTransferReceiptPaymentIdView* _paymentIdView;
	MNPaymentsTransferReceiptPaymentIdViewModel* _paymentIdViewModel;
	UIView*<MNPaymentsView> _extraInfoView;
	id _extraInfoViewModel;
	MNPaymentsTransferReceiptView* _receiptView;
	UILongPressGestureRecognizer* _paymentIdTextViewLongPressGestureRecognizer;
	FBPaymentsPasscodeWorkflowLogger* _passcodeWorkflowLogger;
	FBPaymentsCardViewControllerLogger* _cardViewLogger;
	MNPaymentsDefaultCardManager* _defaultCardManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)cardFlowController:(id)arg1 didCancelCardFlowWithError:(id)arg2 forAnalyticsUUID:(id)arg3 ;
-(void)cardFlowController:(id)arg1 didAddCard:(id)arg2 forAnalyticsUUID:(id)arg3 ;
-(void)cardFlowController:(id)arg1 didUpdateCard:(id)arg2 ;
-(id)newNavigationController;
-(void)paymentsActivityDetailsLoader:(id)arg1 didFetchActivityDataModel:(id)arg2 ;
-(void)paymentsActivityDetailsLoader:(id)arg1 didFetchSender:(id)arg2 receiver:(id)arg3 ;
-(void)paymentsActivityDetailsLoader:(id)arg1 didFetchPaymentMethod:(id)arg2 ;
-(void)paymentsActivityDetailsLoader:(id)arg1 didFetchActivityExtraDataModel:(id)arg2 ;
-(id)initWithSession:(id)arg1 transferFBID:(id)arg2 styleIdentifier:(id)arg3 transferCoordinator:(id)arg4 navigationCoordinator:(id)arg5 paymentPinController:(id)arg6 fetchController:(id)arg7 contactsService:(id)arg8 navigationService:(id)arg9 connectionStatusProvider:(id)arg10 riskVerificationController:(id)arg11 touchIDController:(id)arg12 transferStatusModelContainer:(id)arg13 cardFlowController:(id)arg14 flowSessionController:(id)arg15 extensibleFlowMap:(id)arg16 graphQLService:(id)arg17 profileImageDownloader:(id)arg18 defaultCardManager:(id)arg19 ;
-(void)_didLongPressPaymentIdTextView:(id)arg1 ;
-(void)_didTapPaymentIdHelpButton:(id)arg1 ;
-(void)_didTapPaymentIdTermButton:(id)arg1 ;
-(void)_didTapReceiptLinkButton:(id)arg1 ;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_performDone:(id)arg1 ;
-(void)_syncViewModelsToView;
-(void)_copyTransferFBID:(id)arg1 ;
-(void)_updateWithPaymentMethod:(id)arg1 ;
-(void)_updateHeaderWithSender:(id)arg1 withReceiver:(id)arg2 ;
-(void)_updateWithActivityDataModel:(id)arg1 ;
-(void)_updateWithExtensionContent:(id)arg1 ;
-(void)_showCreatePINNuxIfNeeded;
-(void)_presentWithHeaderViewModel:(id)arg1 bodyViewModel:(id)arg2 extraInfoViewModel:(id)arg3 paymentIdViewModel:(id)arg4 ;
-(void)_prepareViewsForPayment:(id)arg1 ;
-(void)_fetchTransferStatus;
-(void)_handleConfirmInfoAction;
-(void)_handleGoToSettingsAction;
-(void)_performDeclinePaymentTransferGraphRequest;
-(void)_performCancelRequestAction;
-(void)_handleCancelRequestActionCallbackWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleDeclinePaymentAction;
-(void)_handleCancelRequestAction;
-(void)_postAddingPaymentMethod;
-(void)_updateExtraInfoViewWithShouldMaskPaymentMethod:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_setLoadingStatus:(BOOL)arg1 ;
-(id)viewControllerForPresenting;
@end

