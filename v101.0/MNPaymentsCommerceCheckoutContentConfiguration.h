/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutContentConfiguration.h>

@class FBUserSession, FBPaymentsPINController, FBPaymentsTouchIDController, FBMemPeerToPeerPlatformContext, NSString;

@interface MNPaymentsCommerceCheckoutContentConfiguration : NSObject <FBPaymentsCheckoutContentConfiguration> {

	FBUserSession* _session;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	FBMemPeerToPeerPlatformContext* _platformContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerViewModelCreator;
-(id)purchaseInfoExtensionDescriptors;
-(id)payActionContentProvider;
-(id)priceDetails;
-(id)headerViewFactory;
-(id)initWithSession:(id)arg1 pinController:(id)arg2 touchIDController:(id)arg3 platformContext:(id)arg4 ;
@end

