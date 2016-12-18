/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosAnalyticsBiggerBatchUniverseExperimentContext : FBExperimentContext {

	BOOL _m_analytics_big_batch_enabled;
	long long _m_analytics_big_batch_max_count;
	long long _m_analytics_big_batch_flush_interval;

}

@property (assign,nonatomic) BOOL m_analytics_big_batch_enabled;                          //@synthesize m_analytics_big_batch_enabled=_m_analytics_big_batch_enabled - In the implementation block
@property (assign,nonatomic) long long m_analytics_big_batch_max_count;                   //@synthesize m_analytics_big_batch_max_count=_m_analytics_big_batch_max_count - In the implementation block
@property (assign,nonatomic) long long m_analytics_big_batch_flush_interval;              //@synthesize m_analytics_big_batch_flush_interval=_m_analytics_big_batch_flush_interval - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)m_analytics_big_batch_enabled;
-(long long)m_analytics_big_batch_flush_interval;
-(long long)m_analytics_big_batch_max_count;
-(void)setM_analytics_big_batch_enabled:(BOOL)arg1 ;
-(void)setM_analytics_big_batch_max_count:(long long)arg1 ;
-(void)setM_analytics_big_batch_flush_interval:(long long)arg1 ;
@end

