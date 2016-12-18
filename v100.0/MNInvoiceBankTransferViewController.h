/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNInvoiceReceiptImageUploaderDelegate.h>
#import <Messenger/FBMediaAttachmentPickerControllerDelegate.h>
#import <Messenger/FBPaymentsInvoiceMutationHandlerDelegate.h>

@protocol MNInvoiceBankTransferViewControllerDelegate;
@class FBUserSession, MNInvoiceBankTransferView, MNInvoiceReceiptImageUploader, FBMultiPickerPhotoAttachment, FBMediaAttachmentPickerController, UIViewController, FBPaymentsManualTransfer, FBPaymentsCurrencyQuantity, NSString, UIBarButtonItem, FBPaymentsCheckoutLoggingService, FBPaymentsInvoiceMutationHandler;

@interface MNInvoiceBankTransferViewController : UIViewController <MNInvoiceReceiptImageUploaderDelegate, FBMediaAttachmentPickerControllerDelegate, FBPaymentsInvoiceMutationHandlerDelegate> {

	FBUserSession* _session;
	MNInvoiceBankTransferView* _bankTransferView;
	MNInvoiceReceiptImageUploader* _imageUploader;
	FBMultiPickerPhotoAttachment* _selectedAttachment;
	FBMediaAttachmentPickerController* _photoPickerController;
	UIViewController* _mediaAttachmentPickerViewController;
	FBPaymentsManualTransfer* _manualTransfer;
	FBPaymentsCurrencyQuantity* _amount;
	NSString* _invoiceId;
	NSString* _uploadedImageId;
	UIBarButtonItem* _loadingBarButton;
	UIBarButtonItem* _doneBarButton;
	FBPaymentsCheckoutLoggingService* _loggingService;
	NSString* _viewContextId;
	FBPaymentsInvoiceMutationHandler* _invoiceMutationHandler;
	id<MNInvoiceBankTransferViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInvoiceBankTransferViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel;
-(void)_logEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 loggingService:(id)arg2 invoiceId:(id)arg3 manualTransfer:(id)arg4 amount:(id)arg5 productType:(id)arg6 ;
-(void)paymentsInvoiceMutationHandler:(id)arg1 didSuccessUpdateInvoiceWithProductID:(id)arg2 ;
-(void)paymentsInvoiceMutationHandler:(id)arg1 didFailUpdateInvoiceWithError:(id)arg2 ;
-(void)_setUpBankTransferView;
-(void)_didTapCameraButton;
-(void)_didTapRemoveButton;
-(void)_showLoadingButton;
-(void)_configRightBarButton;
-(void)_logEvent:(id)arg1 error:(id)arg2 ;
-(void)_processSelectedMediaAttachments:(id)arg1 ;
-(void)_dismissMediaPicker;
-(void)_uploadReceiptImage;
-(void)_didTapDone;
-(void)didPublishDataWithResultId:(id)arg1 ;
-(void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(long long)arg3 ;
-(void)mediaAttachmentPickerControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1 ;
-(void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1 ;
-(void)mediaAttachmentPickerController:(id)arg1 openURL:(id)arg2 ;
-(void)setDelegate:(id<MNInvoiceBankTransferViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInvoiceBankTransferViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

