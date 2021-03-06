/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNParticipantUserCacheDiskHandlerListener, OS_dispatch_queue;
@class FBTimeThrottler, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, NSObject, NSDate, FBMIndexedUserSet;

@interface MNParticipantUserCacheDiskHandler : NSObject {

	FBTimeThrottler* _throttler;
	double _minTimeBetweenWrites;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingDelayer;
	id<MNParticipantUserCacheDiskHandlerListener> _listener;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSDate* _lastSyncedDate;
	unsigned long long _messagingStoreCustomBlobType;
	BOOL _diskLoadIsScheduled;
	FBMIndexedUserSet* _usersByUserId;

}

@property (copy) FBMIndexedUserSet * usersByUserId;                   //@synthesize usersByUserId=_usersByUserId - In the implementation block
@property (nonatomic,readonly) BOOL diskLoadIsScheduled;              //@synthesize diskLoadIsScheduled=_diskLoadIsScheduled - In the implementation block
-(FBMIndexedUserSet *)usersByUserId;
-(void)configureAndBeginRestoreWithListener:(id)arg1 ;
-(void)setUsersByUserId:(FBMIndexedUserSet *)arg1 ;
-(BOOL)diskLoadIsScheduled;
-(BOOL)scheduleWriteOfUsersByUserId:(id)arg1 ;
-(id)initMessagingStore:(id)arg1 messagingStoreDatabaseDelayer:(id)arg2 serializationQueue:(id)arg3 messagingStoreCustomBlobType:(unsigned long long)arg4 minTimeBetweenWrites:(double)arg5 ;
-(void)_executeLoad;
-(void)_executeSave;
-(void)_restoreSavedMessagers:(id)arg1 ;
-(void)_scheduleSaveWithPreviouslyCachedData;
-(id)initMessagingStore:(id)arg1 messagingStoreDatabaseDelayer:(id)arg2 serializationQueue:(id)arg3 messagingStoreCustomBlobType:(unsigned long long)arg4 ;
@end

