/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponentTracker.h>
#import <Messenger/FBSectionComponentStateChangeListener.h>

@protocol OS_dispatch_queue;
@class FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSObject, FBSectionComponent, NSString;

@interface FBSectionComponentTracker_BackgroundGenSupport : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	FBSectionComponentTrackerStateListenerAnnouncer* _announcer;
	NSDictionary* _userInfoMergeBlockMap;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	FBSectionComponentTrackerState _state;
	deque<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >* _pendingModifications;
	vector<FBSectionComponentTrackerComponentStateUpdate, std::__1::allocator<FBSectionComponentTrackerComponentStateUpdate> >* _pendingComponentStateUpdates;
	BOOL _shouldCombineStateUpdates;
	BOOL _isProcessingModification;
	FBSectionComponent* _keepAliveComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBSectionComponentTrackerOptions*)arg4 ;
-(void)readyForSectionComponentGeneration;
-(void)readyToApplyChangesets;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 options:(const FBSectionComponentTrackerOptions*)arg3 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)_enqueueModifications:(const vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)arg1 ;
-(void)_executeBlockOnStateQueue:(/*^block*/id)arg1 ;
-(void)_mainThreadEnqueueStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)_startNextAsynchronousModification;
-(vector<FBSectionComponentTrackerStateModification, std::__1::allocator<FBSectionComponentTrackerStateModification> >*)_createComponentStateUpdateModifications;
-(BOOL)_isRunningOnStateQueue;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)_finishComponentGenerationWithGenerationType:(unsigned long long)arg1 results:(FBSectionComponentTrackerStateModificationResults*)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

