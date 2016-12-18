/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBPaymentsCurrencyQuantity;


@protocol FBPaymentsPayableDataModel <NSObject>
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,readonly) unsigned long long paymentPurpose; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) NSString * payableThemeId; 
@property (nonatomic,copy,readonly) NSString * checkoutInitiator; 
@required
-(NSString *)styleIdentifier;
-(unsigned long long)paymentPurpose;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)payableThemeId;
-(NSString *)checkoutInitiator;

@end

