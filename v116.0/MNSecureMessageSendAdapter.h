/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNSecureMessageSendListening.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageSenderExtension.h>

@protocol MNSecureThreadServiceControlling, MNSecureMessageSending, MNSecureMessageSendListening, OS_dispatch_queue;
@class MNImageRequester, MNMessageFailureHandlingManager, MNSecureMessageSendFailureHandler, MNMessageSyncEventListeningAnnouncer, NSObject, NSCountedSet, NSMutableDictionary, NSString;

@interface MNSecureMessageSendAdapter : NSObject <MNSecureMessageSendListening, FBViewerContextClassProvidable, MNMessageSenderExtension> {

	id<MNSecureThreadServiceControlling> _secureThreadServiceController;
	id<MNSecureMessageSending> _sender;
	MNImageRequester* _imageRequester;
	MNMessageFailureHandlingManager* _messageFailureHandlerManager;
	MNSecureMessageSendFailureHandler* _secureMessageSendFailureHandler;
	id<MNSecureMessageSendListening> _listener;
	MNMessageSyncEventListeningAnnouncer* _messageSyncEventAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _pendingRequestCountForTarget;
	NSMutableDictionary* _offlineThreadingIdToMessageMap;
	NSMutableDictionary* _offlineThreadingIdToDelegateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSecureThreadServiceController:(id)arg1 secureMessageSender:(id)arg2 imageRequester:(id)arg3 secureMessageSendFailureHandler:(id)arg4 messageFailureHandlerManager:(id)arg5 messageSyncEventAnnouncer:(id)arg6 ;
-(void)didSendMessageWithId:(id)arg1 ;
-(void)didFailMessageWithId:(id)arg1 error:(id)arg2 ;
-(void)_prepareToSendOutgoingMessage:(id)arg1 delegate:(id)arg2 ;
-(void)_sendSecureMessage:(id)arg1 ;
-(void)_finalizeOutgoingMessageWithOfflineThreadingId:(id)arg1 delegateBlock:(/*^block*/id)arg2 ;
-(void)_cleanUpForOutgoingMessage:(id)arg1 ;
-(void)startWithQueue:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)needsExternalAttachmentPreparation;
-(BOOL)handlesAutoRetry;
-(long long)isErrorRetriable:(id)arg1 ;
-(BOOL)isSendingForTarget:(id)arg1 ;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3 ;
-(BOOL)shouldHandleMessage:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end

