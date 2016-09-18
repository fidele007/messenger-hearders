/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsPaymentMethodOption.h>

@class NSArray, NSString;

@interface FBPaymentsNetBankingOption : NSObject <FBPaymentsPaymentMethodOption> {

	NSArray* _bankList;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * bankList;                        //@synthesize bankList=_bankList - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * paymentMethodType; 
-(NSString *)paymentMethodType;
-(BOOL)doesPaymentMethodBelongToThisOption:(id)arg1 ;
-(BOOL)doesCoverOption:(id)arg1 ;
-(BOOL)hasOverlapWithOption:(id)arg1 ;
-(NSArray *)bankList;
-(id)initWithTitle:(id)arg1 bankList:(id)arg2 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
