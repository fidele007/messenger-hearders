/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface ASRunLoopQueue : NSObject {

	CFRunLoopRef _runLoop;
	CFRunLoopObserverRef _runLoopObserver;
	CFRunLoopSourceRef _runLoopSource;
	deque<id, std::__1::allocator<id> >* _internalQueue;
	RecursiveMutex _internalQueueLock;
	unsigned long long _batchSize;
	/*^block*/id _queueConsumer;

}

@property (nonatomic,copy) id queueConsumer;                            //@synthesize queueConsumer=_queueConsumer - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
-(void)processQueue;
-(id)queueConsumer;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)setQueueConsumer:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)enqueue:(id)arg1 ;
@end

