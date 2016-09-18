/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBPaymentsCheckoutPrice, NSArray;

@interface FBPaymentsCheckoutPriceItem : FBValueObject <NSCopying, NSCoding> {

	NSString* _title;
	FBPaymentsCheckoutPrice* _price;
	NSArray* _priceItems;

}

@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCheckoutPrice * price;              //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceItems;                         //@synthesize priceItems=_priceItems - In the implementation block
-(id)initWithTitle:(id)arg1 price:(id)arg2 priceItems:(id)arg3 ;
-(NSArray *)priceItems;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(FBPaymentsCheckoutPrice *)price;
@end

