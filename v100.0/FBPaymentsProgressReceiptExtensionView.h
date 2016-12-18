/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsReceiptActionsViewDelegate.h>
#import <Messenger/FBPaymentsReceiptExtensionView.h>

@protocol FBPaymentsReceiptExtensionViewDelegate;
@class FBPaymentsReceiptProgressView, FBPaymentsReceiptActionsView, NSString;

@interface FBPaymentsProgressReceiptExtensionView : UIView <FBPaymentsReceiptActionsViewDelegate, FBPaymentsReceiptExtensionView> {

	FBPaymentsReceiptProgressView* _progressView;
	FBPaymentsReceiptActionsView* _actionsView;
	id _viewModel;
	id<FBPaymentsReceiptExtensionViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsReceiptExtensionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)paymentsReceiptActionsView:(id)arg1 didTapActionWithIdentifier:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBPaymentsReceiptExtensionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsReceiptExtensionViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

