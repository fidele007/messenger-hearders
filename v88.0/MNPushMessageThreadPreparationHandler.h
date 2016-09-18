/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class MNThreadStore, FBMessagingStoreDatabaseOpenedDelayer, FBMAppProperties, FBMPushLogger, NSObject, NSMutableSet, NSString;

@interface MNPushMessageThreadPreparationHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	MNThreadStore* _threadStore;
	FBMessagingStoreDatabaseOpenedDelayer* _databaseOpenedDelayer;
	FBMAppProperties* _appProperties;
	id<MNAuthenticationManager> _authManager;
	FBMPushLogger* _pushLogger;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	NSMutableSet* _pendingThreadFetchRequestIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_handleFetchedThreadSummary:(id)arg1 forAPNSMessage:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_fetchThreadForMessageWithThreadKey:(id)arg1 threadSummaryFetchCompletionBlock:(/*^block*/id)arg2 ;
-(void)_fetchThreadAfterMessagingStoreOpenedIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(void)_finishThreadFetchRequest:(id)arg1 threadSummary:(id)arg2 fetchedFromNetwork:(BOOL)arg3 threadSummaryFetchCompletionBlock:(/*^block*/id)arg4 ;
-(id)initWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 pushLogger:(id)arg5 queue:(id)arg6 ;
@end

