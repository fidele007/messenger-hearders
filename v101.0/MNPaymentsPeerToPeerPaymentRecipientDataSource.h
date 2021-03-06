/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsUpdateAnnouncing.h>

@class FBPaymentsUpdateListenerAnnouncer, MNPaymentsPeerToPeerPaymentRecipientLoader, FBPaymentsActor, NSString;

@interface MNPaymentsPeerToPeerPaymentRecipientDataSource : NSObject <FBPaymentsUpdateAnnouncing> {

	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	MNPaymentsPeerToPeerPaymentRecipientLoader* _recipientLoader;
	FBPaymentsActor* _paymentRecipient;

}

@property (nonatomic,readonly) FBPaymentsActor * paymentRecipient;              //@synthesize paymentRecipient=_paymentRecipient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)initWithUserStore:(id)arg1 paymentRecipient:(id)arg2 ;
-(FBPaymentsActor *)paymentRecipient;
-(void)_loadRecipientIfNeeded;
-(void)_updateWithActor:(id)arg1 ;
@end

