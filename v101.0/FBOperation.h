/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSOperation.h>

@interface FBOperation : NSOperation {

	/*^block*/id _block;
	long long _stateFlag;
	recursive_mutex _lock;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)_setStateFlag:(long long)arg1 ;
-(void)_completeOperation;
-(long long)_stateFlag;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end
