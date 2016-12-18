/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNetworkDispatch, MNAuthenticationManager;
@class NSObject, MNCDNProfileImageSizeConfiguration;

@interface MNCDNProfileImageAssetURLFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBNetworkDispatch> _networkDispatcher;
	id<MNAuthenticationManager> _authManager;
	MNCDNProfileImageSizeConfiguration* _sizeConfiguration;

}
-(id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2 authManager:(id)arg3 sizeConfiguration:(id)arg4 ;
-(id)_QuerySizeFromMNCDNProfileImageSize:(unsigned long long)arg1 ;
-(void)fetchUrlForFbId:(id)arg1 size:(unsigned long long)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
@end

