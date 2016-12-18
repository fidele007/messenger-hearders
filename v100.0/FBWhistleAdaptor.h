/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLigerReachabilityCallback.h>

@protocol FBWhistleDelegate, FBMQTTClientByteAggregating, FBWhistleDispatcher;
@class FBMQTTClientSettings, FBWhistleConnectionParams;

@interface FBWhistleAdaptor : NSObject <FBLigerReachabilityCallback> {

	id<FBWhistleDelegate> _delegate;
	id<FBMQTTClientByteAggregating> _byteAggregator;
	unique_ptr<proxygen::mqttclient::MQTTClient, folly::DelayedDestruction::Destructor>* _client;
	shared_ptr<MQTTClientGlue>* _glue;
	BOOL _closed;
	BOOL _foreground;
	long long _connection;
	unique_ptr<FBWhistleConnectionStatsLogger, std::__1::default_delete<FBWhistleConnectionStatsLogger> >* _connStatsLogger;
	unique_ptr<FBWhistleForegroundConnectionStatsLogger, std::__1::default_delete<FBWhistleForegroundConnectionStatsLogger> >* _connForegroundStatsLogger;
	unsigned long long _backgroundTaskID;
	FBMQTTClientSettings* _clientSettings;
	FBWhistleConnectionParams* _connParams;
	shared_ptr<WhistleBackgroundTokenManager>* _tokenManager;
	id<FBWhistleDispatcher> _dispatcher;

}
+(EventBase*)eventBase:(BOOL)arg1 ;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 connPayload:(id)arg3 secure:(BOOL)arg4 ;
-(void)connectWithHostname:(id)arg1 port:(int)arg2 username:(id)arg3 password:(id)arg4 secure:(BOOL)arg5 ;
-(void)subscribeWithTopics:(id)arg1 ;
-(void)unsubscribeWithTopics:(id)arg1 ;
-(void)publishWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 context:(int)arg4 sendTimeBlock:(/*^block*/id)arg5 ;
-(void)sendKeepAliveOnce;
-(void)stopKeepAliveTask;
-(void)startKeepAliveTaskWithInterval:(int)arg1 ;
-(void)resetClient;
-(unique_ptr<WhistleBackgroundTokenManager::Token, std::__1::default_delete<WhistleBackgroundTokenManager::Token> >*)createMessageToken;
-(void)_getRawBytesRecvWriteWithForeground:(BOOL)arg1 ;
-(void)preIterationWithNetworkStatusChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)postIterationWithNetworkStatusChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 clientSettings:(id)arg2 connParams:(id)arg3 clientFactory:(MQTTClientFactory*)arg4 dispatcher:(id)arg5 byteAggregator:(id)arg6 foreground:(BOOL)arg7 ;
-(void)publishWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 context:(int)arg4 ;
-(void)beginBackgroundTask;
-(void)_sendMessage:(unique_ptr<proxygen::MQTTMessage, std::__1::default_delete<proxygen::MQTTMessage> >*)arg1 ;
-(void)endBackgroundTask;
-(void)disconnect;
-(id)debugInfo;
-(void)setForeground:(BOOL)arg1 ;
@end

