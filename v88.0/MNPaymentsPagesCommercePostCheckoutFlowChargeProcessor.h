/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPagesCommercePayOverCounterViewControllerDelegate.h>
#import <Messenger/MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate.h>
#import <Messenger/MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate.h>
#import <Messenger/MNInvoiceBankTransferViewControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutRequestHandling.h>

@protocol FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, NSString, FBPaymentsCheckoutFlowCollectedData, MNPaymentsPagesCommerceNetBankingResponseHandler, MNPaymentsPagesCommercePayOverCounterResponseHandler, MNPaymentsPagesCommerceCheckoutResponse, MNPaymentsPagesCommerceCheckoutDataModel, FBPaymentsThreeDomainSecureWebViewHandler;

@interface MNPaymentsPagesCommercePostCheckoutFlowChargeProcessor : NSObject <MNPaymentsPagesCommercePayOverCounterViewControllerDelegate, MNPaymentsPagesCommerceNetBankingResponseHandlerDelegate, MNPaymentsPagesCommercePayOverCounterResponseHandlerDelegate, MNInvoiceBankTransferViewControllerDelegate, FBPaymentsCheckoutRequestHandling> {

	FBUserSession* _session;
	NSString* _paymentFlowId;
	FBPaymentsCheckoutFlowCollectedData* _collectedData;
	id<FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate> _processingDelegate;
	id<FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate> _sendingDelegate;
	MNPaymentsPagesCommerceNetBankingResponseHandler* _netBankingHandler;
	MNPaymentsPagesCommercePayOverCounterResponseHandler* _payOverCounterHandler;
	MNPaymentsPagesCommerceCheckoutResponse* _checkoutResponse;
	MNPaymentsPagesCommerceCheckoutDataModel* _checkoutDataModel;
	FBPaymentsThreeDomainSecureWebViewHandler* _3dsWebViewHandler;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 checkoutDataModel:(id)arg2 ;
-(void)_successfulProcessingWithPaymentId:(id)arg1 extraData:(id)arg2 paymentMethodData:(id)arg3 invoiceId:(id)arg4 loggingService:(id)arg5 ;
-(void)_errorHanlderWithError:(id)arg1 ;
-(void)_handleCreditCardResponseWithExtraData:(id)arg1 ;
-(void)_handleNetBankingResponseWithExtraData:(id)arg1 loggingService:(id)arg2 ;
-(void)_handlePayOverCounterResponseShowInstructionsWithExtraData:(id)arg1 loggingService:(id)arg2 ;
-(void)_handleManualTransferWithInvoiceId:(id)arg1 transferOptionId:(id)arg2 loggingService:(id)arg3 ;
-(void)_announceSuccessToDelegates;
-(void)_createThreeDomainWebViewHandlerIfNeeded;
-(void)payOverCounterViewControllerDidTapDone:(id)arg1 ;
-(void)didTapDoneWithBankTransferViewController:(id)arg1 ;
-(void)didTapCancelWithBankTransferViewController:(id)arg1 ;
-(void)showConfirmationDialogForFirstPaymentWithViewControllerForPresenting:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_handlePayOverCounterResponseWithExtraData:(id)arg1 ;
-(void)netBankingResponseHandlerDidFinish:(id)arg1 ;
-(void)netBankingResponseHandlerDidCancel:(id)arg1 ;
-(void)payOverCounterResponseHandlerDidFinish:(id)arg1 ;
-(void)processPaymentWithPaymentFlowId:(id)arg1 checkoutFlowCollectedData:(id)arg2 checkoutLoggingService:(id)arg3 processingDelegate:(id)arg4 sendingDelegate:(id)arg5 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

