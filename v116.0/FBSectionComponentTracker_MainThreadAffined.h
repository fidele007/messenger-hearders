/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSectionComponentTracker.h>
#import <Messenger/FBSectionComponentStateChangeListener.h>

@protocol FBComponentChangesetWriter;
@class FBSectionComponent, NSMutableDictionary, FBSectionComponentThreadLocalScope, FBSectionComponentTrackerStateListenerAnnouncer, NSDictionary, NSString;

@interface FBSectionComponentTracker_MainThreadAffined : FBSectionComponentTracker <FBSectionComponentStateChangeListener> {

	unsigned long long _state;
	/*^block*/id _sectionComponentGenerationFactory;
	FBSectionComponent* _lastComponent;
	NSMutableDictionary* _currentState;
	FBSectionComponentThreadLocalScope* _currentLocalScope;
	id<FBComponentChangesetWriter> _changesetWriter;
	BOOL _isGeneratingComponent;
	long long _recursiveGenerationCount;
	FBSectionComponentTrackerStateListenerAnnouncer* _announcer;
	BOOL _shouldCombineStateUpdates;
	/*^block*/id _updateStateBlock;
	NSMutableDictionary* _updatedStates;
	NSDictionary* _userInfo;
	NSDictionary* _userInfoMergeBlockMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillAppear;
-(void)readyForSectionComponentGeneration;
-(void)didRequestPrefetchingData;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 ;
-(void)setSectionComponentGenerationFactory:(/*^block*/id)arg1 ;
-(void)readyToApplyChangesets;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 changesetWriter:(id)arg2 userInfoMergeBlockMap:(id)arg3 ;
-(id)initWithSectionComponentGenerationFactory:(/*^block*/id)arg1 userInfoMergeBlockMap:(id)arg2 ;
-(void)reflowSectionComponents_DEPRECATED;
-(void)removeTrackerStateListener:(id)arg1 ;
-(void)generateComponentWithGenerationType:(unsigned long long)arg1 ;
-(void)_updateAndAnnounceState:(/*^block*/id)arg1 ;
-(void)executeStateUpdateTransaction:(/*^block*/id)arg1 ;
-(void)updateStateRequestedForKey:(id)arg1 updateBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(void)dealloc;
@end

