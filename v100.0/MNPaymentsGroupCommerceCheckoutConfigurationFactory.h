/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPeerToPeerPaymentsCheckoutConfigurationFactory.h>

@protocol MNPaymentsPeerToPeerRiskStateMap, MNThreadMessageSenderPluginService, MNNavigationPluginService;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, MNCDNProfileImageDownloader, FBPaymentsPeerToPeerFetchController;

@interface MNPaymentsGroupCommerceCheckoutConfigurationFactory : MNPaymentsPeerToPeerPaymentsCheckoutConfigurationFactory {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsPINController* _pinController;
	FBPaymentsTouchIDController* _touchIDController;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<MNPaymentsPeerToPeerRiskStateMap> _riskStateMap;
	id<MNThreadMessageSenderPluginService> _threadMessageSenderService;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	id<MNNavigationPluginService> _navigationService;

}
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 pinController:(id)arg3 touchIDController:(id)arg4 riskStateMap:(id)arg5 threadMessageSenderService:(id)arg6 profileImageDownloader:(id)arg7 fetchController:(id)arg8 navigationService:(id)arg9 ;
-(id)newPeerToPeerPaymentsConfigurationWithCheckoutDataModel:(id)arg1 paymentRecipientDataSource:(id)arg2 ;
@end
