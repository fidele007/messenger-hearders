/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSCharacterSet, NSString, NSDecimalNumber;

@interface MNPaymentsPeerToPeerAmountInputHandler : NSObject {

	NSMutableString* _rawAmount;
	NSCharacterSet* _invertedDigitsAndDotCharacterSet;

}

@property (nonatomic,copy,readonly) NSString * amountText; 
@property (nonatomic,copy,readonly) NSDecimalNumber * amount; 
-(id)initWithInitialAmount:(id)arg1 ;
-(void)completeAmount;
-(BOOL)isEqualToZero;
-(id)clearText;
-(id)insertText:(id)arg1 ;
-(id)deleteBackward;
-(NSDecimalNumber *)amount;
-(NSString *)amountText;
@end

