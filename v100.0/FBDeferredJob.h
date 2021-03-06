/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBDeferredJob : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	NSString* _identifier;
	BOOL _isMainQueue;

}
+(id)job:(/*^block*/id)arg1 queue:(id)arg2 identifier:(id)arg3 ;
+(id)mainQueueJob:(/*^block*/id)arg1 identifier:(id)arg2 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 isMainQueue:(BOOL)arg4 ;
-(void)invokeWithSession:(id)arg1 shouldThrottleMainThread:(BOOL)arg2 ;
@end

