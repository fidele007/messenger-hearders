/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSyncProtocolPayloadHandling, MNSyncProtocolSequenceIdProviding, MNSyncProtocolSyncTokenProviding, MNSyncProtocolErrorCodeProviding, MNSyncProtocolQueueParamsProviding;
@class NSString;

@interface MNSyncProtocolCoordinatorConfiguration : NSObject {

	NSString* _queueType;
	unsigned long long _apiVersion;
	NSString* _syncTopic;
	Class _payloadClass;
	id<MNSyncProtocolPayloadHandling> _payloadHandler;
	id<MNSyncProtocolSequenceIdProviding> _sequenceIdProvider;
	id<MNSyncProtocolSyncTokenProviding> _syncTokenProvider;
	id<MNSyncProtocolErrorCodeProviding> _errorCodeProvider;
	id<MNSyncProtocolQueueParamsProviding> _queueParamsProvider;

}

@property (nonatomic,copy,readonly) NSString * queueType;                                               //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,readonly) unsigned long long apiVersion;                                           //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncTopic;                                               //@synthesize syncTopic=_syncTopic - In the implementation block
@property (nonatomic,readonly) Class payloadClass;                                                      //@synthesize payloadClass=_payloadClass - In the implementation block
@property (nonatomic,readonly) id<MNSyncProtocolPayloadHandling> payloadHandler;                        //@synthesize payloadHandler=_payloadHandler - In the implementation block
@property (nonatomic,readonly) id<MNSyncProtocolSequenceIdProviding> sequenceIdProvider;                //@synthesize sequenceIdProvider=_sequenceIdProvider - In the implementation block
@property (nonatomic,readonly) id<MNSyncProtocolSyncTokenProviding> syncTokenProvider;                  //@synthesize syncTokenProvider=_syncTokenProvider - In the implementation block
@property (nonatomic,readonly) id<MNSyncProtocolErrorCodeProviding> errorCodeProvider;                  //@synthesize errorCodeProvider=_errorCodeProvider - In the implementation block
@property (nonatomic,readonly) id<MNSyncProtocolQueueParamsProviding> queueParamsProvider;              //@synthesize queueParamsProvider=_queueParamsProvider - In the implementation block
-(id)initWithQueueType:(id)arg1 apiVersion:(unsigned long long)arg2 syncTopic:(id)arg3 payloadClass:(Class)arg4 payloadHandler:(id)arg5 sequenceIdProvider:(id)arg6 syncTokenProvider:(id)arg7 errorCodeProvider:(id)arg8 queueParamsProvider:(id)arg9 ;
-(NSString *)syncTopic;
-(Class)payloadClass;
-(id<MNSyncProtocolSyncTokenProviding>)syncTokenProvider;
-(id<MNSyncProtocolErrorCodeProviding>)errorCodeProvider;
-(id<MNSyncProtocolPayloadHandling>)payloadHandler;
-(id<MNSyncProtocolSequenceIdProviding>)sequenceIdProvider;
-(id<MNSyncProtocolQueueParamsProviding>)queueParamsProvider;
-(id)description;
-(NSString *)queueType;
-(unsigned long long)apiVersion;
@end

