/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNConfirmPhoneViewDelegate.h>
#import <Messenger/MNPhoneVerificationRequestSenderDelegate.h>
#import <Messenger/MNPhoneVerificationConfirmationSenderDelegate.h>

@protocol MNConfirmPhoneViewControllerDelegate;
@class MNMatchedSMSBridgeThreadFetcher, MNConfirmPhoneView, MNPhoneVerificationConfirmationSender, MNPhoneVerificationRequestSender, MNUserSetUpStatePersister, LPPhoneNumber, FBUserSession, NSString;

@interface MNConfirmPhoneViewController : UIViewController <MNConfirmPhoneViewDelegate, MNPhoneVerificationRequestSenderDelegate, MNPhoneVerificationConfirmationSenderDelegate> {

	MNMatchedSMSBridgeThreadFetcher* _matchedSMSBridgeThreadFetcher;
	BOOL _skippable;
	id<MNConfirmPhoneViewControllerDelegate> _delegate;
	MNConfirmPhoneView* _confirmPhoneView;
	MNPhoneVerificationConfirmationSender* _confirmationCodeSender;
	MNPhoneVerificationRequestSender* _confirmationCodeRequest;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	LPPhoneNumber* _phoneNumber;
	FBUserSession* _session;

}

@property (nonatomic,retain) MNConfirmPhoneView * confirmPhoneView;                                       //@synthesize confirmPhoneView=_confirmPhoneView - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationConfirmationSender * confirmationCodeSender;              //@synthesize confirmationCodeSender=_confirmationCodeSender - In the implementation block
@property (nonatomic,retain) MNPhoneVerificationRequestSender * confirmationCodeRequest;                  //@synthesize confirmationCodeRequest=_confirmationCodeRequest - In the implementation block
@property (nonatomic,retain) MNUserSetUpStatePersister * userSetUpStatePersister;                         //@synthesize userSetUpStatePersister=_userSetUpStatePersister - In the implementation block
@property (nonatomic,retain) LPPhoneNumber * phoneNumber;                                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<MNConfirmPhoneViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skippable;                                                              //@synthesize skippable=_skippable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showAlertViewForError:(id)arg1 ;
+(void)showSMSSentAlertWithNumber:(id)arg1 ;
-(MNUserSetUpStatePersister *)userSetUpStatePersister;
-(id)analyticsModule;
-(void)changePhoneNumberButtonTapped;
-(void)continueButtonTapped;
-(void)skipThisStepButtonTapped;
-(void)resendCodeButtonTapped;
-(void)_logAnalyticsIfInvalidPhoneNumber:(id)arg1 ;
-(void)_sendConfirmPhoneRequest;
-(void)_completePhoneVerification:(id)arg1 ;
-(void)phoneVerificationRequestSenderDidFinish:(id)arg1 ;
-(void)phoneVerificationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 userSetUpStatePersister:(id)arg2 phoneNumber:(id)arg3 matchedSMSBridgeThreadFetcher:(id)arg4 ;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)skippable;
-(MNConfirmPhoneView *)confirmPhoneView;
-(void)setConfirmPhoneView:(MNConfirmPhoneView *)arg1 ;
-(MNPhoneVerificationConfirmationSender *)confirmationCodeSender;
-(void)setConfirmationCodeSender:(MNPhoneVerificationConfirmationSender *)arg1 ;
-(MNPhoneVerificationRequestSender *)confirmationCodeRequest;
-(void)setConfirmationCodeRequest:(MNPhoneVerificationRequestSender *)arg1 ;
-(void)phoneVerificationConfirmationSenderDidConfirm:(id)arg1 ;
-(void)phoneVerificationConfirmationSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setUserSetUpStatePersister:(MNUserSetUpStatePersister *)arg1 ;
-(void)setDelegate:(id<MNConfirmPhoneViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNConfirmPhoneViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(LPPhoneNumber *)phoneNumber;
-(void)setPhoneNumber:(LPPhoneNumber *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

