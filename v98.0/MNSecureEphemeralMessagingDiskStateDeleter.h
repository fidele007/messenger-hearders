/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNEphemeralMessageExpirationTimerStoreListening.h>
#import <Messenger/MNEphemeralMessagingTombstonedMessageDeleting.h>

@protocol MNEphemeralMessageExpirationTimerStoreReading, MNEphemeralMessageExpirationTimerStoreUpdating, MNEphemeralMessageStatusCalculating, MNAuthenticationManager, FBClock, OS_dispatch_queue;
@class MNSecureThreadUpdater, MNSecureMessagingStore, NSObject, NSString;

@interface MNSecureEphemeralMessagingDiskStateDeleter : NSObject <MNEphemeralMessageExpirationTimerStoreListening, MNEphemeralMessagingTombstonedMessageDeleting> {

	id<MNEphemeralMessageExpirationTimerStoreReading> _ephemeralExpirationTimerStoreReader;
	id<MNEphemeralMessageExpirationTimerStoreUpdating> _ephemeralExpirationTimerStoreWriter;
	id<MNEphemeralMessageStatusCalculating> _ephemeralMessageStatusCalculator;
	MNSecureThreadUpdater* _secureThreadUpdater;
	MNSecureMessagingStore* _secureMessagingStore;
	id<MNAuthenticationManager> _authManager;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteTombstonedMessagesWithKeys:(id)arg1 onThread:(id)arg2 ;
-(void)ephemeralMessageExpirationTimersAddedForThreadWithKey:(id)arg1 ;
-(void)ephemeralMessageExpirationTimersExpiredForThreadsWithKeys:(id)arg1 ;
-(void)_timersExpiredOnSecureThreadKey:(id)arg1 ;
-(void)_pruneExpiredEphemeralMessages:(id)arg1 fromDiskForSecureThread:(id)arg2 ;
-(void)_performDiskCleanupOfMessagesInHoldingTank;
-(void)_performDiskCleanupOfExpiredIncomingEpehemeralMessages;
-(void)_performDiskCleanupOnSecureThread:(id)arg1 ;
-(id)_filterToFullyExpiredSentMessageKeys:(id)arg1 onSecureThread:(id)arg2 ;
-(BOOL)_deleteMessageWithId:(id)arg1 withThreadKey:(id)arg2 ;
-(id)_retrieveMessageWithMid:(id)arg1 ;
-(id)initWithEphemeralExpirationTimerStoreReader:(id)arg1 ephemeralExpirationTimerStoreWriter:(id)arg2 ephemeralMessageStatusCalculator:(id)arg3 secureThreadUpdater:(id)arg4 secureMessagingStore:(id)arg5 authManager:(id)arg6 clock:(id)arg7 queue:(id)arg8 ;
-(void)performDiskCleanup;
@end

