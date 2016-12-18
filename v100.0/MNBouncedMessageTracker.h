/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNSecureMessagingStore, NSObject, NSDictionary;

@interface MNBouncedMessageTracker : NSObject {

	MNSecureMessagingStore* _store;
	NSObject*<OS_dispatch_queue> _updateQueue;
	BOOL _loadedFromDisk;
	NSDictionary* _bouncedMessages;

}

@property (copy) NSDictionary * bouncedMessages;              //@synthesize bouncedMessages=_bouncedMessages - In the implementation block
@property (assign) BOOL loadedFromDisk;                       //@synthesize loadedFromDisk=_loadedFromDisk - In the implementation block
-(id)bouncedMessageIdsForThreadWithKey:(id)arg1 ;
-(void)trackBouncedMessageWithId:(id)arg1 toThreadWithKey:(id)arg2 ;
-(void)setBouncedMessages:(NSDictionary *)arg1 ;
-(BOOL)loadedFromDisk;
-(void)_loadStateFromDisk;
-(NSDictionary *)bouncedMessages;
-(void)_writeState:(id)arg1 ;
-(void)setLoadedFromDisk:(BOOL)arg1 ;
-(id)initWithStore:(id)arg1 updateQueue:(id)arg2 ;
-(void)untrackBouncedMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 ;
-(void)untrackBouncedMessagesForThreadWithKey:(id)arg1 ;
-(void)loadBouncedMessagesFromDisk;
-(void)reset;
@end
