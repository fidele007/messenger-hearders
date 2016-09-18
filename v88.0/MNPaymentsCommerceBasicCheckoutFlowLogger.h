/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutFlowLogger.h>

@class NSMutableDictionary, NSString;

@interface MNPaymentsCommerceBasicCheckoutFlowLogger : NSObject <FBPaymentsCheckoutFlowLogger> {

	NSMutableDictionary* _dataModelForFlowId;
	NSString* _loggingModuleName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLoggingModuleName:(id)arg1 ;
-(void)configureLoggerForFlowId:(id)arg1 withCheckoutDataModel:(id)arg2 ;
-(void)logInitiateCheckoutWithFlowId:(id)arg1 ;
-(void)logCheckoutCancelledWithFlowId:(id)arg1 collectedData:(id)arg2 ;
-(void)finishLoggingForFlowId:(id)arg1 ;
-(void)logConfirmCheckoutWithFlowId:(id)arg1 collectedData:(id)arg2 ;
-(void)logPaymentSuccessWithFlowId:(id)arg1 collectedData:(id)arg2 ;
-(void)logPaymentFailureWithFlowId:(id)arg1 collectedData:(id)arg2 error:(id)arg3 ;
-(void)logCheckoutConfigurationSwitchWithFlowId:(id)arg1 collectedData:(id)arg2 ;
-(id)loggingModuleNameForFlowId:(id)arg1 ;
-(void)_logSendEvent:(id)arg1 module:(id)arg2 flowId:(id)arg3 collectedData:(id)arg4 error:(id)arg5 ;
@end

