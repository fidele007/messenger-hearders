/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNThreadMessageSubscribing.h>
#import <Messenger/FBMSPNewMessageListener.h>
#import <Messenger/MNAPNSMessageHandlerListening.h>
#import <Messenger/MNSyncMessageHandlerListening.h>
#import <Messenger/FBMSPDeltaHandlerListener.h>

@protocol MNAuthenticationManager, MNThreadSummaryCacheReading, FBMSPDeltaHandlerListener;
@class FBMMQTTSender, FBMDeliveryReceiptSendStore, FBUserSession, NSString;

@interface FBMDeliveryReceiptSender : NSObject <FBViewerContextClassProvidable, MNThreadMessageSubscribing, FBMSPNewMessageListener, MNAPNSMessageHandlerListening, MNSyncMessageHandlerListening, FBMSPDeltaHandlerListener> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMMQTTSender* _mqttSender;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	FBMDeliveryReceiptSendStore* _deliveryReceiptSendStore;
	id<FBMSPDeltaHandlerListener> _dispatchSelfDeltaHandlerListener;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)willHandleAPNSMessage:(id)arg1 fromSource:(long long)arg2 ;
-(void)didHandleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 ;
-(void)didFailHandlingAPNSMessage:(id)arg1 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
-(void)_onConnectionStatusChanged:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 mqttSender:(id)arg2 threadSummaryCacheReader:(id)arg3 deltaHandlerListenerAnnouncer:(id)arg4 session:(id)arg5 ;
-(void)_sendPendingDeliveryReceiptBatchFromSource:(unsigned long long)arg1 ;
-(void)_sendDeliveryReceiptForThreadSummary:(id)arg1 source:(unsigned long long)arg2 ;
-(void)_addSyncProtocolMessageForBatchDeliveryReceipts:(id)arg1 ;
-(void)sendDeliveryReceiptForMessageWithMessageId:(id)arg1 threadKey:(id)arg2 senderId:(id)arg3 timestamp:(unsigned long long)arg4 source:(unsigned long long)arg5 ;
-(void)newSyncProtocolMessageReceived:(id)arg1 ;
-(void)dealloc;
@end

