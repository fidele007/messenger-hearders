/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNCDNPhotoAssetURLFetcher, MNCDNVideoAssetURLFetcher, MNCDNProfileImageAssetURLFetcher, MNCDNThreadImageAssetURLFetcher, NSMutableSet, NSMutableDictionary;

@interface MNCDNAssetURLFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNPhotoAssetURLFetcher* _photoUrlFetcher;
	MNCDNVideoAssetURLFetcher* _videoUrlFetcher;
	MNCDNProfileImageAssetURLFetcher* _profileImageUrlFetcher;
	MNCDNThreadImageAssetURLFetcher* _threadImageUrlFetcher;
	NSMutableSet* _activeAssetIdentifiers;
	NSMutableDictionary* _assetToSuccessMap;
	NSMutableDictionary* _assetToFailureMap;

}
-(id)initWithPhotoUrlFetcher:(id)arg1 videoUrlFetcher:(id)arg2 profileImageUrlFetcher:(id)arg3 threadImageUrlFetcher:(id)arg4 queue:(id)arg5 ;
-(void)_addDependantAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_startFetchForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_cleanUpAssetIdentifier:(id)arg1 ;
-(void)_assetIdentifier:(id)arg1 succeededWithURL:(id)arg2 ;
-(void)_assetIdentifier:(id)arg1 failedWithError:(id)arg2 ;
-(void)_triggerFetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)fetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end
