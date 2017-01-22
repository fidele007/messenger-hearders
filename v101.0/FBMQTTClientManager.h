/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTClientDelegate.h>
#import <Messenger/FBMQTTNetworkStatusChangedListening.h>
#import <Messenger/FBMQTTChannelCoordinating.h>

@protocol OS_dispatch_queue, FBMQTTClientFactory, FBMQTTNetworkStatusChangedListening, FBMQTTClient, FBMQTTAnalyticsLogger;
@class NSObject, NSNotificationCenter, FBMQTTExperiments, NSDate, FBMQTTClientConfiguration, JSONDecoder, NSString, FBMQTTCredentialHashProcessor, NSNumber, FBMQTTNetworkStatusMonitor, FBMQTTNetworkStatusChangedListeningAnnouncer, FBMQTTClientByteAggregator, FBMQTTClientConnectLogger, FBMQTTChannelEndpointCapabilities, NSMutableDictionary, FBTimer, FBMQTTClientCapabilities, FBMQTTTopicListenersMap, NSMutableSet, NSDictionary, FBMQTTConfigurations, FBMQTTConnectionConfiguration;

@interface FBMQTTClientManager : NSObject <FBMQTTClientDelegate, FBMQTTNetworkStatusChangedListening, FBMQTTChannelCoordinating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _jsonDecodingQueue;
	NSObject*<OS_dispatch_queue> _jsonEncodingQueue;
	int _runningState;
	NSNotificationCenter* _notificationCenter;
	BOOL _credentialsAndUserAgentFetched;
	FBMQTTExperiments* _experiments;
	id<FBMQTTClientFactory> _clientFactory;
	BOOL _isFirstConnect;
	NSDate* _clientStartTime;
	FBMQTTClientConfiguration* _clientConfig;
	JSONDecoder* _jsonDecoder;
	NSString* _appSessionId;
	int _encodingFormat;
	FBMQTTCredentialHashProcessor* _credentialHashProcessor;
	BOOL _autoOnlineOnForeground;
	NSNumber* _currentEncodedReferenceCode;
	long long _currentConnMessageId;
	FBMQTTNetworkStatusMonitor* _networkMonitor;
	FBMQTTNetworkStatusChangedListeningAnnouncer* _networkEventAnnouncer;
	id<FBMQTTNetworkStatusChangedListening> _networkEventListener;
	FBMQTTClientByteAggregator* _byteAggregator;
	BOOL _inBackground;
	FBMQTTClientConnectLogger* _connectAnalyticLogger;
	FBMQTTChannelEndpointCapabilities* _endpointCapabilities;
	/*^block*/id _clientCreationBlock;
	NSString* _password;
	NSMutableDictionary* _usernameKeyValueDictionary;
	id<FBMQTTClient> _client;
	FBTimer* _connectTimer;
	FBTimer* _reconnectTimer;
	FBMQTTClientCapabilities* _clientCapabilities;
	FBMQTTTopicListenersMap* _topicListenersMap;
	NSMutableSet* _suspendedListeners;
	NSMutableSet* _publishers;
	NSMutableSet* _queuedPublishers;
	NSDictionary* _connectCombinedPublishers;
	double _reconnectDelay;
	long long _reconnectMode;
	int _totalReconnectTimes;
	int _fastReconnectTimes;
	long long _bgPingState;
	int _totalBgPingSentSinceConnected;
	int _totalDisconnectOnBgPing;
	NSDate* _reconnectBgBackoffStartDate;
	NSString* _networkSessionId;
	FBMQTTConfigurations* _config;
	NSDate* _connectStartTime;
	NSDate* _connectSentTime;
	NSMutableSet* _subscribedTopicsOnConnect;
	/*^block*/id _getDiffProviderBlock;
	/*^block*/id _showOnlineBlock;
	id<FBMQTTAnalyticsLogger> _analyticsLogger;
	BOOL _reachable;
	/*^block*/id _credentialsAvailableBlock;
	/*^block*/id _credentialsFetcherBlock;
	/*^block*/id _userAgentFormatterBlock;
	long long _clientState;
	NSString* _mqttSessionId;
	FBMQTTConnectionConfiguration* _connectionConfiguration;

}

@property (copy) id credentialsAvailableBlock;                                         //@synthesize credentialsAvailableBlock=_credentialsAvailableBlock - In the implementation block
@property (copy) id credentialsFetcherBlock;                                           //@synthesize credentialsFetcherBlock=_credentialsFetcherBlock - In the implementation block
@property (copy) id userAgentFormatterBlock;                                           //@synthesize userAgentFormatterBlock=_userAgentFormatterBlock - In the implementation block
@property (assign) BOOL reachable;                                                     //@synthesize reachable=_reachable - In the implementation block
@property (assign) long long clientState;                                              //@synthesize clientState=_clientState - In the implementation block
@property (copy) NSString * mqttSessionId;                                             //@synthesize mqttSessionId=_mqttSessionId - In the implementation block
@property (copy) FBMQTTConnectionConfiguration * connectionConfiguration;              //@synthesize connectionConfiguration=_connectionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPatternCurrentlySubscribed:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(long long)networkStatus;
-(id)mqttSessionIdForAnalytics;
-(id)connectionConfig;
-(id)endpointCapabilities;
-(id)affiliatedQueue_EXPERIMENTAL;
-(void)configureWithClientConfig:(id)arg1 customConnectionConfiguration:(id)arg2 clientCapabilities:(unsigned long long)arg3 endpointCapabilities:(unsigned long long)arg4 showOnLineOnForegroundBlock:(/*^block*/id)arg5 credentialsAvailableBlock:(/*^block*/id)arg6 credentialsFetcherBlock:(/*^block*/id)arg7 userAgentFormatterBlock:(/*^block*/id)arg8 getdiffProviderBlock:(/*^block*/id)arg9 analyticsLogger:(id)arg10 ;
-(void)credentialsDidBecomeAvailable;
-(void)suspendListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)subscribeListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)sendMQTTKeepAlive;
-(void)setInBackground:(BOOL)arg1 ;
-(void)updateOnlineStatus:(BOOL)arg1 ;
-(void)addListeners:(id)arg1 ;
-(void)removeListeners:(id)arg1 ;
-(NSString *)mqttSessionId;
-(void)setCredentialsFetcherBlock:(id)arg1 ;
-(id)credentialsFetcherBlock;
-(FBMQTTConnectionConfiguration *)connectionConfiguration;
-(void)mqttClient:(id)arg1 didSendConnectWithPayloadSize:(unsigned long long)arg2 ;
-(void)mqttClientDidSendSubscribeMessage:(id)arg1 ;
-(void)mqttClientDidSendUnsubscribeMessage:(id)arg1 ;
-(void)mqttClient:(id)arg1 didSendMessage:(id)arg2 ;
-(void)resumeForegroundKeepAlive;
-(void)mqttClientDidSentConnect:(id)arg1 ;
-(void)mqttClient:(id)arg1 didConnectWithPayload:(id)arg2 ;
-(void)mqttClientCouldNotConnect:(id)arg1 error:(id)arg2 ;
-(void)mqttClientReconnectNow:(id)arg1 ;
-(void)mqttClientDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)mqttClient:(id)arg1 couldNotPublishMessage:(id)arg2 error:(id)arg3 ;
-(void)mqttClientDidSendPingRequest:(id)arg1 ;
-(void)mqttClientDidSubscribe:(id)arg1 ;
-(void)mqttClientDidReceivePingResponse:(id)arg1 ;
-(void)mqttClient:(id)arg1 didPublishMessage:(id)arg2 ;
-(void)mqttClientDidSendDisconnect:(id)arg1 ;
-(void)mqttClient:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)networkStatusChangedFrom:(long long)arg1 to:(long long)arg2 ;
-(void)mqttClientDidReceiveDisconnect:(id)arg1 ;
-(id)initWithExperiments:(id)arg1 clientFactory:(id)arg2 queue:(id)arg3 ;
-(id)initWithMQTTClientCreationBlock:(/*^block*/id)arg1 clientFactory:(id)arg2 notificationCenter:(id)arg3 experiments:(id)arg4 clientQueue:(id)arg5 queue:(id)arg6 ;
-(void)createNewNetworkSessionId;
-(id)_debugInfoNoLock;
-(id)_getEncodingFormatString;
-(void)setConnectionConfiguration:(FBMQTTConnectionConfiguration *)arg1 ;
-(void)_dispatchToClientQueueFromClientManagerQueue:(/*^block*/id)arg1 ;
-(id)getClientSettings;
-(void)_setupMQTTPayloadFormat;
-(void)setCredentialsAvailableBlock:(id)arg1 ;
-(void)setUserAgentFormatterBlock:(id)arg1 ;
-(void)setClientKeepAliveTimes;
-(void)_fetchCredentialsAndUserAgentThenStartClientIfCredentialsAvailableWithHostName:(id)arg1 caller:(id)arg2 ;
-(void)_postConnectivityNotification:(long long)arg1 ;
-(void)setMqttSessionId:(NSString *)arg1 ;
-(id)_pendingSendMessagePublishsers;
-(id)_constructPublishMessagesForConnect:(id)arg1 ;
-(int)_getEncodingFormat;
-(void)onConnectTimeoutFired;
-(void)triggerFastReconnect:(BOOL)arg1 resetReconnectDelay:(BOOL)arg2 ;
-(void)pauseForegroundKeepAliveIfNeeded;
-(id)_removeListenerWithBackgroundPolicy:(unsigned long long)arg1 ;
-(id)_addListenersWithBackgroundPolicy:(unsigned long long)arg1 ;
-(void)publishForegroundState:(BOOL)arg1 subscribeTopics:(id)arg2 unsubscribeTopics:(id)arg3 ;
-(void)_logConnect:(id)arg1 error:(id)arg2 ;
-(void)resetClient:(id)arg1 ;
-(BOOL)_hasShouldRetryMessage;
-(void)triggerBackOffReconnect;
-(void)cancelPublishers:(id)arg1 error:(id)arg2 ;
-(BOOL)_doesListener:(id)arg1 haveBackgroundPolicy:(unsigned long long)arg2 ;
-(BOOL)_shouldAddListener:(id)arg1 ;
-(void)subscribeListeners:(id)arg1 ;
-(void)_subscribeToPatternsAndPostNotification:(id)arg1 topicSubscribedByConnect:(id)arg2 ;
-(void)_unsubscribeFromPatterns:(id)arg1 ;
-(void)addPublisherToQueue:(id)arg1 ;
-(void)onPublishTimeout:(id)arg1 ;
-(void)_encodePublisherMessageThenDispatchToClient:(id)arg1 ;
-(void)_updateMessagePayloadIfNeeded:(id)arg1 ;
-(void)_convertPublisherToUseEnumTopicIfNeeded:(id)arg1 ;
-(BOOL)_supportEnumTopic;
-(id)_createEncodedMessage:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
-(void)_logPublish:(id)arg1 publisher:(id)arg2 error:(id)arg3 ;
-(void)initializeClient;
-(void)onReconnectTimerFired;
-(BOOL)_isAuthenticationFailure:(id)arg1 ;
-(void)_publishCombinedForegroundState:(BOOL)arg1 subscribeTopics:(id)arg2 unsubscribeTopics:(id)arg3 ;
-(void)_postPatternSubscribedNotification:(id)arg1 topicsSubscribedByConnect:(id)arg2 ;
-(void)_sendPendingPublishes;
-(void)_publishNetworkOutgoingEvent:(long long)arg1 direction:(id)arg2 payloadSize:(unsigned long long)arg3 currentTimeSecond:(double)arg4 topic:(id)arg5 ;
-(id)_parseConnAckPayload:(id)arg1 ;
-(void)_processPubAcksFromConnAck:(id)arg1 ;
-(void)_postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)triggerKeepAliveBackOffOnDisconnect;
-(void)_handleEligibilityCheckMessage:(id)arg1 ;
-(void)_logAnalyticsError:(/*^block*/id)arg1 ;
-(int)_keepAliveTimeoutForForegroundState:(BOOL)arg1 ;
-(id)credentialsAvailableBlock;
-(id)userAgentFormatterBlock;
-(id)_formatInvalidCredentialForLogging:(id)arg1 ;
-(void)_startWithCredentials:(id)arg1 userAgent:(id)arg2 ;
-(void)_dispatchToClientManagerQueueFromClientQueue:(/*^block*/id)arg1 ;
-(long long)_getNextConnMsgId;
-(void)dealloc;
-(long long)state;
-(id)initWithQueue:(id)arg1 ;
-(void)stop;
-(void)start;
-(id)config;
-(BOOL)isStarted;
-(id)debugInfo;
-(BOOL)isReachable;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)scheduleReconnect;
-(BOOL)isConnected;
-(BOOL)started;
-(BOOL)reachable;
-(void)setReachable:(BOOL)arg1 ;
-(long long)clientState;
-(void)setClientState:(long long)arg1 ;
@end
