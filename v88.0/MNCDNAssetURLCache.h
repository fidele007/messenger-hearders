/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNAssetProfileImageURLCaching;
@class MNCDNAssetGenericURLCache;

@interface MNCDNAssetURLCache : NSObject {

	MNCDNAssetGenericURLCache* _genericURLCache;
	id<MNCDNAssetProfileImageURLCaching> _profileImageURLCache;

}
-(id)initWithGenericURLCache:(id)arg1 profileImageURLCache:(id)arg2 ;
-(void)invalidateUrlForAssetIdentifier:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCachedUrlForAssetIdentifier:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forAssetIdentifier:(id)arg2 ;
@end

