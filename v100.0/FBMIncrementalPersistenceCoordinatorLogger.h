/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(id)initWithAnalytics:(id)arg1 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFinishJobQueue:(id)arg2 fromSyncProtocolWithSequenceId:(long long)arg3 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFailRunningJobQueue:(id)arg2 fromSyncProtocolWithSequenceId:(long long)arg3 withError:(id)arg4 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFinishNonSyncProtocolJobQueue:(id)arg2 ;
-(void)incrementalPersistenceCoordinator:(id)arg1 didFailRunningNonSyncProtocolJobQueue:(id)arg2 withError:(id)arg3 ;
-(void)_logEventFromSource:(unsigned long long)arg1 withSuccess:(BOOL)arg2 andJobQueue:(id)arg3 error:(id)arg4 ;
@end

