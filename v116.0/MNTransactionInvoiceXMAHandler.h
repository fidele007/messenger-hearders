/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInvoiceBankTransferViewControllerDelegate.h>
#import <Messenger/MNInvoiceSummaryViewControllerrDelegate.h>
#import <Messenger/FBPaymentsLoggingServiceDataSource.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
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
-(void)didTapTransactionInvoiceXMAWithInvoiceID:(id)arg1 pageID:(id)arg2 transactionStatus:(long long)arg3 instructionURL:(id)arg4 selectedPaymentOption:(id)arg5 invoiceNotes:(id)arg6 ;
-(void)didTapDoneWithBankTransferViewController:(id)arg1 ;
-(void)didTapCancelWithBankTransferViewController:(id)arg1 ;
-(void)_logBubbleAction;
-(void)_openInstructionUrl:(id)arg1 ;
-(void)_showInvoiceReceipt;
-(void)invoiceSummaryViewControllerDidTapDone:(id)arg1 ;
-(void)invoiceSummaryViewControllerDidFinishWithError:(id)arg1 ;
-(id)paymentsFlowCollectedDataForLoggingService:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

