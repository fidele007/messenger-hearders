/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSimpleDownloaderProtocol <NSObject>
@required
-(void)cancelFetchWithHandle:(id)arg1;
-(id)fetchWithRemoteURL:(id)arg1 priority:(long long)arg2 callbackQueue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5;
-(id)fetchWithRemoteURL:(id)arg1 callbackQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)fetchFileURLFromDiskCacheForRemoteURL:(id)arg1 completionBlock:(/*^block*/id)arg2;

@end

