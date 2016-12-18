/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWhistleDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject, FBWhistleExecutor;

@interface FBWhistleQueueDispatcher : NSObject <FBWhistleDispatcher> {

	NSObject*<OS_dispatch_queue> _mainQueue;
	FBWhistleExecutor* _whistleExecutor;
	BOOL _useWorkerQueue;
	NSObject*<OS_dispatch_queue> _workerQueue;

}
-(void)dispatchFromMainToWorkerQueue:(/*^block*/id)arg1 ;
-(void)dispatchFromWorkerToMainQueue:(/*^block*/id)arg1 ;
-(void)dispatchFromEvbToWorkerQueue:(/*^block*/id)arg1 ;
-(id)whistleExecutor;
-(id)initWithMainQueue:(id)arg1 useWorkerQueue:(BOOL)arg2 ;
-(id)init;
-(id)queue;
@end

