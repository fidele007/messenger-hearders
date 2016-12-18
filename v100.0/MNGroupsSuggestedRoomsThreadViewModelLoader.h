/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/MNGroupsRoomSuggestionsRefreshing.h>
#import <Messenger/MNRoomSuggestionItemDismissedListener.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class MNGroupsRoomsModelController, NSObject, NSMutableDictionary, FBTimeThrottler, NSString;

@interface MNGroupsSuggestedRoomsThreadViewModelLoader : NSObject <MNSingleViewModelLoading, MNViewModelUpdateMonitoring, MNGroupsRoomSuggestionsRefreshing, MNRoomSuggestionItemDismissedListener> {

	MNGroupsRoomsModelController* _roomsModelController;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestsByRequestIdMap;
	FBTimeThrottler* _timeThrottler;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)refreshRoomSuggestionsIfRequired;
-(void)didDismissRoomSuggestionItem:(id)arg1 ;
-(void)_applyUpdate;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithRoomsModelController:(id)arg1 queue:(id)arg2 ;
-(void)_reloadAllRoomSuggestions;
-(void)_loadAllRoomSuggestionsForRequestId:(unsigned long long)arg1 ;
-(void)_loadAdditionalPageForRoomSuggestionsForRequestId:(unsigned long long)arg1 ;
-(void)_sendSuccessResult:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_resetRequestForRequestId:(unsigned long long)arg1 ;
-(void)_handleRoomsListFetchSuccess:(id)arg1 requestId:(unsigned long long)arg2 didFetchAdditionalPage:(BOOL)arg3 ;
-(void)_handleRoomsListFetchCachedResponse:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleRoomsListFetchFailure:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_applyCachedResponseUpdate;
-(void)cancelRequest:(unsigned long long)arg1 ;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end

