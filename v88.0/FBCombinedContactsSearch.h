/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContactsSearch.h>
#import <Messenger/FBContactsSearchDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBContactsSearchDelegate;
@class FBLocalContactsSearch, FBLocalGroupsSearch, FBServerContactsSearch, FBServerGroupsSearch, FBServerPagesSearch, FBBlendedSearch, FBAddressBookContactsSearch, FBContactSearchQuery, FBAnalytics, NSString;

@interface FBCombinedContactsSearch : NSObject <FBContactsSearch, FBContactsSearchDelegate, FBClassProvidable> {

	FBLocalContactsSearch* _localSearch;
	FBLocalGroupsSearch* _localGroupSearch;
	FBServerContactsSearch* _serverSearch;
	FBServerGroupsSearch* _serverGroupsSearch;
	FBServerPagesSearch* _serverPagesSearch;
	FBBlendedSearch* _blendedSearch;
	FBAddressBookContactsSearch* _addressBookContactsSearch;
	BOOL _includeUsers;
	BOOL _includeGroups;
	BOOL _includePages;
	BOOL _includeBlendedResults;
	BOOL _includeAddressBook;
	BOOL _includeNicknameResults;
	int _minQueryLength;
	int _minServerQueryLength;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;
	unsigned long long _resultsLimit;
	FBAnalytics* _analytics;
	NSString* _analyticsUuid;

}

@property (nonatomic,retain) FBAnalytics * analytics;                                 //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,copy) NSString * analyticsUuid;                                  //@synthesize analyticsUuid=_analyticsUuid - In the implementation block
@property (assign,nonatomic) BOOL includeUsers;                                       //@synthesize includeUsers=_includeUsers - In the implementation block
@property (assign,nonatomic) BOOL includeGroups;                                      //@synthesize includeGroups=_includeGroups - In the implementation block
@property (assign,nonatomic) BOOL includePages;                                       //@synthesize includePages=_includePages - In the implementation block
@property (assign,nonatomic) BOOL includeBlendedResults;                              //@synthesize includeBlendedResults=_includeBlendedResults - In the implementation block
@property (assign,nonatomic) BOOL includeAddressBook;                                 //@synthesize includeAddressBook=_includeAddressBook - In the implementation block
@property (assign,nonatomic) BOOL includeNicknameResults;                             //@synthesize includeNicknameResults=_includeNicknameResults - In the implementation block
@property (assign,nonatomic) int minQueryLength;                                      //@synthesize minQueryLength=_minQueryLength - In the implementation block
@property (assign,nonatomic) int minServerQueryLength;                                //@synthesize minServerQueryLength=_minServerQueryLength - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                         //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(void)setIncludeGroups:(BOOL)arg1 ;
-(void)setIncludeUsers:(BOOL)arg1 ;
-(void)setMinQueryLength:(int)arg1 ;
-(void)setMinServerQueryLength:(int)arg1 ;
-(void)didFinishSearch:(id)arg1 ;
-(BOOL)shouldHideResult:(id)arg1 ;
-(void)didPickResult:(id)arg1 ;
-(BOOL)hasPendingSearchOperation;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1 ;
-(void)refreshSearch:(id)arg1 ;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(id)sectionsInSearch;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(BOOL)hasPendingRequestForPreviousSections:(id)arg1 ;
-(void)setHideHeaderWhenShowingSearchCell:(BOOL)arg1 ;
-(void)setIncludeAddressBook:(BOOL)arg1 ;
-(void)setIncludePages:(BOOL)arg1 ;
-(void)setIncludeBlendedResults:(BOOL)arg1 ;
-(int)minServerQueryLength;
-(void)setIncludeNicknameResults:(BOOL)arg1 ;
-(void)cancelPendingSearchOperationIfNewSearchString:(id)arg1 ;
-(void)setAnalyticsUuid:(NSString *)arg1 ;
-(id)initWithServerContactsSearch:(id)arg1 localContactsSearch:(id)arg2 groupSearch:(id)arg3 localGroupSearch:(id)arg4 serverPagesSearch:(id)arg5 blendedSearch:(id)arg6 adressBookContactsSearch:(id)arg7 ;
-(id)_searchObjectForSearchSection:(long long)arg1 ;
-(BOOL)includeUsers;
-(BOOL)includeGroups;
-(BOOL)includePages;
-(BOOL)includeBlendedResults;
-(BOOL)includeAddressBook;
-(id)_activeSearchesInCurrentConfiguration;
-(NSString *)analyticsUuid;
-(BOOL)includeNicknameResults;
-(int)minQueryLength;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(void)dealloc;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(void)search;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)clearResults;
@end

