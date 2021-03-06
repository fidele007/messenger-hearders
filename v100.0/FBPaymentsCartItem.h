/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(FBPaymentsCurrencyQuantity *)customizedItemPrice;
-(long long)selectedQuantity;
-(FBPaymentsCartItemInfo *)cartItemInfo;
-(id)initWithCartItemInfo:(id)arg1 selectedQuantity:(long long)arg2 customizedItemPrice:(id)arg3 ;
@end

