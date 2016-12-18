/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNEphemeralMessageExpirationTimerStoreReading.h>
#import <Messenger/MNEphemeralMessageExpirationTimerStoreUpdating.h>

@protocol MNEphemeralMessageExpirationTimerStoreJobScheduling, MNEphemeralMessageExpirationTimerStoreListening, FBClock, OS_dispatch_queue;
@class FBTimeThrottler, FBPreferences, NSObject, NSDictionary, NSString;

@interface MNEphemeralMessageExpirationTimerStore : NSObject <MNEphemeralMessageExpirationTimerStoreReading, MNEphemeralMessageExpirationTimerStoreUpdating> {

	FBTimeThrottler* _diskThrottler;
	FBPreferences* _diskStore;
	id<MNEphemeralMessageExpirationTimerStoreJobScheduling> _jobScheduler;
	id<MNEphemeralMessageExpirationTimerStoreListening> _listener;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _updateQueue;
	unsigned long long _nextTimerExpirationDate;
	NSDictionary* _threadKeyToMessageKeyUpcomingExpirationMap;
	NSDictionary* _threadKeyToPreviouslyExpiredMessageKeySet;
	NSDictionary* _threadKeyToBlanketExpirationTimestamps;

}

@property (copy) NSDictionary * threadKeyToMessageKeyUpcomingExpirationMap;              //@synthesize threadKeyToMessageKeyUpcomingExpirationMap=_threadKeyToMessageKeyUpcomingExpirationMap - In the implementation block
@property (copy) NSDictionary * threadKeyToPreviouslyExpiredMessageKeySet;               //@synthesize threadKeyToPreviouslyExpiredMessageKeySet=_threadKeyToPreviouslyExpiredMessageKeySet - In the implementation block
@property (copy) NSDictionary * threadKeyToBlanketExpirationTimestamps;                  //@synthesize threadKeyToBlanketExpirationTimestamps=_threadKeyToBlanketExpirationTimestamps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpcomingExpirationTimesForMessageKeys:(NSDictionary*)arg1 onThread:(id)arg2 ;
-(void)setBlanketExpirationTimestampIfNecessary:(id)arg1 onThread:(id)arg2 ;
-(id)allKnownThreadKeys;
-(id)keysOfMessagesWithExpiredTimersOnThread:(id)arg1 ;
-(void)stopTrackingPreviouslyExpiredMessageKeys:(id)arg1 onThread:(id)arg2 ;
-(id)blanketExpirationTimestampsForThreadKey:(id)arg1 ;
-(void)stopTrackingBlanketExpirationTimestamp:(id)arg1 onThread:(id)arg2 ;
-(void)setThreadKeyToPreviouslyExpiredMessageKeySet:(NSDictionary *)arg1 ;
-(void)setThreadKeyToMessageKeyUpcomingExpirationMap:(NSDictionary *)arg1 ;
-(void)setThreadKeyToBlanketExpirationTimestamps:(NSDictionary *)arg1 ;
-(void)_performDiskSave;
-(NSDictionary *)threadKeyToPreviouslyExpiredMessageKeySet;
-(NSDictionary *)threadKeyToMessageKeyUpcomingExpirationMap;
-(NSDictionary *)threadKeyToBlanketExpirationTimestamps;
-(void)_setNextTimerExpirationDateAndScheduleJob:(unsigned long long)arg1 ;
-(void)_scheduleDiskSave;
-(void)_jobSchedulerFiredForTimestamp:(unsigned long long)arg1 ;
-(id)explicitExpirationTimerForMessageWithKey:(id)arg1 onThread:(id)arg2 ;
-(id)initWithPreferences:(id)arg1 jobScheduler:(id)arg2 clock:(id)arg3 listener:(id)arg4 numberOfSecondsToThrottle:(double)arg5 updateQueue:(id)arg6 ;
-(void)loadStateFromDisk;
@end

