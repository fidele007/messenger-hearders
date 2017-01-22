/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionServiceProviding.h>

@protocol MNThreadUpdateRunnerListening, MNMessagesSyncSnapshotListening, OS_dispatch_queue, MNViewModelSubscriptionCoordinating;
@class MNThreadListViewModelSubscriptionServiceDependencies, MNThreadStore, MNThreadListViewModelElementLoader, MNThreadRowsViewModelLoader_DEPRECATED, MNThreadRowsViewModelUpdateMonitor, MNThreadListViewModelViewStateStore, MNThreadRowsViewModelBackfeeder, MNThreadRowsViewModelUpdateMonitorController, MNThreadMontageKeysUpdateAnnouncerAdapter, NSObject, NSString;

@interface MNThreadListViewModelSubscriptionServiceProvider : NSObject <MNViewModelSubscriptionServiceProviding> {

	MNThreadListViewModelSubscriptionServiceDependencies* _dependencies;
	long long _threadListType;
	long long _serviceType;
	MNThreadStore* _threadStore;
	MNThreadListViewModelElementLoader* _loader;
	MNThreadRowsViewModelLoader_DEPRECATED* _threadRowsViewModelLoader;
	MNThreadRowsViewModelUpdateMonitor* _threadRowsViewModelUpdateMonitor;
	MNThreadListViewModelViewStateStore* _viewStateStore;
	MNThreadRowsViewModelBackfeeder* _threadRowsViewModelBackfeeder;
	MNThreadRowsViewModelUpdateMonitorController* _threadRowsViewModelUpdateMonitorController;
	id<MNThreadUpdateRunnerListening> _threadSummaryUpdateRunnerListener;
	id<MNMessagesSyncSnapshotListening> _messagesSyncSnapshotListener;
	MNThreadMontageKeysUpdateAnnouncerAdapter* _montageThreadKeysUpdateAnnouncerAdapter;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNViewModelSubscriptionCoordinating> _coordinator;
	long long _startedMonitoringCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(id)initWithDependencies:(id)arg1 serviceType:(long long)arg2 threadListType:(long long)arg3 ;
-(id)additionalPageRequester;
-(id)_childCoordinators;
-(void)startMonitoring;
-(void)stop;
-(void)stopMonitoring;
-(id)coordinator;
-(id)serviceIdentifier;
@end
