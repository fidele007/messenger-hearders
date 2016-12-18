/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBusinessSignupConfirmationCodeFormControllerDelegate.h>
#import <Messenger/MNBusinessSignupConfirmationCodeChangePhoneNumberTextViewDelegate.h>
#import <Messenger/MNBusinessSignupPhoneConfirmationRequesterDelegate.h>

@protocol MNBusinessSignupConfirmationCodeViewControllerDelegate;
@class LPPhoneNumber, MNBusinessSignupConfirmationCodeView, MNStackedContainerController, MNBusinessSignupConfirmationCodeFormController, FBImageDownloader, FBAnalytics, FBUserSession, MNBusinessSignupPhoneConfirmationRequester, NSString;

@interface MNBusinessSignupConfirmationCodeViewController : UIViewController <MNBusinessSignupConfirmationCodeFormControllerDelegate, MNBusinessSignupConfirmationCodeChangePhoneNumberTextViewDelegate, MNBusinessSignupPhoneConfirmationRequesterDelegate> {

	LPPhoneNumber* _phoneNumber;
	MNBusinessSignupConfirmationCodeView* _confirmationCodeView;
	MNStackedContainerController* _stackedContainerController;
	MNBusinessSignupConfirmationCodeFormController* _confirmationCodeFormController;
	FBImageDownloader* _imageDownloader;
	FBAnalytics* _analytics;
	FBUserSession* _session;
	MNBusinessSignupPhoneConfirmationRequester* _phoneConfirmationRequester;
	id<MNBusinessSignupConfirmationCodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupConfirmationCodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resendCodeButtonPressed;
-(void)changePhoneNumberButtonPressed;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFinishConfirmationRequest:(BOOL)arg2 ;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFailConfirmationRequestWithError:(id)arg2 ;
-(void)businessSignupPhoneConfirmationRequesterDidFinishCodeSubmission:(id)arg1 ;
-(void)businessSignupPhoneConfirmationRequester:(id)arg1 didFailCodeSubmissionWithError:(id)arg2 ;
-(void)businessSignupConfirmationCodeFormController:(id)arg1 didReceiveConfirmationCodeInput:(id)arg2 ;
-(id)initWithPhoneNumber:(id)arg1 imageDownloader:(id)arg2 analytics:(id)arg3 session:(id)arg4 ;
-(void)setDelegate:(id<MNBusinessSignupConfirmationCodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNBusinessSignupConfirmationCodeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

