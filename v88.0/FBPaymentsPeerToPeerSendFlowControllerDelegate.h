/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPeerToPeerSendFlowControllerDelegate <NSObject>
@required
-(void)peerToPeerSendFlowController:(id)arg1 didCancelCheckoutFlowWithFlowId:(id)arg2 error:(id)arg3;
-(void)peerToPeerSendFlowController:(id)arg1 didCompleteSendFlowWithFlowId:(id)arg2 checkoutViewController:(id)arg3;
-(void)peerToPeerSendFlowController:(id)arg1 willCheckoutWithFlowId:(id)arg2;
-(void)peerToPeerSendFlowController:(id)arg1 didCheckoutWithFlowId:(id)arg2;
-(void)peerToPeerSendFlowController:(id)arg1 didFailCheckoutWithFlowId:(id)arg2;

@end

