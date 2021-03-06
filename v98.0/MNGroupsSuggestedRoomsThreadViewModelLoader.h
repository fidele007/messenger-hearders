/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/MNGroupsRoomSuggestionsRefreshing.h>
#import <Messenger/MNRoomSuggestionItemDismissedListener.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class MNGroupsRoomsModelController, NSObject, NSMutableDictionary, NSOrderedSet, FBTimeThrottler, NSString;

@interface MNGroupsSuggestedRoomsThreadViewModelLoader : NSObject <MNSingleViewModelLoading, MNViewModelUpdateMonitoring, MNGroupsRoomSuggestionsRefreshing, MNRoomSuggestionItemDismissedListener> {

	MNGroupsRoomsModelController* _roomsModelController;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _cachedResponseByRoomSuggestionType;
	NSMutableDictionary* _requestsByRequestIdMap;
	NSOrderedSet* _roomsSuggestionsTypesList;
	FBTimeThrottler* _timeThrottler;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)refreshRoomSuggestionsIfRequired;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithRoomsModelController:(id)arg1 roomsSuggestionTypesList:(id)arg2 queue:(id)arg3 ;
-(void)didDismissRoomSuggestionItem:(id)arg1 forRoomSuggestionTypes:(id)arg2 ;
-(void)_reloadAllRoomSuggestions;
-(void)_loadAllRoomSuggestionsForRoomSuggestionType:(unsigned long long)arg1 requestId:(unsigned long long)arg2 ;
-(void)_loadAdditionalPageForRoomSuggestionsForRoomSuggestionType:(unsigned long long)arg1 requestId:(unsigned long long)arg2 ;
-(void)_sendSuccessResult:(id)arg1 requestId:(unsigned long long)arg2 ;
-(unsigned long long)_roomSuggestionTypeFromRequestId:(unsigned long long)arg1 ;
-(void)_resetRequestForRequestId:(unsigned long long)arg1 ;
-(void)_handleRoomsListFetchSuccess:(id)arg1 requestId:(unsigned long long)arg2 roomSuggestionType:(unsigned long long)arg3 didFetchAdditionalPage:(BOOL)arg4 ;
-(void)_handleRoomsListFetchCachedResponse:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleRoomsListFetchFailure:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_applyPartialUpdate:(id)arg1 roomSuggestionType:(unsigned long long)arg2 ;
-(void)_applyUpdateForRoomSuggestionType:(unsigned long long)arg1 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end

