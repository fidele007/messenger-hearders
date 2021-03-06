/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsLocalOnlyPaymentMethod.h>

@class NSString;

@interface FBPaymentsNetBanking : NSObject <FBPaymentsLocalOnlyPaymentMethod> {

	NSString* _paymentMethodType;
	NSString* _bankCode;
	NSString* _bankLogoData;
	NSString* _bankName;

}

@property (nonatomic,copy,readonly) NSString * bankCode;                       //@synthesize bankCode=_bankCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * bankLogoData;                   //@synthesize bankLogoData=_bankLogoData - In the implementation block
@property (nonatomic,copy,readonly) NSString * bankName;                       //@synthesize bankName=_bankName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType;              //@synthesize paymentMethodType=_paymentMethodType - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialId; 
-(NSString *)credentialId;
-(NSString *)paymentMethodType;
-(BOOL)containsSameDataAs:(id)arg1 ;
-(NSString *)bankCode;
-(NSString *)bankName;
-(NSString *)bankLogoData;
-(id)initWithBankCode:(id)arg1 bankName:(id)arg2 bankLogoData:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

