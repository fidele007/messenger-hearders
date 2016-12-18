/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMessagesSnapshotNetworkFetchingDelegate.h>

@protocol FBMMessagesSnapshotStateMachineDelegate, FBMMessagesSnapshotCriticalNetworkFetching;
@class FBAnalytics, NSArray, NSMutableArray, NSString;

@interface FBMMessagesSnapshotStateMachine : NSObject <FBMMessagesSnapshotNetworkFetchingDelegate> {

	id<FBMMessagesSnapshotStateMachineDelegate> _delegate;
	FBAnalytics* _analytics;
	id<FBMMessagesSnapshotCriticalNetworkFetching> _criticalNetworkFetcher;
	NSArray* _nonCriticalFetchersWaitingToFire;
	NSMutableArray* _currentlyRunningNonCriticalFetchers;
	unsigned long long _currentState;

}

@property (assign) unsigned long long currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) BOOL isFetching; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesSnapshotNetworkFetcherDidCancel:(id)arg1 ;
-(void)messagesSnapshotNetworkFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)messagesSnapshotNetworkFetcherDidSuccessfullyCompleteFetch:(id)arg1 ;
-(void)_setCurrentStateAndAnnounceChange:(unsigned long long)arg1 ;
-(void)_fireOffAnyNonCriticalDataFetchesAndUpdateState;
-(void)_stopTrackingNonCriticalFetcherAndUpdateState:(id)arg1 ;
-(void)_updateStateAfterCriticalFetchIsCompleteAndNonCriticalFetchesHaveBeenFiredOff;
-(void)fetchMessagesSnapshot;
-(id)initWithCriticalNetworkFetcher:(id)arg1 nonCriticalNetworkFetchers:(id)arg2 delegate:(id)arg3 analytics:(id)arg4 ;
-(void)cancel;
-(NSString *)description;
-(unsigned long long)currentState;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(BOOL)isFetching;
@end

