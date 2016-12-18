/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSyncProtocolConfigurationCreating.h>

@protocol MNSyncProtocolVersionProviding, MNSyncProtocolQueueParamsProviding, MNSyncProtocolUserIdProviding, MNSyncProtocolConfigurationSequenceIdOverridding;
@class MNSPDataStore, NSString;

@interface MNSyncProtocolConfigurationCreator : NSObject <MNSyncProtocolConfigurationCreating> {

	MNSPDataStore* _dataStore;
	id<MNSyncProtocolVersionProviding> _syncProtocolVersionProvider;
	id<MNSyncProtocolQueueParamsProviding> _queueParamsProvider;
	id<MNSyncProtocolUserIdProviding> _userIdProvider;
	id<MNSyncProtocolConfigurationSequenceIdOverridding> _sequenceIdOverrider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createSyncProtocolDeltaRequestConfiguration;
-(id)createSyncProtocolQueueRequestConfiguration;
-(id)createSyncProtocolDeltaRequestConfigurationForIncrementalRequest;
-(id)_getDiffRequestConfigWithQueueParams:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 syncProtocolVersionProvider:(id)arg2 queueParamsProvider:(id)arg3 userIdProvider:(id)arg4 sequenceIdOverrider:(id)arg5 ;
@end

