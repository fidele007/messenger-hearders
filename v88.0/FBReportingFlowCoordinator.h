/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReportingFlowConfigProviderDelegateProtocol.h>
#import <Messenger/FBReportingFlowGuidedActionDispatchingDelegateProtocol.h>
#import <Messenger/FBAvatarPickerControllerDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/FBReportingFlowCoordinatorDelegateProtocol.h>

@protocol FBReportingFlowConfigProviderProtocol, FBReportingFlowGuidedActionDispatchingProtocol;
@class FBUserSession, NSString, UINavigationController, FBUniversalFeedbackController, FBReportingFlowResponseModel;

@interface FBReportingFlowCoordinator : NSObject <FBReportingFlowConfigProviderDelegateProtocol, FBReportingFlowGuidedActionDispatchingDelegateProtocol, FBAvatarPickerControllerDelegate, FBModalWebFlowDelegate, UINavigationControllerDelegate, FBReportingFlowCoordinatorDelegateProtocol> {

	FBUserSession* _userSession;
	NSString* _counterpartyUID;
	NSString* _location;
	NSString* _reportableNodeID;
	id<FBReportingFlowConfigProviderProtocol> _configProvider;
	UINavigationController* _navigationController;
	id<FBReportingFlowGuidedActionDispatchingProtocol> _guidedActionDispatcher;
	long long _previousStatusBarStyle;
	FBUniversalFeedbackController* _ufController;
	FBReportingFlowResponseModel* _lastPerformedAction;
	BOOL _didPerformReportAction;
	BOOL _didPerformRedirectAction;
	int _uiPresentationStyle;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic) int uiPresentationStyle;               //@synthesize uiPresentationStyle=_uiPresentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDismissBlock:(id)arg1 ;
-(id)dismissBlock;
-(void)logReportingFlowEvent:(id)arg1 ;
-(BOOL)_shouldShowUniversalFeedback;
-(void)_messageWasSentForGuidedAction:(id)arg1 ;
-(void)_webViewControllerDidClose;
-(void)dismissReportingFlow;
-(void)_showErrorAlertView:(id)arg1 description:(id)arg2 ;
-(void)didFetchPromptModel:(id)arg1 ;
-(void)didFail;
-(void)actionDidSucceed;
-(void)actionDidFail:(id)arg1 description:(id)arg2 ;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(void)loadNewBranchForDetailedResponse:(id)arg1 ;
-(void)performGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performMessageGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 targetFBID:(id)arg3 message:(id)arg4 ;
-(void)loadMessageComposer:(id)arg1 ;
-(void)showAvatarPicker;
-(id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 nodeID:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 location:(id)arg2 nodeID:(id)arg3 ;
-(id)viewControllerForReportingFlow;
-(int)uiPresentationStyle;
-(void)setUiPresentationStyle:(int)arg1 ;
-(void)redirectToURL:(id)arg1 ;
-(int)presentationStyle;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_dismiss;
-(id)dismissButtonTitle;
@end

