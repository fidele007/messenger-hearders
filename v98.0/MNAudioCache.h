/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class NSMutableDictionary, NSString, NSOperationQueue, NSDate, NSBlockOperation;

@interface MNAudioCache : NSObject <FBViewerContextClassProvidable> {

	NSMutableDictionary* lruKeyCache;
	long long lruTime;
	NSMutableDictionary* memCache;
	NSString* diskCachePath;
	NSOperationQueue* cacheInQueue;
	NSOperationQueue* cacheOutQueue;
	NSDate* _lastCleanDate;
	unsigned long long _cleanupTaskID;
	NSBlockOperation* _cleanupOperation;

}

@property (nonatomic,retain) NSDate * lastCleanDate;                           //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (assign,nonatomic) unsigned long long cleanupTaskID;                 //@synthesize cleanupTaskID=_cleanupTaskID - In the implementation block
@property (nonatomic,retain) NSBlockOperation * cleanupOperation;              //@synthesize cleanupOperation=_cleanupOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)clearAllMemoryAndDisk;
-(void)cleanDisk;
-(id)audioFromKey:(id)arg1 ;
-(void)removeAudioForKey:(id)arg1 ;
-(id)audioFromKey:(id)arg1 fromDisk:(BOOL)arg2 ;
-(void)storeAudio:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3 ;
-(void)queryDiskCacheForKey:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 ;
-(void)clearAllMemory;
-(void)setCleanupTaskID:(unsigned long long)arg1 ;
-(void)setLastCleanDate:(NSDate *)arg1 ;
-(void)completeCleanupOperation;
-(id)cachePathForKey:(id)arg1 ;
-(void)notifyDelegate:(id)arg1 ;
-(void)storeKeyWithDataToDisk:(id)arg1 ;
-(void)updateLRUCacheForKey:(id)arg1 ;
-(void)queryDiskCacheOperation:(id)arg1 ;
-(void)clearMemCache;
-(void)cleanDiskUntilOperationCancelled:(id)arg1 ;
-(unsigned long long)cleanupTaskID;
-(void)setCleanupOperation:(NSBlockOperation *)arg1 ;
-(NSDate *)lastCleanDate;
-(void)clearDisk;
-(void)storeAudio:(id)arg1 forKey:(id)arg2 ;
-(void)clearMemory;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground;
-(NSBlockOperation *)cleanupOperation;
@end
