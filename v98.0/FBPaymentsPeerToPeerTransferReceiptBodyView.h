/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNPaymentsPeerToPeerCurrencyAndAmountView, FBRichTextView, FBPaymentsPeerToPeerTransferReceiptBodyViewModel, UIButton;

@interface FBPaymentsPeerToPeerTransferReceiptBodyView : UIView {

	MNPaymentsPeerToPeerCurrencyAndAmountView* _currencyAndAmountView;
	FBRichTextView* _statusTextView;
	FBRichTextView* _descriptionTextView;
	FBPaymentsPeerToPeerTransferReceiptBodyViewModel* _viewModel;
	UIButton* _receiptLinkButton;
	UIButton* _actionButton;

}

@property (nonatomic,copy) FBPaymentsPeerToPeerTransferReceiptBodyViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UIButton * receiptLinkButton;                                          //@synthesize receiptLinkButton=_receiptLinkButton - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                               //@synthesize actionButton=_actionButton - In the implementation block
-(double)verticallyStackedHeightWithSize:(CGSize)arg1 ;
-(MNPaymentsTransferReceiptBodyParameters)layoutParameters;
-(UIButton *)receiptLinkButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)actionButton;
-(FBPaymentsPeerToPeerTransferReceiptBodyViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsPeerToPeerTransferReceiptBodyViewModel *)arg1 ;
@end
