/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol FBClock, FBMProfileURLUtils, MNAuthenticationManager, MNInviteEligibilityChecking, MNAvatarImageDecorating, MNPerformanceMarking;
@class FBProviderMapData, FBAlertViewCoordinator, FBUserSession, FBMLoggedInUserInfoManager, FBWebRTCCallStarter, FBWebRTCCallButtonImageProvider, FBMobileConfigContextManager, MNInviteSender, MNProfileImageViewController, MNThreadImageManager, MNPresenceSubscriptionService, MNThreadUpdateRunningService, MNNavigationCoordinator, MNNewThreadNavigationCoordinator, MNThreadNavigationCoordinator, MNIntentHandler, MNUserInfoControllerCoordinator, MNThreadDetailsPageConfiguration, MNBlockFeatureConfiguration, MNEphemeralMessagePolicy, MNEventsReminderActionHandler, NSString;

@interface MNThreadDetailsActionsControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBAlertViewCoordinator* _alertViewCoordinator;
	FBUserSession* _session;
	id<FBClock> _clock;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	id<FBMProfileURLUtils> _profileURLUtils;
	FBWebRTCCallStarter* _callStarter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBMobileConfigContextManager* _configManager;
	id<MNAuthenticationManager> _authMgr;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNInviteSender* _inviteSender;
	id<MNAvatarImageDecorating> _avatarImageDecorator;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNPresenceSubscriptionService* _presenceService;
	MNThreadUpdateRunningService* _threadSummaryUpdateService;
	MNNavigationCoordinator* _navigationCoordinator;
	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNIntentHandler* _intentHandler;
	MNUserInfoControllerCoordinator* _userInfoControllerCoordinator;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfiguration;
	MNBlockFeatureConfiguration* _blockFeatureConfiguration;
	MNEphemeralMessagePolicy* _ephemeralMessagePolicy;
	id<MNPerformanceMarking> _performanceMarker;
	MNEventsReminderActionHandler* _eventsReminderActionHandler;

}

@property (nonatomic,readonly) FBAlertViewCoordinator * alertViewCoordinator;                                  //@synthesize alertViewCoordinator=_alertViewCoordinator - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBClock> clock;                                                              //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                           //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) id<FBMProfileURLUtils> profileURLUtils;                                         //@synthesize profileURLUtils=_profileURLUtils - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallStarter * callStarter;                                              //@synthesize callStarter=_callStarter - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallButtonImageProvider * callButtonImageProvider;                      //@synthesize callButtonImageProvider=_callButtonImageProvider - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                   //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) id<MNAuthenticationManager> authMgr;                                            //@synthesize authMgr=_authMgr - In the implementation block
@property (nonatomic,readonly) id<MNInviteEligibilityChecking> inviteEligibilityChecker;                       //@synthesize inviteEligibilityChecker=_inviteEligibilityChecker - In the implementation block
@property (nonatomic,readonly) MNInviteSender * inviteSender;                                                  //@synthesize inviteSender=_inviteSender - In the implementation block
@property (nonatomic,readonly) id<MNAvatarImageDecorating> avatarImageDecorator;                               //@synthesize avatarImageDecorator=_avatarImageDecorator - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                      //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                      //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) MNPresenceSubscriptionService * presenceService;                                //@synthesize presenceService=_presenceService - In the implementation block
@property (nonatomic,readonly) MNThreadUpdateRunningService * threadSummaryUpdateService;                      //@synthesize threadSummaryUpdateService=_threadSummaryUpdateService - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNNewThreadNavigationCoordinator * newThreadNavigationCoordinator;              //@synthesize newThreadNavigationCoordinator=_newThreadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                    //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNIntentHandler * intentHandler;                                                //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) MNUserInfoControllerCoordinator * userInfoControllerCoordinator;                //@synthesize userInfoControllerCoordinator=_userInfoControllerCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadDetailsPageConfiguration * threadDetailsPageConfiguration;              //@synthesize threadDetailsPageConfiguration=_threadDetailsPageConfiguration - In the implementation block
@property (nonatomic,readonly) MNBlockFeatureConfiguration * blockFeatureConfiguration;                        //@synthesize blockFeatureConfiguration=_blockFeatureConfiguration - In the implementation block
@property (nonatomic,readonly) MNEphemeralMessagePolicy * ephemeralMessagePolicy;                              //@synthesize ephemeralMessagePolicy=_ephemeralMessagePolicy - In the implementation block
@property (nonatomic,readonly) id<MNPerformanceMarking> performanceMarker;                                     //@synthesize performanceMarker=_performanceMarker - In the implementation block
@property (nonatomic,readonly) MNEventsReminderActionHandler * eventsReminderActionHandler;                    //@synthesize eventsReminderActionHandler=_eventsReminderActionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(id<MNPerformanceMarking>)performanceMarker;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(MNInviteSender *)inviteSender;
-(MNNewThreadNavigationCoordinator *)newThreadNavigationCoordinator;
-(FBWebRTCCallStarter *)callStarter;
-(id<MNInviteEligibilityChecking>)inviteEligibilityChecker;
-(MNThreadDetailsPageConfiguration *)threadDetailsPageConfiguration;
-(MNUserInfoControllerCoordinator *)userInfoControllerCoordinator;
-(MNEphemeralMessagePolicy *)ephemeralMessagePolicy;
-(FBAlertViewCoordinator *)alertViewCoordinator;
-(MNEventsReminderActionHandler *)eventsReminderActionHandler;
-(id)nonCachedThreadPhotosViewController;
-(id)nonCachedThreadCustomizationModalPickerController;
-(id)nonCachedThreadPhotoEditController;
-(MNIntentHandler *)intentHandler;
-(id)nonCachedMessageLifeTimePicker;
-(id)nonCachedSecureMessagingProvider;
-(id<MNAuthenticationManager>)authMgr;
-(MNThreadUpdateRunningService *)threadSummaryUpdateService;
-(id)nonCachedBlockUserFullScreenViewController;
-(id)nonCachedAddMembersViewController;
-(id<FBMProfileURLUtils>)profileURLUtils;
-(id)nonCachedMultiContactAdditionController;
-(id)nonCachedNicknameViewController;
-(id)nonCachedSecureMessageIdentityKeyViewController;
-(id)nonCachedEphemeralitySetter;
-(MNPresenceSubscriptionService *)presenceService;
-(FBWebRTCCallButtonImageProvider *)callButtonImageProvider;
-(id<MNAvatarImageDecorating>)avatarImageDecorator;
-(MNBlockFeatureConfiguration *)blockFeatureConfiguration;
-(id<FBClock>)clock;
-(FBUserSession *)session;
@end
