/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMQTTJSONMessage, FBMQTTEncodedMessage, NSTimer;

@interface FBMQTTPublisher : NSObject {

	BOOL _forceReconnectIfDisconnected;
	BOOL _forceReconnectIfTimeout;
	BOOL _extendedTimeoutForReconnect;
	BOOL _isWaitingForConnected;
	BOOL _keepRetryUntilTimeout;
	int _initialMQTTConnectState;
	FBMQTTJSONMessage* _jsonMessage;
	FBMQTTEncodedMessage* _encodedMessage;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	double _timeout;
	double _extendedTimeout;
	/*^block*/id _timeoutBlock;
	double _waitIntervalForConnected;
	double _startTime;
	double _rawSendTime;
	NSTimer* _timer;

}

@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) int initialMQTTConnectState;                      //@synthesize initialMQTTConnectState=_initialMQTTConnectState - In the implementation block
@property (assign,nonatomic) double rawSendTime;                                 //@synthesize rawSendTime=_rawSendTime - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) FBMQTTJSONMessage * jsonMessage;                    //@synthesize jsonMessage=_jsonMessage - In the implementation block
@property (nonatomic,retain) FBMQTTEncodedMessage * encodedMessage;              //@synthesize encodedMessage=_encodedMessage - In the implementation block
@property (nonatomic,copy) id successBlock;                                      //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                                      //@synthesize failureBlock=_failureBlock - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double extendedTimeout;                             //@synthesize extendedTimeout=_extendedTimeout - In the implementation block
@property (nonatomic,copy) id timeoutBlock;                                      //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
@property (assign,nonatomic) BOOL forceReconnectIfDisconnected;                  //@synthesize forceReconnectIfDisconnected=_forceReconnectIfDisconnected - In the implementation block
@property (assign,nonatomic) double waitIntervalForConnected;                    //@synthesize waitIntervalForConnected=_waitIntervalForConnected - In the implementation block
@property (assign,nonatomic) BOOL forceReconnectIfTimeout;                       //@synthesize forceReconnectIfTimeout=_forceReconnectIfTimeout - In the implementation block
@property (assign,nonatomic) BOOL extendedTimeoutForReconnect;                   //@synthesize extendedTimeoutForReconnect=_extendedTimeoutForReconnect - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForConnected;                         //@synthesize isWaitingForConnected=_isWaitingForConnected - In the implementation block
@property (assign,nonatomic) BOOL keepRetryUntilTimeout;                         //@synthesize keepRetryUntilTimeout=_keepRetryUntilTimeout - In the implementation block
+(id)publisherWithEncodedMessage:(id)arg1 ;
+(id)publisherWithJSONMessage:(id)arg1 ;
-(void)setSuccessBlock:(id)arg1 ;
-(id)successBlock;
-(double)rawSendTime;
-(void)setKeepRetryUntilTimeout:(BOOL)arg1 ;
-(void)setExtendedTimeoutForReconnect:(BOOL)arg1 ;
-(void)setExtendedTimeout:(double)arg1 ;
-(void)setForceReconnectIfDisconnected:(BOOL)arg1 ;
-(void)setForceReconnectIfTimeout:(BOOL)arg1 ;
-(void)setWaitIntervalForConnected:(double)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
-(FBMQTTEncodedMessage *)encodedMessage;
-(BOOL)forceReconnectIfDisconnected;
-(double)extendedTimeout;
-(BOOL)extendedTimeoutForReconnect;
-(BOOL)forceReconnectIfTimeout;
-(void)setRawSendTime:(double)arg1 ;
-(FBMQTTJSONMessage *)jsonMessage;
-(void)setEncodedMessage:(FBMQTTEncodedMessage *)arg1 ;
-(void)setIsWaitingForConnected:(BOOL)arg1 ;
-(double)waitIntervalForConnected;
-(BOOL)isWaitingForConnected;
-(BOOL)keepRetryUntilTimeout;
-(void)setJsonMessage:(FBMQTTJSONMessage *)arg1 ;
-(int)initialMQTTConnectState;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)markStart:(int)arg1 ;
-(double)startTime;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setTimeout:(double)arg1 ;
-(id)timeoutBlock;
-(double)timeout;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end

