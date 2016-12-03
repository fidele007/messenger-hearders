/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInvoiceBankTransferViewControllerDelegate.h>
#import <Messenger/MNInvoiceSummaryViewControllerrDelegate.h>
#import <Messenger/FBPaymentsLoggingServiceDataSource.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNTransactionInvoiceXMAHandling.h>

@class FBUserSession, MNBusinessPlugin, FBWebViewController, NSString, FBPaymentsCheckoutLoggingService;

@interface MNTransactionInvoiceXMAHandler : NSObject <MNInvoiceBankTransferViewControllerDelegate, MNInvoiceSummaryViewControllerrDelegate, FBPaymentsLoggingServiceDataSource, FBViewerContextClassProvidable, MNTransactionInvoiceXMAHandling> {

	FBUserSession* _session;
	MNBusinessPlugin* _businessPlugin;
	FBWebViewController* _webViewController;
	NSString* _invoiceID;
	FBPaymentsCheckoutLoggingService* _checkoutLoggingService;
	NSString* _paymentSessionId;
	NSString* _viewContextId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didTapTransactionInvoiceXMAWithInvoiceID:(id)arg1 pageID:(id)arg2 transactionStatus:(long long)arg3 instructionURL:(id)arg4 selectedPaymentOption:(id)arg5 invoiceNotes:(id)arg6 ;
-(void)didTapDoneWithBankTransferViewController:(id)arg1 ;
-(void)didTapCancelWithBankTransferViewController:(id)arg1 ;
-(void)invoiceSummaryViewControllerDidTapDone:(id)arg1 ;
-(void)invoiceSummaryViewControllerDidFinishWithError:(id)arg1 ;
-(void)_logBubbleAction;
-(void)_openInstructionUrl:(id)arg1 ;
-(void)_openReceiptUploadWithInvoiceId:(id)arg1 selectedPaymentOption:(id)arg2 ;
-(void)_showInvoiceReceipt;
-(id)paymentsFlowCollectedDataForLoggingService:(id)arg1 ;
@end
