/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNURLExpirationEvaluating;
@class FBCache, FBDiskCache, FBAnalytics;

@interface MNCDNAssetGenericURLCache : NSObject {

	FBCache* _urlCache;
	FBDiskCache* _urlDiskCache;
	id<MNCDNURLExpirationEvaluating> _expirationEvaluator;
	FBAnalytics* _analytics;

}
-(id)initWithCache:(id)arg1 diskCache:(id)arg2 expirationEvaluator:(id)arg3 analytics:(id)arg4 ;
-(id)getAllKeys;
-(void)_diskCacheDidFetchData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forKey:(id)arg2 ;
-(void)fetchCachedUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheUrlToMemoryCache:(id)arg1 forKey:(id)arg2 ;
@end

