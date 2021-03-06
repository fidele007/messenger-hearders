/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CLGeocoder, FBDiskCache, FBAssetGeoCoderHelperDefaultRateLimiting;

@interface FBAssetGeoCoderHelper : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	CLGeocoder* _geoCoder;
	FBDiskCache* _cache;
	BOOL _canUseAreaOfInterest;
	FBAssetGeoCoderHelperDefaultRateLimiting* _rateLimiting;

}
+(BOOL)canUseLocation;
-(id)initWithSession:(id)arg1 canUseAreaOfInterest:(BOOL)arg2 rateLimiting:(id)arg3 ;
-(void)locationInfoForLocations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)locationInfoForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchAndCacheNameForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cachedValueForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_keyForLocation:(id)arg1 ;
-(void)_cacheAssetLocation:(id)arg1 ;
-(void)locationInfoForLocation:(id)arg1 withIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

