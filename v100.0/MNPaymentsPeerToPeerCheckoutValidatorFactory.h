/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerValidatorFactory.h>

@protocol MNNavigationPluginService;
@class FBUserSession, FBPaymentsPeerToPeerFetchController, MNPaymentsPeerToPeerPaymentRecipientDataSource, NSString;

@interface MNPaymentsPeerToPeerCheckoutValidatorFactory : NSObject <FBPaymentsPeerToPeerValidatorFactory> {

	FBUserSession* _session;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	id<MNNavigationPluginService> _navigationService;
	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newCheckoutValidator;
-(id)initWithSession:(id)arg1 paymentRecipientDataSource:(id)arg2 fetchController:(id)arg3 navigationService:(id)arg4 ;
@end
