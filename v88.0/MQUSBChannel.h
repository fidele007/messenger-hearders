/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MQUSBChannel : NSObject {

	NSObject*<OS_dispatch_io> channel_;
	NSObject*<OS_dispatch_queue> queue_;
	unsigned nextPacketTag_;
	NSMutableDictionary* responseQueue_;
	BOOL autoReadPackets_;
	BOOL isReadingPackets_;

}

@property (readonly) NSObject*<OS_dispatch_io> dispatchChannel; 
@property (readonly) int fileDescriptor; 
+(id)packetDictionaryWithPacketType:(id)arg1 payload:(id)arg2 ;
-(BOOL)openOnQueue:(id)arg1 error:(id*)arg2 onEnd:(/*^block*/id)arg3 ;
-(void)listenWithBroadcastHandler:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)errorFromPlistResponse:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_io>)dispatchChannel;
-(void)sendRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)scheduleReadPacketWithBroadcastHandler:(/*^block*/id)arg1 ;
-(unsigned)nextPacketTag;
-(void)sendPacket:(id)arg1 tag:(unsigned)arg2 callback:(/*^block*/id)arg3 ;
-(void)setNeedsReadingPacket;
-(void)scheduleReadPacketWithCallback:(/*^block*/id)arg1 ;
-(void)sendDispatchData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)sendPacketOfType:(unsigned)arg1 overProtocol:(unsigned)arg2 tag:(unsigned)arg3 payload:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)sendData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)stop;
-(BOOL)valid;
-(int)fileDescriptor;
@end

