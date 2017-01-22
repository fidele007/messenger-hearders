/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPFilter.h>
#import <Messenger/FBMPPermissiveOutput.h>

@protocol OS_dispatch_queue, FBMPConsumerPort;
@class FBVideoProcessorFilterConfig, FBFilter, FBMPBaseConsumerPort, FBMPBaseProducerPort, NSObject, FBVideoProcessor, NSString;

@interface FBMPVideoProcessorFilter : NSObject <FBMPFilter, FBMPPermissiveOutput> {

	FBVideoProcessorFilterConfig* _config;
	FBFilter* _disconnectedFilter;
	unsigned long long _filterIndex;
	FBMPBaseConsumerPort* _videoDataPort;
	FBMPBaseProducerPort* _producerPort;
	mutex _mutex;
	NSObject*<OS_dispatch_queue> _processorQueue;
	FBVideoProcessor* _processor;
	/*^block*/id _consumeBlock;
	BOOL _processorPrepared;
	id<FBMPConsumerPort> _filterCommandConsumerPort;

}

@property (nonatomic,readonly) id<FBMPConsumerPort> filterCommandConsumerPort;              //@synthesize filterCommandConsumerPort=_filterCommandConsumerPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(id)initWithFilterConfig:(id)arg1 ;
-(id)initWithFilterConfig:(id)arg1 videoDataConsumeBlock:(/*^block*/id)arg2 ;
-(void)sendFilterCommands:(id)arg1 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(void)processVideoData:(id)arg1 withMetadata:(FBMPDataMetadata)arg2 performingConsumeBlock:(BOOL)arg3 ;
-(void)processFilterCommandData:(id)arg1 ;
-(void)_prepareProcessorAndFilterIndexIfNeededWithContext:(id)arg1 ;
-(void)_performOnProcessorQueue:(/*^block*/id)arg1 ;
-(id<FBMPConsumerPort>)filterCommandConsumerPort;
@end
