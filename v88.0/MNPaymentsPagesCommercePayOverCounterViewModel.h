/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, FBPaymentsCurrencyQuantity;

@interface MNPaymentsPagesCommercePayOverCounterViewModel : FBValueObject <NSCopying> {

	NSString* _qrCodeData;
	NSString* _barCodeData;
	NSString* _referenceNo1;
	NSString* _referenceNo2;
	NSURL* _instructionsUrl;
	NSDate* _expirationTime;
	FBPaymentsCurrencyQuantity* _amount;

}

@property (nonatomic,copy,readonly) NSString * qrCodeData;                            //@synthesize qrCodeData=_qrCodeData - In the implementation block
@property (nonatomic,copy,readonly) NSString * barCodeData;                           //@synthesize barCodeData=_barCodeData - In the implementation block
@property (nonatomic,copy,readonly) NSString * referenceNo1;                          //@synthesize referenceNo1=_referenceNo1 - In the implementation block
@property (nonatomic,copy,readonly) NSString * referenceNo2;                          //@synthesize referenceNo2=_referenceNo2 - In the implementation block
@property (nonatomic,copy,readonly) NSURL * instructionsUrl;                          //@synthesize instructionsUrl=_instructionsUrl - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationTime;                          //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * amount;              //@synthesize amount=_amount - In the implementation block
-(NSString *)referenceNo2;
-(NSString *)referenceNo1;
-(NSString *)barCodeData;
-(NSString *)qrCodeData;
-(NSURL *)instructionsUrl;
-(id)initWithQrCodeData:(id)arg1 barCodeData:(id)arg2 referenceNo1:(id)arg3 referenceNo2:(id)arg4 instructionsUrl:(id)arg5 expirationTime:(id)arg6 amount:(id)arg7 ;
-(FBPaymentsCurrencyQuantity *)amount;
-(NSDate *)expirationTime;
@end

