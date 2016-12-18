/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBusinessSignupPhoneNumberTextFieldControllerDelegate.h>
#import <Messenger/MNBusinessSignupPhoneNumberViewDelegate.h>
#import <Messenger/MNBusinessSignupCountryCodesViewControllerDelegate.h>
#import <Messenger/MNBusinessSignupPhoneConfirmationRequesterDelegate.h>

@protocol MNBusinessSignupPhoneNumberViewControllerDelegate;
@class MNBusinessSignupPhoneNumberView, MNStackedContainerController, MNBusinessSignupPhoneNumberTextFieldController, FBLocaleMap, LPPhoneNumberFactory, FBAnalytics, FBUserSession, MNBusinessSignupPhoneConfirmationRequester, NSString;

@interface MNBusinessSignupPhoneNumberViewController : UIViewController <MNBusinessSignupPhoneNumberTextFieldControllerDelegate, MNBusinessSignupPhoneNumberViewDelegate, MNBusinessSignupCountryCodesViewControllerDelegate, MNBusinessSignupPhoneConfirmationRequesterDelegate> {

	MNBusinessSignupPhoneNumberView* _registrationPhoneNumberView;
	MNStackedContainerController* _stackedContainerController;
	MNBusinessSignupPhoneNumberTextFieldController* _phoneNumberTextFieldController;
	FBLocaleMap* _localeMap;
	LPPhoneNumberFactory* _phoneNumberFactory;
	FBAnalytics* _analytics;
	FBUserSession* _session;
	MNBusinessSignupPhoneConfirmationRequester* _phoneConfirmationRequester;
	id<MNBusinessSignupPhoneNumberViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)phoneNumberTextFieldController:(id)arg1 didChangeCountryTo:(id)arg2 ;
-(void)_showIncorrectPhoneNumberAlertView;
-(void)_continueButtonPressed;
-(void)didSelectCountryCode:(id)arg1 countryName:(id)arg2 ;
-(void)businessSignupPhoneNumberViewDidTapCountryCodeButton:(id)arg1 ;
-(void)businessSignupPhoneNumberViewDidPressKeyboardReturnButton:(id)arg1 ;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFinishConfirmationRequest:(BOOL)arg2 ;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFailConfirmationRequestWithError:(id)arg2 ;
-(void)businessSignupPhoneConfirmationRequesterDidFinishCodeSubmission:(id)arg1 ;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFailCodeSubmissionWithError:(id)arg2 ;
-(id)initWithLocaleMap:(id)arg1 analytics:(id)arg2 session:(id)arg3 ;
-(void)setDelegate:(id<MNBusinessSignupPhoneNumberViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNBusinessSignupPhoneNumberViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

