/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@protocol MNDiscoverySurfaceCoordinatorDelegate;
@class MNDiscoverySurfaceCoordinatorInjector, MNDiscoverySurfaceFiltersViewController, MNDiscoverySurfaceSearchResultsContainerViewController, MNDiscoverySurfaceFiltersFetcher, NSString;

@interface MNDiscoverySurfaceCoordinator : NSObject <FBClassInjectable> {

	MNDiscoverySurfaceCoordinatorInjector* _injector;
	MNDiscoverySurfaceFiltersViewController* _filtersViewController;
	MNDiscoverySurfaceSearchResultsContainerViewController* _searchResultsContainerViewController;
	MNDiscoverySurfaceFiltersFetcher* _filtersFetcher;
	BOOL _hasFilters;
	id<MNDiscoverySurfaceCoordinatorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNDiscoverySurfaceCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasFilters;                                                      //@synthesize hasFilters=_hasFilters - In the implementation block
+(Class)injectorClass;
-(void)fetchDiscoverySurfaceFilters;
-(void)_configureFiltersViewControllerWithFilters:(id)arg1 ;
-(void)_handleSuccessfulDiscoverySurfaceFiltersFetch:(id)arg1 ;
-(void)_handleFailedDiscoverySurfaceFiltersFetchWithError:(id)arg1 ;
-(id)searchControllerWithSearchResultsViewController:(id)arg1 ;
-(void)updateFilterVisibilityBasedOnSearchText:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasFilters;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNDiscoverySurfaceCoordinatorDelegate>)arg1 ;
-(id<MNDiscoverySurfaceCoordinatorDelegate>)delegate;
@end

