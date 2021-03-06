/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAPNSPushEventHandling.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNPendingRequestsThreadListNavigationHandler, MNPushEventBackgroundFetchCompletionHandlerExecutor, FBMAllServicesInitializedDelayer, MNAPNSGroupJoinRequestHandler, MNAPNSMessageReactionHandler, MNDirectMNavigationCoordinator, MNInAppNotificationManager, FBImageDownloader, MNAPNSRoomShareRequestHandler, MNAPNSEventReminderPushHandler, NSString;

@interface MNPushEventHandler : NSObject <FBMAPNSPushEventHandling, FBViewerContextClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNPendingRequestsThreadListNavigationHandler* _pendingRequestsThreadListNavigationHandler;
	id<FBProvider> _inboxViewControllerProvider;
	MNPushEventBackgroundFetchCompletionHandlerExecutor* _backgroundFetchCompletionHandlerExecutor;
	FBMAllServicesInitializedDelayer* _servicesInitializedDelayer;
	MNAPNSGroupJoinRequestHandler* _groupJoinRequestHandler;
	MNAPNSMessageReactionHandler* _messageReactionPushHandler;
	MNDirectMNavigationCoordinator* _directMNavigationCoordinator;
	MNInAppNotificationManager* _inAppNotificationManager;
	FBImageDownloader* _imageDownloader;
	MNAPNSRoomShareRequestHandler* _roomShareRequestHandler;
	MNAPNSEventReminderPushHandler* _eventReminderPushHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessageReactionPushWitReaction:(id)arg1 launchedByUser:(BOOL)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 pendingRequestsThreadListNavigationHandler:(id)arg3 inboxViewControllerProvider:(id)arg4 backgroundFetchCompletionHandlerExecutor:(id)arg5 servicesInitializedDelayer:(id)arg6 groupJoinRequestHandler:(id)arg7 messageReactionPushHandler:(id)arg8 directMNavigationCoordinator:(id)arg9 inAppNotificationManager:(id)arg10 session:(id)arg11 roomShareRequestHandler:(id)arg12 eventReminderPushHandler:(id)arg13 ;
-(void)_navigateToThread:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleMessengerNotificationWithURL:(id)arg1 fetchCompletionHandler:(/*^block*/id)arg2 ;
-(void)_showPendingRequestsThreadListInInbox;
-(void)handleNewInstallUserNotificationForUserWithId:(id)arg1 launchedByUser:(BOOL)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleInactiveUserNotificationToInboxWithFetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleBadgeCountPush:(long long)arg1 fetchCompletionHandler:(/*^block*/id)arg2 ;
-(void)handleMessageRequestPushWithFetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleGroupJoinRequestPushWithGroupJoinRequest:(id)arg1 launchedByUser:(BOOL)arg2 actionIdentifier:(id)arg3 fetchCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleEventReminderPushWithEventReminder:(id)arg1 launchedByUser:(BOOL)arg2 handledCompletionBlock:(/*^block*/id)arg3 ;
-(void)handleMessengerNotificationForDirectMWithRoute:(id)arg1 message:(id)arg2 launchedByUser:(BOOL)arg3 fetchCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleRoomNotificationPushWithRoomNotificationType:(id)arg1 launchedByUser:(BOOL)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

