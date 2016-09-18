/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendMQTTAdapting.h>

@protocol MNAuthenticationManager;
@class FBMMQTTSender, FBMMQTTManager, FBMSendEventLogger, FBMSendLatencyLogger, FBUserSession, FBMobileConfigContextManager, MNTextLinkDetector, NSString;

@interface FBMMessageSendMQTTAdapter : NSObject <MNMessageSendMQTTAdapting> {

	FBMMQTTSender* _mqttSender;
	FBMMQTTManager* _mqttManager;
	id<MNAuthenticationManager> _authManager;
	FBMSendEventLogger* _sendEventLogger;
	FBMSendLatencyLogger* _sendLatencyLogger;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNTextLinkDetector* _textLinkDetector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMQTTSender:(id)arg1 mqttManager:(id)arg2 authManager:(id)arg3 sendEventLogger:(id)arg4 sendLatencyLogger:(id)arg5 userSession:(id)arg6 configManager:(id)arg7 ;
-(void)_handlePublishedMQTTMessage:(id)arg1 publishBlock:(/*^block*/id)arg2 ;
-(id)_getMqttSession;
-(void)_handleSucceededMQTTMessage:(id)arg1 withLatency:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)_handleFailedMQTTMessage:(id)arg1 error:(id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_handlePublishedMQTTMessageBatch:(id)arg1 publishBlock:(/*^block*/id)arg2 ;
-(void)_handleRespondedMQTTMessageBatch:(id)arg1 results:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2 callbackQueue:(id)arg3 publishBlock:(/*^block*/id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)sendMessageBatchViaMQTT:(id)arg1 callbackQueue:(id)arg2 publishBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(BOOL)canSendMessageViaMQTT:(id)arg1 ;
-(BOOL)isRetriableMQTTError:(id)arg1 ;
-(BOOL)mqttStatusEligibleForSend;
-(BOOL)isMessageBatchSendingSupported;
@end

