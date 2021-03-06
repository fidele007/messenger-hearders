/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingServiceAPIRequestFulfilling.h>

@protocol OS_dispatch_queue;
@class MNSecureMessagingStoreOpenedDelayer, MNSecureMessagingStore, MNBouncedMessageTracker, MNSecureThreadUpdater, MNSecureMessagingImageRequester, MNSecureMessagingVideoRequester, MNSecureThreadExistenceInfoCache, MNSecureThreadExistenceInfoCacheUpdater, MNSecureMessagingContentBatchDeleter, MNSecureMessagingDeviceUpgradePrimaryStatusAlertPrompter, MNSecureMessagingDisableOtherDeviceRunner, NSObject, NSString;

@interface MNSecureMessagingServiceAPIRequestFulfiller : NSObject <MNSecureMessagingServiceAPIRequestFulfilling> {

	MNSecureMessagingStoreOpenedDelayer* _storeOpenedDelayer;
	MNSecureMessagingStore* _messagingStore;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	MNSecureThreadUpdater* _threadUpdater;
	MNSecureMessagingImageRequester* _imageRequester;
	MNSecureMessagingVideoRequester* _videoRequester;
	MNSecureThreadExistenceInfoCache* _threadExistenceInfoCache;
	MNSecureThreadExistenceInfoCacheUpdater* _threadExistenceInfoCacheUpdater;
	MNSecureMessagingContentBatchDeleter* _batchDeleter;
	MNSecureMessagingDeviceUpgradePrimaryStatusAlertPrompter* _deviceUpgradeAlertPrompter;
	MNSecureMessagingDisableOtherDeviceRunner* _remoteDeviceDisabler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bouncedMessageIdsForThreadWithKey:(id)arg1 ;
-(id)readThreadAndMessagesForReportingFlowForKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)executeBlockAfterStoreOpened:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)readRemoteFingerprintForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readDeviceInformationForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)secureThreadExistenceInfoForOtherUserId:(id)arg1 ;
-(void)updateSecureThreadExistenceInfoForOtherUserIdIfUnknown:(id)arg1 ;
-(id)fetchUrlFromSecureVideoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)deleteAllMessagingContentWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)userDidSendMessageFromThisDevice;
-(void)userDidOpenInboxThreadList;
-(void)runUpdateToDisableDeviceWithIdentityKey:(id)arg1 completionBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)initWithMessagingStore:(id)arg1 storeOpenedDelayer:(id)arg2 threadUpdater:(id)arg3 imageRequester:(id)arg4 videoRequester:(id)arg5 bouncedMessageTracker:(id)arg6 threadExistenceInfoCache:(id)arg7 threadExistenceInfoCacheUpdater:(id)arg8 batchMessagingContentDeleter:(id)arg9 deviceUpgradeAlertPrompter:(id)arg10 remoteDeviceDisabler:(id)arg11 queue:(id)arg12 ;
-(void)runSecureThreadSummaryUpdate:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readThreadWithKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadsInRange:(id)arg1 numberOfMessagesPerThread:(long long)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadSummariesWithOtherUserFbIds:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)fetchImageFromSecurePhotoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
@end

