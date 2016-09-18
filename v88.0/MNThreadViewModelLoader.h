/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNPendingThreadQuerying, MNAuthenticationManager, MNThreadSummaryOptimisticStateApplying, MNSecureThreadExistenceInfoCacheReading, MNMessageListFetchedMemoryStateAffirming, MNEphemeralMessageStatusCalculating;
@class MNThreadParticipantNameFormatter, MNThreadViewModelLoaderStateMachine, MNThreadViewModelLoaderRequestBehaviorCaller, MNThreadViewModelLoaderStoreRequestRunner, MNThreadViewModelLoaderForPendingThread, MNAttributionAppSupplementaryInfoLoader, MNThreadContextManager, MNPageResponsivenessCache, MNWelcomeNuxCache, MNThreadSummaryUpdateCreatorFactory, NSString;

@interface MNThreadViewModelLoader : NSObject <MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate, FBViewerContextClassProvidable> {

	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	id<MNAuthenticationManager> _authManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNThreadViewModelLoaderStateMachine* _stateMachine;
	MNThreadViewModelLoaderRequestBehaviorCaller* _behaviorCaller;
	MNThreadViewModelLoaderStoreRequestRunner* _requester;
	MNThreadViewModelLoaderForPendingThread* _loaderForPendingThread;
	MNAttributionAppSupplementaryInfoLoader* _attributionLoader;
	MNThreadContextManager* _threadContextManager;
	MNPageResponsivenessCache* _pageResponsivenessCache;
	MNWelcomeNuxCache* _welcomeNuxCache;
	id<MNThreadSummaryOptimisticStateApplying> _threadSummaryOptimsiticUpdater;
	MNThreadSummaryUpdateCreatorFactory* _threadSummaryUpdateCreatorFactory;
	id<MNSecureThreadExistenceInfoCacheReading> _secureThreadExistenceInfoCache;
	id<MNMessageListFetchedMemoryStateAffirming> _messageListFetchedAffirmer;
	id<MNEphemeralMessageStatusCalculating> _ephemeralMessageStatusCalculator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)cancelRequestWithId:(unsigned long long)arg1 ;
-(unsigned long long)beginLoadThreadViewModelForThreadWithLocalThreadQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(id)initWithAnalytics:(id)arg1 userStore:(id)arg2 threadStore:(id)arg3 apnsMessageStore:(id)arg4 messageSendQuerier:(id)arg5 pendingThreadQuerier:(id)arg6 threadSummaryOptimsiticUpdater:(id)arg7 messageOptimisticUpdateApplier:(id)arg8 globalDeleteMessageStoreReader:(id)arg9 threadContextManager:(id)arg10 authenticationManager:(id)arg11 experimentManager:(id)arg12 loaderForPendingThread:(id)arg13 pageResponsivenessCache:(id)arg14 nameFormatter:(id)arg15 attributionAppSupplementaryInfoLoader:(id)arg16 threadSummaryUpdateCreatorFactory:(id)arg17 welcomeNuxCache:(id)arg18 secureThreadExistenceInfoCache:(id)arg19 messageListFetchedAffirmer:(id)arg20 ephemeralMessageStatusCalculator:(id)arg21 ;
-(unsigned long long)_beginLoadThreadViewModelForThreadWithQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(id)createViewModelLoadResultForThreadSummary:(id)arg1 messages:(id)arg2 usersByUserId:(id)arg3 threadQuery:(id)arg4 messagesLoadingConfiguration:(id)arg5 ;
@end

