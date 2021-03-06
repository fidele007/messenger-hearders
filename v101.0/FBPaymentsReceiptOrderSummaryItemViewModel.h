/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBPaymentsCurrencyQuantity;

@interface FBPaymentsReceiptOrderSummaryItemViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSArray* _variants;
	FBPaymentsCurrencyQuantity* _price;

}

@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * variants;                              //@synthesize variants=_variants - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * price;              //@synthesize price=_price - In the implementation block
-(id)initWithTitle:(id)arg1 variants:(id)arg2 price:(id)arg3 ;
-(NSString *)title;
-(FBPaymentsCurrencyQuantity *)price;
-(NSArray *)variants;
@end

