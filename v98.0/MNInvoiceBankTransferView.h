/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UITextView, UILabel, UIScrollView, UIImageView, UIView, MNInvoiceBankTransferViewModel, UIButton;

@interface MNInvoiceBankTransferView : UIView {

	UITextView* _orderNumberTextView;
	UILabel* _totalPriceLabel;
	UILabel* _sellerBankDetailsLabel;
	UILabel* _instructionsTitleLabel;
	UITextView* _instructionsTextView;
	UILabel* _methodTitleLabel;
	UILabel* _methodLabel;
	UIScrollView* _scrollView;
	UIImageView* _receiptImageView;
	UIView* _dividerView;
	MNInvoiceBankTransferViewModel* _viewModel;
	UIButton* _cameraButton;
	UIButton* _reAttachButton;
	UIButton* _removeImageButton;

}

@property (nonatomic,retain) UIButton * cameraButton;                   //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,retain) UIButton * reAttachButton;                 //@synthesize reAttachButton=_reAttachButton - In the implementation block
@property (nonatomic,retain) UIButton * removeImageButton;              //@synthesize removeImageButton=_removeImageButton - In the implementation block
-(void)configureWithViewModel:(id)arg1 ;
-(void)_uploadImageButtonConfig;
-(void)_reAttachImageButtonConfig;
-(void)updateReceiptImage:(id)arg1 ;
-(void)removeAttachedImage;
-(UIButton *)cameraButton;
-(void)setCameraButton:(UIButton *)arg1 ;
-(UIButton *)reAttachButton;
-(void)setReAttachButton:(UIButton *)arg1 ;
-(UIButton *)removeImageButton;
-(void)setRemoveImageButton:(UIButton *)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end
