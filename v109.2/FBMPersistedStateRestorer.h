/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNThreadMessageCaching, MNThreadSummaryCaching, MNGlobalMuteStatusWriting;
@class FBMPinnedGroupsManager, MNFetchedThreadKeyTracker, MNThreadListContinuityTracker, NSString;

@interface FBMPersistedStateRestorer : NSObject <FBClassProvidable> {

	FBMPinnedGroupsManager* _pinnedGroupsManager;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	id<MNThreadMessageCaching> _threadMessageCache;
	id<MNThreadSummaryCaching> _threadSummaryCache;
	MNThreadListContinuityTracker* _threadListContinuityTracker;
	id<MNGlobalMuteStatusWriting> _globalMuteStatusWriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)restoreAppState:(id)arg1 ;
-(void)restoreOldestContinuousInboxThreadTimestamp:(unsigned long long)arg1 ;
-(void)restoreThreadSummary:(id)arg1 messageSet:(id)arg2 ;
-(void)restorePinnedGroups:(id)arg1 ;
-(id)initWithPinnedGroupsManager:(id)arg1 fetchedThreadKeyTracker:(id)arg2 threadMessageCache:(id)arg3 threadSummaryCache:(id)arg4 threadListContinuityTracker:(id)arg5 globalMuteStatusWriter:(id)arg6 ;
-(void)restoreFetchedThreadKeys:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

