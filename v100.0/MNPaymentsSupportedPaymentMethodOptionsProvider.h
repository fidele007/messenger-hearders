/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSupportedPaymentMethodOptionsProviding.h>

@class NSArray, FBPaymentsUpdateListenerAnnouncer, MNPaymentsBillingCountryProvider, NSString;

@interface MNPaymentsSupportedPaymentMethodOptionsProvider : NSObject <FBPaymentsSupportedPaymentMethodOptionsProviding> {

	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	MNPaymentsBillingCountryProvider* _billingCountryProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBPaymentsBillingCountryProviding> billingCountryProvider;              //@synthesize billingCountryProvider=_billingCountryProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedPaymentMethodOptions; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)setBillingCountryProvider:(id<FBPaymentsBillingCountryProviding>)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(NSArray *)supportedPaymentMethodOptions;
-(long long)dataLoadingStatus;
-(id<FBPaymentsBillingCountryProviding>)billingCountryProvider;
-(BOOL)setBillingCountryCode:(id)arg1 ;
-(void)loadDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
@end

