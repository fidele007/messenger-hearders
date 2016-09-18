/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBImageDownloaderCacheInternal.h>
#import <Messenger/FBImageDownloaderCache.h>

@protocol FBImageDownloaderCache <NSObject>
@required
-(void)fetchCachedImageForURL:(id)arg1 analyticsTags:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 cacheType:(unsigned long long)arg4;
-(unsigned long long)inMemoryCacheLimit;
-(void)fetchCachedImageOnDiskForURL:(id)arg1 analyticsTags:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(SCD_Struct_FB482*)cacheStatistics;
-(void)clear:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class FBImageDownloaderFastPathCache, FBCache, FBDiskCache, NSObject, NSString;

@interface FBImageDownloaderCache : NSObject <FBImageDownloaderCacheInternal, FBImageDownloaderCache> {

	FBImageDownloaderFastPathCache* _fastPathCache;
	FBCache* _memoryCache;
	FBDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	/*function pointer*/void* _memoryCacheKeyBuilder;
	/*function pointer*/void* _diskCacheKeyBuilder;
	SCD_Struct_FB483 _cacheStats;
	/*^block*/id _cachedResultFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diskCache;
-(void)fetchCachedImageForURL:(id)arg1 analyticsTags:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithDiskCache:(id)arg1 memoryCache:(id)arg2 memoryCacheKeyBuilder:(/*function pointer*/void*)arg3 diskCacheKeyBuilder:(/*function pointer*/void*)arg4 cachedResultFactory:(/*^block*/id)arg5 ;
-(void)cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 cacheType:(unsigned long long)arg4 ;
-(id)initWithDiskCache:(id)arg1 memoryCache:(id)arg2 cachedResultFactory:(/*^block*/id)arg3 ;
-(unsigned long long)inMemoryCacheLimit;
-(void)updateCacheStatForType:(unsigned long long)arg1 ;
-(void)fetchCachedImageOnDiskForURL:(id)arg1 analyticsTags:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)memoryCache;
-(SCD_Struct_FB483)cacheStatistics;
-(void)resetCacheStatistics;
-(BOOL)_fetchInMemoryCachedImageForURL:(id)arg1 analyticsTags:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_fetchCachedImageFinishedForURL:(id)arg1 analyticsTags:(id)arg2 cachedImage:(id)arg3 partialData:(id)arg4 memoryCacheKey:(id)arg5 cacheType:(unsigned long long)arg6 callbackQueue:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_dispatchBlockOnCallbackQueueWithImage:(id)arg1 partialData:(id)arg2 cacheType:(unsigned long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_cachedImageForCachedDataInDiskCache:(id)arg1 imageFileURL:(id)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)updateLastAccessDateForURL:(id)arg1 analyticsTags:(id)arg2 ;
-(void)_cacheImage:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 memoryCacheKey:(id)arg4 cacheType:(unsigned long long)arg5 ;
-(void)_cacheImageInMemCache:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 memoryCacheKey:(id)arg4 cacheType:(unsigned long long)arg5 ;
-(void)_cacheImageInDiskCache:(id)arg1 serializedImage:(id)arg2 forURL:(id)arg3 cacheType:(unsigned long long)arg4 ;
-(id)fastPathCache;
-(void)clear:(/*^block*/id)arg1 ;
@end

