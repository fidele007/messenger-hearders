/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsCheckoutValidator.h>

@protocol MNNavigationPluginService, MNPaymentsUserPayableDataModel;
@class FBPaymentsPeerToPeerFetchController, FBUserSession, NSString, NSNumber, MNPaymentsPeerToPeerPaymentRecipientDataSource;

@interface MNPaymentsPeerToPeerCheckoutValidator : NSObject <FBPaymentsPeerToPeerFetchControllerListener, FBModalWebFlowDelegate, FBPaymentsCheckoutValidator> {

	id<MNNavigationPluginService> _navigationService;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBUserSession* _session;
	id<MNPaymentsUserPayableDataModel> _dataModel;
	NSString* _flowId;
	id _fetchToken;
	/*^block*/id _eligibilityCheckCompletionBlock;
	/*^block*/id _policyCheckCompletionBlock;
	NSNumber* _confirmationThresholdCurrencyAmount;
	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(void)configureWithFlowId:(id)arg1 dataModel:(id)arg2 ;
-(void)checkEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)checkPolicyWithCheckoutFlowCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_dispatchPolicyCheckResult:(BOOL)arg1 ;
-(void)_handleFetchControllerResponseNode:(id)arg1 ;
-(void)_dispatchEligibilityCheckResult:(BOOL)arg1 ;
-(void)_handleCannotSendMoney;
-(void)_showIneligibilityLearnMoreWeb;
-(id)initWithSession:(id)arg1 paymentRecipientDataSource:(id)arg2 fetchController:(id)arg3 navigationService:(id)arg4 ;
@end

