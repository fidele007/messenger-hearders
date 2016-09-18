/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCacheIndexFileDelegate.h>

@protocol OS_dispatch_queue;
@class NSCache, FBCacheIndex, NSString, NSObject;

@interface FBDataDiskCache : NSObject <FBCacheIndexFileDelegate> {

	NSCache* _inMemoryCache;
	FBCacheIndex* _cacheIndex;
	NSString* _dataCachePath;
	NSObject*<OS_dispatch_queue> _fileQueue;

}

@property (nonatomic,copy) NSString * dataCachePath;                                //@synthesize dataCachePath=_dataCachePath - In the implementation block
@property (assign,nonatomic) unsigned long long cacheSizeMemory; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> fileQueue;              //@synthesize fileQueue=_fileQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)cacheIndex:(id)arg1 writeFileWithName:(id)arg2 data:(id)arg3 ;
-(void)cacheIndex:(id)arg1 deleteFileWithName:(id)arg2 ;
-(BOOL)_doesFileExist:(id)arg1 ;
-(unsigned long long)cacheSizeMemory;
-(void)setCacheSizeMemory:(unsigned long long)arg1 ;
-(id)dataForURL:(id)arg1 ;
-(void)removeDataForUrl:(id)arg1 ;
-(void)removeDataForSession:(id)arg1 ;
-(void)setData:(id)arg1 forURL:(id)arg2 ;
-(NSString *)dataCachePath;
-(void)setDataCachePath:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)fileQueue;
@end

