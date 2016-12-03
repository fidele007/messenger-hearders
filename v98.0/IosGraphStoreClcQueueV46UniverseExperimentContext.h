/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosGraphStoreClcQueueV46UniverseExperimentContext : FBExperimentContext {

	long long _graph_store_clc_queue_max_latency_ms;
	BOOL _graph_store_clc_queue_drop_reads_enabled;
	long long _graph_store_clc_queue_cleanup_batch_size;

}

@property (assign,nonatomic) long long graph_store_clc_queue_max_latency_ms;                  //@synthesize graph_store_clc_queue_max_latency_ms=_graph_store_clc_queue_max_latency_ms - In the implementation block
@property (assign,nonatomic) BOOL graph_store_clc_queue_drop_reads_enabled;                   //@synthesize graph_store_clc_queue_drop_reads_enabled=_graph_store_clc_queue_drop_reads_enabled - In the implementation block
@property (assign,nonatomic) long long graph_store_clc_queue_cleanup_batch_size;              //@synthesize graph_store_clc_queue_cleanup_batch_size=_graph_store_clc_queue_cleanup_batch_size - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)graph_store_clc_queue_cleanup_batch_size;
-(BOOL)graph_store_clc_queue_drop_reads_enabled;
-(long long)graph_store_clc_queue_max_latency_ms;
-(void)setGraph_store_clc_queue_max_latency_ms:(long long)arg1 ;
-(void)setGraph_store_clc_queue_drop_reads_enabled:(BOOL)arg1 ;
-(void)setGraph_store_clc_queue_cleanup_batch_size:(long long)arg1 ;
@end
