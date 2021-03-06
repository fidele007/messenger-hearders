/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNInvoiceReceiptImageUploaderDelegate.h>
#import <Messenger/FBMediaAttachmentPickerControllerDelegate.h>

@protocol MNInvoiceBankTransferViewControllerDelegate;
@class FBUserSession, FBMemTransactionInvoice, MNInvoiceBankTransferView, MNInvoiceReceiptImageUploader, FBMultiPickerPhotoAttachment, FBMediaAttachmentPickerController, UIViewController, FBMemTransactionPaymentOption, NSString, UIBarButtonItem, FBPaymentsCheckoutLoggingService;

@interface MNInvoiceBankTransferViewController : UIViewController <MNInvoiceReceiptImageUploaderDelegate, FBMediaAttachmentPickerControllerDelegate> {

	FBUserSession* _session;
	FBMemTransactionInvoice* _invoice;
	MNInvoiceBankTransferView* _bankTransferView;
	MNInvoiceReceiptImageUploader* _imageUploader;
	FBMultiPickerPhotoAttachment* _selectedAttachment;
	FBMediaAttachmentPickerController* _photoPickerController;
	UIViewController* _mediaAttachmentPickerViewController;
	FBMemTransactionPaymentOption* _paymentOption;
	NSString* _paymentOptionId;
	NSString* _invoiceId;
	NSString* _uploadedImageId;
	UIBarButtonItem* _loadingBarButton;
	UIBarButtonItem* _doneBarButton;
	FBPaymentsCheckoutLoggingService* _loggingService;
	NSString* _viewContextId;
	id<MNInvoiceBankTransferViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInvoiceBankTransferViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 loggingService:(id)arg2 invoiceId:(id)arg3 paymentOptionId:(id)arg4 ;
-(void)_loadInvoice;
-(void)_setUpBankTransferView;
-(void)_handleInvoice:(id)arg1 ;
-(void)_handleInvoiceError:(id)arg1 ;
-(void)_didTapCancel;
-(void)_didTapCameraButton;
-(void)_didTapRemoveButton;
-(void)_showLoadingButton;
-(void)_configRightBarButton;
-(void)_processSelectedMediaAttachments:(id)arg1 ;
-(void)_dismissMediaPicker;
-(void)_uploadReceiptImage;
-(void)_didTapDone;
-(void)_logEvent:(id)arg1 error:(id)arg2 ;
-(void)_handleReceiptUploadMutationError:(id)arg1 ;
-(void)_handleReceiptUploadMutation:(id)arg1 ;
-(void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(long long)arg3 ;
-(void)mediaAttachmentPickerControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1 ;
-(void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1 ;
-(void)mediaAttachmentPickerController:(id)arg1 openURL:(id)arg2 ;
-(void)didPublishDataWithResultId:(id)arg1 ;
-(void)setDelegate:(id<MNInvoiceBankTransferViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInvoiceBankTransferViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

