/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class NSArray, FBPaymentsInvoiceInfo, NSString;

@interface FBPaymentsInvoiceCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	NSArray* _cartItems;
	NSArray* _purchaseInfoDescriptors;
	NSArray* _invoicePriceList;
	FBPaymentsInvoiceInfo* _invoiceInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)customizedPurchaseInfoExtensionCreationBlocks;
-(id)checkoutViewTitle;
-(id)initWithCartItems:(id)arg1 purchaseInfoDescriptors:(id)arg2 invoicePriceList:(id)arg3 invoiceInfo:(id)arg4 ;
@end

