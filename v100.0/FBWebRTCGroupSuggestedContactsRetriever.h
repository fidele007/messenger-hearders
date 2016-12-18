/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, FBMGroupThreadsFetching, FBMPinnedThreadsRestoring, MNSuggestedContactsRetrieverDelegate;
@class FBMPinnedGroupsManager, MNThreadStore, MNUserStore, NSOrderedSet, NSString;

@interface FBWebRTCGroupSuggestedContactsRetriever : NSObject <MNSuggestedContactsRetriever, FBClassProvidable> {

	FBMPinnedGroupsManager* _pinnedGroupsManager;
	MNThreadStore* _threadStore;
	id<FBProvider> _fetcherProvider;
	id<FBMGroupThreadsFetching> _fetcher;
	id<FBMPinnedThreadsRestoring> _backgroundRestorer;
	MNUserStore* _userStore;
	unsigned long long _userRequestId;
	BOOL _hasFetchedThreads;
	NSOrderedSet* _groupThreadKeys;
	NSString* _ownerId;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;
	unsigned long long _maxContactCount;

}

@property (assign,nonatomic) unsigned long long maxContactCount;                                    //@synthesize maxContactCount=_maxContactCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_fetchGroups;
-(void)_didFetchGroupThreads:(id)arg1 updateTime:(long long)arg2 ;
-(void)_didFailToFetchPinnedThreads:(id)arg1 ;
-(void)_handleFetchedGroupThreads:(id)arg1 updateTime:(long long)arg2 ;
-(void)_handlePinnedThreadsRestorerSuccessWithThreads:(id)arg1 ;
-(void)_handlePinnedThreadsRestorerFailureWithError:(id)arg1 ;
-(void)_handleUserFetchError:(id)arg1 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)setMaxContactCount:(unsigned long long)arg1 ;
-(unsigned long long)maxContactCount;
-(void)_beginReloadGroupThreads;
-(void)_beginLoadsForThreadKeys;
-(void)_completePreparationWithThreads:(id)arg1 users:(id)arg2 ;
-(void)_fetchUsersAndBuildsWithSummaries:(id)arg1 ;
-(id)_ConversationContactFromThreadSummaryIdToUserMap:(id)arg1 idToUser:(id)arg2 ownerId:(id)arg3 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

