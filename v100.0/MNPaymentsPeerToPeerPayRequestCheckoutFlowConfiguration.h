/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentsCheckoutConfiguration.h>

@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, MNCDNProfileImageDownloader, MNPaymentsPeerToPeerPaymentRecipientDataSource, NSString;

@interface MNPaymentsPeerToPeerPayRequestCheckoutFlowConfiguration : MNPaymentsPeerToPeerPaymentsCheckoutConfiguration {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;
	NSString* _requestMemoText;
	NSString* _requestId;

}
-(id)checkoutFlowOtherButtonActionHandler;
-(id)contentConfiguration;
-(id)initWithSession:(id)arg1 payableDataModel:(id)arg2 paymentMethodsCoordinator:(id)arg3 pinController:(id)arg4 touchIDController:(id)arg5 riskStateMap:(id)arg6 threadMessageSenderService:(id)arg7 profileImageDownloader:(id)arg8 fetchController:(id)arg9 navigationService:(id)arg10 paymentRecipientDataSource:(id)arg11 ;
@end

