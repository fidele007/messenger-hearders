/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/MNSingleModelLoading.h>
#import <Messenger/MNSingleModelMonitoring.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNThreadSummarySubscribing, FBCancelable, MNModelInvalidating;
@class MNThreadStore, MNUserStore, MNTopGroupListFetcher, NSArray, NSObject, MNThreadSummarySubscribingAnnouncer, MNThreadParticipantNameFormatter, NSString;

@interface MNSearchNullStateGroupSectionViewModelLoader : NSObject <MNThreadSummarySubscribing, MNSingleModelLoading, MNSingleModelMonitoring> {

	MNThreadStore* _threadStore;
	MNUserStore* _userStore;
	id<MNAuthenticationManager> _authManager;
	MNTopGroupListFetcher* _topGroupFetcher;
	NSArray* _fetchedConversationGroups;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _sortedGroupDataModels;
	MNThreadSummarySubscribingAnnouncer* _summaryAnnouncer;
	id<MNThreadSummarySubscribing> _summarySubscriber;
	MNThreadParticipantNameFormatter* _nameFormatter;
	id<FBCancelable> _currentRequestCancelable;
	id<MNModelInvalidating> _invalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNModelInvalidating> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)_applyUpdate;
-(void)loadModelForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelForKey:(id)arg1 ;
-(id<MNModelInvalidating>)invalidator;
-(void)setInvalidator:(id<MNModelInvalidating>)arg1 ;
-(void)_loadViewModelOnSuccessWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchGroupsFromThreadStoreWithThreadKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchTopGroupListWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchTopGroupListSuccessWithMessageThreadsConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleLoadFailureWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleThreadsLoadSuccessWithThreadSummaries:(id)arg1 sortedThreadKeys:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadAllParticipatesFromThreadSummaries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleUsersLoadSuccessWithUsers:(id)arg1 threadSummaries:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithThreadStore:(id)arg1 userStore:(id)arg2 graphQLFragmentService:(id)arg3 queryConfigGenerator:(id)arg4 authManager:(id)arg5 summaryAnnouncer:(id)arg6 threadNameFormatter:(id)arg7 queue:(id)arg8 ;
-(void)startMonitoring;
-(void)stopMonitoring;
@end

