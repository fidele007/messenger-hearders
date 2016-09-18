/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessageDiskRestoreListening.h>
#import <Messenger/MNAPNSMessageStoreWriting.h>
#import <Messenger/MNAPNSMessageStoreReading.h>

@protocol OS_dispatch_queue, MNAPNSMessageDiskRestoreListening;
@class FBMCustomDictionaryStore, MNAPNSMessageStoreMemoryCache, NSObject, NSString;

@interface MNAPNSMessageStore : NSObject <MNAPNSMessageDiskRestoreListening, MNAPNSMessageStoreWriting, MNAPNSMessageStoreReading> {

	FBMCustomDictionaryStore* _diskHandler;
	MNAPNSMessageStoreMemoryCache* _memoryCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	id<MNAPNSMessageDiskRestoreListening> _restoreListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(id)initWithQueue:(id)arg1 messagingStore:(id)arg2 messagingStoreDatabaseDelayer:(id)arg3 ;
-(void)configureAndBeginRestoreWithListener:(id)arg1 ;
-(void)getSortedAPNSMessagesForThreadKey:(/*^block*/id)arg1 ;
-(void)addAPNSMessage:(id)arg1 ;
-(void)removeAPNSMessageWithMessageId:(id)arg1 ;
@end

