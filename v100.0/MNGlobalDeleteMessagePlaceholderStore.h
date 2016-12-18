/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNGlobalDeleteMessagePlaceholderStoreReading.h>
#import <Messenger/MNGlobalDeleteMessagePlaceholderStoreWriting.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NSDictionary, NSString;

@interface MNGlobalDeleteMessagePlaceholderStore : NSObject <MNGlobalDeleteMessagePlaceholderStoreReading, MNGlobalDeleteMessagePlaceholderStoreWriting> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _messageByMessageId;
	NSMutableDictionary* _messageIdSetByThreadKey;
	NSMutableSet* _locallyDeletedMessageId;
	NSDictionary* _sortedPlaceholdersByThreadKey;

}

@property (copy) NSDictionary * sortedPlaceholdersByThreadKey;              //@synthesize sortedPlaceholdersByThreadKey=_sortedPlaceholdersByThreadKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)globalDeleteMessagePlaceholdersForThreadWithThreadKey:(id)arg1 ;
-(BOOL)globalDeleteMessagePlaceholderExistsForMessageId:(id)arg1 ;
-(void)addGlobalDeleteMessagePlaceholder:(id)arg1 ;
-(void)recordLocalDeleteMessageId:(id)arg1 ;
-(void)removeLocalDeleteMessageIdIfNeeded:(id)arg1 ;
-(void)removeGlobalDeleteMessagePlaceholderWithMessageIdIfNeeded:(id)arg1 withDelay:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updatesortedPlaceholder:(id)arg1 ;
-(void)_removeGlobalDeleteMessagePlaceholderWithMessageId:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)sortedPlaceholdersByThreadKey;
-(void)setSortedPlaceholdersByThreadKey:(NSDictionary *)arg1 ;
-(id)_generateSortedGlobalDeleteMessagesPlaceholders:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

