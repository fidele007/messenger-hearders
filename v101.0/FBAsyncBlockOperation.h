/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSOperation.h>

@interface FBAsyncBlockOperation : NSOperation {

	atomic<bool> _executing;
	atomic<bool> _finished;
	atomic<bool> _cancelled;
	/*^block*/id _operation;

}
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)completeOperation;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

