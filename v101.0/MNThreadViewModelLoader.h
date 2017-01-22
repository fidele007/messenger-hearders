/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNPendingThreadQuerying;
@class MNMessagingAndUserDataPreparerStateMachine, MNThreadViewModelLoaderRequestBehaviorCaller, MNMessagingAndUserDataPreparerRequestRunner, MNThreadViewModelLoaderForPendingThread, MNThreadSummaryUpdateCreatorFactory, NSString;

@interface MNThreadViewModelLoader : NSObject <FBViewerContextClassProvidable> {

	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	MNMessagingAndUserDataPreparerStateMachine* _stateMachine;
	MNThreadViewModelLoaderRequestBehaviorCaller* _behaviorCaller;
	MNMessagingAndUserDataPreparerRequestRunner* _requester;
	MNThreadViewModelLoaderForPendingThread* _loaderForPendingThread;
	MNThreadSummaryUpdateCreatorFactory* _threadSummaryUpdateCreatorFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)cancelRequestWithId:(unsigned long long)arg1 ;
-(unsigned long long)beginLoadThreadViewModelForThreadWithLocalThreadQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(id)initWithAnalytics:(id)arg1 userStore:(id)arg2 threadStore:(id)arg3 apnsMessageStore:(id)arg4 messageSendQuerier:(id)arg5 pendingThreadQuerier:(id)arg6 threadSummaryOptimsiticUpdater:(id)arg7 messageOptimisticUpdateApplier:(id)arg8 threadContextManager:(id)arg9 authenticationManager:(id)arg10 loaderForPendingThread:(id)arg11 pageResponsivenessCache:(id)arg12 nameFormatter:(id)arg13 attributionAppSupplementaryInfoLoader:(id)arg14 threadSummaryUpdateCreatorFactory:(id)arg15 welcomeNuxCache:(id)arg16 secureThreadExistenceInfoCache:(id)arg17 messageListFetchedAffirmer:(id)arg18 ephemeralMessageStatusCalculator:(id)arg19 externalDataLoadersProvider:(id)arg20 ;
-(unsigned long long)_beginLoadThreadViewModelForThreadWithQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
@end
