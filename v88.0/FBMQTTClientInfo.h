/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray, NSData;

@interface FBMQTTClientInfo : NSObject <TBase, NSCoding> {

	long long __userId;
	NSString* __userAgent;
	long long __clientCapabilities;
	long long __endpointCapabilities;
	int __publishFormat;
	BOOL __noAutomaticForeground;
	BOOL __makeUserAvailableInForeground;
	NSString* __deviceId;
	BOOL __isInitiallyForeground;
	int __networkType;
	int __networkSubtype;
	long long __clientMqttSessionId;
	NSString* __clientIpAddress;
	NSMutableArray* __subscribeTopics;
	NSString* __clientType;
	long long __appId;
	BOOL __overrideNectarLogging;
	NSData* __connectTokenHash;
	NSString* __regionPreference;
	NSString* __deviceSecret;
	unsigned char __clientStack;
	BOOL __userId_isset;
	BOOL __userAgent_isset;
	BOOL __clientCapabilities_isset;
	BOOL __endpointCapabilities_isset;
	BOOL __publishFormat_isset;
	BOOL __noAutomaticForeground_isset;
	BOOL __makeUserAvailableInForeground_isset;
	BOOL __deviceId_isset;
	BOOL __isInitiallyForeground_isset;
	BOOL __networkType_isset;
	BOOL __networkSubtype_isset;
	BOOL __clientMqttSessionId_isset;
	BOOL __clientIpAddress_isset;
	BOOL __subscribeTopics_isset;
	BOOL __clientType_isset;
	BOOL __appId_isset;
	BOOL __overrideNectarLogging_isset;
	BOOL __connectTokenHash_isset;
	BOOL __regionPreference_isset;
	BOOL __deviceSecret_isset;
	BOOL __clientStack_isset;

}

@property (assign,setter=setUserId:,getter=userId,nonatomic) long long userId; 
@property (setter=setUserAgent:,getter=userAgent,nonatomic,retain) NSString * userAgent; 
@property (assign,setter=setClientCapabilities:,getter=clientCapabilities,nonatomic) long long clientCapabilities; 
@property (assign,setter=setEndpointCapabilities:,getter=endpointCapabilities,nonatomic) long long endpointCapabilities; 
@property (assign,setter=setPublishFormat:,getter=publishFormat,nonatomic) int publishFormat; 
@property (assign,setter=setNoAutomaticForeground:,getter=noAutomaticForeground,nonatomic) BOOL noAutomaticForeground; 
@property (assign,setter=setMakeUserAvailableInForeground:,getter=makeUserAvailableInForeground,nonatomic) BOOL makeUserAvailableInForeground; 
@property (setter=setDeviceId:,getter=deviceId,nonatomic,retain) NSString * deviceId; 
@property (assign,setter=setIsInitiallyForeground:,getter=isInitiallyForeground,nonatomic) BOOL isInitiallyForeground; 
@property (assign,setter=setNetworkType:,getter=networkType,nonatomic) int networkType; 
@property (assign,setter=setNetworkSubtype:,getter=networkSubtype,nonatomic) int networkSubtype; 
@property (assign,setter=setClientMqttSessionId:,getter=clientMqttSessionId,nonatomic) long long clientMqttSessionId; 
@property (setter=setClientIpAddress:,getter=clientIpAddress,nonatomic,retain) NSString * clientIpAddress; 
@property (setter=setSubscribeTopics:,getter=subscribeTopics,nonatomic,retain) NSMutableArray * subscribeTopics; 
@property (setter=setClientType:,getter=clientType,nonatomic,retain) NSString * clientType; 
@property (assign,setter=setAppId:,getter=appId,nonatomic) long long appId; 
@property (assign,setter=setOverrideNectarLogging:,getter=overrideNectarLogging,nonatomic) BOOL overrideNectarLogging; 
@property (setter=setConnectTokenHash:,getter=connectTokenHash,nonatomic,retain) NSData * connectTokenHash; 
@property (setter=setRegionPreference:,getter=regionPreference,nonatomic,retain) NSString * regionPreference; 
@property (setter=setDeviceSecret:,getter=deviceSecret,nonatomic,retain) NSString * deviceSecret; 
@property (assign,setter=setClientStack:,getter=clientStack,nonatomic) unsigned char clientStack; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)deviceIdIsSet;
-(void)unsetDeviceId;
-(BOOL)appIdIsSet;
-(void)unsetAppId;
-(long long)endpointCapabilities;
-(void)setEndpointCapabilities:(long long)arg1 ;
-(void)setConnectTokenHash:(NSData *)arg1 ;
-(void)setPublishFormat:(int)arg1 ;
-(void)setNoAutomaticForeground:(BOOL)arg1 ;
-(void)setMakeUserAvailableInForeground:(BOOL)arg1 ;
-(void)setIsInitiallyForeground:(BOOL)arg1 ;
-(void)setNetworkSubtype:(int)arg1 ;
-(void)setClientMqttSessionId:(long long)arg1 ;
-(void)setClientIpAddress:(NSString *)arg1 ;
-(void)setOverrideNectarLogging:(BOOL)arg1 ;
-(void)setRegionPreference:(NSString *)arg1 ;
-(void)setDeviceSecret:(NSString *)arg1 ;
-(void)setClientStack:(unsigned char)arg1 ;
-(id)initWithUserId:(long long)arg1 userAgent:(id)arg2 clientCapabilities:(long long)arg3 endpointCapabilities:(long long)arg4 publishFormat:(int)arg5 noAutomaticForeground:(BOOL)arg6 makeUserAvailableInForeground:(BOOL)arg7 deviceId:(id)arg8 isInitiallyForeground:(BOOL)arg9 networkType:(int)arg10 networkSubtype:(int)arg11 clientMqttSessionId:(long long)arg12 clientIpAddress:(id)arg13 subscribeTopics:(id)arg14 clientType:(id)arg15 appId:(long long)arg16 overrideNectarLogging:(BOOL)arg17 connectTokenHash:(id)arg18 regionPreference:(id)arg19 deviceSecret:(id)arg20 clientStack:(unsigned char)arg21 ;
-(BOOL)userAgentIsSet;
-(void)unsetUserAgent;
-(BOOL)clientCapabilitiesIsSet;
-(void)unsetClientCapabilities;
-(BOOL)endpointCapabilitiesIsSet;
-(void)unsetEndpointCapabilities;
-(int)publishFormat;
-(BOOL)publishFormatIsSet;
-(void)unsetPublishFormat;
-(BOOL)noAutomaticForeground;
-(BOOL)noAutomaticForegroundIsSet;
-(void)unsetNoAutomaticForeground;
-(BOOL)makeUserAvailableInForeground;
-(BOOL)makeUserAvailableInForegroundIsSet;
-(void)unsetMakeUserAvailableInForeground;
-(BOOL)isInitiallyForeground;
-(BOOL)isInitiallyForegroundIsSet;
-(void)unsetIsInitiallyForeground;
-(BOOL)networkTypeIsSet;
-(void)unsetNetworkType;
-(int)networkSubtype;
-(BOOL)networkSubtypeIsSet;
-(void)unsetNetworkSubtype;
-(long long)clientMqttSessionId;
-(BOOL)clientMqttSessionIdIsSet;
-(void)unsetClientMqttSessionId;
-(NSString *)clientIpAddress;
-(BOOL)clientIpAddressIsSet;
-(void)unsetClientIpAddress;
-(BOOL)clientTypeIsSet;
-(void)unsetClientType;
-(BOOL)overrideNectarLogging;
-(BOOL)overrideNectarLoggingIsSet;
-(void)unsetOverrideNectarLogging;
-(NSData *)connectTokenHash;
-(BOOL)connectTokenHashIsSet;
-(void)unsetConnectTokenHash;
-(NSString *)regionPreference;
-(BOOL)regionPreferenceIsSet;
-(void)unsetRegionPreference;
-(NSString *)deviceSecret;
-(BOOL)deviceSecretIsSet;
-(void)unsetDeviceSecret;
-(unsigned char)clientStack;
-(BOOL)clientStackIsSet;
-(void)unsetClientStack;
-(void)setSubscribeTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subscribeTopics;
-(BOOL)subscribeTopicsIsSet;
-(void)unsetSubscribeTopics;
-(BOOL)userIdIsSet;
-(void)unsetUserId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(long long)clientCapabilities;
-(void)setClientCapabilities:(long long)arg1 ;
-(long long)appId;
-(void)setAppId:(long long)arg1 ;
-(void)setNetworkType:(int)arg1 ;
-(int)networkType;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setClientType:(NSString *)arg1 ;
-(NSString *)clientType;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
-(NSString *)deviceId;
@end

