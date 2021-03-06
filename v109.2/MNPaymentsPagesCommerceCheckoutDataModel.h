/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <Messenger/MNPaymentsCommercePayableDataModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBPaymentsCurrencyQuantity;

@interface MNPaymentsPagesCommerceCheckoutDataModel : FBValueObject <MNPaymentsCommercePayableDataModel, NSCopying> {

	NSString* _paymentSessionId;
	NSString* _pageId;
	NSString* _invoiceId;
	NSArray* _itemIds;
	NSString* _invoiceNotes;
	NSString* _productType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,readonly) unsigned long long paymentPurpose; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) NSString * payableThemeId; 
@property (nonatomic,copy,readonly) NSString * checkoutInitiator; 
@property (nonatomic,copy,readonly) NSString * itemId; 
@property (nonatomic,copy,readonly) NSString * paymentSessionId;                        //@synthesize paymentSessionId=_paymentSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageId;                                  //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * invoiceId;                               //@synthesize invoiceId=_invoiceId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIds;                                  //@synthesize itemIds=_itemIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * invoiceNotes;                            //@synthesize invoiceNotes=_invoiceNotes - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                             //@synthesize productType=_productType - In the implementation block
-(id)initWithPaymentSessionId:(id)arg1 pageId:(id)arg2 invoiceId:(id)arg3 itemIds:(id)arg4 invoiceNotes:(id)arg5 productType:(id)arg6 ;
-(NSString *)invoiceId;
-(NSString *)invoiceNotes;
-(NSString *)styleIdentifier;
-(unsigned long long)paymentPurpose;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)payableThemeId;
-(NSString *)checkoutInitiator;
-(NSString *)paymentSessionId;
-(NSArray *)itemIds;
-(NSString *)pageId;
-(NSString *)itemId;
-(NSString *)productType;
@end

