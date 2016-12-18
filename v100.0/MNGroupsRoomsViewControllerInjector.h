/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNPerformanceMarking;
@class FBProviderMapData, FBUserSession, FBMobileConfigContextManager, MNUniversalSearchController, MNUniversalSearchPolicy, FBAnalytics, MNViewPreviewingHandler, MNNavigationCoordinator, MNThreadNavigationCoordinator, MNNavigationBarItemFactory, MNThreadCellController, MNThreadListSummaryUpdateCreatorFactory, MNUserBlockStatusUpdateActionCreator, MNProfileImageViewController, MNThreadImageManager, MNThreadActionPanelActionController, FBMThreadModelController, MNThreadListCTAProvider, MNGroupsRoomNUXNavigationHandler, MNGroupsRoomNUXStateController, MNOmniMNavigationCoordinator, MNRoomSuggestionImpressionTracker, NSString;

@interface MNGroupsRoomsViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNUniversalSearchController* _universalSearchController;
	MNUniversalSearchPolicy* _universalSearchPolicy;
	FBAnalytics* _analytics;
	MNViewPreviewingHandler* _viewPreviewingHandler;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNNavigationBarItemFactory* _navigationBarItemFactory;
	MNThreadCellController* _threadCellController;
	MNThreadListSummaryUpdateCreatorFactory* _updateCreatorFactory;
	MNUserBlockStatusUpdateActionCreator* _participantBlockActionCreator;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNThreadActionPanelActionController* _actionPanelActionController;
	FBMThreadModelController* _threadModelController;
	MNThreadListCTAProvider* _threadListCTAProvider;
	MNGroupsRoomNUXNavigationHandler* _roomNUXNavigationHandler;
	MNGroupsRoomNUXStateController* _roomNUXStateController;
	id<MNPerformanceMarking> _performanceMarker;
	MNOmniMNavigationCoordinator* _omniMNavigationCoordinator;
	MNRoomSuggestionImpressionTracker* _roomSuggestionImpressionTracker;

}

@property (nonatomic,readonly) FBUserSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                      //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchController * universalSearchController;                           //@synthesize universalSearchController=_universalSearchController - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchPolicy * universalSearchPolicy;                                   //@synthesize universalSearchPolicy=_universalSearchPolicy - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                           //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) MNViewPreviewingHandler * viewPreviewingHandler;                                   //@synthesize viewPreviewingHandler=_viewPreviewingHandler - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                   //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                       //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNNavigationBarItemFactory * navigationBarItemFactory;                             //@synthesize navigationBarItemFactory=_navigationBarItemFactory - In the implementation block
@property (nonatomic,readonly) MNThreadCellController * threadCellController;                                     //@synthesize threadCellController=_threadCellController - In the implementation block
@property (nonatomic,readonly) MNThreadListSummaryUpdateCreatorFactory * updateCreatorFactory;                    //@synthesize updateCreatorFactory=_updateCreatorFactory - In the implementation block
@property (nonatomic,readonly) MNUserBlockStatusUpdateActionCreator * participantBlockActionCreator;              //@synthesize participantBlockActionCreator=_participantBlockActionCreator - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;                         //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                         //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) MNThreadActionPanelActionController * actionPanelActionController;                 //@synthesize actionPanelActionController=_actionPanelActionController - In the implementation block
@property (nonatomic,readonly) FBMThreadModelController * threadModelController;                                  //@synthesize threadModelController=_threadModelController - In the implementation block
@property (nonatomic,readonly) MNThreadListCTAProvider * threadListCTAProvider;                                   //@synthesize threadListCTAProvider=_threadListCTAProvider - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXNavigationHandler * roomNUXNavigationHandler;                       //@synthesize roomNUXNavigationHandler=_roomNUXNavigationHandler - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXStateController * roomNUXStateController;                           //@synthesize roomNUXStateController=_roomNUXStateController - In the implementation block
@property (nonatomic,readonly) id<MNPerformanceMarking> performanceMarker;                                        //@synthesize performanceMarker=_performanceMarker - In the implementation block
@property (nonatomic,readonly) MNOmniMNavigationCoordinator * omniMNavigationCoordinator;                         //@synthesize omniMNavigationCoordinator=_omniMNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNRoomSuggestionImpressionTracker * roomSuggestionImpressionTracker;               //@synthesize roomSuggestionImpressionTracker=_roomSuggestionImpressionTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNGroupsRoomNUXNavigationHandler *)roomNUXNavigationHandler;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(MNGroupsRoomNUXStateController *)roomNUXStateController;
-(MNRoomSuggestionImpressionTracker *)roomSuggestionImpressionTracker;
-(MNUniversalSearchController *)universalSearchController;
-(id<MNPerformanceMarking>)performanceMarker;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(MNThreadListSummaryUpdateCreatorFactory *)updateCreatorFactory;
-(MNThreadCellController *)threadCellController;
-(MNUniversalSearchPolicy *)universalSearchPolicy;
-(id)nonCachedGroupsViewModelSubscriptionServiceWithIdentifier:(id)arg1 ;
-(MNNavigationBarItemFactory *)navigationBarItemFactory;
-(MNThreadActionPanelActionController *)actionPanelActionController;
-(FBMThreadModelController *)threadModelController;
-(MNUserBlockStatusUpdateActionCreator *)participantBlockActionCreator;
-(MNViewPreviewingHandler *)viewPreviewingHandler;
-(MNOmniMNavigationCoordinator *)omniMNavigationCoordinator;
-(MNThreadListCTAProvider *)threadListCTAProvider;
-(FBUserSession *)session;
@end

