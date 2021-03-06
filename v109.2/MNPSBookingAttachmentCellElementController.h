/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNDefaultAttachmentCellElementController.h>
#import <Messenger/MNPSBookingCTAHandlerDelegate.h>

@protocol MNNavigationPluginService, FBIntentHandler, FBServicesNavigationCoordinator;
@class FBUserSession, FBTransientViewStateManager;

@interface MNPSBookingAttachmentCellElementController : MNDefaultAttachmentCellElementController <MNPSBookingCTAHandlerDelegate> {

	FBUserSession* _session;
	id<MNNavigationPluginService> _navigationService;
	id<FBIntentHandler> _intentHandler;
	id<FBServicesNavigationCoordinator> _navigationCoordinator;
	FBTransientViewStateManager* _viewStateManager;

}

@property (nonatomic,retain) FBTransientViewStateManager * viewStateManager;              //@synthesize viewStateManager=_viewStateManager - In the implementation block
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(FBTransientViewStateManager *)viewStateManager;
-(void)didTapInlineCTA;
-(void)didFinishUpdateBookingAppt:(BOOL)arg1 ;
-(id)initWithUserSession:(id)arg1 navigationService:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 ;
-(void)setViewStateManager:(FBTransientViewStateManager *)arg1 ;
@end

