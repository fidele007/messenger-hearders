/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface FBAPISessionLoggedInUserIDCache : NSObject {

	NSFileManager* _fileManager;
	NSURL* _cacheURL;
	/*^block*/id _dataReadBlock;
	/*^block*/id _dataWriteBlock;

}
-(id)initWithFileManager:(id)arg1 cacheURL:(id)arg2 dataReadBlock:(/*^block*/id)arg3 dataWriteBlock:(/*^block*/id)arg4 ;
-(BOOL)fetchLoggedInUserIDFromCache:(id*)arg1 ;
-(void)persistLoggedInUserIDToCache:(id)arg1 ;
-(void)deleteLoggedInUserIDFromCache;
-(id)init;
@end
