/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMessagesSnapshotStateMachineDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMailboxPreparing.h>

@protocol FBMMessagesSnapshotNonCriticalNetworkFetchingFactory, FBMMailboxPreparingDelegate;
@class FBMSPErrorRetryManager, FBAnalytics, FBMMessagesSnapshotThreadsCriticalFetcher, FBMMessagesSnapshotStateMachine, NSString;

@interface FBMInboxPreparer : NSObject <FBMMessagesSnapshotStateMachineDelegate, FBClassProvidable, FBMMailboxPreparing> {

	FBMSPErrorRetryManager* _syncProtocolErrorRetryManager;
	FBAnalytics* _analytics;
	FBMMessagesSnapshotThreadsCriticalFetcher* _threadsCriticalFetcher;
	id<FBMMessagesSnapshotNonCriticalNetworkFetchingFactory> _nonCriticalFetcherFactory;
	FBMMessagesSnapshotStateMachine* _snapshotStateMachine;
	id<FBMMailboxPreparingDelegate> _delegate;
	unsigned long long _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureAndPrepareThreadListWithDelegate:(id)arg1 ;
-(id)initWithThreadsCriticalFetcher:(id)arg1 nonCriticalFetcherFactory:(id)arg2 syncProtocolErrorRetryManager:(id)arg3 analytics:(id)arg4 ;
-(void)_criticalSnapshotPortionDidSucceed;
-(void)messagesSnapshotStateMachine:(id)arg1 stateDidChangeFrom:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)messagesSnapshotStateMachineDidCompleteNonCriticalFetch:(id)arg1 ;
-(void)messagesSnapshotStateMachine:(id)arg1 criticalFetchDidFailWithError:(id)arg2 ;
-(void)cancel;
-(unsigned long long)currentState;
-(BOOL)isFetching;
@end

