/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <FBSharedFramework/MNThreadMessageSubscribing.h>
#import <Messenger/FBMSPNewMessageListener.h>
#import <Messenger/MNAPNSMessageHandlerListening.h>
#import <Messenger/MNSyncMessageHandlerListening.h>
#import <Messenger/FBMSPDeltaHandlerListener.h>

@protocol MNAuthenticationManager, MNThreadSummaryCacheReading, FBMSPDeltaHandlerListener;
@class FBMMQTTSender, FBMDeliveryReceiptSendStore, FBMobileConfigContextManager, NSString;

@interface FBMDeliveryReceiptSender : NSObject <FBViewerContextClassProvidable, MNThreadMessageSubscribing, FBMSPNewMessageListener, MNAPNSMessageHandlerListening, MNSyncMessageHandlerListening, FBMSPDeltaHandlerListener> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMMQTTSender* _mqttSender;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	FBMDeliveryReceiptSendStore* _deliveryReceiptSendStore;
	id<FBMSPDeltaHandlerListener> _dispatchSelfDeltaHandlerListener;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)willHandleAPNSMessage:(id)arg1 fromSource:(long long)arg2 ;
-(void)didHandleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 ;
-(void)didFailHandlingAPNSMessage:(id)arg1 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
-(void)_onConnectionStatusChanged:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 mqttSender:(id)arg2 threadSummaryCacheReader:(id)arg3 deltaHandlerListenerAnnouncer:(id)arg4 configManager:(id)arg5 ;
-(void)_sendPendingDeliveryReceiptBatchFromSource:(unsigned long long)arg1 ;
-(void)_sendDeliveryReceiptForThreadSummary:(id)arg1 source:(unsigned long long)arg2 ;
-(void)_addSyncProtocolMessageForBatchDeliveryReceipts:(id)arg1 ;
-(void)sendDeliveryReceiptForMessageWithMessageId:(id)arg1 threadKey:(id)arg2 senderId:(id)arg3 timestamp:(unsigned long long)arg4 source:(unsigned long long)arg5 ;
-(void)newSyncProtocolMessageReceived:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)dealloc;
@end

