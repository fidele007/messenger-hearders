/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/MNServiceControllable.h>

@protocol MNPresenceSubscribing, MNPresenceUpdateListening, OS_dispatch_queue, MNThreadListViewModelAdditionalPageRequesting, MNGroupsRoomSuggestionsRefreshing;
@class MNThreadListViewModelSubscriptionServiceDependencies, MNGroupsRoomsModelController, NSObject, MNThreadStore, MNThreadListViewModelSubscriptionService, MNModelSubscriptionProvider, NSString;

@interface MNGroupsViewModelSubscriptionService : NSObject <MNServiceControllable> {

	MNThreadListViewModelSubscriptionServiceDependencies* _threadListServiceDependencies;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	id<MNPresenceUpdateListening> _presenceUpdateListener;
	MNGroupsRoomsModelController* _roomsModelController;
	NSObject*<OS_dispatch_queue> _queue;
	MNThreadStore* _threadStore;
	MNThreadListViewModelSubscriptionService* _groupsThreadListSubscriptionService;
	MNThreadListViewModelSubscriptionService* _roomsThreadListSubscriptionService;
	mutex _setupMutex;
	MNModelSubscriptionProvider* _provider;
	id<MNThreadListViewModelAdditionalPageRequesting> _additionalGroupThreadsRequester;
	id<MNThreadListViewModelAdditionalPageRequesting> _additionalRoomThreadsRequester;
	id<MNGroupsRoomSuggestionsRefreshing> _roomSuggestionsRefresher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)roomSuggestionsRefresher;
-(id)additionalPageRequesterForSubscriptionServiceTypePrimary:(long long)arg1 ;
-(id)initWithThreadListServiceDependencies:(id)arg1 handlerChainManager:(id)arg2 roomsModelController:(id)arg3 presenceSubscriptionService:(id)arg4 ;
-(void)_setUpSubscriptionProvider;
-(void)_tearDownSubscriptionProvider;
-(void)handleIdle;
-(void)stop;
-(id)provider;
-(void)start:(id)arg1 ;
@end

