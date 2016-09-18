/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDiskCacheProtocol;
@class NSString, FBGraphQLConnectionStorePersistentPageLoaderQueue;

@interface FBGraphQLConnectionStorePersistentPageLoader : NSObject {

	id<FBDiskCacheProtocol> _diskCache;
	NSString* _diskCacheKey;
	long long _options;
	FBGraphQLConnectionStorePersistentPageLoaderQueue* _workQueue;

}
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 options:(long long)arg3 ;
-(void)persistPage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadPageType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

