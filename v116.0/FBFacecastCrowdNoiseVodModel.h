/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCrowdNoiseModel.h>

@protocol FBCrowdNoiseModelDelegate, FBServiceTransactionMutating;
@class FBUserSession, FBMemFeedback, FBMemVideo, NSString, NSArray, NSMutableDictionary;

@interface FBFacecastCrowdNoiseVodModel : NSObject <FBCrowdNoiseModel> {

	id<FBCrowdNoiseModelDelegate> _delegate;
	FBUserSession* _session;
	FBMemFeedback* _feedback;
	FBMemVideo* _video;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;
	double _secondsInQueryInterval;
	double _secondsBeforeIntervalToQuery;
	unsigned long long _maxReactionsToRandomlyAssign;
	id<FBServiceTransactionMutating> _graphQLTransaction;
	double _endTimeOfFetchedDeltaInterval;
	double _startTimeOfFetchedDeltaInterval;
	NSMutableDictionary* _anonymousDeltas;
	NSMutableDictionary* _notableDeltas;
	double _timeReactionsLastSentToController;

}

@property (nonatomic,retain) FBUserSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemFeedback * feedback;                                         //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                                               //@synthesize video=_video - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                                            //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (assign,nonatomic) double secondsInQueryInterval;                                    //@synthesize secondsInQueryInterval=_secondsInQueryInterval - In the implementation block
@property (assign,nonatomic) double secondsBeforeIntervalToQuery;                              //@synthesize secondsBeforeIntervalToQuery=_secondsBeforeIntervalToQuery - In the implementation block
@property (assign,nonatomic) unsigned long long maxReactionsToRandomlyAssign;                  //@synthesize maxReactionsToRandomlyAssign=_maxReactionsToRandomlyAssign - In the implementation block
@property (nonatomic,retain) id<FBServiceTransactionMutating> graphQLTransaction;              //@synthesize graphQLTransaction=_graphQLTransaction - In the implementation block
@property (assign,nonatomic) double endTimeOfFetchedDeltaInterval;                             //@synthesize endTimeOfFetchedDeltaInterval=_endTimeOfFetchedDeltaInterval - In the implementation block
@property (assign,nonatomic) double startTimeOfFetchedDeltaInterval;                           //@synthesize startTimeOfFetchedDeltaInterval=_startTimeOfFetchedDeltaInterval - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * anonymousDeltas;                            //@synthesize anonymousDeltas=_anonymousDeltas - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notableDeltas;                              //@synthesize notableDeltas=_notableDeltas - In the implementation block
@property (assign,nonatomic) double timeReactionsLastSentToController;                         //@synthesize timeReactionsLastSentToController=_timeReactionsLastSentToController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBCrowdNoiseModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(id)initWithSession:(id)arg1 feedback:(id)arg2 video:(id)arg3 analyticsModule:(id)arg4 trackingCodes:(id)arg5 ;
-(void)_performQueryForCommentsAfter:(double)arg1 ;
-(void)_addDeltasFromResponse:(id)arg1 currentTime:(double)arg2 ;
-(void)setGraphQLTransaction:(id<FBServiceTransactionMutating>)arg1 ;
-(id)_randomlyAssignReactionsToOffsetsForSliceLength:(double)arg1 reactionCount:(long long)arg2 ;
-(void)_addObject:(id)arg1 toDictionary:(id)arg2 atTime:(double)arg3 ;
-(void)addViewerNotableParticleWithIdentifier:(id)arg1 actor:(id)arg2 liveVideoTimestamp:(id)arg3 vodVideoTimestamp:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(double)secondsInQueryInterval;
-(void)setSecondsInQueryInterval:(double)arg1 ;
-(double)secondsBeforeIntervalToQuery;
-(void)setSecondsBeforeIntervalToQuery:(double)arg1 ;
-(unsigned long long)maxReactionsToRandomlyAssign;
-(void)setMaxReactionsToRandomlyAssign:(unsigned long long)arg1 ;
-(id<FBServiceTransactionMutating>)graphQLTransaction;
-(double)endTimeOfFetchedDeltaInterval;
-(void)setEndTimeOfFetchedDeltaInterval:(double)arg1 ;
-(double)startTimeOfFetchedDeltaInterval;
-(void)setStartTimeOfFetchedDeltaInterval:(double)arg1 ;
-(NSMutableDictionary *)anonymousDeltas;
-(void)setAnonymousDeltas:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notableDeltas;
-(void)setNotableDeltas:(NSMutableDictionary *)arg1 ;
-(double)timeReactionsLastSentToController;
-(void)setTimeReactionsLastSentToController:(double)arg1 ;
-(NSString *)analyticsModule;
-(NSArray *)trackingCodes;
-(void)setDelegate:(id<FBCrowdNoiseModelDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCrowdNoiseModelDelegate>)delegate;
-(FBMemFeedback *)feedback;
-(void)setFeedback:(FBMemFeedback *)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)startObserving;
-(void)setVideo:(FBMemVideo *)arg1 ;
-(FBUserSession *)session;
-(FBMemVideo *)video;
-(void)stopObserving;
@end

