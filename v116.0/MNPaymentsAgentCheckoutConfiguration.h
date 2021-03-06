/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutConfiguration.h>

@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, FBPaymentsPeerToPeerNavigationCoordinator, MNAgentSuggestedItemCheckoutDataModel, FBLazyCreator, NSString;

@interface MNPaymentsAgentCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPeerToPeerNavigationCoordinator* _paymentsNavigationCoordinator;
	MNAgentSuggestedItemCheckoutDataModel* _checkoutDataModel;
	FBLazyCreator* _orderStatusControllerLazyCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)paymentInfo;
-(id)orderStatusController;
-(id)initWithSession:(id)arg1 checkoutDataModel:(id)arg2 paymentMethodsCoordinator:(id)arg3 pinController:(id)arg4 touchIDController:(id)arg5 paymentsNavigationCoordinator:(id)arg6 ;
-(id)requestHandler;
@end

