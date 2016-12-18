/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBBackgroundLocationWifiMonitorExperimentContext : FBExperimentContext {

	BOOL _enableMonitor;
	long long _pollInterval;
	BOOL _checkNetworkBssid;
	BOOL _checkNetworkName;

}

@property (assign,nonatomic) BOOL enableMonitor;                  //@synthesize enableMonitor=_enableMonitor - In the implementation block
@property (assign,nonatomic) long long pollInterval;              //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL checkNetworkBssid;              //@synthesize checkNetworkBssid=_checkNetworkBssid - In the implementation block
@property (assign,nonatomic) BOOL checkNetworkName;               //@synthesize checkNetworkName=_checkNetworkName - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)checkNetworkBssid;
-(BOOL)checkNetworkName;
-(BOOL)enableMonitor;
-(void)setEnableMonitor:(BOOL)arg1 ;
-(void)setPollInterval:(long long)arg1 ;
-(void)setCheckNetworkBssid:(BOOL)arg1 ;
-(void)setCheckNetworkName:(BOOL)arg1 ;
-(long long)pollInterval;
@end

