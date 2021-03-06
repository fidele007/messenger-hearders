/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGravityLogger : NSObject
+(id)sharedLogger;
-(id)_walltime;
-(id)_uptime;
-(void)_logEvent:(id)arg1 withExtras:(id)arg2 forToken:(id)arg3 ;
-(id)_defaultExtras;
-(id)_timeForToken:(id)arg1 ;
-(id)_extrasForBLEBeacon:(id)arg1 ;
-(void)logEvent:(id)arg1 withExtras:(id)arg2 ;
-(void)logIBeaconEvent:(id)arg1 withIBeacons:(id)arg2 ;
-(void)logScanAbort:(unsigned long long)arg1 forToken:(id)arg2 ;
-(void)logScanStartForToken:(id)arg1 ;
-(void)logScanEndForToken:(id)arg1 ;
@end

