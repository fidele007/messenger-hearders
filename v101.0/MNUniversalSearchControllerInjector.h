/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNViewPreviewingHandling;
@class FBProviderMapData, FBAnalytics, MNPeopleSearchController, MNMessengerContactSearchFactory, MNGameListPresenter, MNContactSearchTableViewGenericCellProviderFactory, MNDiscoverySurfaceCoordinator, MNSearchNullStateViewController, MNUniversalSearchResultsInviteActionButtonController, MNUniversalSearchResultsContextActionButtonController, MNUniversalSearchResultsPlayActionButtonController, FBMobileConfigContextManager, MNRecentSearchStore, MNUniversalSearchUpdatedSearchSystemAdapterFactory, MNUniversalSearchLegacySearchSystemAdapterFactory;

@interface MNUniversalSearchControllerInjector : NSObject {

	FBProviderMapData* _mapData;
	BOOL _shouldPeopleSearchIncludeBlendedResults;
	BOOL _shouldDisplayNullState;
	BOOL _isUserPartial;
	FBAnalytics* _analytics;
	MNPeopleSearchController* _peopleSearchController;
	MNMessengerContactSearchFactory* _contactSearchFactory;
	MNGameListPresenter* _gameListPresenter;
	MNContactSearchTableViewGenericCellProviderFactory* _cellProviderFactory;
	MNDiscoverySurfaceCoordinator* _discoverySurfaceCoordinator;
	MNSearchNullStateViewController* _searchNullStateViewController;
	MNUniversalSearchResultsInviteActionButtonController* _inviteActionButtonController;
	MNUniversalSearchResultsContextActionButtonController* _contextActionButtonController;
	MNUniversalSearchResultsPlayActionButtonController* _playActionButtonController;
	FBMobileConfigContextManager* _configManager;
	id<MNViewPreviewingHandling> _viewPreviewingHandler;
	MNRecentSearchStore* _recentSearchStore;
	MNUniversalSearchUpdatedSearchSystemAdapterFactory* _updatedSearchSystemAdapterFactory;
	MNUniversalSearchLegacySearchSystemAdapterFactory* _legacySearchSystemAdapterFactory;

}

@property (nonatomic,readonly) FBAnalytics * analytics;                                                                             //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) MNPeopleSearchController * peopleSearchController;                                                   //@synthesize peopleSearchController=_peopleSearchController - In the implementation block
@property (nonatomic,readonly) MNMessengerContactSearchFactory * contactSearchFactory;                                              //@synthesize contactSearchFactory=_contactSearchFactory - In the implementation block
@property (nonatomic,readonly) MNGameListPresenter * gameListPresenter;                                                             //@synthesize gameListPresenter=_gameListPresenter - In the implementation block
@property (nonatomic,readonly) MNContactSearchTableViewGenericCellProviderFactory * cellProviderFactory;                            //@synthesize cellProviderFactory=_cellProviderFactory - In the implementation block
@property (nonatomic,readonly) MNDiscoverySurfaceCoordinator * discoverySurfaceCoordinator;                                         //@synthesize discoverySurfaceCoordinator=_discoverySurfaceCoordinator - In the implementation block
@property (nonatomic,readonly) MNSearchNullStateViewController * searchNullStateViewController;                                     //@synthesize searchNullStateViewController=_searchNullStateViewController - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchResultsInviteActionButtonController * inviteActionButtonController;                 //@synthesize inviteActionButtonController=_inviteActionButtonController - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchResultsContextActionButtonController * contextActionButtonController;               //@synthesize contextActionButtonController=_contextActionButtonController - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchResultsPlayActionButtonController * playActionButtonController;                     //@synthesize playActionButtonController=_playActionButtonController - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                                        //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) id<MNViewPreviewingHandling> viewPreviewingHandler;                                                  //@synthesize viewPreviewingHandler=_viewPreviewingHandler - In the implementation block
@property (nonatomic,readonly) MNRecentSearchStore * recentSearchStore;                                                             //@synthesize recentSearchStore=_recentSearchStore - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchUpdatedSearchSystemAdapterFactory * updatedSearchSystemAdapterFactory;              //@synthesize updatedSearchSystemAdapterFactory=_updatedSearchSystemAdapterFactory - In the implementation block
@property (nonatomic,readonly) MNUniversalSearchLegacySearchSystemAdapterFactory * legacySearchSystemAdapterFactory;                //@synthesize legacySearchSystemAdapterFactory=_legacySearchSystemAdapterFactory - In the implementation block
@property (nonatomic,readonly) BOOL shouldPeopleSearchIncludeBlendedResults;                                                        //@synthesize shouldPeopleSearchIncludeBlendedResults=_shouldPeopleSearchIncludeBlendedResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayNullState;                                                                         //@synthesize shouldDisplayNullState=_shouldDisplayNullState - In the implementation block
@property (nonatomic,readonly) BOOL isUserPartial;                                                                                  //@synthesize isUserPartial=_isUserPartial - In the implementation block
-(FBAnalytics *)analytics;
-(FBMobileConfigContextManager *)configManager;
-(id<MNViewPreviewingHandling>)viewPreviewingHandler;
-(MNGameListPresenter *)gameListPresenter;
-(MNPeopleSearchController *)peopleSearchController;
-(MNSearchNullStateViewController *)searchNullStateViewController;
-(id)messageSearchResultTableViewControllerProvider;
-(MNUniversalSearchResultsInviteActionButtonController *)inviteActionButtonController;
-(MNUniversalSearchResultsContextActionButtonController *)contextActionButtonController;
-(BOOL)isUserPartial;
-(MNUniversalSearchResultsPlayActionButtonController *)playActionButtonController;
-(MNContactSearchTableViewGenericCellProviderFactory *)cellProviderFactory;
-(MNUniversalSearchUpdatedSearchSystemAdapterFactory *)updatedSearchSystemAdapterFactory;
-(BOOL)shouldPeopleSearchIncludeBlendedResults;
-(MNUniversalSearchLegacySearchSystemAdapterFactory *)legacySearchSystemAdapterFactory;
-(BOOL)shouldDisplayNullState;
-(MNRecentSearchStore *)recentSearchStore;
-(id)initWithProviderMapData:(id)arg1 shouldPeopleSearchIncludeBlendedResults:(BOOL)arg2 shouldDisplayNullState:(BOOL)arg3 isUserPartial:(BOOL)arg4 ;
-(MNDiscoverySurfaceCoordinator *)discoverySurfaceCoordinator;
-(MNMessengerContactSearchFactory *)contactSearchFactory;
@end
