/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsPasscodeFeedbackViewDelegate.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsConnectionStatusProviding;
@class FBPaymentsPasscodeView, NSString, NSDictionary, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsPasscodeViewController : UIViewController <FBPaymentsPasscodeFeedbackViewDelegate, FBPaymentsUpdateListener, FBPaymentsEventAnnouncing> {

	FBPaymentsPasscodeView* _feedbackView;
	/*^block*/id _completion;
	NSString* _passcodesToBeConfirmed;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusService;
	NSDictionary* _extra;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	long long _presentingMode;

}

@property (nonatomic,readonly) long long presentingMode;                   //@synthesize presentingMode=_presentingMode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(long long)presentingMode;
-(void)_onCancel:(id)arg1 ;
-(void)passcodeFeedbackView:(id)arg1 didFinishWithInputText:(id)arg2 ;
-(void)passcodeFeedbackViewDidTapDescriptionText:(id)arg1 ;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(void)_resetFeedbackViewAndInput;
-(void)_dispatchCompletionWithCancel;
-(void)_handleAuthenticationWorkflowWithInputText:(id)arg1 ;
-(void)_handleConfigurationWorkflowWithInputText:(id)arg1 ;
-(void)_dispatchCompletionWithReset;
-(void)_dispatchCompletionWithInputText:(id)arg1 ;
-(void)_presentConfirmFeedbackViewForConfigurationWorkflow;
-(void)_presentInitialFeedbackViewForConfigurationWorkflow;
-(id)initWithPresentingMode:(long long)arg1 connectionStatusService:(id)arg2 extra:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)shakeFeedbackAndResetInputWithErrorMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingIndicator;
@end
