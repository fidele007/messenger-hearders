/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPaymentsSendMoneyViewControllerDelegate <NSObject>
@required
-(void)sendMoneyViewController:(id)arg1 didTapCancelWithFlowId:(id)arg2 collectedData:(id)arg3;
-(void)sendMoneyViewController:(id)arg1 shouldProcessPaymentWithFlowId:(id)arg2 collectedData:(id)arg3;
-(void)sendMoneyViewController:(id)arg1 didFinishCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3;
-(void)sendMoneyViewController:(id)arg1 didExitCheckoutWithFlowId:(id)arg2 collectedData:(id)arg3;
-(void)sendMoneyViewController:(id)arg1 didFailProcessingWithFlowId:(id)arg2 collectedData:(id)arg3 error:(id)arg4;
-(void)sendMoneyViewController:(id)arg1 hasFatalErrorForFlowId:(id)arg2 error:(id)arg3;

@end

