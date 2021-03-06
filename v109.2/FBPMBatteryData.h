/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBPMBatteryData : NSObject {

	id _batteryStateObserver;
	id _batteryLevelObserver;
	float _batteryLevel;
	long long _lastChargingStartTimeInMS;
	long long _totalChargingTimeInMS;
	long long _batteryState;

}

@property (assign) float batteryLevel;                               //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign) long long lastChargingStartTimeInMS;              //@synthesize lastChargingStartTimeInMS=_lastChargingStartTimeInMS - In the implementation block
@property (assign) long long totalChargingTimeInMS;                  //@synthesize totalChargingTimeInMS=_totalChargingTimeInMS - In the implementation block
@property (assign) long long batteryState;                           //@synthesize batteryState=_batteryState - In the implementation block
+(id)sharedBatteryData;
-(void)_onBatteryStateChanged;
-(void)_onBatteryLevelChanged;
-(long long)totalChargingTimeInMS;
-(long long)lastChargingStartTimeInMS;
-(void)setTotalChargingTimeInMS:(long long)arg1 ;
-(void)setLastChargingStartTimeInMS:(long long)arg1 ;
-(BatteryData)getBatteryInfo;
-(void)setBatteryLevel:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)batteryState;
-(float)batteryLevel;
-(id)initPrivate;
-(void)setBatteryState:(long long)arg1 ;
@end

