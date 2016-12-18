/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticleTransitionLayoutGenerator, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSObject, BFExecutor;

@interface FBNativeArticleTransitionCache : NSObject {

	mutex _cacheLock;
	NSMutableDictionary* _cache;
	id<FBNativeArticleTransitionLayoutGenerator> _layoutGenerator;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BFExecutor* _cacheExecutor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheQueue;                                          //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,readonly) BFExecutor * cacheExecutor;                                                       //@synthesize cacheExecutor=_cacheExecutor - In the implementation block
@property (nonatomic,__weak,readonly) id<FBNativeArticleTransitionLayoutGenerator> layoutGenerator;              //@synthesize layoutGenerator=_layoutGenerator - In the implementation block
-(id)initWithLayoutGenerator:(id)arg1 ;
-(id)cacheLayoutForBlock:(id)arg1 transitionAttributes:(id)arg2 ;
-(id)layoutForBlock:(id)arg1 transitionAttributes:(id)arg2 ;
-(void)purgeCacheForBlockPresentationUpdate:(id)arg1 ;
-(void)purgeCacheForBlock:(id)arg1 ;
-(id<FBNativeArticleTransitionLayoutGenerator>)layoutGenerator;
-(BFExecutor *)cacheExecutor;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
@end
