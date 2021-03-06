/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@protocol OS_dispatch_queue;
@class MNRoomsTabUpdatesManagerInjector, MNRoomsTabUpdatesRefreshListenerAnnouncer, MNRoomsTabUpdatesBadgeUpdateListenerAnnouncer, NSObject, NSArray, NSString;

@interface MNRoomsTabUpdatesManager : NSObject <FBClassInjectable> {

	MNRoomsTabUpdatesManagerInjector* _injector;
	MNRoomsTabUpdatesRefreshListenerAnnouncer* _roomsTabUpdatesRefreshAnnouncer;
	MNRoomsTabUpdatesBadgeUpdateListenerAnnouncer* _roomsTabBadgeUpdateAnnouncer;
	BOOL _refreshingRoomsTabUpdates;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _cachedRoomUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * cachedRoomUpdates;              //@synthesize cachedRoomUpdates=_cachedRoomUpdates - In the implementation block
+(Class)injectorClass;
-(void)addRoomsTabBadgeUpdateListener:(id)arg1 ;
-(void)removeRoomsTabBadgeUpdateListener:(id)arg1 ;
-(void)refreshRoomsTabUpdatesWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAllRoomsTabUpdatesAsSeen;
-(void)dismissAllRoomTabUpdates;
-(void)addNewRoomsTabUpdate:(id)arg1 ;
-(NSArray *)cachedRoomUpdates;
-(void)addRoomsTabUpdatesListener:(id)arg1 ;
-(void)removeRoomsTabUpdatesListener:(id)arg1 ;
-(void)_refreshRoomSuggestionWithQueue:(id)arg1 ;
-(void)_refreshRoomCreationSuggestionWithQueue:(id)arg1 ;
-(void)_handleAllRefreshTasksCompleted:(/*^block*/id)arg1 ;
-(void)_dismissRoomTabUpdates:(id)arg1 ;
-(void)_checkAndAnnounceRoomUpdatesWithVisibleRoomUpdates;
-(void)_notifyTaskCompleted;
-(id)_allValidRoomUpdates;
-(id)_visibleRoomUpdates;
-(id)_filterRoomUpdatesByQE:(id)arg1 ;
-(id)_sortRoomUpdates:(id)arg1 ;
-(long long)_unreadRoomUpdatesCountFromEligibleRoomUpdates:(id)arg1 ;
-(id)_filterRoomUpdates:(id)arg1 byClass:(Class)arg2 ;
-(void)dismissRoomUpdate:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
@end

