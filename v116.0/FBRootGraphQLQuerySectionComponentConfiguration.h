/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRootGraphQLQuerySectionComponentConfiguring.h>
#import <Messenger/FBRootGraphQLQuerySectionComponentConfiguration.h>
@class NSString, FBRootGraphQLQuerySectionComponentListenerAnnouncer;


@protocol FBRootGraphQLQuerySectionComponentConfiguration <NSObject>
@property (nonatomic,readonly) id<FBGraphQLQueryProviding> queryProvider; 
@property (nonatomic,copy,readonly) NSString * keyForModelInResponse; 
@property (nonatomic,readonly) BOOL reloadOnPullToRefresh; 
@property (nonatomic,readonly) BOOL refreshOnReappear; 
@property (nonatomic,readonly) unsigned long long cacheThresholdInSeconds; 
@property (nonatomic,readonly) BOOL shouldTransitionViewStateManager; 
@property (nonatomic,readonly) BOOL shouldShowNoContentOnEmptyResult; 
@property (nonatomic,copy,readonly) NSString * loggableName; 
@property (nonatomic,copy,readonly) id scopeKey; 
@property (nonatomic,readonly) FBRootGraphQLQuerySectionComponentListenerAnnouncer * announcer; 
@required
-(id)scopeKey;
-(NSString *)loggableName;
-(BOOL)reloadOnPullToRefresh;
-(BOOL)shouldTransitionViewStateManager;
-(BOOL)shouldShowNoContentOnEmptyResult;
-(NSString *)keyForModelInResponse;
-(BOOL)refreshOnReappear;
-(unsigned long long)cacheThresholdInSeconds;
-(id<FBGraphQLQueryProviding>)queryProvider;
-(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)announcer;

@end


@protocol FBGraphQLQueryProviding;
@class NSString, FBRootGraphQLQuerySectionComponentListenerAnnouncer;

@interface FBRootGraphQLQuerySectionComponentConfiguration : NSObject <FBRootGraphQLQuerySectionComponentConfiguring, FBRootGraphQLQuerySectionComponentConfiguration> {

	BOOL _reloadOnPullToRefresh;
	BOOL _refreshOnReappear;
	BOOL _shouldTransitionViewStateManager;
	BOOL _shouldShowNoContentOnEmptyResult;
	NSString* _keyForModelInResponse;
	unsigned long long _cacheThresholdInSeconds;
	NSString* _loggableName;
	id _scopeKey;
	id<FBGraphQLQueryProviding> _queryProvider;
	FBRootGraphQLQuerySectionComponentListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * keyForModelInResponse;                                               //@synthesize keyForModelInResponse=_keyForModelInResponse - In the implementation block
@property (assign,nonatomic) BOOL reloadOnPullToRefresh;                                                   //@synthesize reloadOnPullToRefresh=_reloadOnPullToRefresh - In the implementation block
@property (assign,nonatomic) BOOL refreshOnReappear;                                                       //@synthesize refreshOnReappear=_refreshOnReappear - In the implementation block
@property (assign,nonatomic) unsigned long long cacheThresholdInSeconds;                                   //@synthesize cacheThresholdInSeconds=_cacheThresholdInSeconds - In the implementation block
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager;                                        //@synthesize shouldTransitionViewStateManager=_shouldTransitionViewStateManager - In the implementation block
@property (assign,nonatomic) BOOL shouldShowNoContentOnEmptyResult;                                        //@synthesize shouldShowNoContentOnEmptyResult=_shouldShowNoContentOnEmptyResult - In the implementation block
@property (nonatomic,copy) NSString * loggableName;                                                        //@synthesize loggableName=_loggableName - In the implementation block
@property (nonatomic,retain) id scopeKey;                                                                  //@synthesize scopeKey=_scopeKey - In the implementation block
@property (nonatomic,retain) FBRootGraphQLQuerySectionComponentListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLQueryProviding> queryProvider;                                  //@synthesize queryProvider=_queryProvider - In the implementation block
+(id)newWithQueryProvider:(id)arg1 ;
+(id)newWithQueryProvider:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)setAnnouncer:(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)arg1 ;
-(void)setReloadOnPullToRefresh:(BOOL)arg1 ;
-(id)scopeKey;
-(NSString *)loggableName;
-(BOOL)reloadOnPullToRefresh;
-(BOOL)shouldTransitionViewStateManager;
-(BOOL)shouldShowNoContentOnEmptyResult;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1 ;
-(void)setScopeKey:(id)arg1 ;
-(void)setShouldShowNoContentOnEmptyResult:(BOOL)arg1 ;
-(void)setLoggableName:(NSString *)arg1 ;
-(id)initWithQueryProvider:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(NSString *)keyForModelInResponse;
-(void)setKeyForModelInResponse:(NSString *)arg1 ;
-(BOOL)refreshOnReappear;
-(void)setRefreshOnReappear:(BOOL)arg1 ;
-(unsigned long long)cacheThresholdInSeconds;
-(void)setCacheThresholdInSeconds:(unsigned long long)arg1 ;
-(id<FBGraphQLQueryProviding>)queryProvider;
-(FBRootGraphQLQuerySectionComponentListenerAnnouncer *)announcer;
@end

