/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>
#import <Messenger/MNMessageRefreshNetworkRunnerListening.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, NSDictionary, NSString;

@interface MNMessageRefreshStateCache : NSObject <FBMCustomDictionaryStoreDelegate, MNMessageRefreshNetworkRunnerListening> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _messageIdsByThreadKey;

}

@property (copy) NSDictionary * messageIdsByThreadKey;              //@synthesize messageIdsByThreadKey=_messageIdsByThreadKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_scheduleSaveToDisk;
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(void)messageRefreshNetworkRunnerDidFetchMesssage:(id)arg1 ;
-(void)messageRefreshNetworkRunnerDidFailToFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 dueToError:(id)arg3 ;
-(void)setMessageIdsByThreadKey:(NSDictionary *)arg1 ;
-(NSDictionary *)messageIdsByThreadKey;
-(void)_updateMessageIdsAndScheduleSaveForThreadWithKey:(id)arg1 withUpdateBlock:(/*^block*/id)arg2 ;
-(id)getAllMessageIdsNeedingRefreshForThreadKey:(id)arg1 ;
-(void)markNeedsRefreshForMessagesWithIds:(id)arg1 onThreadWithKey:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
@end

