/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNMessageSendKitExperimentContext : FBExperimentContext {

	BOOL _shouldEnableAutoRetryWithQueuedState;
	BOOL _shouldEnableNewSendStatesUIWithCheckmark;
	long long _maxNumberOfAttemptsOnExtension;
	long long _maxNumberOfAttemptsOnMQTT;
	long long _maxNumberOfAttemptsOnGraph;
	long long _maxNumberOfMessagesInBatch;
	double _maxSendDuration;
	double _retryIntervalOnMQTTConnected;
	double _maxInternalForRetryAfterRestoration;

}

@property (nonatomic,readonly) long long maxNumberOfAttemptsOnExtension;                   //@synthesize maxNumberOfAttemptsOnExtension=_maxNumberOfAttemptsOnExtension - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfAttemptsOnMQTT;                        //@synthesize maxNumberOfAttemptsOnMQTT=_maxNumberOfAttemptsOnMQTT - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfAttemptsOnGraph;                       //@synthesize maxNumberOfAttemptsOnGraph=_maxNumberOfAttemptsOnGraph - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfMessagesInBatch;                       //@synthesize maxNumberOfMessagesInBatch=_maxNumberOfMessagesInBatch - In the implementation block
@property (nonatomic,readonly) double maxSendDuration;                                     //@synthesize maxSendDuration=_maxSendDuration - In the implementation block
@property (nonatomic,readonly) double retryIntervalOnMQTTConnected;                        //@synthesize retryIntervalOnMQTTConnected=_retryIntervalOnMQTTConnected - In the implementation block
@property (nonatomic,readonly) double maxInternalForRetryAfterRestoration;                 //@synthesize maxInternalForRetryAfterRestoration=_maxInternalForRetryAfterRestoration - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableAutoRetryWithQueuedState;                  //@synthesize shouldEnableAutoRetryWithQueuedState=_shouldEnableAutoRetryWithQueuedState - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableNewSendStatesUIWithCheckmark;              //@synthesize shouldEnableNewSendStatesUIWithCheckmark=_shouldEnableNewSendStatesUIWithCheckmark - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldEnableAutoRetryWithQueuedState;
-(BOOL)shouldEnableNewSendStatesUIWithCheckmark;
-(long long)maxNumberOfAttemptsOnExtension;
-(long long)maxNumberOfAttemptsOnMQTT;
-(long long)maxNumberOfAttemptsOnGraph;
-(long long)maxNumberOfMessagesInBatch;
-(double)maxSendDuration;
-(double)retryIntervalOnMQTTConnected;
-(double)maxInternalForRetryAfterRestoration;
@end

