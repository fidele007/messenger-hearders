/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBRichTextView, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCurrencyAndAmountView : UIView {

	UIImageView* _currencyImageView;
	FBRichTextView* _amountTextView;
	FBPaymentsCurrencyQuantity* _currencyQuantity;

}

@property (nonatomic,copy) FBPaymentsCurrencyQuantity * currencyQuantity;              //@synthesize currencyQuantity=_currencyQuantity - In the implementation block
+(CGSize)sizeWithCurrencyQuantity:(id)arg1 forWidth:(double)arg2 ;
-(void)setCurrencyQuantity:(FBPaymentsCurrencyQuantity *)arg1 ;
-(FBPaymentsCurrencyQuantity *)currencyQuantity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

