/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCDNAssetProfileImageURLCaching.h>

@class MNCDNAssetIDImageURLCacheKeyGenerator, MNCDNAssetGenericURLCache;

@interface MNCDNAssetProfileImageURLCache : NSObject <MNCDNAssetProfileImageURLCaching> {

	MNCDNAssetIDImageURLCacheKeyGenerator* _cacheKeyGenerator;
	MNCDNAssetGenericURLCache* _genericURLCache;

}
-(void)cacheUrl:(id)arg1 forFbId:(id)arg2 size:(unsigned long long)arg3 ;
-(void)fetchCachedUrlForFbId:(id)arg1 queue:(id)arg2 size:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateUrlForFbId:(id)arg1 queue:(id)arg2 size:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateAllUrlsForFbId:(id)arg1 ;
-(id)initWithCDNAssetGenericURLCache:(id)arg1 ;
@end
