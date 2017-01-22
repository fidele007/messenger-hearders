/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@protocol MNGroupsRoomsFetchResultsHandling, OS_dispatch_queue;
@class MNGroupsRoomsModelControllerInjector, MNGroupsRoomsFetcher, NSObject, NSDictionary, NSArray, MNRoomSuggestionItemDismissedListenerAnnouncer, NSString;

@interface MNGroupsRoomsModelController : NSObject <FBClassInjectable> {

	MNGroupsRoomsModelControllerInjector* _injector;
	MNGroupsRoomsFetcher* _roomSuggestionsFetcher;
	id<MNGroupsRoomsFetchResultsHandling> _suggestedRoomsResultsHandler;
	NSObject*<OS_dispatch_queue> _fetchRoomsSerialQueue;
	NSDictionary* _roomFetcherByType;
	double lastUpdatedTime;
	NSArray* _roomsList;
	MNRoomSuggestionItemDismissedListenerAnnouncer* _roomSuggestionDismissedAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)hideRoomSuggestion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelFetch;
-(id)cachedRoomsList;
-(void)beginFetchingRoomsWithQueue:(id)arg1 success:(/*^block*/id)arg2 cachedResponse:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)fetchMoreRoomsWithQueue:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_handleFetcherSuccessResponse:(id)arg1 didFetchAdditionalPage:(BOOL)arg2 success:(/*^block*/id)arg3 ;
-(void)_performAsynOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleFetcherFailureResponse:(id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_handleHideRoomSuggestionSuccessForRoomFbid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateRoomsList:(id)arg1 didFetchAdditionalPage:(BOOL)arg2 ;
-(void)_removeRoomSuggestionFromCache:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
