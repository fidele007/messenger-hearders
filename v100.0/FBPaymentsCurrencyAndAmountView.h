/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
