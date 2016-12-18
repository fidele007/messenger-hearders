/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MQProtocol : NSObject {

	unsigned nextFrameTag_;
	NSObject*<OS_dispatch_queue> queue_;

}

@property (retain) NSObject*<OS_dispatch_queue> queue; 
+(id)sharedProtocolForQueue:(id)arg1 ;
-(id)createDispatchDataWithFrameOfType:(unsigned)arg1 frameTag:(unsigned)arg2 payload:(id)arg3 ;
-(void)readFramesOverChannel:(id)arg1 onFrame:(/*^block*/id)arg2 ;
-(void)readFrameOverChannel:(id)arg1 callback:(/*^block*/id)arg2 ;
-(unsigned)newTag;
-(void)sendFrameOfType:(unsigned)arg1 tag:(unsigned)arg2 withPayload:(id)arg3 overChannel:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)readPayloadOfSize:(unsigned long long)arg1 overChannel:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)readAndDiscardDataOfSize:(unsigned long long)arg1 overChannel:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
