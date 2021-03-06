/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSMutableDictionary;

@interface FBNativeArticleTransitionCache : NSObject {

	NSObject*<OS_dispatch_queue> _workingQueue;
	mutex _cacheLock;
	NSMutableDictionary* _cache;

}
-(id)layoutForBlock:(id)arg1 transitioningToPresentationAttributes:(id)arg2 ;
-(void)cacheLayoutForBlock:(id)arg1 transitioningToPresentationAttributes:(id)arg2 generator:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)purgeCacheForBlock:(id)arg1 ;
-(void)purgeCacheForBlockPresentationUpdate:(id)arg1 ;
-(id)init;
@end

