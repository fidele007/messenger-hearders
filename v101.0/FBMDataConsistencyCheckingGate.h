/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncDataValidationHandling.h>

@protocol MNMessagesSyncDeltaWithMetadataStoring, MNDataConsistencyCheckInitiating, FBReachabilityListener, FBCancelable, OS_dispatch_queue;
@class FBMobileConfigContextManager, NSObject, NSString;

@interface FBMDataConsistencyCheckingGate : NSObject <MNMessagesSyncDataValidationHandling> {

	id<MNMessagesSyncDeltaWithMetadataStoring> _deltaMetadataStore;
	FBMobileConfigContextManager* _configManager;
	id<MNDataConsistencyCheckInitiating> _dataConsistencyCheckInitiator;
	id<FBReachabilityListener> _dispatchedReachabilityListener;
	id<FBCancelable> _timerToken;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _userIsOnWifi;
	BOOL _userHasPerformedConsistencyCheckAlready;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)downloadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)uploadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)latencyStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_runChecksAfterThrottleComplete;
-(void)handleDataValidationIfNecessary;
-(id)initWithDataConsistencyCheckInitiator:(id)arg1 deltaMetadataStore:(id)arg2 configManager:(id)arg3 reachabilityAnnouncer:(id)arg4 queue:(id)arg5 ;
@end

