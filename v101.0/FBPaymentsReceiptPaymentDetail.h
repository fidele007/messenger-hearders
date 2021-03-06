/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSAttributedString;

@interface FBPaymentsReceiptPaymentDetail : FBValueObject <NSCopying> {

	NSString* _paymentID;
	NSArray* _paymentInfo;
	NSArray* _priceList;
	NSAttributedString* _additionalInstruction;

}

@property (nonatomic,copy,readonly) NSString * paymentID;                                    //@synthesize paymentID=_paymentID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paymentInfo;                                   //@synthesize paymentInfo=_paymentInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceList;                                     //@synthesize priceList=_priceList - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * additionalInstruction;              //@synthesize additionalInstruction=_additionalInstruction - In the implementation block
-(NSArray *)paymentInfo;
-(NSString *)paymentID;
-(NSArray *)priceList;
-(id)initWithPaymentID:(id)arg1 paymentInfo:(id)arg2 priceList:(id)arg3 additionalInstruction:(id)arg4 ;
-(NSAttributedString *)additionalInstruction;
@end

