/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAPNSPushEventHandling.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNPendingRequestsThreadListNavigationHandler, MNPushEventBackgroundFetchCompletionHandlerExecutor, FBMAllServicesInitializedDelayer, MNBadgeCountEventTracker, MNAPNSGroupJoinRequestHandler, NSString;

@interface MNPushEventHandler : NSObject <FBMAPNSPushEventHandling, FBViewerContextClassProvidable> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNPendingRequestsThreadListNavigationHandler* _pendingRequestsThreadListNavigationHandler;
	id<FBProvider> _inboxViewControllerProvider;
	MNPushEventBackgroundFetchCompletionHandlerExecutor* _backgroundFetchCompletionHandlerExecutor;
	FBMAllServicesInitializedDelayer* _servicesInitializedDelayer;
	MNBadgeCountEventTracker* _badgeCountEventTracker;
	MNAPNSGroupJoinRequestHandler* _groupJoinRequestHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 pendingRequestsThreadListNavigationHandler:(id)arg3 inboxViewControllerProvider:(id)arg4 backgroundFetchCompletionHandlerExecutor:(id)arg5 servicesInitializedDelayer:(id)arg6 groupJoinRequestHandler:(id)arg7 ;
-(void)_navigateToThread:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showPendingRequestsThreadListInInbox;
-(void)handleNewInstallUserNotificationForUserWithId:(id)arg1 launchedByUser:(BOOL)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleInactiveUserNotificationToInboxWithFetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleMessengerNotificationWithURL:(id)arg1 fetchCompletionHandler:(/*^block*/id)arg2 ;
-(void)handleBadgeCountPush:(long long)arg1 fetchCompletionHandler:(/*^block*/id)arg2 ;
-(void)handleMessageRequestPushWithFetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleGroupJoinRequestPushWithGroupJoinRequest:(id)arg1 launchedByUser:(BOOL)arg2 actionIdentifier:(id)arg3 fetchCompletionHandler:(/*^block*/id)arg4 ;
@end
