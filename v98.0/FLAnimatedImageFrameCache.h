/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FLAnimatedImageFrameDataSource;
#import <Messenger/Messenger-Structs.h>
@class NSMutableIndexSet, NSMutableDictionary, NSIndexSet, NSObject;

@interface FLAnimatedImageFrameCache : NSObject {

	unsigned long long _requestedFrameIndex;
	NSMutableIndexSet* _cachedFrameIndexes;
	NSMutableIndexSet* _requestedFrameIndexes;
	NSMutableDictionary* _cachedFramesForIndexes;
	unsigned long long _frameCacheSizeMaxInternal;
	unsigned long long _memoryWarningCount;
	unsigned long long _frameCount;
	unsigned long long _frameCacheSizeOptimal;
	unsigned long long _posterImageFrameIndex;
	NSIndexSet* _allFramesIndexSet;
	NSObject*<OS_dispatch_queue> _serialQueue;
	FLAnimatedImageFrameCache* _weakProxy;
	id<FLAnimatedImageFrameDataSource> _dataSource;
	opaque_pthread_mutex_t _cachedFramesMutex;

}
+(void)registerInstanceOfClassForMemoryWarnings:(id)arg1 ;
+(void)initialize;
-(id)initWithFrameCount:(unsigned long long)arg1 skippedFrameCount:(unsigned long long)arg2 frameSize:(double)arg3 posterImage:(id)arg4 posterImageFrameIndex:(unsigned long long)arg5 dataSource:(id)arg6 ;
-(id)cachedImageAtIndex:(unsigned long long)arg1 ;
-(id)frameIndexesToCache;
-(void)addFrameIndexesToCache:(id)arg1 ;
-(void)purgeFrameCacheIfNeeded;
-(unsigned long long)frameCacheSizeCurrent;
-(id)synchronousImageAtIndex:(unsigned long long)arg1 ;
-(void)cacheFrame:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCachedFramesForIndexes:(id)arg1 ;
-(void)setFrameCacheSizeMaxInternal:(unsigned long long)arg1 ;
-(id)weakProxy;
-(void)resetFrameCacheSizeMaxInternal;
-(void)growFrameCacheSizeAfterMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)dataSource;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)posterImage;
@end
