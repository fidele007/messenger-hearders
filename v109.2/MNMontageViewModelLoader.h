/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@class MNMontageViewModelGenerator, NSMutableDictionary, NSString;

@interface MNMontageViewModelLoader : NSObject <MNSingleViewModelLoading> {

	MNMontageViewModelGenerator* _generator;
	NSMutableDictionary* _requestIdToRequestMap;
	NSMutableDictionary* _requestIdToGeneratorRequestIdMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithMessageQuerier:(id)arg1 pendingThreadQuerier:(id)arg2 threadStore:(id)arg3 userStore:(id)arg4 threadSummaryOptimisticStateApplier:(id)arg5 loggedInUserInfoManager:(id)arg6 threadUpdateService:(id)arg7 incrementalPersistenceCoordinator:(id)arg8 invocationQueue:(id)arg9 ;
-(void)_handleSuccessWithViewModel:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleProgressWithLongOperationDidBegin:(BOOL)arg1 requestId:(unsigned long long)arg2 ;
-(void)_handleFailureWithError:(id)arg1 requestId:(unsigned long long)arg2 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

