/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMIncrementalPersistenceCoordinatorObserving.h>

@class FBAnalytics, NSString;

@interface FBMIncrementalPersistenceCoordinatorLogger : NSObject <FBMIncrementalPersistenceCoordinatorObserving> {

	FBAnalytics* _analytics;
	BOOL _hasPreviouslyLoggedError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)incrementalPersistenceCoordinator:(id)arg1 didFinishJobQueue:(id)arg2 fromSyncProtocolWithSequenceId:(long long)arg3 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFailRunningJobQueue:(id)arg2 fromSyncProtocolWithSequenceId:(long long)arg3 withError:(id)arg4 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFinishNonSyncProtocolJobQueue:(id)arg2 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFailRunningNonSyncProtocolJobQueue:(id)arg2 withError:(id)arg3 ;
-(void)_logEventFromSource:(unsigned long long)arg1 withSuccess:(BOOL)arg2 andJobQueue:(id)arg3 error:(id)arg4 ;
-(id)initWithAnalytics:(id)arg1 ;
@end

