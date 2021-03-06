/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBContactSearchQuery;


@protocol FBContactsSearch <NSObject>
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate; 
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery; 
@required
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
-(void)cancelPendingSearchOperation;
-(void)refreshSearch:(id)arg1;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1;
-(long long)numberOfSearchResultsInSection:(long long)arg1;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2;
-(id)sectionsInSearch;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2;
-(BOOL)hasPendingSearchOperation;
-(void)setDelegate:(id)arg1;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1;
-(void)clearResults;
-(FBContactSearchQuery *)currentQuery;
-(id)titleForHeaderInSection:(long long)arg1;

@end

