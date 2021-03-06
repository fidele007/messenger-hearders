/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadServiceControlling.h>
#import <Messenger/MNSecureImageRequesting.h>
#import <Messenger/MNSecureMessagingDeviceInformation.h>
#import <Messenger/MNSecureMessagingCapabilityManualOverriding.h>
#import <Messenger/FBWebRTCEndToEndEncrypting.h>
#import <Messenger/MNSecureMessagingDisableOtherDeviceRunning.h>

@class NSData, MNSecureMessagingRegistrationState, NSString;

@interface MNEmptySecureThreadService : NSObject <MNSecureThreadServiceControlling, MNSecureImageRequesting, MNSecureMessagingDeviceInformation, MNSecureMessagingCapabilityManualOverriding, FBWebRTCEndToEndEncrypting, MNSecureMessagingDisableOtherDeviceRunning>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSData * ourIdentityKey; 
@property (readonly) BOOL canSendSecureMessage; 
@property (copy,readonly) MNSecureMessagingRegistrationState * registrationState; 
@property (readonly) BOOL multiDeviceSupported; 
-(void)addRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(BOOL)canSendSecureMessage;
-(NSData *)ourIdentityKey;
-(void)addSendListener:(id)arg1 ;
-(void)removeSendListener:(id)arg1 ;
-(id)bouncedMessageIdsForThreadWithKey:(id)arg1 ;
-(void)addThreadExistenceInfoCacheObserver:(id)arg1 ;
-(long long)capabilityForCurrentUser;
-(void)addServiceListener:(id)arg1 ;
-(void)removeServiceListener:(id)arg1 ;
-(void)removeThreadExistenceInfoCacheObserver:(id)arg1 ;
-(void)addIncomingMessageListener:(id)arg1 ;
-(void)removeIncomingMessageListener:(id)arg1 ;
-(void)removeRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(void)addOtherDeviceStatusChangeListener:(id)arg1 ;
-(void)removeOtherDeviceStatusChangeListener:(id)arg1 ;
-(id)readThreadAndMessagesForReportingFlowForKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)executeBlockAfterStoreOpened:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)readRemoteFingerprintForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readThisDevicesInformationWithCallbackQueue:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(id)readDeviceInformationForUserId:(id)arg1 forThread:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)secureThreadExistenceInfoForOtherUserId:(id)arg1 ;
-(void)updateSecureThreadExistenceInfoForOtherUserIdIfUnknown:(id)arg1 ;
-(id)fetchUrlFromSecureVideoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)deleteAllMessagingContentWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)userDidSendMessageFromThisDevice;
-(void)userDidOpenInboxThreadList;
-(void)runUpdateToDisableDeviceWithIdentityKey:(id)arg1 completionBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)multiDeviceSupported;
-(BOOL)secureServiceIsInStateThatAllowsOverriding;
-(void)performManualOverrideWithServiceEnabled:(BOOL)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)webRTCHandlerDidBeginCall;
-(void)webRTCHandlerDidEndCall;
-(void)webRTCHandlerDidStartCameraCapture;
-(void)webRTCHandlerDidEndCameraCapture;
-(void)generatePreKeyBundleWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)encryptData:(id)arg1 forPreKeyBundle:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(void)decryptData:(id)arg1 withPreKey:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(void)runSecureThreadSummaryUpdate:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)handleIdle;
-(id)readThreadWithKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadsInRange:(id)arg1 numberOfMessagesPerThread:(long long)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(void)setExternalSecureThreadCacheInvalidator:(id)arg1 ;
-(id)fetchImageFromSecurePhotoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)readThreadSummariesWithOtherUserFbIds:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)stop;
-(MNSecureMessagingRegistrationState *)registrationState;
-(void)start:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
@end

