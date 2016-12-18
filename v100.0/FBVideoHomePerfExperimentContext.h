/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideoHomePerfExperimentContext : FBExperimentContext {

	long long _estimatedAveragePrefetchLengthPerf;
	BOOL _fetchNextUnitRightAway;
	BOOL _enablePrepareToPlayInVideohomePrefetcher;
	long long _minNumberOfVideosToScrollOverToSpinner;
	BOOL _enableVideoPrefetchingInVideoHomePerf;
	BOOL _enablePrepareToPlayPerf;
	long long _maxDepthPrefetchInVideoHomePerf;
	BOOL _enablePrefetchOnVideohomeAtComponentLevel;
	long long _maxConcurrentPrefetchInVideoHomePerf;
	BOOL _deferredInitialPrefetch;

}

@property (assign,nonatomic) long long estimatedAveragePrefetchLengthPerf;                  //@synthesize estimatedAveragePrefetchLengthPerf=_estimatedAveragePrefetchLengthPerf - In the implementation block
@property (assign,nonatomic) BOOL fetchNextUnitRightAway;                                   //@synthesize fetchNextUnitRightAway=_fetchNextUnitRightAway - In the implementation block
@property (assign,nonatomic) BOOL enablePrepareToPlayInVideohomePrefetcher;                 //@synthesize enablePrepareToPlayInVideohomePrefetcher=_enablePrepareToPlayInVideohomePrefetcher - In the implementation block
@property (assign,nonatomic) long long minNumberOfVideosToScrollOverToSpinner;              //@synthesize minNumberOfVideosToScrollOverToSpinner=_minNumberOfVideosToScrollOverToSpinner - In the implementation block
@property (assign,nonatomic) BOOL enableVideoPrefetchingInVideoHomePerf;                    //@synthesize enableVideoPrefetchingInVideoHomePerf=_enableVideoPrefetchingInVideoHomePerf - In the implementation block
@property (assign,nonatomic) BOOL enablePrepareToPlayPerf;                                  //@synthesize enablePrepareToPlayPerf=_enablePrepareToPlayPerf - In the implementation block
@property (assign,nonatomic) long long maxDepthPrefetchInVideoHomePerf;                     //@synthesize maxDepthPrefetchInVideoHomePerf=_maxDepthPrefetchInVideoHomePerf - In the implementation block
@property (assign,nonatomic) BOOL enablePrefetchOnVideohomeAtComponentLevel;                //@synthesize enablePrefetchOnVideohomeAtComponentLevel=_enablePrefetchOnVideohomeAtComponentLevel - In the implementation block
@property (assign,nonatomic) long long maxConcurrentPrefetchInVideoHomePerf;                //@synthesize maxConcurrentPrefetchInVideoHomePerf=_maxConcurrentPrefetchInVideoHomePerf - In the implementation block
@property (assign,nonatomic) BOOL deferredInitialPrefetch;                                  //@synthesize deferredInitialPrefetch=_deferredInitialPrefetch - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enablePrefetchOnVideohomeAtComponentLevel;
-(BOOL)enablePrepareToPlayInVideohomePrefetcher;
-(void)setEnablePrepareToPlayInVideohomePrefetcher:(BOOL)arg1 ;
-(void)setEnablePrefetchOnVideohomeAtComponentLevel:(BOOL)arg1 ;
-(BOOL)deferredInitialPrefetch;
-(BOOL)enablePrepareToPlayPerf;
-(BOOL)enableVideoPrefetchingInVideoHomePerf;
-(long long)estimatedAveragePrefetchLengthPerf;
-(BOOL)fetchNextUnitRightAway;
-(long long)maxConcurrentPrefetchInVideoHomePerf;
-(long long)maxDepthPrefetchInVideoHomePerf;
-(long long)minNumberOfVideosToScrollOverToSpinner;
-(void)setEstimatedAveragePrefetchLengthPerf:(long long)arg1 ;
-(void)setFetchNextUnitRightAway:(BOOL)arg1 ;
-(void)setMinNumberOfVideosToScrollOverToSpinner:(long long)arg1 ;
-(void)setEnableVideoPrefetchingInVideoHomePerf:(BOOL)arg1 ;
-(void)setEnablePrepareToPlayPerf:(BOOL)arg1 ;
-(void)setMaxDepthPrefetchInVideoHomePerf:(long long)arg1 ;
-(void)setMaxConcurrentPrefetchInVideoHomePerf:(long long)arg1 ;
-(void)setDeferredInitialPrefetch:(BOOL)arg1 ;
@end

