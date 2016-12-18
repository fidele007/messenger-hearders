/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMQTTJSONMessage, FBMQTTEncodedMessage, FBTimer;

@interface FBMQTTPublisher : NSObject {

	BOOL _forceReconnectIfDisconnected;
	BOOL _forceReconnectIfTimeout;
	BOOL _isWaitingForConnected;
	BOOL _keepRetryUntilTimeout;
	int _initialMQTTConnectState;
	int _clientStateAtPublishing;
	FBMQTTJSONMessage* _jsonMessage;
	FBMQTTEncodedMessage* _encodedMessage;
	double _timeout;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _timeoutBlock;
	double _waitIntervalForConnected;
	double _startTime;
	double _rawSendTime;
	FBTimer* _timer;

}

@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) int initialMQTTConnectState;                      //@synthesize initialMQTTConnectState=_initialMQTTConnectState - In the implementation block
@property (assign,nonatomic) int clientStateAtPublishing;                        //@synthesize clientStateAtPublishing=_clientStateAtPublishing - In the implementation block
@property (assign,nonatomic) double rawSendTime;                                 //@synthesize rawSendTime=_rawSendTime - In the implementation block
@property (nonatomic,retain) FBTimer * timer;                                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) FBMQTTJSONMessage * jsonMessage;                    //@synthesize jsonMessage=_jsonMessage - In the implementation block
@property (nonatomic,retain) FBMQTTEncodedMessage * encodedMessage;              //@synthesize encodedMessage=_encodedMessage - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id successBlock;                                      //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                                      //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id timeoutBlock;                                      //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
@property (assign,nonatomic) BOOL forceReconnectIfDisconnected;                  //@synthesize forceReconnectIfDisconnected=_forceReconnectIfDisconnected - In the implementation block
@property (assign,nonatomic) double waitIntervalForConnected;                    //@synthesize waitIntervalForConnected=_waitIntervalForConnected - In the implementation block
@property (assign,nonatomic) BOOL forceReconnectIfTimeout;                       //@synthesize forceReconnectIfTimeout=_forceReconnectIfTimeout - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForConnected;                         //@synthesize isWaitingForConnected=_isWaitingForConnected - In the implementation block
@property (assign,nonatomic) BOOL keepRetryUntilTimeout;                         //@synthesize keepRetryUntilTimeout=_keepRetryUntilTimeout - In the implementation block
+(id)publisherWithEncodedMessage:(id)arg1 ;
+(id)publisherWithJSONMessage:(id)arg1 ;
-(void)setSuccessBlock:(id)arg1 ;
-(id)successBlock;
-(double)rawSendTime;
-(void)setForceReconnectIfDisconnected:(BOOL)arg1 ;
-(void)setForceReconnectIfTimeout:(BOOL)arg1 ;
-(void)setKeepRetryUntilTimeout:(BOOL)arg1 ;
-(void)setWaitIntervalForConnected:(double)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
-(void)setEncodedMessage:(FBMQTTEncodedMessage *)arg1 ;
-(void)setJsonMessage:(FBMQTTJSONMessage *)arg1 ;
-(FBMQTTJSONMessage *)jsonMessage;
-(FBMQTTEncodedMessage *)encodedMessage;
-(BOOL)forceReconnectIfDisconnected;
-(double)waitIntervalForConnected;
-(BOOL)forceReconnectIfTimeout;
-(BOOL)isWaitingForConnected;
-(void)setIsWaitingForConnected:(BOOL)arg1 ;
-(BOOL)keepRetryUntilTimeout;
-(int)initialMQTTConnectState;
-(int)clientStateAtPublishing;
-(void)setClientStateAtPublishing:(int)arg1 ;
-(void)setRawSendTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)markStart:(int)arg1 ;
-(double)startTime;
-(void)setTimer:(FBTimer *)arg1 ;
-(FBTimer *)timer;
-(void)setTimeout:(double)arg1 ;
-(id)timeoutBlock;
-(double)timeout;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end

