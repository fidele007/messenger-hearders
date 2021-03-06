/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTSRIOConsumer : NSObject {

	BOOL _readToCurrentFrame;
	BOOL _unmaskBytes;
	/*^block*/id _consumer;
	/*^block*/id _handler;
	unsigned long long _bytesNeeded;

}

@property (nonatomic,copy,readonly) id consumer;                          //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,copy,readonly) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) BOOL readToCurrentFrame;                   //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) BOOL unmaskBytes;                          //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long long)bytesNeeded;
-(BOOL)readToCurrentFrame;
-(BOOL)unmaskBytes;
-(void)setBytesNeeded:(unsigned long long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5 ;
-(id)handler;
-(id)consumer;
@end

