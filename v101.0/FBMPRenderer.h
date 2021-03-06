/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPCompositeFilter.h>

@protocol OS_dispatch_queue;
@class FBVideoProcessor, NSObject;

@interface FBMPRenderer : FBMPCompositeFilter {

	FBVideoProcessor* _processor;
	BOOL _processorPrepared;
	NSObject*<OS_dispatch_queue> _videoQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> videoQueue;              //@synthesize videoQueue=_videoQueue - In the implementation block
+(id)new;
-(void)exportFilterConfigsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)videoQueue;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_prepareVideoProcessorIfNeededWithContext:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(void)setVideoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

