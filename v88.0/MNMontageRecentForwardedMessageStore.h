/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>
#import <Messenger/MNMontageRecentForwardedMessageStoreWriting.h>
#import <Messenger/MNMontageRecentForwardedMessageStoreReading.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, MNMontageRecentForwardedMessageStoreListenerAnnouncer, NSDictionary, NSString;

@interface MNMontageRecentForwardedMessageStore : NSObject <FBMCustomDictionaryStoreDelegate, MNMontageRecentForwardedMessageStoreWriting, MNMontageRecentForwardedMessageStoreReading> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	MNMontageRecentForwardedMessageStoreListenerAnnouncer* _announcer;
	NSDictionary* _recentForwardedMessageKeys;

}

@property (copy) NSDictionary * recentForwardedMessageKeys;              //@synthesize recentForwardedMessageKeys=_recentForwardedMessageKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recentForwardedMessageKeyForThreadKey:(id)arg1 ;
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(NSDictionary *)recentForwardedMessageKeys;
-(void)setRecentForwardedMessageKeys:(NSDictionary *)arg1 ;
-(void)_scheduleWriteToDatabase;
-(void)setRecentForwardedMessageKey:(id)arg1 forThreadKey:(id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 queue:(id)arg3 ;
-(void)beginDiskRestore;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

