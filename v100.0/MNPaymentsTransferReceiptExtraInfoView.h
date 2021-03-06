/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPaymentsView.h>

@class FBPaymentsItemView, MNPaymentsTransferReceiptStackItemView, MNPaymentsTransferReceiptExtraInfoViewModel, NSString;

@interface MNPaymentsTransferReceiptExtraInfoView : UIView <MNPaymentsView> {

	FBPaymentsItemView* _itemView;
	MNPaymentsTransferReceiptStackItemView* _stackItemView;
	MNPaymentsTransferReceiptExtraInfoViewModel* _viewModel;

}

@property (nonatomic,copy) MNPaymentsTransferReceiptExtraInfoViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MNPaymentsTransferReceiptExtraInfoViewModel *)viewModel;
-(void)setViewModel:(MNPaymentsTransferReceiptExtraInfoViewModel *)arg1 ;
@end

