/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideosCachePrunePolicyExperimentContext : FBExperimentContext {

	long long _priorityCoefficient;
	long long _videoSecondPriorityCutoff;
	long long _pruneStrategyId;

}

@property (assign,nonatomic) long long priorityCoefficient;                    //@synthesize priorityCoefficient=_priorityCoefficient - In the implementation block
@property (assign,nonatomic) long long videoSecondPriorityCutoff;              //@synthesize videoSecondPriorityCutoff=_videoSecondPriorityCutoff - In the implementation block
@property (assign,nonatomic) long long pruneStrategyId;                        //@synthesize pruneStrategyId=_pruneStrategyId - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)priorityCoefficient;
-(long long)pruneStrategyId;
-(long long)videoSecondPriorityCutoff;
-(void)setPriorityCoefficient:(long long)arg1 ;
-(void)setVideoSecondPriorityCutoff:(long long)arg1 ;
-(void)setPruneStrategyId:(long long)arg1 ;
@end
