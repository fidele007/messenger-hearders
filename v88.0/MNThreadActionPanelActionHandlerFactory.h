/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNThreadActionPerformer, MNAuthenticationManager, FBProvider;
@class UIView, FBAnalytics, FBAlertViewCoordinator, FBActionSheetCoordinator, MNThreadMutePicker, FBUserSession, MNNavigationCoordinator, MNIntentHandler, NSString;

@interface MNThreadActionPanelActionHandlerFactory : NSObject <FBClassProvidable> {

	id<MNThreadActionPerformer> _threadActionPerformer;
	UIView* _presentingView;
	FBAnalytics* _analytics;
	FBAlertViewCoordinator* _alertViewCoordinator;
	FBActionSheetCoordinator* _actionSheetCoordinator;
	id<MNAuthenticationManager> _authManager;
	MNThreadMutePicker* _mutePicker;
	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	MNIntentHandler* _intentHandler;
	id<FBProvider> _blockUserVCProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)handlerForConfiguration:(id)arg1 ;
-(void)configureWithThreadActionPerformer:(id)arg1 presentingView:(id)arg2 ;
-(id)initWithAnalytics:(id)arg1 alertViewCoordinator:(id)arg2 actionSheetCoordinator:(id)arg3 authManager:(id)arg4 session:(id)arg5 threadParticipantFilter:(id)arg6 navigationCoordinator:(id)arg7 intentHandler:(id)arg8 loggedInUserInfoManager:(id)arg9 blockUserVCProvider:(id)arg10 blockFeatureConfiguration:(id)arg11 ;
@end
