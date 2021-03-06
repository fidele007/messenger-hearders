/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, NSMutableDictionary, NSString;

@interface MNThreadDetailsActionsControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	NSMutableDictionary* _instances;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)navigationCoordinator;
-(id)threadNavigationCoordinator;
-(id)gameListPresenter;
-(id)intentHandler;
-(id)threadImageManager;
-(id)profileImageViewController;
-(id)performanceMarker;
-(id)inviteEligibilityChecker;
-(id)inviteSender;
-(id)messageRequestActionController;
-(id)avatarImageDecorator;
-(id)callStarter;
-(id)newThreadNavigationCoordinator;
-(id)confirmationViewPresenter;
-(id)ephemeralMessagePolicy;
-(id)threadDetailsPageConfiguration;
-(id)userInfoControllerCoordinator;
-(id)alertViewCoordinator;
-(id)eventsReminderActionHandler;
-(id)nonCachedThreadCustomizationModalPickerController;
-(id)nonCachedThreadPhotosViewController;
-(id)nonCachedThreadPhotoEditController;
-(id)profileURLUtils;
-(id)loggedInUserInfoManager;
-(id)localeMap;
-(id)authMgr;
-(id)callButtonImageProvider;
-(id)nonCachedAddMembersViewController;
-(id)nonCachedBlockUserFullScreenViewController;
-(id)nonCachedEphemeralitySetter;
-(id)nonCachedMessageLifeTimePicker;
-(id)nonCachedMultiContactAdditionController;
-(id)nonCachedNicknameViewController;
-(id)nonCachedSecureMessagingProvider;
-(id)nonCachedSecureThreadServiceControlling;
-(id)presenceService;
-(id)roomsReportingManager;
-(id)threadSummaryUpdateService;
-(id)blockFeatureConfiguration;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)configManager;
-(id)clock;
-(id)nameFormatter;
-(id)session;
@end

