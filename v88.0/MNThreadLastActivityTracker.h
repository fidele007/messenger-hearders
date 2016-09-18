/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMessageSubscribing.h>
#import <Messenger/FBMSPDeltaHandlerListener.h>
#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNLastActivityTracking.h>
#import <Messenger/MNPushMessageReceivedListening.h>

@protocol FBClock, MNThreadMessageCaching, FBMSPDeltaHandlerListener, MNAuthenticationManager, MNThreadSummaryCacheReading;
@class NSDictionary, NSMutableDictionary, MNLastActivityTrackingListeningAnnouncer, NSString;

@interface MNThreadLastActivityTracker : NSObject <MNThreadMessageSubscribing, FBMSPDeltaHandlerListener, MNThreadSummarySubscribing, FBViewerContextClassProvidable, MNLastActivityTracking, MNPushMessageReceivedListening> {

	NSDictionary* _personIdToLastActiveMap;
	NSMutableDictionary* _personIdToLastUpdateMap;
	id<FBClock> _clock;
	id<MNThreadMessageCaching> _threadMessageCache;
	id<FBMSPDeltaHandlerListener> _deltaHandlerListenerDispatcher;
	MNLastActivityTrackingListeningAnnouncer* _announcer;
	id<MNAuthenticationManager> _authManager;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didReceiveAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 preparedThreadSummary:(id)arg4 ;
-(void)didReceiveSyncMessage:(id)arg1 ;
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)_startNotificationObservations;
-(id)initWithThreadSummaryCacheReader:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 threadMessageCache:(id)arg3 threadMessageSubscribingAnnouncer:(id)arg4 deltaHandlerAnnouncer:(id)arg5 clock:(id)arg6 authManager:(id)arg7 ;
-(void)_stopNotificationObservations;
-(void)_didPrefetchMessages:(id)arg1 ;
-(void)_updateTimesForUsersOnAllThreads;
-(void)_updateTimesForUsersFromThreadKey:(id)arg1 ;
-(void)_updateTimesForUsersOnThreads:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(id)lastActivityDateForPersonWithId:(id)arg1 ;
-(id)lastUpdateTimeForPersonWithId:(id)arg1 ;
-(void)addLastActivityTrackingListener:(id)arg1 ;
-(void)removeLastActivityTrackingListener:(id)arg1 ;
-(id)personIdToLastActivityMap;
-(void)_didFetchThreadMessages:(id)arg1 ;
-(void)dealloc;
@end

