/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/MNPaymentsCommercePayableDataModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsCurrencyQuantity;

@interface MNPaymentsCommerceCheckoutDataModel : FBValueObject <MNPaymentsCommercePayableDataModel, NSCopying> {

	NSString* _itemId;

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
@property (nonatomic,copy,readonly) NSString * itemId;                                  //@synthesize itemId=_itemId - In the implementation block
-(id)initWithItemId:(id)arg1 ;
-(NSString *)styleIdentifier;
-(unsigned long long)paymentPurpose;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)payableThemeId;
-(NSString *)checkoutInitiator;
-(NSString *)itemId;
@end

