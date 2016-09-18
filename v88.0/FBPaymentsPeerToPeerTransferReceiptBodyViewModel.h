/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPaymentsPeerToPeerStatusModelForReceipt;

@interface FBPaymentsPeerToPeerTransferReceiptBodyViewModel : FBValueObject <NSCopying> {

	BOOL _hasDefaultCardOnFile;
	BOOL _hasChargedCard;
	NSString* _amountText;
	NSString* _recipientName;
	MNPaymentsPeerToPeerStatusModelForReceipt* _statusModel;

}

@property (nonatomic,copy,readonly) NSString * amountText;                                                //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientName;                                             //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultCardOnFile;                                                 //@synthesize hasDefaultCardOnFile=_hasDefaultCardOnFile - In the implementation block
@property (nonatomic,readonly) BOOL hasChargedCard;                                                       //@synthesize hasChargedCard=_hasChargedCard - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsPeerToPeerStatusModelForReceipt * statusModel;              //@synthesize statusModel=_statusModel - In the implementation block
-(MNPaymentsPeerToPeerStatusModelForReceipt *)statusModel;
-(NSString *)recipientName;
-(BOOL)hasChargedCard;
-(BOOL)hasDefaultCardOnFile;
-(id)initWithAmountText:(id)arg1 recipientName:(id)arg2 hasDefaultCardOnFile:(BOOL)arg3 hasChargedCard:(BOOL)arg4 statusModel:(id)arg5 ;
-(NSString *)amountText;
@end

