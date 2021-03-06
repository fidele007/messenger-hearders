/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCartItemInfo, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCartItem : FBValueObject <NSCopying> {

	FBPaymentsCartItemInfo* _cartItemInfo;
	long long _selectedQuantity;
	FBPaymentsCurrencyQuantity* _customizedItemPrice;

}

@property (nonatomic,copy,readonly) FBPaymentsCartItemInfo * cartItemInfo;                         //@synthesize cartItemInfo=_cartItemInfo - In the implementation block
@property (nonatomic,readonly) long long selectedQuantity;                                         //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * customizedItemPrice;              //@synthesize customizedItemPrice=_customizedItemPrice - In the implementation block
-(FBPaymentsCartItemInfo *)cartItemInfo;
-(FBPaymentsCurrencyQuantity *)customizedItemPrice;
-(long long)selectedQuantity;
-(id)initWithCartItemInfo:(id)arg1 selectedQuantity:(long long)arg2 customizedItemPrice:(id)arg3 ;
@end

