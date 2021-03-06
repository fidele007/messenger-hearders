/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncSnapshotListening.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <FBSharedFramework/MNServiceControllable.h>

@protocol FBProvider;
@class MNGraphQLGroupThreadKeysFetcher, MNThreadStore, MNUserSettings, FBMSPErrorRetryManager, MNOmnipickerGating, MNGroupThreadsFetchingAnalyticsLogger, NSString;

@interface MNGroupThreadsFetcher : NSObject <MNMessagesSyncSnapshotListening, FBClassProvidable, MNServiceControllable> {

	id<FBProvider> _groupThreadKeysFetcherProvider;
	MNGraphQLGroupThreadKeysFetcher* _groupThreadKeysFetcher;
	MNThreadStore* _threadStore;
	MNUserSettings* _userSettings;
	FBMSPErrorRetryManager* _spErrorRetryManager;
	MNOmnipickerGating* _omnipickerGating;
	MNGroupThreadsFetchingAnalyticsLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_stopObservers;
-(void)_startObservers;
-(void)messagesSyncWillPerformCriticalSnapshot;
-(void)messagesSyncDidCompleteCriticalSnapshot;
-(void)messagesSyncDidFailCriticalSnapshotWithError:(id)arg1 ;
-(void)messagesSyncDidCompleteNonCriticalSnapshot;
-(id)initWithGroupThreadKeysFetcherProvider:(id)arg1 threadStore:(id)arg2 userSettings:(id)arg3 spErrorRetryManager:(id)arg4 omnipickerGating:(id)arg5 ;
-(BOOL)_shouldFetchGroupThreads;
-(void)_fetchGroupThreadsWithSource:(long long)arg1 ;
-(void)_didFetchGroupsMemModelMessageThreadsConnection:(id)arg1 ;
-(void)_didFailGroupThreadKeysFetchWithError:(id)arg1 ;
-(void)_handleThreadStoreSuccessWithNumThreadKeys:(long long)arg1 response:(id)arg2 ;
-(void)_didFailThreadStoreRequestWithError:(id)arg1 ;
-(void)_handleThreadStoreProgressUpdateWithNumThreadKeys:(long long)arg1 preliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(void)handleIdle;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
@end

