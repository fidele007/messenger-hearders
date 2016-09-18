/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>

@protocol MNConfirmedMessagingStatusDiskConsistencyAssuring, MNConfirmedMessagingStatusUpdateMappingDelegate, OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSString, NSObject, NSMutableDictionary, NSHashTable, NSDictionary;

@interface MNConfirmedMessagingStatusStore : NSObject <FBMCustomDictionaryStoreDelegate> {

	FBMCustomDictionaryStore* _diskHandler;
	id<MNConfirmedMessagingStatusDiskConsistencyAssuring> _diskConsistencyAssurer;
	NSString* _diskVersion;
	id<MNConfirmedMessagingStatusUpdateMappingDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _diskStates;
	NSHashTable* _pendingDiskUpdates;
	NSDictionary* _memoryStates;

}

@property (copy) NSDictionary * memoryStates;                       //@synthesize memoryStates=_memoryStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(NSDictionary *)memoryStates;
-(void)setMemoryStates:(NSDictionary *)arg1 ;
-(void)_applyUpdate:(id)arg1 ifAssured:(BOOL)arg2 ;
-(id)initWithDiskHandler:(id)arg1 diskConsistencyAssurer:(id)arg2 blobType:(unsigned long long)arg3 diskVersion:(id)arg4 delegate:(id)arg5 queue:(id)arg6 ;
-(id)confirmedMessagingStatusForKey:(id)arg1 ;
-(id)allConfirmedMessagingStatuses;
-(void)setConfirmedMessagingStatus:(id)arg1 forKey:(id)arg2 ;
-(void)removeConfirmedMessagingStatusForKey:(id)arg1 ;
-(void)reset;
-(void)_scheduleWrite;
@end

