/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNRegistrationConfirmationCodeFormControllerDelegate.h>
#import <Messenger/MNRegistrationPhoneConfirmationCodeRequestSenderDelegate.h>
#import <Messenger/MNRegistrationPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate.h>

@protocol MNRegistrationPhoneConfirmationCodeRequestSending, MNRegistrationConfirmationCodeViewControllerDelegate;
@class MNRegistrationConfirmationCodeView, MNStackedContainerController, MNRegistrationConfirmationCodeFormController, MNRegistrationConfirmationCodeVerificationRequestSender, MNRegistrationPhoneVerificationRequestSender, MNRegistrationAccountRecoveryIdFetcher, LPPhoneNumber, FBAnalytics, NSString;

@interface MNRegistrationConfirmationCodeViewController : UIViewController <MNRegistrationConfirmationCodeFormControllerDelegate, MNRegistrationPhoneConfirmationCodeRequestSenderDelegate, MNRegistrationPhoneVerificationRequestSenderDelegate, MNRegistrationConfirmationCodeChangePhoneNumberTextViewDelegate> {

	MNRegistrationConfirmationCodeView* _confirmationCodeView;
	MNStackedContainerController* _stackedContainerController;
	MNRegistrationConfirmationCodeFormController* _confirmationCodeFormController;
	MNRegistrationConfirmationCodeVerificationRequestSender* _confirmationCodeVerificationRequestSender;
	MNRegistrationPhoneVerificationRequestSender* _phoneVerificationRequestSender;
	MNRegistrationAccountRecoveryIdFetcher* _accountRecoveryIdFetcher;
	LPPhoneNumber* _phoneNumber;
	FBAnalytics* _analytics;
	BOOL _shouldAllowChangingPhoneNumber;
	/*^block*/id _phoneConfirmationCodeRequestSendingFactory;
	id<MNRegistrationPhoneConfirmationCodeRequestSending> _phoneConfirmationCodeRequestSender;
	id<MNRegistrationConfirmationCodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRegistrationConfirmationCodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resendCodeButtonPressed;
-(void)_startLoadingIndicator;
-(void)_startConfirmationCodeVerificationRequestWithConfirmationCode:(id)arg1 accountRecoveryId:(id)arg2 ;
-(void)_stopLoadingIndicator;
-(void)registrationConfirmationCodeFormController:(id)arg1 didReceiveConfirmationCodeInput:(id)arg2 ;
-(void)registrationPhoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)registrationPhoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)changePhoneNumberButtonPressed;
-(id)initWithAccountRecoveryIdFetcher:(id)arg1 phoneNumber:(id)arg2 analytics:(id)arg3 phoneConfirmationCodeRequestSendingFactory:(/*^block*/id)arg4 shouldAllowChangingPhoneNumber:(BOOL)arg5 ;
-(void)confirmationCodeRequestSender:(id)arg1 didFinishVerificationForPhoneNumber:(id)arg2 confirmationCode:(id)arg3 matchedExistingAccounts:(id)arg4 ;
-(void)confirmationCodeRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDelegate:(id<MNRegistrationConfirmationCodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRegistrationConfirmationCodeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

