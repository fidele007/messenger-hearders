/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadServiceControlling.h>
#import <Messenger/MNSecureImageRequesting.h>
#import <Messenger/MNSecureMessagingDeviceInformation.h>
#import <Messenger/MNSecureMessagingCapabilityManualOverriding.h>
#import <Messenger/MNEndToEndEncrypting.h>
#import <Messenger/MNSecureMessagingDisableOtherDeviceRunning.h>

@class NSData, MNSecureMessagingRegistrationState, NSString;

@interface MNEmptySecureThreadService : NSObject <MNSecureThreadServiceControlling, MNSecureImageRequesting, MNSecureMessagingDeviceInformation, MNSecureMessagingCapabilityManualOverriding, MNEndToEndEncrypting, MNSecureMessagingDisableOtherDeviceRunning>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSData * ourIdentityKey; 
@property (readonly) BOOL canSendSecureMessage; 
@property (copy,readonly) MNSecureMessagingRegistrationState * registrationState; 
@property (readonly) BOOL multiDeviceSupported; 
-(id)fetchImageFromSecurePhotoSource:(id)arg1 queue:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)addSendListener:(id)arg1 ;
-(void)removeSendListener:(id)arg1 ;
-(id)bouncedMessageIdsForThreadWithKey:(id)arg1 ;
-(BOOL)multiDeviceSupported;
-(void)addRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(BOOL)canSendSecureMessage;
-(NSData *)ourIdentityKey;
-(long long)capabilityForCurrentUser;
-(id)executeBlockAfterStoreOpened:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)updateSecureThreadExistenceInfoForOtherUserIdIfUnknown:(id)arg1 ;
-(void)addServiceListener:(id)arg1 ;
-(void)removeServiceListener:(id)arg1 ;
-(void)addThreadExistenceInfoCacheObserver:(id)arg1 ;
-(void)removeThreadExistenceInfoCacheObserver:(id)arg1 ;
-(void)addIncomingMessageListener:(id)arg1 ;
-(void)removeIncomingMessageListener:(id)arg1 ;
-(void)removeRegisteredDeviceStatusChangeListener:(id)arg1 ;
-(void)setExternalSecureThreadCacheInvalidator:(id)arg1 ;
-(id)readThreadWithKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadsInRange:(id)arg1 numberOfMessagesPerThread:(long long)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(id)readThreadSummariesWithOtherUserFbIds:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readThreadAndMessagesForReportingFlowForKey:(id)arg1 messageRange:(id)arg2 callbackQueue:(id)arg3 completeBlock:(/*^block*/id)arg4 ;
-(void)runSecureThreadSummaryUpdate:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)readRemoteFingerprintForUserId:(id)arg1 callbackQueue:(id)arg2 completeBlock:(/*^block*/id)arg3 ;
-(id)secureThreadExistenceInfoForOtherUserId:(id)arg1 ;
-(void)deleteAllMessagingContentWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)userDidSendMessageFromThisDevice;
-(void)userDidOpenInboxThreadList;
-(void)runUpdateToDisableDeviceWithId:(id)arg1 completionBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(BOOL)secureServiceIsInStateThatAllowsOverriding;
-(void)performManualOverrideWithServiceEnabled:(BOOL)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)generatePreKeyBundleWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)encryptData:(id)arg1 forPreKeyBundle:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(void)decryptData:(id)arg1 withPreKey:(id)arg2 completion:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(MNSecureMessagingRegistrationState *)registrationState;
-(void)addSubscriber:(id)arg1 ;
-(void)handleIdle;
@end

