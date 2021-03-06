/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCRecentCallLogListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBWebRTCCallLogViewModelDelegate;
@class FBWebRTCRecentCallLog, FBWebRTCContactReadThroughCache, NSArray, FBWebRtcCallTabAggregationExperimentContext, NSString;

@interface FBWebRTCCallLogViewModel : NSObject <FBWebRTCRecentCallLogListener, FBClassProvidable> {

	BOOL _isFirstTimeFetchComplete;
	FBWebRTCRecentCallLog* _callLog;
	FBWebRTCContactReadThroughCache* _contactCache;
	NSArray* _fullyFetchedCallEntries;
	BOOL _useCallAggregation;
	BOOL _useNewDesignAggregation;
	BOOL _archiveSupport;
	FBWebRtcCallTabAggregationExperimentContext* _advancedCallAggregationExperement;
	id<FBWebRTCCallLogViewModelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallLogViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)checkCallLogModelSnapshotEqualityBetween:(id)arg1 and:(id)arg2 considerUnseenState:(BOOL)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)recentCallLogLoaded;
-(void)recentCallLogCallsChanged;
-(void)recentCallLogUnseenMissedCallCountChanged;
-(void)setAllCallsSeen;
-(long long)numberOfRecentCallEntriesIncludesAllMissedCalls;
-(void)setVoiceMailSeenForCallLogEntry:(id)arg1 ;
-(id)getSnapshot;
-(void)archiveForCallLogEntry:(id)arg1 ;
-(void)refreshCallLog;
-(id)initWithRecentCallLog:(id)arg1 contactCache:(id)arg2 experimentManager:(id)arg3 ;
-(id)getContactForFBID:(id)arg1 ;
-(id)_recentCallsConsistArchived:(BOOL)arg1 ;
-(BOOL)_isDate:(id)arg1 sameDayAsDate:(id)arg2 ;
-(void)_groupByUser:(id)arg1 resultTo:(id)arg2 ;
-(id)_getCallLogGroupedByDateConsistArchived:(BOOL)arg1 ;
-(void)_didFetchContactCache;
-(id)_getCallLogGroupedByDateAndVoiceMailConsistArchived:(BOOL)arg1 ;
-(id)_getCallLog;
-(long long)getRecentCallsCount;
-(void)deleteCallLogEntry:(id)arg1 ;
-(id)getSnapshotArchived:(BOOL)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallLogViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCCallLogViewModelDelegate>)delegate;
-(BOOL)isLoaded;
-(void)deleteCallAtIndex:(long long)arg1 ;
@end

