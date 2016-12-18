/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutPaymentMethodConfiguration.h>

@protocol FBPaymentsCardViewHeaderProviding;
@class NSString, NSArray;

@interface FBPaymentsCheckoutSimplePaymentMethodConfiguration : NSObject <FBPaymentsCheckoutPaymentMethodConfiguration> {

	NSString* _productItemType;
	NSArray* _supportedPaymentMethodOptions;
	id<FBPaymentsCardViewHeaderProviding> _cardViewHeaderProvider;
	BOOL _allowUserToSelectBillingCountry;
	BOOL _shouldUsePickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)productItemType;
-(BOOL)shouldUsePickerView;
-(id)supportedPaymentMethodOptions;
-(id)cardViewHeaderProvider;
-(BOOL)allowUserToSelectBillingCountry;
-(id)initWithProductItemType:(id)arg1 supportedPaymentMethodOptions:(id)arg2 cardViewHeaderProvider:(id)arg3 allowUserToSelectBillingCountry:(BOOL)arg4 shouldUsePickerView:(BOOL)arg5 ;
@end

