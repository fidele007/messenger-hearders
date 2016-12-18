/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethod.h>

@class NSString;

@interface FBPaymentsCard : NSObject <FBPaymentsPaymentMethod> {

	BOOL _isZipVerified;
	BOOL _isTrickyBin;
	NSString* _credentialId;
	NSString* _paymentMethodType;
	NSString* _cardAssociation;
	NSString* _lastFourDigits;
	NSString* _expireMonth;
	NSString* _expireYear;
	NSString* _billingZipCode;
	NSString* _billingCountryCode;
	NSString* _category;

}

@property (nonatomic,copy,readonly) NSString * cardAssociation;                 //@synthesize cardAssociation=_cardAssociation - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastFourDigits;                  //@synthesize lastFourDigits=_lastFourDigits - In the implementation block
@property (nonatomic,copy,readonly) NSString * expireMonth;                     //@synthesize expireMonth=_expireMonth - In the implementation block
@property (nonatomic,copy,readonly) NSString * expireYear;                      //@synthesize expireYear=_expireYear - In the implementation block
@property (nonatomic,copy,readonly) NSString * billingZipCode;                  //@synthesize billingZipCode=_billingZipCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * billingCountryCode;              //@synthesize billingCountryCode=_billingCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                        //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL isZipVerified;                              //@synthesize isZipVerified=_isZipVerified - In the implementation block
@property (nonatomic,readonly) BOOL isTrickyBin;                                //@synthesize isTrickyBin=_isTrickyBin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType;               //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialId;                    //@synthesize credentialId=_credentialId - In the implementation block
-(BOOL)containsSameDataAs:(id)arg1 ;
-(NSString *)paymentMethodType;
-(NSString *)credentialId;
-(NSString *)cardAssociation;
-(NSString *)lastFourDigits;
-(NSString *)expireMonth;
-(NSString *)expireYear;
-(id)initWithCredentialId:(id)arg1 cardAssociation:(id)arg2 lastFourDigits:(id)arg3 expireMonth:(id)arg4 expireYear:(id)arg5 billingZipCode:(id)arg6 billingCountryCode:(id)arg7 category:(id)arg8 isZipVerified:(BOOL)arg9 isTrickyBin:(BOOL)arg10 ;
-(NSString *)billingZipCode;
-(BOOL)isZipVerified;
-(BOOL)isTrickyBin;
-(NSString *)billingCountryCode;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

