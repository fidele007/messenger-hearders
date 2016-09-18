/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServerContactsFetcherDelegate.h>
#import <Messenger/FBContactsSearch.h>

@protocol FBContactsSearchDelegate;
@class FBSimpleNetworkerRequest, FBSearchResultsFilterer, FBContactSearchQuery, NSString, NSMutableArray, FBUserDefaultsCache, FBAnalytics, FBServerContactsSearchFetcher, FBUserSession;

@interface FBServerContactsSearch : NSObject <FBServerContactsFetcherDelegate, FBContactsSearch> {

	FBSimpleNetworkerRequest* _networkRequest;
	FBSearchResultsFilterer* _resultsFilterer;
	BOOL _shouldFetchSocialContext;
	BOOL _hideHeaderWhenShowingSearchCell;
	BOOL _showSearchingCell;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	NSString* _currentSearch;
	unsigned long long _minQueryLength;
	unsigned long long _resultsLimit;
	NSMutableArray* _sortedUserResults;
	NSMutableArray* _sortedFriendResults;
	NSMutableArray* _sortedCoworkerResults;
	FBUserDefaultsCache* _sharedUserDefaultsCache;
	FBAnalytics* _analytics;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	NSString* _displayedSearch;
	FBServerContactsSearchFetcher* _graphFetcher;
	FBUserSession* _session;
	unsigned long long _searchStartTime;

}

@property (nonatomic,retain) NSMutableArray * sortedUserResults;                         //@synthesize sortedUserResults=_sortedUserResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedFriendResults;                       //@synthesize sortedFriendResults=_sortedFriendResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedCoworkerResults;                     //@synthesize sortedCoworkerResults=_sortedCoworkerResults - In the implementation block
@property (assign,nonatomic) BOOL showSearchingCell;                                     //@synthesize showSearchingCell=_showSearchingCell - In the implementation block
@property (nonatomic,copy) NSString * currentSearch;                                     //@synthesize currentSearch=_currentSearch - In the implementation block
@property (nonatomic,retain) FBUserDefaultsCache * sharedUserDefaultsCache;              //@synthesize sharedUserDefaultsCache=_sharedUserDefaultsCache - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,copy) NSString * analyticsJobUuid;                                  //@synthesize analyticsJobUuid=_analyticsJobUuid - In the implementation block
@property (nonatomic,copy) NSString * analyticsQueryUuid;                                //@synthesize analyticsQueryUuid=_analyticsQueryUuid - In the implementation block
@property (nonatomic,copy) NSString * displayedSearch;                                   //@synthesize displayedSearch=_displayedSearch - In the implementation block
@property (nonatomic,retain) FBServerContactsSearchFetcher * graphFetcher;               //@synthesize graphFetcher=_graphFetcher - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long searchStartTime;                         //@synthesize searchStartTime=_searchStartTime - In the implementation block
@property (assign,nonatomic) BOOL hideHeaderWhenShowingSearchCell;                       //@synthesize hideHeaderWhenShowingSearchCell=_hideHeaderWhenShowingSearchCell - In the implementation block
@property (assign,nonatomic) unsigned long long minQueryLength;                          //@synthesize minQueryLength=_minQueryLength - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;                 //@synthesize currentQuery=_currentQuery - In the implementation block
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(void)setMinQueryLength:(unsigned long long)arg1 ;
-(FBUserDefaultsCache *)sharedUserDefaultsCache;
-(BOOL)hasPendingSearchOperation;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1 ;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(id)sectionsInSearch;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(void)setHideHeaderWhenShowingSearchCell:(BOOL)arg1 ;
-(NSString *)currentSearch;
-(void)setAnalyticsJobUuid:(NSString *)arg1 ;
-(void)setAnalyticsQueryUuid:(NSString *)arg1 ;
-(void)setSearchStartTime:(unsigned long long)arg1 ;
-(NSString *)analyticsJobUuid;
-(NSString *)analyticsQueryUuid;
-(unsigned long long)searchStartTime;
-(id)initWithSession:(id)arg1 userDefaultsCache:(id)arg2 shouldFetchSocialContext:(BOOL)arg3 ;
-(void)setSharedUserDefaultsCache:(FBUserDefaultsCache *)arg1 ;
-(void)setCurrentSearch:(NSString *)arg1 ;
-(BOOL)_shouldClearSearchForText:(id)arg1 ;
-(void)setGraphFetcher:(FBServerContactsSearchFetcher *)arg1 ;
-(void)setDisplayedSearch:(NSString *)arg1 ;
-(void)setSortedUserResults:(NSMutableArray *)arg1 ;
-(void)setSortedFriendResults:(NSMutableArray *)arg1 ;
-(void)setSortedCoworkerResults:(NSMutableArray *)arg1 ;
-(BOOL)shouldShowSearchingCell;
-(void)setShowSearchingCell:(BOOL)arg1 ;
-(id)_resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(BOOL)_shouldFilterResult:(id)arg1 ;
-(void)_filterAndSortServerRestults:(id)arg1 ;
-(void)serverContactsSearchOperationDidComplete:(id)arg1 ;
-(id)initWithSession:(id)arg1 shouldFetchSocialContext:(BOOL)arg2 ;
-(void)setContactsToFilter:(id)arg1 ;
-(id)getFriendResults;
-(BOOL)hideHeaderWhenShowingSearchCell;
-(unsigned long long)minQueryLength;
-(NSMutableArray *)sortedUserResults;
-(NSMutableArray *)sortedFriendResults;
-(NSMutableArray *)sortedCoworkerResults;
-(BOOL)showSearchingCell;
-(NSString *)displayedSearch;
-(FBServerContactsSearchFetcher *)graphFetcher;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(FBUserSession *)session;
-(FBContactSearchQuery *)currentQuery;
-(void)setSession:(FBUserSession *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)clearResults;
@end

