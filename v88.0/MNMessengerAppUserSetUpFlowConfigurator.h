/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpFlowConfigurator.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNMessengerAppUserSetUpFlowConfigurator : NSObject <MNUserSetUpFlowConfigurator, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	id<FBProvider> _pushRegistrarProvider;
	id<FBProvider> _userSettingsProvider;
	id<FBProvider> _userSetUpPersisterProvider;
	id<FBProvider> _loggedInUserInfoMangerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_loggedInUserInfoManger;
-(id)_loggedInUser;
-(id)initWithUserSession:(id)arg1 configManager:(id)arg2 pushRegistrarProvider:(id)arg3 userSettingsProvider:(id)arg4 userSetUpPersisterProvider:(id)arg5 loggedInUserInfoManagerProvider:(id)arg6 ;
-(id)_userSetUpPersister;
-(BOOL)_isLoggedInUserPartial;
-(BOOL)_shouldShowPhoneEntryStep;
-(BOOL)_shouldShowRequirePushStep;
-(BOOL)_shouldShowRequestCIStep;
-(BOOL)_shouldShowPaymentsStep;
-(BOOL)_shouldShowWelcomeStep;
-(BOOL)_shouldScheduleContactSyncReminderNotification;
-(BOOL)_shouldShowContactSyncRequestStepDisclaimerText;
-(BOOL)_shouldShowInviteFriendsStep;
-(id)configuration;
@end

