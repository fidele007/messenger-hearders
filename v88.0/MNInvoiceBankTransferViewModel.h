/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNInvoiceBankTransferViewModel : FBValueObject <NSCopying> {

	NSString* _transferOptionName;
	NSString* _orderNumber;
	NSString* _transferDescription;
	NSString* _currency;
	long long _transactionTotalCost;

}

@property (nonatomic,copy,readonly) NSString * transferOptionName;               //@synthesize transferOptionName=_transferOptionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * orderNumber;                      //@synthesize orderNumber=_orderNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferDescription;              //@synthesize transferDescription=_transferDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                         //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) long long transactionTotalCost;                   //@synthesize transactionTotalCost=_transactionTotalCost - In the implementation block
-(NSString *)transferDescription;
-(NSString *)transferOptionName;
-(NSString *)orderNumber;
-(long long)transactionTotalCost;
-(id)initWithTransferOptionName:(id)arg1 orderNumber:(id)arg2 transferDescription:(id)arg3 currency:(id)arg4 transactionTotalCost:(long long)arg5 ;
-(NSString *)currency;
@end

