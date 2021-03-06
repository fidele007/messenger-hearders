/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSObject;

@interface FBServiceResponseAccumulator : NSObject {

	NSMutableDictionary* _responses;
	mutex _lock;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)initWithCount:(unsigned long long)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receivedResponse:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
@end

