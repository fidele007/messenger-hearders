/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, MNAgentSuggestedItemCheckoutDataModel, FBPaymentsPeerToPeerNavigationCoordinator, NSString;

@interface MNPaymentsAgentCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	MNAgentSuggestedItemCheckoutDataModel* _agentCheckoutDataModel;
	FBPaymentsPeerToPeerNavigationCoordinator* _paymentsNavigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)confirmationConfigurationProvider;
-(id)explanationInformation;
-(BOOL)shouldDisplayTotalAmountOnly;
-(id)headerViewFactory;
-(id)_confirmationConfiguration;
-(id)initWithSession:(id)arg1 agentCheckoutViewModel:(id)arg2 paymentMethodsCoordinator:(id)arg3 paymentsNavigationCoordinator:(id)arg4 ;
@end
