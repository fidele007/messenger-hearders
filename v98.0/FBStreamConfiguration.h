/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScenePathProviding, FBPolling, FBStreamLoadBackgrounder;
#import <Messenger/Messenger-Structs.h>
@class FBUserSession, NSString, FBStreamAnalytics, NSNotificationCenter, FBStreamListenerAnnouncer;

@interface FBStreamConfiguration : NSObject {

	BOOL _shouldRefetchPagingInfoOnEnable;
	BOOL _dispatchOffMain;
	FBUserSession* _userSession;
	NSString* _graphQLRequestTargetID;
	id<FBScenePathProviding> _scenePathProvider;
	FBStreamAnalytics* _streamAnalytics;
	id<FBPolling> _pollingSource;
	NSNotificationCenter* _notificationCenter;
	id<FBStreamLoadBackgrounder> _backgrounder;
	FBStreamListenerAnnouncer* _streamListenerAnnouncer;
	NSString* _actorFBID;
	/*^block*/id _graphQLRequestBuilder;
	/*^block*/id _responseHandlerBuilder;
	/*^block*/id _pagingInfoBuilder;
	SCD_Struct_FB93 _fetchLimit;

}

@property (nonatomic,copy) id graphQLRequestBuilder;                                             //@synthesize graphQLRequestBuilder=_graphQLRequestBuilder - In the implementation block
@property (nonatomic,copy) id responseHandlerBuilder;                                            //@synthesize responseHandlerBuilder=_responseHandlerBuilder - In the implementation block
@property (nonatomic,copy) id pagingInfoBuilder;                                                 //@synthesize pagingInfoBuilder=_pagingInfoBuilder - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLRequestTargetID;                           //@synthesize graphQLRequestTargetID=_graphQLRequestTargetID - In the implementation block
@property (nonatomic,readonly) id<FBScenePathProviding> scenePathProvider;                       //@synthesize scenePathProvider=_scenePathProvider - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalytics * streamAnalytics;                         //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
@property (nonatomic,readonly) id<FBPolling> pollingSource;                                      //@synthesize pollingSource=_pollingSource - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB93 fetchLimit;                                       //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) BOOL shouldRefetchPagingInfoOnEnable;                             //@synthesize shouldRefetchPagingInfoOnEnable=_shouldRefetchPagingInfoOnEnable - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                        //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<FBStreamLoadBackgrounder> backgrounder;                        //@synthesize backgrounder=_backgrounder - In the implementation block
@property (nonatomic,readonly) FBStreamListenerAnnouncer * streamListenerAnnouncer;              //@synthesize streamListenerAnnouncer=_streamListenerAnnouncer - In the implementation block
@property (nonatomic,copy) NSString * actorFBID;                                                 //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,readonly) BOOL dispatchOffMain;                                             //@synthesize dispatchOffMain=_dispatchOffMain - In the implementation block
+(id)configuration:(/*^block*/id)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)graphQLRequestTargetID;
-(FBStreamAnalytics *)streamAnalytics;
-(void)setGraphQLRequestBuilder:(id)arg1 ;
-(void)setPagingInfoBuilder:(id)arg1 ;
-(id<FBScenePathProviding>)scenePathProvider;
-(NSString *)actorFBID;
-(id)initWithBuilderBlock:(/*^block*/id)arg1 ;
-(void)_setAttributesWithBuilder:(id)arg1 ;
-(void)_warnIfNecessaryAttributesAreInvalid;
-(BOOL)shouldRefetchPagingInfoOnEnable;
-(BOOL)dispatchOffMain;
-(id<FBPolling>)pollingSource;
-(id<FBStreamLoadBackgrounder>)backgrounder;
-(FBStreamListenerAnnouncer *)streamListenerAnnouncer;
-(id)graphQLRequestBuilder;
-(id)pagingInfoBuilder;
-(id)graphQLDownloadRequestWithLoadType:(unsigned long long)arg1 refreshMode:(id)arg2 cursor:(id)arg3 includeRecentVPVds:(BOOL)arg4 includeBatteryInfo:(BOOL)arg5 includeCachedLocation:(BOOL)arg6 ;
-(id)streamResponseHandlerWithLoadType:(unsigned long long)arg1 beforeCursor:(id)arg2 afterCursor:(id)arg3 debugContextFactory:(/*^block*/id)arg4 ;
-(id)streamPagingInfoWithPreviousPagingInfo:(id)arg1 ;
-(id)responseHandlerBuilder;
-(void)setResponseHandlerBuilder:(id)arg1 ;
-(FBUserSession *)userSession;
-(SCD_Struct_FB93)fetchLimit;
-(NSNotificationCenter *)notificationCenter;
@end
