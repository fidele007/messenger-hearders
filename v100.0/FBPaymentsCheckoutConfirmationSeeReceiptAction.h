/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfirmationAction.h>

@protocol FBPaymentsCheckoutReceiptPresenting, FBPaymentsCheckoutConfirmationActionDelegate, FBPaymentsNavigationDelegate;
@class NSString;

@interface FBPaymentsCheckoutConfirmationSeeReceiptAction : NSObject <FBPaymentsCheckoutConfirmationAction> {

	id<FBPaymentsCheckoutReceiptPresenting> _receiptPresenter;
	id<FBPaymentsCheckoutConfirmationActionDelegate> _actionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                          //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(BOOL)isDisabledForCheckoutResponse:(id)arg1 ;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2 ;
-(id)initWithReceiptPresenter:(id)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCheckoutConfirmationActionDelegate>)arg1 ;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)actionTitle;
@end

