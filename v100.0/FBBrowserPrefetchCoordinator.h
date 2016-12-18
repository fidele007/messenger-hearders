/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableDictionary, NSObject, NSOperationQueue, FBBrowserPrefetchExperimentContext;

@interface FBBrowserPrefetchCoordinator : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _prefetchTasksInProgress;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSOperationQueue* _downloadQueue;
	FBBrowserPrefetchExperimentContext* _experimentContext;

}
+(BOOL)isPrefetchingAvailable;
+(void)addAcceptHeader:(id)arg1 ;
+(id)acceptHeaderValueForHtmlAndDefault;
-(id)_diskCache;
-(void)prefetchAndStoreDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPrefetchedDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prefetchMainFrameForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getCachedPrefetchDataForMainFrameWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAcceptHeaderIfSupport:(id)arg1 ;
-(id)_cacheKeyForURL:(id)arg1 ;
-(unsigned long long)_cacheValidDurationForCacheHeader:(id)arg1 ;
-(void)_downloadResponseForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prefetchAndCacheDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getPrefetchDataFromCache:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_decodedURLForURL:(id)arg1 ;
-(void)_prefetchDataIfRequiredForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

