/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

