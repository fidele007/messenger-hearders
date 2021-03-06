/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServerPagesFetcherDelegate.h>
#import <Messenger/FBContactsSearch.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBContactsSearchDelegate;
@class FBUserSession, FBServerPagesSearchFetcher, FBAnalytics, NSString, NSArray, FBContactSearchQuery;

@interface FBServerPagesSearch : NSObject <FBServerPagesFetcherDelegate, FBContactsSearch, FBClassProvidable> {

	FBUserSession* _session;
	FBServerPagesSearchFetcher* _graphFetcher;
	unsigned long long _searchStartTime;
	FBAnalytics* _analytics;
	NSString* _analyticsJobUuid;
	NSString* _analyticsQueryUuid;
	NSArray* _results;
	BOOL _showSearchingCell;
	BOOL _hideHeaderWhenShowingSearchCell;
	BOOL _includeVcEndpoints;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	NSString* _currentSearch;
	unsigned long long _minQueryLength;
	unsigned long long _resultsLimit;
	unsigned long long _vcEndpointResultsLimit;

}

@property (assign,nonatomic) BOOL hideHeaderWhenShowingSearchCell;                    //@synthesize hideHeaderWhenShowingSearchCell=_hideHeaderWhenShowingSearchCell - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentSearch;                         //@synthesize currentSearch=_currentSearch - In the implementation block
@property (assign,nonatomic) unsigned long long minQueryLength;                       //@synthesize minQueryLength=_minQueryLength - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                         //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long vcEndpointResultsLimit;               //@synthesize vcEndpointResultsLimit=_vcEndpointResultsLimit - In the implementation block
@property (assign,nonatomic) BOOL includeVcEndpoints;                                 //@synthesize includeVcEndpoints=_includeVcEndpoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setMinQueryLength:(unsigned long long)arg1 ;
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
-(void)setIncludeVcEndpoints:(BOOL)arg1 ;
-(NSString *)currentSearch;
-(BOOL)includeVcEndpoints;
-(unsigned long long)minQueryLength;
-(BOOL)hideHeaderWhenShowingSearchCell;
-(BOOL)_shouldShowSearchingCell;
-(void)_searchComplete:(id)arg1 ;
-(void)serverPagesSearchOperationDidCompleteWithContacts:(id)arg1 ;
-(unsigned long long)vcEndpointResultsLimit;
-(void)setVcEndpointResultsLimit:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)clearResults;
@end

