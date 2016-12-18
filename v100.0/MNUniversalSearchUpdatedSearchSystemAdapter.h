/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchTableViewSelectionDelegate.h>
#import <Messenger/MNUniversalSearchUnderlyingSystemAdapting.h>

@protocol MNUniversalSearchUnderlyingSystemDelegate, MNPerformanceMarking, MNSearchControlling, FBCancelable;
@class MNSearchNullStateViewController, UIView, FBMobileConfigContextManager, FBAnalytics, MNPeopleSearchControllerLogger, MNContactSearchEngine, MNContactSearchTableViewDisplayController, NSString;

@interface MNUniversalSearchUpdatedSearchSystemAdapter : NSObject <MNContactSearchTableViewSelectionDelegate, MNUniversalSearchUnderlyingSystemAdapting> {

	id<MNUniversalSearchUnderlyingSystemDelegate> _delegate;
	MNSearchNullStateViewController* _nullStateViewController;
	UIView* _messageSearchHeaderView;
	BOOL _includeBlendedResults;
	id<MNPerformanceMarking> _performanceMarker;
	FBMobileConfigContextManager* _configManager;
	id<MNSearchControlling> _searchController;
	FBAnalytics* _analytics;
	MNPeopleSearchControllerLogger* _logger;
	MNContactSearchEngine* _searchEngine;
	MNContactSearchTableViewDisplayController* _displayController;
	id<FBCancelable> _currentQueryToken;
	NSString* _searchSessionId;

}

@property (nonatomic,readonly) MNPeopleSearchControllerLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(void)_searchForQuery:(id)arg1 producedResults:(id)arg2 isFinished:(BOOL)arg3 ;
-(void)configureWithSearchController:(id)arg1 ;
-(id)initWithContactSearchFactory:(id)arg1 cellProvider:(id)arg2 nullStateViewController:(id)arg3 messageSearchHeaderView:(id)arg4 includeBlendedResults:(BOOL)arg5 performanceMarker:(id)arg6 configManager:(id)arg7 shouldDownRankPagesForMessengerOnlyUsers:(BOOL)arg8 ;
-(void)beginSearchSession;
-(void)_beginLoggingSession;
-(void)_endLoggingSession;
-(void)_logSelectedResult:(id)arg1 ;
-(void)displayController:(id)arg1 didSelectResult:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)endSession;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(MNPeopleSearchControllerLogger *)logger;
-(void)startObserving;
-(void)stopObserving;
-(void)searchTextDidChange:(id)arg1 ;
@end

