/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASImageCacheProtocol.h>
#import <Messenger/ASImageDownloaderProtocol.h>
#import <Messenger/CKNetworkImageDownloading.h>
#import <Messenger/FBImageDownloadLogger.h>
#import <Messenger/FBInvalidating.h>

@protocol FBImageDownloaderCacheInternal;
@class FBImageDownloaderRequestManager, FBCachedImageFactory, FBImageDownloaderWeakImageStorage, NSString;

@interface FBImageDownloader : NSObject <ASImageCacheProtocol, ASImageDownloaderProtocol, CKNetworkImageDownloading, FBImageDownloadLogger, FBInvalidating> {

	BOOL _invalidated;
	id<FBImageDownloaderCacheInternal> _imageCache;
	int _networkFetches;
	FBImageDownloaderRequestManager* _requestManager;
	FBCachedImageFactory* _cachedImageFactory;
	FBImageDownloaderWeakImageStorage* _weakImageStorage;
	unsigned long long _inMemoryCacheLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long inMemoryCacheLimit;              //@synthesize inMemoryCacheLimit=_inMemoryCacheLimit - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)loggedOutImageDownloader;
-(id)downloadImageWithURL:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 analyticsTags:(id)arg4 options:(unsigned long long)arg5 queue:(id)arg6 downloadProgressBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)cancelImageDownload:(id)arg1 ;
-(id)downloadImageWithURL:(id)arg1 analyticsTags:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)fetchFirstCachedImageInURLs:(id)arg1 analyticsTags:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)downloadImageWithURL:(id)arg1 scenePath:(id)arg2 caller:(id)arg3 callbackQueue:(id)arg4 downloadProgressBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)accessCachedImageOnDiskWithURL:(id)arg1 analyticsTags:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cancelImageDownloadForIdentifier:(id)arg1 ;
-(id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgressBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCachedImageWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logFinishWithType:(unsigned long long)arg1 ;
-(void)clearAllImageCache:(/*^block*/id)arg1 ;
-(id)initWithNetworker:(id)arg1 imageCache:(id)arg2 cachedImageFactory:(id)arg3 configuration:(id)arg4 scenePathAnnouncer:(id)arg5 weakImageStorage:(id)arg6 ;
-(unsigned long long)inMemoryCacheLimit;
-(void)_fetchBetterMemoryHits:(id)arg1 currentBestImage:(id)arg2 URL:(id)arg3 cacheFetch:(id)arg4 analyticsTags:(id)arg5 ;
-(void)_fetchBetterDiskHits:(id)arg1 currentBestImage:(id)arg2 URL:(id)arg3 cacheFetch:(id)arg4 analyticsTags:(id)arg5 ;
-(id)initWithNetworker:(id)arg1 diskCache:(id)arg2 cachedImageFactory:(id)arg3 configuration:(id)arg4 scenePathAnnouncer:(id)arg5 weakImageStorage:(id)arg6 ;
-(void)resetStats;
-(void)setInMemoryCacheLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(SCD_Struct_FB501)stats;
@end

