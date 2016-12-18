/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutPayActionContentProviding.h>
#import <Messenger/FBPaymentsCheckoutPaymentProcessLoadingStyleProviding.h>
#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, NSAttributedString, NSArray, FBPaymentsPaymentMethodsCoordinator, NSString;

@interface MNOmniMContentConfiguration : NSObject <FBPaymentsCheckoutPayActionContentProviding, FBPaymentsCheckoutPaymentProcessLoadingStyleProviding, FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	long long _checkoutLogoStyle;
	NSAttributedString* _termsAndPoliciesString;
	NSArray* _priceDetails;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)termsAndPoliciesModel:(id)arg1 ;
-(id)payActionTitleWithCollectedData:(id)arg1 ;
-(long long)paymentProcessLoadingStyleWithCollectedData:(id)arg1 ;
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)checkoutViewTitle;
-(id)paymentProcessLoadingStyleProvider;
-(long long)checkoutLogoStyle;
-(id)initWithSession:(id)arg1 priceDetails:(id)arg2 checkoutLogoStyle:(long long)arg3 termsAndPoliciesString:(id)arg4 ;
-(void)_loadPaymentMethodsCoordinatorIfNeeded;
@end

