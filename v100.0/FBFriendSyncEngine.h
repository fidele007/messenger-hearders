/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFullSyncOperationDelegate.h>
#import <Messenger/FBDeltaSyncOperationDelegate.h>
#import <Messenger/FBSingleUserSyncOperationDelegate.h>
#import <Messenger/FBSyncEngine.h>

@protocol FBSyncEngineDelegate, FBContactsSyncOperationFactory, FBFacebookRequestSender;
@class FBContactsFetchContext, NSOperationQueue, NSOperation, NSDate, FBAnalytics, NSString;

@interface FBFriendSyncEngine : NSObject <FBFullSyncOperationDelegate, FBDeltaSyncOperationDelegate, FBSingleUserSyncOperationDelegate, FBSyncEngine> {

	FBContactsFetchContext* _previousFullSyncContext;
	id<FBSyncEngineDelegate> _delegate;
	id<FBContactsSyncOperationFactory> _syncOperationFactory;
	id<FBFacebookRequestSender> _requestSender;
	NSOperationQueue* _operationQueue;
	NSOperation* _pendingFullSync;
	NSOperation* _pendingDeltaSync;
	NSDate* _syncStartTime;
	FBAnalytics* _analytics;

}

@property (nonatomic,retain) id<FBContactsSyncOperationFactory> syncOperationFactory;              //@synthesize syncOperationFactory=_syncOperationFactory - In the implementation block
@property (nonatomic,retain) id<FBFacebookRequestSender> requestSender;                            //@synthesize requestSender=_requestSender - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperation * pendingFullSync;                                        //@synthesize pendingFullSync=_pendingFullSync - In the implementation block
@property (nonatomic,retain) NSOperation * pendingDeltaSync;                                       //@synthesize pendingDeltaSync=_pendingDeltaSync - In the implementation block
@property (nonatomic,retain) NSDate * syncStartTime;                                               //@synthesize syncStartTime=_syncStartTime - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                              //@synthesize analytics=_analytics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<FBSyncEngineDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(id)initWithFacebookRequestSender:(id)arg1 syncOperationFactory:(id)arg2 analytics:(id)arg3 ;
-(void)forceUserSyncWithPreviousSyncSummary:(id)arg1 ;
-(void)syncUsersWithPreviousSyncSummary:(id)arg1 ;
-(void)forceUserSyncForUserWithId:(id)arg1 ;
-(void)cleanUpSync;
-(void)setRequestSender:(id<FBFacebookRequestSender>)arg1 ;
-(void)setSyncOperationFactory:(id<FBContactsSyncOperationFactory>)arg1 ;
-(void)beginSyncWithPreviousSyncSummary:(id)arg1 ;
-(id<FBContactsSyncOperationFactory>)syncOperationFactory;
-(NSOperation *)pendingFullSync;
-(NSOperation *)pendingDeltaSync;
-(void)initializeFullFBFriendSync;
-(void)startFullFBFriendSync;
-(void)startDeltaFBFriendSyncWithSummary:(id)arg1 ;
-(void)setSyncStartTime:(NSDate *)arg1 ;
-(void)setPendingFullSync:(NSOperation *)arg1 ;
-(void)setPendingDeltaSync:(NSOperation *)arg1 ;
-(NSDate *)syncStartTime;
-(void)fullSyncOperation:(id)arg1 failedWithError:(id)arg2 ;
-(void)fullSyncOperation:(id)arg1 completedWithResult:(id)arg2 ;
-(void)deltaSyncOperation:(id)arg1 failedWithError:(id)arg2 fallBackToFullSyncIfPossible:(BOOL)arg3 ;
-(void)deltaSyncOperation:(id)arg1 completedWithResult:(id)arg2 ;
-(void)singleUserSyncOperation:(id)arg1 completedWithResult:(id)arg2 ;
-(void)fullSyncOperation:(id)arg1 couldNotSyncWithError:(id)arg2 ;
-(void)fullSyncOperation:(id)arg1 didCompleteSyncWithResult:(id)arg2 ;
-(void)deltaSyncOperation:(id)arg1 couldNotSyncWithError:(id)arg2 fallBackToFullSyncIfPossible:(BOOL)arg3 ;
-(void)deltaSyncOperation:(id)arg1 didCompleteSyncWithResult:(id)arg2 ;
-(void)singleUserSyncOperation:(id)arg1 didCompleteSyncWithResult:(id)arg2 ;
-(void)singleUserSyncOperation:(id)arg1 couldNotSyncWithError:(id)arg2 ;
-(id<FBFacebookRequestSender>)requestSender;
-(void)setDelegate:(id<FBSyncEngineDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSyncEngineDelegate>)delegate;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)cancelSync;
@end

