/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessageStoreWriting.h>
#import <Messenger/MNAPNSMessageStoreReading.h>
#import <Messenger/FBMCustomDictionaryStoreDelegate.h>

@protocol OS_dispatch_queue, MNAPNSMessageDiskRestoreListening;
@class NSObject, FBMCustomDictionaryStore, NSMutableDictionary, NSDictionary, NSString;

@interface MNAPNSMessageStoreMemoryCache : NSObject <MNAPNSMessageStoreWriting, MNAPNSMessageStoreReading, FBMCustomDictionaryStoreDelegate> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	FBMCustomDictionaryStore* _diskStore;
	NSMutableDictionary* _messageByMessageId;
	NSMutableDictionary* _messageIdsSetByThreadKey;
	id<MNAPNSMessageDiskRestoreListening> _restoreListener;
	BOOL _didCompleteRestore;
	NSDictionary* _sortedMessagesByThreadKey;

}

@property (copy) NSDictionary * sortedMessagesByThreadKey;              //@synthesize sortedMessagesByThreadKey=_sortedMessagesByThreadKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(void)addAPNSMessage:(id)arg1 ;
-(void)removeAPNSMessageWithMessageId:(id)arg1 ;
-(void)getSortedAPNSMessagesForThreadKey:(/*^block*/id)arg1 ;
-(id)initWithRestoredStateMergedListener:(id)arg1 updatingQueue:(id)arg2 ;
-(void)_addMessageToIndexes:(id)arg1 ;
-(void)_generateSortedAPNSMessagesForThreadKey:(id)arg1 ;
-(void)_removeMessageFromIndexes:(id)arg1 ;
-(NSDictionary *)sortedMessagesByThreadKey;
-(void)setSortedMessagesByThreadKey:(NSDictionary *)arg1 ;
@end

