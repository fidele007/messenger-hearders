/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxViewModelViewStateMutating.h>
#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>
#import <Messenger/FBReachabilityListener.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class FBReachabilityAnnouncer, NSObject, MNInboxCameraRollViewState, NSIndexPath, MNInboxTruncationViewModel, NSString;

@interface MNInboxViewModelViewStateStore : NSObject <MNInboxViewModelViewStateMutating, MNSingleViewModelLoading, MNViewModelUpdateMonitoring, FBReachabilityListener> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNViewModelUpdating> _updater;
	CGSize _inboxViewSize;
	long long _seeMoreButtonPressCount;
	BOOL _conversationStartersSectionExpanded;
	MNInboxCameraRollViewState* _cameraRollSectionViewState;
	BOOL _shouldShowMoreCell;
	BOOL _recentVideosUnitExpanded;
	NSIndexPath* _trendingGIFsSelectedIndexPath;
	BOOL _shouldShowTrendingGIFsUnit;
	BOOL _recentlyClickedLinksUnitExpanded;
	MNInboxTruncationViewModel* _inboxTruncationViewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecentVideosUnitExpanded:(BOOL)arg1 ;
-(void)setShouldShowMoreCell:(BOOL)arg1 ;
-(void)resetSeeMoreButtonPressCount;
-(void)resetInboxTruncation;
-(void)setInboxViewSize:(CGSize)arg1 ;
-(void)incrementSeeMoreButtonPressCount;
-(void)setCameraRollSectionViewState:(id)arg1 ;
-(void)setTrendingGIFsSelectedIndexPath:(id)arg1 ;
-(void)setRecentlyClickedLinksUnitExpanded:(BOOL)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setTimestampToCutoffMessages:(unsigned long long)arg1 ;
-(void)configureWithUpdater:(id)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithReachabilityAnnouncer:(id)arg1 inboxViewModelCompositionConfiguration:(id)arg2 queue:(id)arg3 ;
-(void)setConversationStartersSectionExpanded:(BOOL)arg1 ;
-(void)incrementNumberOfMessagesAfterCutoffToShowBy:(unsigned long long)arg1 ;
-(void)_applyUpdate;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end
