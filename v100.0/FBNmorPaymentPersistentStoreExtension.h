/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPersistentStoreExtension.h>

@class NSString;

@interface FBNmorPaymentPersistentStoreExtension : NSObject <MNPaymentsPersistentStoreExtension>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extractExtraDataFromPayment:(id)arg1 ;
-(id)buildPaymentWithPaymentCoreData:(id)arg1 extraData:(id)arg2 ;
-(id)updatePaymentWithExistingPayment:(id)arg1 coreData:(id)arg2 extraData:(id)arg3 ;
@end

