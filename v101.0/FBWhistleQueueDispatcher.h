/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
