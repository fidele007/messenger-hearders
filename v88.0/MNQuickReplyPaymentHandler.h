/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSendFlowControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNApplicationRootViewControllerGetting;
@class FBMessengerPaymentsPlugin, NSString;

@interface MNQuickReplyPaymentHandler : NSObject <FBPaymentsPeerToPeerSendFlowControllerDelegate, FBClassProvidable> {

	FBMessengerPaymentsPlugin* _paymentsPlugin;
	id<MNApplicationRootViewControllerGetting> _rootViewControllerGetter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCompleteSendFlowWithFlowId:(id)arg2 checkoutViewController:(id)arg3 ;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2 ;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2 ;
-(void)handleP2PPaymentFromEntryPoint:(id)arg1 currencyCode:(id)arg2 amountInCents:(id)arg3 paymentType:(unsigned long long)arg4 tintColor:(id)arg5 forThreadKey:(id)arg6 otherUsers:(id)arg7 ;
-(void)_modallyPresentSendMoneyViewControllerWithFlowId:(id)arg1 recipient:(id)arg2 invitees:(id)arg3 groupThreadKey:(id)arg4 amount:(id)arg5 paymentType:(unsigned long long)arg6 entryPoint:(id)arg7 tintColor:(id)arg8 ;
@end

