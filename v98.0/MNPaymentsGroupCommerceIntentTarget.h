/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsIntentTarget.h>

@class NSString;

@interface MNPaymentsGroupCommerceIntentTarget : MNPaymentsIntentTarget {

	NSString* _recipientId;
	NSString* _commerceOptionId;

}

@property (nonatomic,copy,readonly) NSString * recipientId;                   //@synthesize recipientId=_recipientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * commerceOptionId;              //@synthesize commerceOptionId=_commerceOptionId - In the implementation block
+(id)paymentsGroupCommerceIntentTargetWithRecipientId:(id)arg1 commerceOptionId:(id)arg2 ;
-(NSString *)recipientId;
-(NSString *)commerceOptionId;
@end
