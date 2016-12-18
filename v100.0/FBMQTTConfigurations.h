/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMQTTConfigurations : FBValueObject <NSCopying> {

	long long _pubAckTimeout;
	long long _responseTimeout;
	long long _pingResponseTimeout;
	long long _connectTimeout;
	long long _maxFastReconnectAttempt;
	long long _fastReconnectInterval;
	long long _minBgReconnectInterval;
	long long _maxDisconnectOnBgPing;
	long long _reconnectBgBackoffInterval;

}

@property (nonatomic,readonly) long long pubAckTimeout;                           //@synthesize pubAckTimeout=_pubAckTimeout - In the implementation block
@property (nonatomic,readonly) long long responseTimeout;                         //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (nonatomic,readonly) long long pingResponseTimeout;                     //@synthesize pingResponseTimeout=_pingResponseTimeout - In the implementation block
@property (nonatomic,readonly) long long connectTimeout;                          //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (nonatomic,readonly) long long maxFastReconnectAttempt;                 //@synthesize maxFastReconnectAttempt=_maxFastReconnectAttempt - In the implementation block
@property (nonatomic,readonly) long long fastReconnectInterval;                   //@synthesize fastReconnectInterval=_fastReconnectInterval - In the implementation block
@property (nonatomic,readonly) long long minBgReconnectInterval;                  //@synthesize minBgReconnectInterval=_minBgReconnectInterval - In the implementation block
@property (nonatomic,readonly) long long maxDisconnectOnBgPing;                   //@synthesize maxDisconnectOnBgPing=_maxDisconnectOnBgPing - In the implementation block
@property (nonatomic,readonly) long long reconnectBgBackoffInterval;              //@synthesize reconnectBgBackoffInterval=_reconnectBgBackoffInterval - In the implementation block
-(long long)pubAckTimeout;
-(long long)pingResponseTimeout;
-(id)initWithPubAckTimeout:(long long)arg1 responseTimeout:(long long)arg2 pingResponseTimeout:(long long)arg3 connectTimeout:(long long)arg4 maxFastReconnectAttempt:(long long)arg5 fastReconnectInterval:(long long)arg6 minBgReconnectInterval:(long long)arg7 maxDisconnectOnBgPing:(long long)arg8 reconnectBgBackoffInterval:(long long)arg9 ;
-(long long)maxFastReconnectAttempt;
-(long long)fastReconnectInterval;
-(long long)minBgReconnectInterval;
-(long long)maxDisconnectOnBgPing;
-(long long)reconnectBgBackoffInterval;
-(long long)connectTimeout;
-(long long)responseTimeout;
@end

