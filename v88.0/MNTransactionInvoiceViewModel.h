/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, FBMemTransactionPaymentOption;

@interface MNTransactionInvoiceViewModel : FBValueObject <NSCopying> {

	NSString* _invoiceID;
	NSString* _contextID;
	NSString* _productName;
	NSString* _productImageURI;
	NSString* _price;
	long long _transactionStatus;
	NSString* _instructionURL;
	NSString* _transactionStatusDisplayText;
	UIColor* _transactionStatusColor;
	FBMemTransactionPaymentOption* _selectedPaymentOption;
	NSString* _invoiceNotes;

}

@property (nonatomic,copy,readonly) NSString * invoiceID;                                               //@synthesize invoiceID=_invoiceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextID;                                               //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy,readonly) NSString * productName;                                             //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) NSString * productImageURI;                                         //@synthesize productImageURI=_productImageURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * price;                                                   //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) long long transactionStatus;                                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * instructionURL;                                          //@synthesize instructionURL=_instructionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionStatusDisplayText;                            //@synthesize transactionStatusDisplayText=_transactionStatusDisplayText - In the implementation block
@property (nonatomic,copy,readonly) UIColor * transactionStatusColor;                                   //@synthesize transactionStatusColor=_transactionStatusColor - In the implementation block
@property (nonatomic,copy,readonly) FBMemTransactionPaymentOption * selectedPaymentOption;              //@synthesize selectedPaymentOption=_selectedPaymentOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * invoiceNotes;                                            //@synthesize invoiceNotes=_invoiceNotes - In the implementation block
-(NSString *)invoiceNotes;
-(NSString *)invoiceID;
-(id)initWithInvoiceID:(id)arg1 contextID:(id)arg2 productName:(id)arg3 productImageURI:(id)arg4 price:(id)arg5 transactionStatus:(long long)arg6 instructionURL:(id)arg7 transactionStatusDisplayText:(id)arg8 transactionStatusColor:(id)arg9 selectedPaymentOption:(id)arg10 invoiceNotes:(id)arg11 ;
-(NSString *)productImageURI;
-(NSString *)instructionURL;
-(NSString *)transactionStatusDisplayText;
-(UIColor *)transactionStatusColor;
-(FBMemTransactionPaymentOption *)selectedPaymentOption;
-(NSString *)contextID;
-(NSString *)productName;
-(NSString *)price;
-(long long)transactionStatus;
@end

