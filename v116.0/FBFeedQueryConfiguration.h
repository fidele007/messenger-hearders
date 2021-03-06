/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString;

@interface FBFeedQueryConfiguration : NSObject {

	/*^block*/id _feedConnectionBlock;
	/*^block*/id _analyticsModuleBlock;
	unsigned long long _feedLogging;
	BOOL _shouldPersistEdges;
	NSString* _feedName;
	const FBGraphQLFieldSetRef _edgeFieldSet;
	/*function pointer*/void* _queryFactory;
	unsigned long long _persistedEdgeCountLimit;
	unsigned long long _newsFeedType;

}

@property (nonatomic,copy,readonly) NSString * feedName;                                //@synthesize feedName=_feedName - In the implementation block
@property (nonatomic,readonly) const FBGraphQLFieldSetRef edgeFieldSet;                 //@synthesize edgeFieldSet=_edgeFieldSet - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* queryFactory;                  //@synthesize queryFactory=_queryFactory - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistEdges;                                 //@synthesize shouldPersistEdges=_shouldPersistEdges - In the implementation block
@property (nonatomic,readonly) unsigned long long persistedEdgeCountLimit;              //@synthesize persistedEdgeCountLimit=_persistedEdgeCountLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long newsFeedType;                         //@synthesize newsFeedType=_newsFeedType - In the implementation block
@property (nonatomic,readonly) BOOL isNewsFeed; 
@property (nonatomic,readonly) BOOL isTopStoriesNewsFeed; 
@property (nonatomic,readonly) BOOL isMostRecentNewsFeed; 
@property (nonatomic,readonly) BOOL isExploreNewsFeed; 
@property (nonatomic,readonly) BOOL shouldPerformEndToEndLogging; 
@property (nonatomic,readonly) BOOL shouldPerformStartupLogging; 
-(const FBGraphQLFieldSetRef)edgeFieldSet;
-(BOOL)isTopStoriesNewsFeed;
-(BOOL)isMostRecentNewsFeed;
-(unsigned long long)newsFeedType;
-(BOOL)shouldPersistEdges;
-(unsigned long long)persistedEdgeCountLimit;
-(BOOL)isNewsFeed;
-(BOOL)isExploreNewsFeed;
-(id)analyticsModuleWithTarget:(id)arg1 ;
-(/*function pointer*/void*)queryFactory;
-(id)feedConnectionFromResponse:(id)arg1 ;
-(id)initWithFeedName:(id)arg1 edgeFieldSet:(const FBGraphQLFieldSetRef)arg2 queryFactory:(/*function pointer*/void*)arg3 feedConnectionBlock:(/*^block*/id)arg4 analyticsModuleBlock:(/*^block*/id)arg5 shouldPersistEdges:(BOOL)arg6 persistedEdgeCountLimit:(unsigned long long)arg7 newsFeedType:(unsigned long long)arg8 feedLogging:(unsigned long long)arg9 ;
-(BOOL)shouldPerformEndToEndLogging;
-(BOOL)shouldPerformStartupLogging;
-(NSString *)feedName;
@end

