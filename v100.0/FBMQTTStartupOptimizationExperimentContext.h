/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMQTTStartupOptimizationExperimentContext : FBExperimentContext {

	BOOL _delayMessengerInboxCountsMqttService;
	BOOL _delayMqttManagerService;
	BOOL _delayNotificationsMqttService;
	BOOL _delayFriendingServices;

}

@property (assign,nonatomic) BOOL delayMessengerInboxCountsMqttService;              //@synthesize delayMessengerInboxCountsMqttService=_delayMessengerInboxCountsMqttService - In the implementation block
@property (assign,nonatomic) BOOL delayMqttManagerService;                           //@synthesize delayMqttManagerService=_delayMqttManagerService - In the implementation block
@property (assign,nonatomic) BOOL delayNotificationsMqttService;                     //@synthesize delayNotificationsMqttService=_delayNotificationsMqttService - In the implementation block
@property (assign,nonatomic) BOOL delayFriendingServices;                            //@synthesize delayFriendingServices=_delayFriendingServices - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)delayFriendingServices;
-(BOOL)delayMessengerInboxCountsMqttService;
-(BOOL)delayMqttManagerService;
-(BOOL)delayNotificationsMqttService;
-(void)setDelayMessengerInboxCountsMqttService:(BOOL)arg1 ;
-(void)setDelayMqttManagerService:(BOOL)arg1 ;
-(void)setDelayNotificationsMqttService:(BOOL)arg1 ;
-(void)setDelayFriendingServices:(BOOL)arg1 ;
@end

