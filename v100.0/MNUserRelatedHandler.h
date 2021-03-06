/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactShareCardHandler.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMProfileURLUtils, MNSecureMessagingDeviceInformation;
@class MNNewThreadNavigationCoordinator, MNSecureMessagingServiceProvider, MNThreadNavigationCoordinator, FBAlertViewCoordinator, MNSecureMessagingDeviceStatusOverrideAlertHandler, MNBlockUserFullScreenViewController, MNNavigationCoordinator, NSString;

@interface MNUserRelatedHandler : NSObject <MNContactShareCardHandler, FBViewerContextClassProvidable> {

	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	id<FBMProfileURLUtils> _profileURLUtils;
	MNSecureMessagingServiceProvider* _secureMessagingProvider;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBAlertViewCoordinator* _alertViewCoordinator;
	MNSecureMessagingDeviceStatusOverrideAlertHandler* _secureDeviceStatusOverrideHandler;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInformation;
	MNBlockUserFullScreenViewController* _blockUserFullScreenViewController;
	MNNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_navigateToSecureThreadWithKey:(id)arg1 ;
-(id)initWithNewThreadNavigationCoordinator:(id)arg1 profileURLUtils:(id)arg2 secureMessagingProvider:(id)arg3 threadNavigationCoordinator:(id)arg4 alertViewCoordinator:(id)arg5 blockUserFullScreenViewController:(id)arg6 navigationCoordinator:(id)arg7 ;
-(void)_didFinishSecureDeviceStatusOverridePromptWithResponse:(BOOL)arg1 forOtherUserId:(id)arg2 ;
-(void)handleTapForCreateGroupWithUser:(id)arg1 ;
-(void)handleTapForViewTimeLineWithUser:(id)arg1 ;
-(void)handleTapForCreateSecretChat:(id)arg1 ;
-(void)handleTapForBlock:(id)arg1 fromViewController:(id)arg2 ;
@end

