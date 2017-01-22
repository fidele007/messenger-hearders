/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPaymentsPeerToPeerFlowLogger <NSObject>
@required
-(void)configureLoggerForFlowId:(id)arg1 withCheckoutDataModel:(id)arg2;
-(void)logInitiateCheckoutWithFlowId:(id)arg1;
-(void)logCheckoutCancelledWithFlowId:(id)arg1 collectedData:(id)arg2;
-(void)finishLoggingForFlowId:(id)arg1;
-(void)logConfirmCheckoutWithFlowId:(id)arg1 collectedData:(id)arg2;
-(void)logPaymentSuccessWithFlowId:(id)arg1 collectedData:(id)arg2;
-(void)logPaymentFailureWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3;
-(void)logCheckoutConfigurationSwitchWithFlowId:(id)arg1 collectedData:(id)arg2;
-(id)loggingModuleNameForFlowId:(id)arg1;

@end
