/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache, FBDiskCache;

@interface FBLayeredCache : NSObject {

	FBCache* _memoryCache;
	FBDiskCache* _diskCache;

}
-(id)initWithMemoryCache:(id)arg1 diskCache:(id)arg2 ;
-(BOOL)containsDataForKey:(id)arg1 ;
-(void)cacheData:(id)arg1 forKey:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cacheData:(id)arg1 forKey:(id)arg2 extra:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)clear:(/*^block*/id)arg1 ;
-(id)dataForKey:(id)arg1 ;
@end
