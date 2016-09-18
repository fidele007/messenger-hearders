/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNConfirmedMessagingStatusUpdateMappingDelegate.h>
#import <Messenger/MNMessageListFetchedMemoryStateAffirming.h>
#import <Messenger/MNMessageListFetchedDiskStateAffirming.h>

@protocol OS_dispatch_queue;
@class MNConfirmedMessagingStatusStore, NSObject, NSString;

@interface MNMessageListFetchedTracker : NSObject <MNConfirmedMessagingStatusUpdateMappingDelegate, MNMessageListFetchedMemoryStateAffirming, MNMessageListFetchedDiskStateAffirming> {

	MNConfirmedMessagingStatusStore* _store;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markMessageListNotFullyFetched:(id)arg1 ;
-(BOOL)isMessageWithTimestamp:(unsigned long long)arg1 oldestMessageInThread:(id)arg2 ;
-(void)markMessageListFullyFetched:(id)arg1 withOldestMessageTimestamp:(unsigned long long)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 diskConsistencyAssurer:(id)arg3 queue:(id)arg4 ;
-(BOOL)hasFetchedAndPersistedFullMessageList:(id)arg1 ;
-(id)confirmedMessagingStatusForKey:(id)arg1 status:(NSNumber*)arg2 ;
-(id)_threadKeyToOldestMessageTimestampMap;
-(void)reset;
@end
