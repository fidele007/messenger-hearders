/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FBAsynchronousOperation : NSObject <FBCancelable> {

	NSObject*<OS_dispatch_queue> _runQueue;
	/*^block*/id _operationBlock;
	BOOL _executing;
	BOOL _finished;
	BOOL _cancelled;

}

@property (assign) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (assign) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) BOOL finished;               //@synthesize finished=_finished - In the implementation block
-(id)initWithRunQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)start;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)finish;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(BOOL)executing;
-(void)setExecuting:(BOOL)arg1 ;
@end

