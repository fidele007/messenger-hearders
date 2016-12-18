/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfigurationExtending.h>

@protocol FBPaymentsCheckoutContentConfiguration;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPaymentModulesOptionsDataController, NSString, MNPaymentsPagesCommerceCheckoutDataModel, MNPaymentsPagesCommercePaymentCardDataMutator;

@interface MNPaymentsPagesCommerceCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfigurationExtending> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPaymentModulesOptionsDataController* _paymentModulesOptionsDataController;
	NSString* _productItemType;
	MNPaymentsPagesCommerceCheckoutDataModel* _checkoutDataModel;
	MNPaymentsPagesCommercePaymentCardDataMutator* _paymentCardMutator;
	id<FBPaymentsCheckoutContentConfiguration> _baseContentConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBPaymentsCheckoutContentConfiguration> baseContentConfiguration;              //@synthesize baseContentConfiguration=_baseContentConfiguration - In the implementation block
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)confirmationConfigurationProvider;
-(id)explanationInformation;
-(id)headerViewFactory;
-(id)initWithSession:(id)arg1 payableDataModel:(id)arg2 ;
-(void)_setupPaymentMethodDataController;
-(void)_loadNewPaymentMethodsCoordinator;
-(void)_configurePayWithExtension:(id)arg1 ;
-(void)_configureSecurityCodeExtension:(id)arg1 ;
-(id<FBPaymentsCheckoutContentConfiguration>)baseContentConfiguration;
-(void)setBaseContentConfiguration:(id<FBPaymentsCheckoutContentConfiguration>)arg1 ;
@end
